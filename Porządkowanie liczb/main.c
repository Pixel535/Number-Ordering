#include <stdio.h>

int main(){
    int a,b,c;
    printf("Podaj wartosc a: ");
    scanf("%d", &a);
    printf("Podaj wartosc b: ");
    scanf("%d", &b);
    printf("Podaj wartosc c: ");
    scanf("%d", &c);

    if(a>0 && b>0 && c>0)
    {
    	if (a>=b && c>=b)
	    {
	    	printf("%d ", b);
	    	if (a>=c)
			{
	             printf("%d %d", c,a);
	        }
	        else
			{
	             printf("%d %d", a,c);
	        }
	    }
	    else
	    {
	    	if(a>=c && b>=c)
		    {
		    	printf("%d ", c);
		    	if (a>=b)
				{
		             printf("%d %d", b,a);
		        }
		        else
				{
		             printf("%d %d", a,b);
		        }
		   	}
	    	else
	    	{
	    		if(c>=a && b>=a)
	    		{
	    			printf("%d ", a);
	    			if (a>=b)
					{
	             		printf("%d %d", b,c);
	             	}
	             	else
					{
	            		printf("%d %d", c,b);
	                }
	        	}
	        }
	    }
	}
    else
    {
    	printf("Bledne dane!");
	}

    return 0;
}
