function solution(chicken) {
    var co = chicken;
    var coupon = 0;
    while (co >= 10) {
        
        coupon += co/10;
        co = co/10;
    }
    return Math.round(coupon);
}

function solution2(chicken) {
    let answer = 0;
    let coupon = chicken

    while(coupon >= 10){
        answer = answer + parseInt(coupon/10);
        coupon = parseInt(coupon/10)+ coupon%10;
    }

    return answer;
}
