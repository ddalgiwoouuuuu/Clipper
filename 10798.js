const words = require("fs").readFileSync("/dev/stdin").toString().trim().split("\n");
const maxLength = Math.max(...words.map(i => i.length));
//map() 함수를 사용하여 각 단어의 길이를 배열로 만든 후, Math.max(...array)를 사용하여 최대 길이를 찾아 maxLength에 저장합니다. 이것은 세로로 나열될 때 필요한 열의 개수
let vertical = ""; // 세로로 나열된 단어들을 저장할 빈 문자열 vertical을 선언
for (let i=0; i<maxLength; i++) { //열의 개수만큼 반복하는 외부 루프입니다.
    for (let j=0; j<words.length; j++) {//입력으로 받은 단어의 개수만큼 반복하는 내부 루프입니다.
        vertical += words[j][i] || "";
    }
}
console.log(vertical);