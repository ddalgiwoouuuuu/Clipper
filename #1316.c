#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int group_num = 0; //그룹 단어의 개수
    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);

        //그룹 단어인지 확인
        int alphabet[26]; //index 0 부터 a, b, ..
        for (int j = 0; j < 26; j++) {
            alphabet[j] = 0;
        }

        int word_len = strlen(word);
        for (int k = 0; k < word_len; k++) {
            char letter = word[k];
            if (alphabet[letter - 'a'] == 0) { //이 부분은 현재 글자 letter가 어떤 알파벳인지를 판별하는데 사용. 알파벳 문자 'a'의 아스키 코드 값은 'a'는 97이고, 'b'는 98, 'c'는 99, ... 'z'는 122. 따라서 letter - 'a' 연산은 현재 글자 letter가 'a'로부터 몇 번째 알파벳인지를 나타냄. 예를 들어, 'p'의 경우 'a'로부터 15번째 알파벳이므로 letter - 'a'는 15
                alphabet[letter - 'a'] = 1;  // 따라서 없었던 알파벳이 생겼으므로 1 처리.
            }
            else { //이미 1이라면, 바로 앞 문자 확인
                if (word[k - 1] != word[k]) //앞 문자와 다르다면, 그룹 단어가 아님
                    break;
            }

            if (k == word_len - 1) { //여기까지 오면 그룹단어
                //printf("%s is a group word\n", word);
                group_num++;
            }
        }
    }
    printf("%d\n", group_num);
}
