#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char name[51]; // 과목 이름
    char grade[3]; //학점 문자열(grade)
    double credit; //학점(credit),

    double sumCredit = 0.0; //sumCredit는 총 학점의 합을 저장합니다
    double temp; //temp는 임시로 학점을 저장할 변수
    double res = 0.0; //res는 학점 평균을 계산할 결과를 저장
    for (int i = 0; i < 20; i++) { //for 루프는 20번 반복하며, 각 반복에서 scanf 함수를 사용하여 이름, 학점, 학점 문자열을 입력받습니다.
        scanf("%s %lf %s", name, &credit, grade);
        if (grade[0] == 'P') continue;
        //만약 학점 문자열의 첫 번째 문자가 'P' (Pass)인 경우, 다음 반복으로 건너뜁니다. 즉, 학점 평균 계산에 이 학점은 포함되지 않습니다.

        sumCredit += credit;
        //sumCredit += credit;: 학점 문자열이 'P'가 아닌 경우, 학점(credit)을 sumCredit에 더합니다. 이렇게 하면 총 학점이 누적됩니다.
        if (grade[0] == 'F') continue;

        if (grade[0] == 'A') temp = 4;
        else if (grade[0] == 'B') temp = 3;
        else if (grade[0] == 'C') temp = 2;
            //학점 문자열이 'F'가 아닌 경우, 학점을 숫자 값으로 변환하여 temp 변수에 저장
        else temp = 1;

        if (grade[1] == '+') temp += 0.5;
        //만약 학점 문자열의 두 번째 문자가 '+'인 경우, temp에 0.5를 더합니다

        res += credit * temp;
        //학점 평균을 계산하기 위해 현재 학점(credit)과 변환된 학점(temp)를 곱하고, 그 값을 res에 더합니다.
    }

    printf("%lf", res / sumCredit);

    return 0;
}
