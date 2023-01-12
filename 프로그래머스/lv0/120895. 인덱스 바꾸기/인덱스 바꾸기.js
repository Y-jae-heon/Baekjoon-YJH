function solution(my_string, num1, num2) {
    var str = Array(...my_string);
    str[num1] = my_string[num2];
    str[num2] = my_string[num1];
    return str.join("");
}

function solution2(my_string, num1, num2) {
    my_string = my_string.split('');
    [my_string[num1], my_string[num2]] = [my_string[num2], my_string[num1]];
    return my_string.join('');
}
