#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <string.h> 

int main(void)
{
int i,j,l=9,c=7,px=0,py=0,zx=0,zy=0,r,t,k=0,h=0,v=0;
	char T[9][7],j1[30]="",lj2[30]=""; 

	srand(time(NULL)) ; 

	puts("donner r") ;
	scanf("%d",&r);
	
 printf("\t bienvenue dans le jeux de l'oie \n");  
	printf("\n\n\n");
	printf("veuillez saisir vos noms svp ^_^ \n\n\n") ;
	printf("joueur1 : ") ;
	scanf("%s",j1); printf("\n"); 
	printf("joueur2 : ") ;
	scanf("%s",j2); printf("\n"); 
	 printf("presse une touche pour continuer\n") ;
	getchar();
	getchar
		
		
		
		
		
		
		
();
	
	/*pleateau de jeux*/
	for (i=0;i<l;i++)
		{printf("\n");
		for (j=0;j<c;j++) 
			{ T[i][j]='.' ;
            
			printf ("%c \t",T[i][j]); 
	
	    }
	}
	printf("\n"); 
	 printf("presse une touche pour continuer\n") ;
	getchar();
	
/*ce qui commence le jeux*/
	
	     if (r%2==0) 
				{printf("le premier joueur va commencer\n\n ");
		          t=0;} 
			else {printf("le deuxieme joueur va commencer\n\n"); 
		            t=1; }  
	 printf("presse une touche pour continuer\n") ;
	getchar();
	


while ((k!=62)&&(h!=62))
{  /*traitement de joueur1*/
		if( (t%2==0) &&   ( (k!=30) || (k!=51) ) )
				{    puts("donner r") ;
	scanf("%d",&r);  
			v=r; 
            printf(" joueur 1 - ancien score = %d",k); printf("\n"); 
			printf(" joueur 1 - lancer = %d",v); printf("\n");  k=k+v ;  
            printf(" joueur 1 - nouveau score = %d",k) ; printf("\n") ;
            if (k==h) 
				{h=h-1 ;printf("le pion de joueur 1 sera place dans la case precedent\n");}
			if ( (k==8) || (k==17) || (k==26)|| (k==35) || (k==44) || (k=53) )
                 { k=k ; printf("LUCKY!c'est une case oie,DOUBLE DE DEE\n");}
			if (k==5)
				{ k=11 ;printf("weee! case de teleportation:cheval\n"); }
            if (k==41)
				{ k=29 ;  printf("ahhh :(! case de teleportation:labyrinthe\n");}
            if (k==41)
				{ k =0 ; printf("bad luck! case de teleportation:tete de mort\n");}
			if (k==18)
       				{printf("case d'attente\n"); 
				for (i=1;i<3;i++) 
                        t=t+i ; 
                        }  
            if (k>62) 
			 	{(k=62-(k-62));} 
		   			
		     /*postion de X  */
			
			if((k>=0)&&(k<=6))
				{py=0;px=k;}
              if((k>=7)&&(k<13))
				{py=1;px=k%7;}
              if((k>=14)&&(k<=20))
				{py=2;px=k%7;}
              if((k>=21)&&(k<=27))
				{py=3;px=k%7;}
              if((k>=28)&&(k<=34))
				{py=4;px=k%7;}
              if((k>=35)&&(k<=41))
				{py=5;px=k%7;}
              if((k>=42)&&(k<=48))
				{py=6;px=k%7;}
              if((k>=49)&&(k<=55))
				{py=7;px=k%7;}              
			  if((k>=56)&&(k<=62))
				{py=8;px=k%7;}
            

            /*postion de Y  */
             if((h>=0)&&(h<=6))
				{zy=0;zx=h;}
              if((h>=7)&&(h<13))
				{zy=1;zx=h%7;}
              if((h>=14)&&(h<=20))
				{zy=2;zx=h%7;}
              if((h>=21)&&(h<=27))
				{zy=3;zx=h%7;}
              if((h>=28)&&(h<=34))
				{zy=4;zx=h%7;}
              if((h>=35)&&(h<=41))
				{zy=5;zx=h%7;}
              if((h>=42)&&(h<=48))
				{zy=6;zx=k%7;}
              if((h>=49)&&(h<=55))
				{zy=7;zx=h%7;}              
			  if((h>=56)&&(h<=62))
				 {zy=8;zx=h%7;}


					
					
		         
              
			
                    
	        printf("------------------------------------------------\n");
	for (i=0;i<l;i++)
		{printf("\n");
		for (j=0;j<c;j++) 
			{ T[i][j]='.' ;
              T[py][px]='X';
					T[zy][zx]='Y';
          
			printf ("%c \t",T[i][j]); 
	
	         } printf("\n");
	   } 
			t=t+1; 
		}
     
		
	printf("\n\n");
		
	printf("presse une touche pour jouer :)\n\n");
		getchar();
		
	/*traitement de joueur2*/	
		if ((t%2==1) &&   ( (h!=30) || (h!=51) ) )
     { v=r;

			printf(" joueur 2 - ancien score = %d",h); printf("\n"); 
			printf(" joueur 2 - lancer = %d",v); printf("\n");  h=h+v;
            printf(" joueur 2 - nouveau score = %d",h) ; printf("\n") ;
             if (h==k) 
				{k=k-1 ;  printf("le pion de joueur 1 sera place dans la case precedent\n");}    
			if ( (h==8) || (h==17) || (h==26)|| (h==35) || (h==44) || (h==53) )
                 { h=h+(h*2) ; printf("LUCKY!c'est une case oie,DOUBLE DE DEE\n");}
			if (h==5)
				{ h=11 ; printf("weee! case de teleportation:cheval\n"); }
            if (h==41)
				{ h=29 ; printf("ahhh :(! case de teleportation:labyrinthe\n");}
            if (h==41)
				{ h=0 ;  printf("bad luck! case de teleportation:tete de mort\n");}
			if (h==18)
       				{printf("case d'attente\n");
				   for (i=1;i<3;i++) 
                        t=t+i ;  
                      }  
            if (h>62) 
				{(h=62-(h-62));} 
				 	 
          	
             /*postion de X */
            if((k>=0)&&(k<=6))
				{py=0;px=k;}
              if((k>=7)&&(k<13))
				{py=1;px=k%7;}
              if((k>=14)&&(k<=20))
				{py=2;px=k%7;}
              if((k>=21)&&(k<=27))
				{py=3;px=k%7;}
              if((k>=28)&&(k<=34))
				{py=4;px=k%7;}
              if((k>=35)&&(k<=41))
				{py=5;px=k%7;}
              if((k>=42)&&(k<=48))
				{py=6;px=k%7;}
              if((k>=49)&&(k<=55))
				{py=7;px=k%7;}              
			  if((k>=56)&&(k<=62))
				{py=8;px=k%7;}      
				
			  
			
			/*postion de Y */
			  if((h>=0)&&(h<=6))
				{zy=0;zx=h;}
              if((h>=7)&&(h<13))
				{zy=1;zx=h%7;}
              if((h>=14)&&(h<=20))
				{zy=2;zx=h%7;}
              if((h>=21)&&(h<=27))
				{zy=3;zx=h%7;}
              if((h>=28)&&(h<=34))
				{zy=4;zx=h%7;}
              if((h>=35)&&(h<=41))
				{zy=5;zx=h%7;}
              if((h>=42)&&(h<=48))
				{zy=6;zx=k%7;}
              if((h>=49)&&(h<=55))
				{zy=7;zx=h%7;}              
			  if((h>=56)&&(h<=62))
				 {zy=8;zx=h%7;}

                    
	        printf("------------------------------------------------\n");
	for (i=0;i<l;i++)
		{printf("\n");
		for (j=0;j<c;j++) 
			{ T[i][j]='.' ;
           T[py][px]='X'; 
              T[zx][zy]='Y'; 
			printf ("%c \t",T[i][j]); 
	
	         }printf("\n"); 
	   } t=t+1; 
printf("\n") ;
			printf("presse une touche pour jouer :)\n") ;

getchar();


	}




}
	 
	printf("\n\n\n");
/*le gagnant*/	
	if (T[9][7]=='X')
			printf("joueur 1 %s gagne\n",j1);
else 
		printf("joueur 2 %s gagne\n",j2);
	
	




	return 0 ; 
}
