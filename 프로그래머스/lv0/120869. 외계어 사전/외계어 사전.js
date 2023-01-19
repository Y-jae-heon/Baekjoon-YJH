function solution(spell, dic) {
    var test = dic.reduce((a,b) => {
        a[b] = spell.map(x =>  b.includes(x)).filter(x => x).length;
        return a;
    }, {});

    return Object.values(test).indexOf(spell.length) != -1 ? 1 : 2;
}