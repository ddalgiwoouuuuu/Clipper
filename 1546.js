const readline = require('readline'); //사용자로부터 쉽게 입력을 받는 모듈.

//함수를 사용하여 rl 객체를 생성. 이 객체는 표준 입력(process.stdin)과 표준 출력(process.stdout)을 사용하여 사용자와 상호작용
const rl = readline.createInterface({ 
    input: process.stdin,
    output: process.stdout
});

rl.question('Enter the number of scores: ', (num) => { // 사용자의 입력은 num변수에 저장
    rl.question('Enter the scores separated by space: ',) //사용자로부터 받은 입력을 공백을 기준으로 나누어 배열을 생성), map(Number)함수를 통해 문자를 숫자로.
        const max = Math.max(...scores);//배열 scores에서 최대값(input) => {
        const scores = input.split(" ").map(Number); //split 함수(을 찾아 max 변수에 저장
        let sum = 0;                               
        for (let i = 0; i < num; i++) {
            sum += scores[i] / max * 100;       
        }
        const average = sum / num;
        console.log('Normalized average: ', average);
        rl.close();
    });














































































































































































































































































































































