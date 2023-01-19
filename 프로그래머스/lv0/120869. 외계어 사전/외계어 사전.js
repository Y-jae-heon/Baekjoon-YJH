function solution(spell, dic) {
    var arr = dic.reduce((a,b) => {
        a[b] = spell.map(x => {
            // spell의 한 원소가 중복되지않게 포함되어있는지 체크
            // spell의 한 원소가 중복되지않게 한 단어 이상 들어가있으면
            // 그 외 원소가 들어가있어도 true
            return b.indexOf(x) == b.lastIndexOf(x) && b.includes(x);
        }).filter(x => x).length;
        return a;
    }, {});

    return Object.values(arr).indexOf(spell.length) != -1 ? 1 : 2;
}