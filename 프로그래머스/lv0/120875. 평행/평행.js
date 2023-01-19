function solution(dots) {
    const lean = [];
    for (let i = 0; i < dots.length; i++) {
        var [x1, y1] = dots[i];
        for (let e = i+1; e < dots.length; e++) {
            var [x2, y2] = dots[e];
            const curLean = (y1-y2)/(x1-x2);
            if(lean.includes(curLean)) return 1;
            lean.push(curLean);
        }
    }
    
    return 0;
}