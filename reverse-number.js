/* 
    Title: Reverse a number
    >> Write a program that will print the given number in a reversed order
    ## Test ##
    input: 123 -> output: 321
    input: -123 -> output -321
*/

// built in method
/*
function reverse(num) {
    let number = Math.abs(num);
    let arr = number.toString().split("");
    let reversed = arr.reverse().join("");
    if(num<0) {
        return -1 * reversed;
    }
    return reversed;
}

console.log(reverse(-123)); */
// from scratch
function reverse(num) {
    let last_digit, reversed = 0, number = Math.abs(num);
    while(number !=0) {
        last_digit = number % 10;
        reversed = reversed * 10 + last_digit;
        number = Math.floor(number / 10);
    }
    if(num<0) {
        return -1 * reversed;
    }
    return reversed;
}

console.log(reverse(-123));