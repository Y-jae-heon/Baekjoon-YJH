function solution(poly) {
    const [a, b] = poly.split('+').reduce(([a, b], x) => {
        if(x.includes('x')){
            return [a + Number(x.trim().replace('x', '') || 1), b]
        }
        return [a, b + Number(x)];
    },[0,0])

    let result = '0';
    if(a > 0) a == 1 ? result = 'x' : result = a + 'x'
    if(b > 0 && result.includes('x')) result += ' + ' + b;
    else if(b > 0 && !result.includes('x')) result = b.toString();
    return result;
}