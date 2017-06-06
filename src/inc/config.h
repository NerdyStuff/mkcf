#ifndef CONFIG_H
#define CONFIG_H

#define STD_COM_CHAR '#' //Std char for a line of comments
#define STD_LINE_LENGTH 100 //Std lenth of lines
#define STD_DELIMITER '=' //Std delimiter

//Structures for options
struct option{
	char *opt;
	char *val;
};


extern void setComChar(char newComChar);
extern int readConfigFile(char *confFileName);
extern struct option getConfigStruct(char *optName);

#endif
