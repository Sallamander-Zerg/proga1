 #include <stdio.h>
 #include <fcntl.h>
 #include <sys/types.h>
#include <sys/stat.h>
int main()
{
        int a;
	int lm=0;
	int nm=0;
     	char line[nm][lm];
    	FILE *file = fopen("hello.txt","r");
    while (!feof(file)){
        fscanf(file,"%[^\n]",&line[nm][lm]);//чаровский массив
        nm++;
        if (nm == ('\n')) {  
         lm+1;
          }
        
          }
               scanf(a); 
        if(a==lm)
          {
       for (a=lm; a==lm; a++){
       printf("arr[%d][%d]=",nm,a);
       scanf("%d", &line[nm][a]);
          }
           }else
          {
          printf("eror101");
          }
          
       
    return 0;
}
