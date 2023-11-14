// 1. 최대, 최소값
function sol(input) {
    const divisors = input[1].split(" ");
    return Math.min(...divisors) * Math.max(...divisors);
  }
  
  // 2. 정렬을 해서 처음 인덱스, 마지막 인덱스를 이용해도 가능
  function sol(input) {
    const divisors = input[1].split(" ").sort((a, b) => a - b);
    return divisors[0] * divisors[divisors.length - 1];
  }
  
  const input = [];
  require("readline")
    .createInterface(process.stdin, process.stdout)
    .on("line", (line) => {
      input.push(line);
    })
    .on("close", () => {
      console.log(sol(input));
      process.exit();
    });