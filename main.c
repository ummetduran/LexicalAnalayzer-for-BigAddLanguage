#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int keyword_count=0;
int operator_count=0;

void isKeyword(char strnig[]){
char keywords[23][10]={'auto','break','case','char','const','continue','default',
'do','double','else','enum','float','for','if','int','long','return','short','static','struct',
'switch','void','while'};
int i;
for(i=0;i<31;i++){
    if(strcmp(keywords[i],string)==0){
        printf("%c is keyword",string);
        keyword_count++;
    }
}
}

void isOperator(char string){
    char operators[]="+-*/%=";
      for(i=0;i<6;i++){
            if(strcmp(string,operators[i])){
                printf("%c is operator\n",string);
                operator_count++;
            }
        }
}
int main(){
    char ch, buffer[14];
    FILE *fp;
    int i,j=0;
    fp=fopen("program.txt","r");
    if(fp==NULL){
        printf("Dosya bulunamadý\n");
    }
    while((ch=fgetc(fp))!= EOF){
        isKeyword(buffer);
    }

fclose(fp);

    return 0;
}
