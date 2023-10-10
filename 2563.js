const fs = require('fs');
const filePath = process.platfrom === 'linux ' ? '/dev/stdin' : './input.txt';

let input = fs.readFileSync(_dirname + '/input.txt').toString().split('\n');

const num = input[0] * 1;
const score = input[1].split(" ");

const max = Math.max(...score);
let sum = 0;

for (let i = 0; i < num; i++) {
    sum += score[i] / max * 100;
}

console.log(sum / num);