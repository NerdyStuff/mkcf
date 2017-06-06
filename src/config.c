#include <stdio.h>
#include <string.h>
#include "config.h"

typedef struct list_opt{
	struct list_opt *nxt;
	struct option *content;
} confList;

char comChar = STD_COM_CHAR;
int zBufLength = STD_LINE_LENGTH;
confList *list;

void setComChar(char newComChar){
	comChar = newComChar;
}

int readConfigFile(char *confFileName){
	char lBuffer[100];

	FILE *confFile = open(confFileName, "r");
	if(!confFile){
		printf("Could not open %s\n", confFileName);
		return 0;
	}

	while(!feof(confFile))
	{
		fgets(lBuffer, zBufLength, *confFile);
		
		if(lBuffer[0] == comChar)
		{
			continue;
		}
		
		
	}

	//TODO Divide Opt and Val
	//TODO Create new listentry and save Opt and Val
	//TODO Repeat
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
