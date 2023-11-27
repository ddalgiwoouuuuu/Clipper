const fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().trim().split("");

const iter = input.length

// 접미사가 들어갈 배열
let suffix = [];

for(let i = 0; i < iter; i++){
    // 스펠링을 원소로 가지는 input 배열을 join해서 하나의 접미사로 만든다.
    let candidate = input.join("");
    
    // 접미사를 suffix에 넣는다.
    suffix.push(candidate);
    
    // 맨 앞 스펠링을 하나씩 제거해 나간다.
    input.shift();
}

// 문자열은 sort만 써도 오름차순 정렬이 된다.
suffix.sort();

console.log(suffix.join("\n"));