function solution(A, B) {
    // indexOf 로 특정 요소를 찾을 때 false 는 -1로 나옴
    // B+B = ohellohell 
    // hello = 1번 배열에 있음으로 1번 민 것 return
    return (B+B).indexOf(A);
}


function solution2(A, B) {
    if(A===B) return 0;

    var answer = 0;
    let arr = [...A];

    for (let i = 0; i < arr.length; i++) {
        // A의 마지막 문자를 tmp 삽입
        let tmp = arr.splice(arr.length-1, 1)[0];
        // arr 맨 앞에 A의 마지막 문자 삽입
        arr.unshift(tmp);
        // 밀었음으로 answer ++
        answer++;
        // 미는 도중 arr의 문자열과 B가 같을 시 함수 종료
        if(arr.join("") === B) return answer;
    }
    return -1;
}
