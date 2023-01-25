function solution(today, terms, privacies) {
    var answer = [];
    const reg = /\D+/;
    const regA = /[^a-zA-Z]/g;

    const period = terms.reduce((acc,x) => {
        const month = Number(x.split(reg).join(""));
        const type = x.split(regA).join("");
        acc[type] = month;
        return acc;
    },{});

    const collect = privacies.reduce((acc, x) => {
        const type = x.split(regA).join("");
        const date = x.split(reg).splice(0,3).join(".");
        let month = period[type] + new Date(date).getMonth()+1;
        let cnt = 0;
        if(month > 12) while (month > 12) month -= 12, cnt++;
        let day = new Date(date).getDate()-1;
        if(day === 0)day = 28, month -=1;
        const year = new Date(date).getFullYear() + cnt;

        acc.push(`${year}.${month < 10 ? `0${month}` : month}.${day < 10 ? `0${day}` : day}`);
        return acc;
    },[]);

    for (let i = 0; i < collect.length; i++) {
        const el = collect[i];
        if(el < today){
            answer.push(i+1);
        }
        
    };

    return answer;
}