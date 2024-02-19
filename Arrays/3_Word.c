#include<stdio.h>

int main()
{
    char a[100];
    printf("Enter a Digit:");
    scanf("%s",a);
    char* ptr = a;
    while (*ptr)
    {
    	switch(*ptr)
    	{
    		case '1':
    			printf("One ");
    			break;
    		case '2':
    			printf("Two ");
    			break;
    		case '3':
    			printf("Three ");
    			break;
    		case '4':
    			printf("Four ");
    			break;
    		case '5':
    			printf("Five ");
    			break;
    		case '6':
    			printf("Six ");
    			break;
    		case '7':
    			printf("Seven ");
    			break;
    		case '8':
    			printf("Eight ");
    			break;
    		case '9':
    			printf("Nine ");
    			break;
    		case '0':
    			printf("Zero ");
    			break;
    		default:
    			break;
		}
		ptr++;
	}
    return 0;
}