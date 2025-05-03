const readline = require('node:readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter Array Size: ", data =>{
    let n = data;
    let arr = [n];
    for (let i = 0; i < n; i++) arr[i] = i;
    console.log("your array is: ");
    
    console.log(arr);
    rl.close();
})
