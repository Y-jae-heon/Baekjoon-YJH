function solution(quiz) {
    var answer = [];
    answer = quiz.map((a, i) => {
        const el = eval(a.split("="));
        return eval(el[0]) == el[1] ? "O" : "X";
    })
    return answer;
}