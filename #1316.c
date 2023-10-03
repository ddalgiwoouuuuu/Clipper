#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int N; //정수 N을 입력으로 받습니다. 이 N은 입력할 문자열의 개수를 나타냅니다.
    scanf("%d", &N);

    int group_num = 0; //그룹 단어의 개수
    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);
        //group_num이라는 변수를 초기화하여 그룹 단어의 개수를 저장합니다. 처음에는 그룹 단어의 개수가 0입니다.

        //그룹 단어인지 확인
        int alphabet[26]; //index 0 부터 a, b, ..
        for (int j = 0; j < 26; j++) {
            alphabet[j] = 0;
        }

        int word_len = strlen(word);
        for (int k = 0; k < word_len; k++) {
            char letter = word[k];
            if (alphabet[letter - 'a'] == 0) { //이 부분은 현재 글자 letter가 어떤 알파벳인지를 판별하는데 사용. 현재 문자가 처음 나타난 경우 (alphabet[letter - 'a']가 0인 경우), 해당 알파벳을 나타냈다고 표시합니다.
                alphabet[letter - 'a'] = 1;  // 따라서 없었던 알파벳이 생겼으므로 1 처리.
            }
            else { //이미 1이라면, 바로 앞 문자 확인
                if (word[k - 1] != word[k]) //앞 문자와 다르다면, 그룹 단어가 아님
                    break;
            }
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
