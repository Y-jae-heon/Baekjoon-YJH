function solution(chicken) {
    var co = chicken;
    var coupon = 0;
    while (co >= 10) {
        
        coupon += co/10;
        co = co/10;
    }
    return Math.round(coupon);
}