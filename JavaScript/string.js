"use strict"
let firstName = "Rahul";
//string acess
console.log(firstName[3]);
//string length
console.log(firstName.length);
//last index
console.log(firstName[firstName.length-1]);

//string method
//trim()
let fullName = "     Rahul Bisht    ";
let trimFullName = fullName.trim();
console.log(fullName.length);
console.log(trimFullName);
console.log(trimFullName.length);
//toUpperCase() to LowerCase()
let myName = "rahul bisht";
let yourName = "ROHIT BISHT";
console.log(myName.toUpperCase());
console.log(yourName.toLocaleLowerCase())

//slice
console.log(myName.slice(6,11));
