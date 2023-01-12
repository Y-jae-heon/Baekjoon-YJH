function solution(numbers) {
    var en = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    en.map((x,i) => numbers = numbers.split(x).join(i));
    return Number(numbers);
}