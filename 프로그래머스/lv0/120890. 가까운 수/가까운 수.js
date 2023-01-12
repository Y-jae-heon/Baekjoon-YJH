function solution(arr, n) {
    return arr.filter(x => {
        return Math.abs(x-n) === Math.min(...arr.map(a => Math.abs(a-n)));
    }).sort((a,b) => a-b)[0];
}

function solution2(array, n) {
    return array.reduce((a,c)=> Math.abs(a-n) < Math.abs(c-n) ? a : Math.abs(a-n) === Math.abs(c-n) ? Math.min(a, c) : c);
}
