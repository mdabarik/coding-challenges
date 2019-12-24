/* 
    Title: Checking a number is a palindrome
    >> Write a program that will check a given number is a palindrome or not
    ## Test ##
    input: 123 -> output: false
    input: 121 -> output: true
*/

/*
function isPalindrome(num) {
    let arr = num.toString().split("");
    let reversed = arr.reverse().join("");
    return num == reversed;
}

console.log(isPalindrome(123)); */

function isPalindrome(num) {
    if(num < 0) return false;
    let last_digit, reversed = 0, number = num;
    while(number !=0) {
        last_digit = number % 10;
        reversed = reversed * 10 + last_digit;
        number = Math.floor(number / 10);
    }
    return reversed == num;
}

console.log(isPalindrome(-121));