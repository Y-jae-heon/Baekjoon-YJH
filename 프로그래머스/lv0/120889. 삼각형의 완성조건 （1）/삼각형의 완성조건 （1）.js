function solution(side) {
    var answer = 0;
    var arr2 = side.splice(side.indexOf(Math.max(...side)),1);
    return side[0] + side[1] > arr2[0] ? 1 : 2;
}