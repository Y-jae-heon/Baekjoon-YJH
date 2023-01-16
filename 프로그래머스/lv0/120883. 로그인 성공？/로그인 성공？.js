function solution(id_pw, db) {
    var idChk = db.filter(x => {
        return x.indexOf(id_pw[0]) != -1;
    })

    return idChk.length === 0 ? "fail" : idChk.filter(x => {
        return x.indexOf(id_pw[1]) != -1;
    }).length === 0 ? "wrong pw" : "login"
}