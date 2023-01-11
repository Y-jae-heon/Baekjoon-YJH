function solution(n) {
    var i = 0;
    var ans = [];
    while (i <= n) {
        if(n%i == 0){
            ans.push(i);
        }
        i++;
    }
    return ans;
}