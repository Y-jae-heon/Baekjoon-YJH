function solution(my_string) {
    var answer = 0;
    var reg = /[^0-9]/g;
    var result = my_string.split(reg).filter(x => x !== '');
    result.map(x => answer+=Number(x));
    return answer;
}