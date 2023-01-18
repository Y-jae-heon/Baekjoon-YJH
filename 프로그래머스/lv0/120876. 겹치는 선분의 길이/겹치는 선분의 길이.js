function solution(line) {
    const val = line.reduce((a,[x, y]) => {
        for(i = x + 1; i <= y; i++) a[i] = a[i] ? a[i] + 1 : 1;
        return a;
    }, {});

    return Object.values(val).filter(x => x > 1).length;
}