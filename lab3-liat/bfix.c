#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "diff.h"

     int
     main (int argc, char **argv)
     {
       char *cvalue = NULL;
       int c;
       char line[80];
       char *readline;
       FILE *f1, *f2;
       struct diff diff;
			 
     
       opterr = 0;
     
       while ((c = getopt (argc, argv, "hrm:")) != -1)
         switch (c)
           {
           case 'm':
	
		 f1 = fopen(argv[2],"r+");  //the file we want to change
		 f2 = fopen(argv[3],"r");   //the diffrences file
	         if (f1!=NULL || f2!=NULL)
		       {

			 while ((readline = fgets(line,80,f2))!=NULL)
			   {
			     
			     //fputdiff(stdout, parsediff(readline, &diff));
			     parsediff(readline, &diff);
			     fseek(f1,diff.offset,0);
			     if (getc(f1)==diff.old){
			       fseek(f1,diff.offset,0);
			       fputc(diff.new,f1);
			       printf("a change has been done\n");
			     }
	
			   }
 
			 fclose(f1);
			 fclose(f2);  
		       }
		     else {
		       printf("error loading files via args\nargc=  %d \n", argc); // %s , %s argv[1], argv[2] 
		     } 
		 break;
	   case 'r':
	     	
		 f1 = fopen(argv[2],"r+");  //the file we want to change
		 f2 = fopen(argv[3],"r");   //the diffrences file
	         if (f1!=NULL || f2!=NULL)
		       {

			 while ((readline = fgets(line,80,f2))!=NULL)
			   {
			     
			     //fputdiff(stdout, parsediff(readline, &diff));
			     parsediff(readline, &diff);
			     fseek(f1,diff.offset,0);
			     if (getc(f1)==diff.new){
			       fseek(f1,diff.offset,0);
			       fputc(diff.old,f1);
			       printf("a change has been done\n");
			     }
	
			   }
 
			 fclose(f1);
			 fclose(f2);  
		       }
		     else {
		       printf("error loading files via args\nargc=  %d \n", argc); // %s , %s argv[1], argv[2] 
		     } 

              break;
           case 'h':
             //cvalue = optarg;
	     printf("OPTIONS\n-h  print a summary of options and exit\n-r  reverse the differences\n-m  print a message each time a change is applied\n");

             break;
           case '?':
             if (optopt == 'c')
               fprintf (stderr, "Option -%c requires an argument.\n", optopt);
             else if (isprint (optopt))
               fprintf (stderr, "Unknown option `-%c'.\n", optopt);
             else
               fprintf (stderr,
                        "Unknown option character `\\x%x'.\n",
                        optopt);
             return 1;
           default:
             abort ();
           }
     
       //  printf ("aflag = %d, bflag = %d, cvalue = %s\n",
       //        aflag, bflag, cvalue);
     
       //for (index = optind; index < argc; index++)
       // printf ("Non-option argument %s\n", argv[index]);
       return 0;
     }


