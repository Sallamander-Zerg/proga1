# proga1
#include <stdio.h>
 #include <fcntl.h>
 #include <sys/types.h>
#include <sys/stat.h>
int main()
{
        int a;
	int lm=0;
	int nm=0;
     	int line[100][100];
    	FILE *file = fopen("hello.txt","r");
    while (!feof(file)){
        fscanf(file,"%l[^\n]",&line[nm][lm]);//чаровский массив
        nm++;
        if (nm == ('\n')) {  
          line[lm][0]=nm;
          line[lm-1][1]=nm-line[lm-1][0];
          lm ++;
          }
        
          }
               scanf("%d", &a); 
        if(a==lm)
          {
       for (a=lm; a==lm; a++){
       printf("arr[%d][%d]=",nm,a);
       scanf("%d", &line[nm][a]);
          }
           }
           else
          {
          printf("eror101");
          }
          
       
    return 0;
