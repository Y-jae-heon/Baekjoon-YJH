function solution(A, B) {
    // indexOf 로 특정 요소를 찾을 때 false 는 -1로 나옴
    // B+B = ohellohell 
    // hello = 1번 배열에 있음으로 1번 민 것 return
    return (B+B).indexOf(A);
}