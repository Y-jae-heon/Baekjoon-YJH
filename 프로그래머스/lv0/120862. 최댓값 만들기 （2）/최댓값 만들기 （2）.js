function solution(numbers) {
    const [a,b] = [numbers.splice(numbers.indexOf(Math.max(...numbers)), 1), numbers.splice(numbers.indexOf(Math.max(...numbers)), 1)];
    const [a2,b2] = [numbers.splice(numbers.indexOf(Math.min(...numbers)), 1), numbers.splice(numbers.indexOf(Math.min(...numbers)), 1)];
    if(a2.length == 0 && b2.length == 0) return a*b;
    if(a*b > a2*b2) return a*b;
    return a2*b2;
}