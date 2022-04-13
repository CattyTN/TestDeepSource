#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getMessage(){
	char buffer[50];
	printf("Enter a messge:");
	gets(buffer);
	printf("\n You entered: %s \n",buffer);
};
void printmsg(){
	printf("welcome to buffer overflow \n");
};

int main(int argc, char* argv[]){
	printf("In main \n");
	printf("Calling getMessage \n");
	getMessage();
	printf("Back in Main \n");
	printf("Exitting \n");
	exit(EXIT_SUCCESS);
}
