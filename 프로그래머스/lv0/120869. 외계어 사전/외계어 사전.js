function solution(spell, dic) {
    var arr = dic.reduce((a,b) => {
        a[b] = spell.map(x => {
            // spell의 한 원소가 두번이상 들어갔는지 indexOf == lastIndexOf
            // spell의 한 원소가 들어가있는지 includes
            // 있다면 a[b] 는 true
            return b.indexOf(x) == b.lastIndexOf(x) && b.includes(x);
        }).filter(x => x).length;
        return a;
    }, {});
    
    return Object.values(arr).includes(spell.length) ? 1 : 2;
}