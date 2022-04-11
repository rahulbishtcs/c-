//Data Type
//string, Number, boolean, undefined, null, bigint, symbol
let myName = "Rahul Bisht";
console.log(typeof(myName));

//convert number to string
let age = 24;
age = age + ""
console.log(typeof(age))

//convert string to number
let rollNo = +"34"  //put + sign before string
console.log(typeof(rollNo))

//template literal
console.log(`My name is ${myName} and my age is ${age}`)

//Bug
console.log(typeof null)        //object

//BigInt
let myNum1 = BigInt(122222222212121)
let myNum2 = 2121221221n;
console.log(myNum1)
console.log(myNum2)

