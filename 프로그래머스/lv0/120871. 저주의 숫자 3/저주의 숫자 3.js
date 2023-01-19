function solution(n) {
    var answer = 0;
    var i = 0;
    while (i < n) {
        if(!(answer).toString().includes('3')) {i++; answer++};
        if((answer).toString().includes('3')) answer++;
        if(answer%3 === 0) answer++;
    }
    return answer;
}