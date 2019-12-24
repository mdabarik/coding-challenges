/* 
    Title: Reverse a string
    >> Write a program that will print a given string in a reverse order
    # Test ##
    input: awe -> output: ewa
    input: awa -> output: awa
*/
/*
function reverse(str) {
    let arr = str.split("");
    let reversed = arr.reverse().join("");
    return reversed;
}

console.log(reverse("awa")); */


function reverse(str) {
    let reversed = "";
    let len = str.length;
    for(let i=len-1; i>=0; i--) {
        reversed = reversed + str[i];
    }
    return reversed;
}

console.log(reverse("hello"));