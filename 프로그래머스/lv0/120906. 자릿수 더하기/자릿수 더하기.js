function solution(n) {
    var answer = 0;
    for (let w of String(n)) {
        answer+=Number(w);
    }
    return answer;
}