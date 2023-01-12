function solution(str) {
    str = Array(...str).map((x,i) => {
        if(x === str[i].toUpperCase()){
            return x.toLowerCase();
        }else{
            return x.toUpperCase();
        }
    }).join("");
    return str;
}