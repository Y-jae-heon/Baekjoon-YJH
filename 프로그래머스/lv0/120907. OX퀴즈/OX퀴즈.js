function solution(quiz) {
    var answer = [];
    quiz.map((a, i) => {
        const el = eval(a.split("="));
        if(eval(el[0]) == Number(el[1])){
            answer.push("O");
        }else{
            answer.push("X")
        }
    })
    return answer;
}