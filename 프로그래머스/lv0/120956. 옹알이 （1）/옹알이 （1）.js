function solution(babbling) {
    var answer = 0;
    var regexp = /(aya|ye|woo|ma)\1+/g;
    var regexp2 = /^(aya|ye|woo|ma)+$/g;
    
    for(let el of babbling){
        // 같은 발음이 연속되면 넘어감
        if (/(aya|ye|woo|ma)\1+/g.test(el)) continue;
        // 발음할 수 있는 단어만 있는지 확인
        // 있을 시 answer++;
        if (/^(aya|ye|woo|ma)+$/g.test(el)) {
            answer++;
        }
    }
    
    return answer;
    }