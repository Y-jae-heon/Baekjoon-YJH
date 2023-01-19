function solution(n) {
    var answer = 0;
    var i = 0;
    while (i < n) {
        if((answer).toString().indexOf('3') == -1) {i++; answer++};
        if((answer).toString().indexOf('3') != -1) answer++;
        if(answer%3 === 0) answer++;
    }
    return answer;
}