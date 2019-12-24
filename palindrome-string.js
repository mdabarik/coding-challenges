/* 
    Title: Checking a string is a palindrome or not
    >> Write a program that will check a given string is a palindrome or not
    # Test ##
    input: awe -> output: false
    input: awa -> output: true
*/
/*
function isPalindrome(str) {
    let arr = str.split("");
    let reversed = arr.reverse().join("");
    return reversed == str;
}

console.log(isPalindrome("awa")); */

function isPalindrome(str) {
    let len = str.length;
    let reversed = "";
    for(let i=len-1; i>=0; i--) {
        reversed += str[i];
    }
    return reversed == str;
}

console.log(isPalindrome("awa"));
