#include<stdio.h>
int main (){
    FILE *fptr;
    char str[50];
    fptr=fopen("playlist.txt","w");
    if(fptr==NULL){
        printf("Error opnening file");
        return 1;
    }
    printf("Enter the string");
    scanf("%[^\n]s",&str);
    fprintf(fptr,"%s",str);
    fclose(fptr);
    return 0;

}