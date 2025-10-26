#include <stdio.h>
#include <string.h>

int main(void){
	char word[1000000];
	int alp[26] = {0};
	int max = 0;
	int ans;
	scanf("%s", word);
	int size = strlen(word);
	for(int i = 0; i < size; i++){
		if(word[i] < 92) alp[word[i]-'A']++;
		else alp[word[i]-'a']++;
    }

	for(int i = 0; i < 26; i++){
		if(max < alp[i]) {
			max = alp[i];
			ans = i;
		}
	}

	for(int i = 0; i < 26; i++){
		if(max == alp[i] && i != ans){
			printf("?");
			break;
		}
		else if(i == 25) printf("%c", ans + 'A');
	}

	return 0;
}