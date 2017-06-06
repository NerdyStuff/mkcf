#include <stdio.h>
#include <string.h>
#include "config.h"

typedef struct list_opt{
	struct list_opt *nxt;
	struct option *content;
} confList;

char comChar = STD_COM_CHAR;
char delimiterChar = STD_DELIMITER;
int bufLength = STD_LINE_LENGTH;
confList *list;

void setComChar(char newComChar){
	comChar = newComChar;
}

void setDelimiterChar(char newDelimiterChar){
	delimiterChar = pDelimiterChar;
}

void setBufLength(int newBufLength){
	bufLength = newBufLength;
}

int readConfigFile(char *confFileName){
	//TODO Create new listentry
	char lBuffer[100];

	FILE *confFile = open(confFileName, "r");
	if(!confFile){
		printf("Could not open %s\n", confFileName);
		return 0;
	}

	while(!feof(confFile))
	{
		fgets(lBuffer, bufLength, *confFile);
		
		if(lBuffer[0] == comChar)
		{
			continue;
		}
		
		char lTok[50] = strtok(lBuffer, delimiterChar);

		//TODO Put in List

		lTok = strtok(NULL, delimiterChar);
	}
	return 1;
}

struct option getConfigStruct(char *optName){
	confList *searchList = list;
	if(!searchList)
		return 0;
	//TODO as long as optName != searchList->content->opt
	//TODO searchList = searchList->nxt
	//TODO return searchList->content
}
