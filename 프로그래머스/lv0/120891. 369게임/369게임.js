function solution(o) {
    var answer = 0;
    Array(...String(o)).map(x => {
        if(x%3 === 0 && x != 0){
            return answer++;
        }
    })
    return answer;
}