function solution(id_pw, db) {
    var idChk = db.filter(x => {
        return x.indexOf(id_pw[0]) != -1;
    })

    return idChk.length === 0 ? "fail" : idChk.filter(x => {
        return x.indexOf(id_pw[1]) != -1;
    }).length === 0 ? "wrong pw" : "login"
}

function solution2(id_pw, db) {
  const [id, pw] = id_pw;
  console.log(id);
  const map = new Map(db);
  return map.has(id) ? (map.get(id) === pw ? 'login' : 'wrong pw') : 'fail';
}
