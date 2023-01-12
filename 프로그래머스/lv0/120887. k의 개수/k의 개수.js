function solution(i, j, k) {
    var answer = 0;
    for (i; i <= j; i++) {
        answer +=String(i).split("").filter(x => String(k) == x).length;
    }
    return answer;
}