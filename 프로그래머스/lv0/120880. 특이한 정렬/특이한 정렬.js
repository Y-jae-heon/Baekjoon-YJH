function solution(numlist, n) {
    var answer = [];
    numlist.reduce((a,b,i) => {
        a = n;
        answer.push({num: b, result: Math.abs(n-b)});
    },n)

    answer.sort((a,b) => {
        if(a.result == b.result) return b.num - a.num;
        else return a.result - b.result;
    });

    return answer.map(x => x.num);
}

function solution2(numlist, n) {
  return numlist.sort((a, b) => Math.abs(a - n) - Math.abs(b - n) || b - a);
}
