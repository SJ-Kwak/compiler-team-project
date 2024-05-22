/* 
* main.c - 프로그램 메인 실행
* contributors: 김중현, 곽서진, 이나현, 김선영
* date: 05/31/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"

extern int yyparse();
extern void PrintHStable();

void main()
{
	printf("\n\t[Error Report : Error Information]");
	printf("\n=================================================\n");

	cLine = 1;
	yyparse();

	if(cErrors == 0) printf("\n\t no error detected!\n");
	else printf("\n\t %d error(s) detected!\", cErrors);
	printf("\n=================================================\n");
	PrintHStable(); // identifier와 그 type을 print하는 함수
	printf("JoongHyun Kim(2076088) Seojin Kwak(2076016) Seonyeong Kim(2071010) NaHyun Lee(2076292) \n");
}