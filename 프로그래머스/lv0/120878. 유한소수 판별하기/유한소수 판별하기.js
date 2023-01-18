function uclid(a,b){
    if(b == 0){
        return a;
    }
    return uclid(b, a%b);
}
function solution(a, b) {
    var uc = uclid(a,b);
    var n1 = a/uc;
    var n2 = b/uc;
    
    
    var prime = [];
    var cnt = 2;
    while (n2 > 1) {
        if(n2%cnt == 0){25
            prime.push(cnt);
            n2/=cnt;
        }else{
            cnt++;
        }
    }
    prime2 = prime.filter(x => x == 2 || x == 5);
    return prime.length == prime2.length ? 1 : 2;
}