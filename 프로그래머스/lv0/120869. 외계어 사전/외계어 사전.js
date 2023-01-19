function solution(spell, dic) {
    var arr = dic.reduce((a,b) => {
        a[b] = spell.map(x => {
            return b.indexOf(x) == b.lastIndexOf(x) && b.includes(x);
        }).filter(x => x).length;
        return a;
    }, {});

    return Object.values(arr).includes(spell.length) ? 1 : 2;
}