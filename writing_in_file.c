#include<stdio.h>
int main(){
	FILE *ptr = fopen("pallavi.txt","w");
	char str[] = "placement cell";
	fputs(str,ptr);
	fclose(ptr);
}
