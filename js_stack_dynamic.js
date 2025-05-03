const readline = require('node:readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter Array Size: ", data =>{
    let n = data;
    let arr = Array.from({length: n},(_,i)=>i);
    console.log("your array is: ");
    
    console.log(arr);
    rl.close();
})
