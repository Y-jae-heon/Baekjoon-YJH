const solution = (n) =>{
    return Array(n).fill(0).map((v,i) => v+i+1).filter((v) => n%v===0);
}