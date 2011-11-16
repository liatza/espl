#include <stdio.h>
#include <stdlib.h>
//#include "namelist.h"

int main(int argc, char *argv[]) {
  FILE *fp1;
  char ch1;
  int inword=0;
  int NAMELEN = 10; 
  char word[NAMELEN];
  intd i=0;
  

  if(argc!=2) {
    printf("Usage: canalyze <file 1> \n");
    exit(1);
  }

  /* open first file */
  if((fp1 = fopen(argv[1], "rb"))==NULL) {
    printf("Cannot open first file.\n");
    exit(1);
  }

  /*  */  
  while(!feof(fp1))
  {
    char ch1 = fgetc(fp1);
    //printf("%d",ch1);
    /*if(ferror(fp1)) {
      printf("Error reading first file.\n");
      exit(1);
    }*/
    if(inword){
      if(isalpha(ch1)&(isdigit(ch1)!=0)) {
	word[i] = ch1;
	i++;
      }else{

	/*for(i=0;i<NAMELEN-1;i++){  
	  printf("%d",word[i]);
	 printf(" ");
	 */
	printf("%s",word);
	inword = 0;
	
      }
     }
      else{
	  if(isalpha(ch1)&&(isdigit(ch1)!=0)){
	    i=0;
	    inword = 1;
	    word[0] = ch1;
	    printf("%s",word);
	    i++;
	  }  
    }
   }
   printf("\n");

  if(fclose( fp1 ) == EOF) {
    printf("Error closing first file.\n");
    exit(1);
  }

  return 0;
}
