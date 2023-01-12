function solution(arr, n) {
    return arr.filter(x => {
        return Math.abs(x-n) === Math.min(...arr.map(a => Math.abs(a-n)));
    }).sort((a,b) => a-b)[0];
}