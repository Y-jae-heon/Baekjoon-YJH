function solution(num, total) {
    var answer = [];
    let el = Math.floor(total/num);
    let cnt = Math.floor(num/2);
    if(Number.isInteger(total/num)){
        // total/num 이 소수점이 아닐 경우
        for (let i = 0; i < num; i++) {
            answer.push(el - cnt + i);
        }
    }else{
        // total/num 이 소수점일 경우
        for (let i = 0; i < num; i++) {
            answer.push(el - cnt + 1 + i);
        }
    }
    return answer;
}