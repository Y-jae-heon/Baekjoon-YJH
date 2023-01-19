function solution(sides) {
    var answer = 0;
    const [n1, n2] = sides;
    for (let e = Math.max(n1,n2)+1; e < n1+n2; e++) {
        answer++;
    }
    for (let e = Math.max(n1,n2)-Math.min(n1,n2)+1; e <= Math.max(n1,n2); e++) {
        answer++;
    }
    
    return answer;
}