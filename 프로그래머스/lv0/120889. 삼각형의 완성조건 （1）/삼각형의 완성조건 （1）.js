function solution(side) {
    side.sort();
    return side[0] + side[1] > side[2] ? 1: 2;
}