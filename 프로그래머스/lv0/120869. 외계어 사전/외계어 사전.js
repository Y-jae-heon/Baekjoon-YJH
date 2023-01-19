function solution(spell, dic) {
    // some = new Set == new Set
    return dic.some(s => spell.sort().toString() == [...s].sort().toString()) ? 1 : 2;
}
// 위 예제는 spell의 원소로만 이루어진 단어만 확인 가능
// 그 외 다른 단어가 함께 들어가있으면 2를 return

// 아래 예제는 spell의 원소로만 이루어진 단어가 하나씩 있는지만 체크
// 그 외 다른 단어가 함께 들어가있어도 1을 return
function solution2(spell, dic) {
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
