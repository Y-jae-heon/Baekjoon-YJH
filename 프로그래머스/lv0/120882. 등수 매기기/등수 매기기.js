function solution(score) {
    var avg = score.map(x => (x[0]+x[1])/2);
    var sorted = avg.slice().sort((a,b) => b-a);
   
    return avg.map(x => sorted.indexOf(x)+1);
}