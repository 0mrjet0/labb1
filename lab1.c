#include <stdio.h>
#include <ctype.h>
int		score[99],c[99] ; // C = Credit
int			    s, n ,i ; // n = Number 
float 				o,b ; 
float 			  m[99] ; // m = Mulyiply
int main () {
	printf("Input your Number:  ");
		scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\nInput your Credit :  ");
		scanf("%d",&c[i]);
		printf("\nInput your raw score :  ");
		scanf("%d",&score[i]);
		printf("\n------------");
	}//end for
	printf("\n\n\n-------------------------------------------------------------------------------------");
	printf("\nNo.		Credit.		Point.		Grade.		Mulyiply.");
	printf("\n-------------------------------------------------------------------------------------");
	for(i=1;i<=n;i++){
		s = score[i]/5;
		switch (s) 
  	 	{
  		 	case 1 :
  		 	case 2 :
   			case 3 :
   			case 4 :
  		 	case 5 :
   			case 6 :
   			case 7 :
  		 	case 8 :
			case 9 :
   				 m[i] = c[i]*0 ;printf("\n%d		%d		%d		F		%.2f",i,c[i],score[i],m[i]);
   				break;
   			case 10 :
   				 m[i] = c[i]*1 ;printf("\n%d		%d		%d		D		%.2f",i,c[i],score[i],m[i]);
   				break;
   			case 11 :
   				 m[i] = c[i]*1.5 ;printf("\n%d		%d		%d		D+		%.2f",i,c[i],score[i],m[i]);
   				break;
   			case 12 :
   				 m[i] = c[i]*2 ; printf("\n%d		%d		%d		C		%.2f",i,c[i],score[i],m[i]);
   				break;
   			case 13 :
   				 m[i] = c[i]*2.5 ;printf("\n%d		%d		%d		C+		%.2f",i,c[i],score[i],m[i]);
   				break;
   			case 14 :
   				 m[i] = c[i]*3 ;printf("\n%d		%d		%d		B		%.2f",i,c[i],score[i],m[i]);
   				break;
   			case 15 :
   				 m[i] = c[i]*3.5 ;printf("\n%d		%d		%d		B+		%.2f",i,c[i],score[i],m[i]);
   				break;
   	
   			default :
   		 	  	 m[i] = c[i]*4 ;printf("\n%d		%d		%d		A		%.2f",i,c[i],score[i],m[i]);
   				break;
	}//end switch case	
	o = o + c[i] ;
	b = b + m[i] ;
}//end for
printf("\n-------------------------------------------------------------------------------------");
printf("\nYour GPA : %.2f\n",b/o);
   return 0;
}//end function