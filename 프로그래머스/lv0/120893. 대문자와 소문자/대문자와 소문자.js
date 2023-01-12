function solution(str) {
    var answer = '';
    for (let c of str) answer += c === c.toLowerCase() ? c.toUpperCase() : c.toLowerCase();
    return answer;
}