function solution(score) {
    var avg = score.map(x => (x[0]+x[1])/2);
    // 기존의 avg를 변경하지않으려면 slice() 를 붙여주어야함
    var sorted = avg.slice().sort((a,b) => b-a);
   
    return avg.map(x => sorted.indexOf(x)+1);
}
