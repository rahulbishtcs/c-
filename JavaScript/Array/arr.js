//Arrays MUTABLE (ordered collection of items, we can store any dataType in javaScript array)

let mixed = [1,2,3,"string",null,undefined]
console.log(mixed)

let fruits = ["mango","apple","graphes"]
console.log(fruits)

fruits[0] = "banana"
console.log(fruits)

console.log(typeof fruits)
//checking this is array or not with the help of Array.isArray() method
console.log(Array.isArray(fruits))

//push ------> add element at the last postion in the array and return that element
let pushItem = fruits.push("litchi")
console.log(fruits)
console.log("what is this",pushItem)

//pop ------> remove element from the last postion in the array and return that element
let popItem = fruits.pop(fruits)
console.log(fruits)
console.log(popItem)

//unshift
console.log(fruits.unshift())
console.log(fruits.shift())

