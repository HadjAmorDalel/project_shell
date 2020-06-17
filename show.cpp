#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Structure.h"


 void show(nom_rep)
{
     char ch , ordr_up , ordr_down;
     scanf(ch);
 	  ordr_up1= concat("show "; char *nom_rep; "-o u");
	  ordr_up2= concat("show -o u"; char *nom_rep );
	  ordr_down1=concat("show -o d"; char *nom_rep );*
	 ordr_down2=concat("show "; char *nom_rep;"-o d" );
	 alphabtc1 =concat("show";char *nom_rep;"-c")
	 alphabtc2 =concat("show -c";char *nom_rep;)
	 
      switch (ch);
      {
    	 case (*ordr_up1 || *ordr_up2): 
	     {
	         if (verif(nom_rep; reps;numb_reps)==false);
             help(); 
             else 
          	 tri_croissant(char *tab[], int numb_rep);
            }
        	case (*ordr_down1 || *ordr_down2):
           {
		   
              if (verif(nom_rep; reps;numb_reps)==false);
             help(); 
              else 
         	 tri_decroissant(char *tab[], int numb_rep);
            }       
        
           case (alphabtc1 || alphabtc2) :
           	{ 
			   if (verif(nom_rep; reps;numb_reps)==false);
             help(); 
              else 
              {
			  
           		for(i=;i<(numb_rep)-1;i++);
           		for (j=0;j<(nmbr_fichier)-1;j++);
           		for(k=0;k<strlen(rep[i].contenu[j])-1;k++);
           	    	{
				     if (rep[i].contenu[j][k]>='A' &&rep[i].contenu[j][k]<='Z')
           	       	break;
           	    	else ;
           	    	
				     k++;
				   }
           		printf(rep[i].contenu[j);
			   };
        };
    };
			 int main()
			{
			  show();
			    return 0
            }  
