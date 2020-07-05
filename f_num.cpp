/********  查找句子中的单词个数，以字符'|'结束  ********/

#include<stdio.h>
#include<ctype.h>    //提供 isspace()函数 
#include<stdbool.h>
#define STOP '|'

int main() {	
	char ch;    //读入的字符 
	char prev = '\n';    //读入的前一个字符 
	long n_chars = 0L;    //字符数 
	int n_words = 0;    //单词数 
	int n_lines = 0;    //行数 
	bool inword = false;    //如果ch字符在单词中，inword = true 
	
	while ((ch = getchar()) != STOP) {
	
		n_chars++;    //统计字符 
		if ( ch == '\n') {
			n_lines++;    //统计行数 
		} 
		if (!isspace(ch) &&  !inword) {
			inword = true;    //开始一个新单词 
			n_words++;    //统计单词数 
		}	
		if (isspace(ch) && inword) {
			inword = false;
		} 
		prev = ch;	
		
	}
	if (prev != '\n') {
		n_lines = 1;
	}
	
	printf(" n_chars : %ds\n n_lines : %ds\n n_words : %ds\n",n_chars,n_lines,n_words);
	
	return 0;
}  
