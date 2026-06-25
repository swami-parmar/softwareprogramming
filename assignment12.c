#include <stdio.h> 
int main (){
    FILE*fp;
    fp=fopen("playlist.txt","r");
    if(fp==NULL){
        printf("file not found");
    }
    else{
        char ch;
        while((ch=fgetc(fp))!=EOF){
            printf("%c",ch);
        }
    }
    fclose(fp);
}