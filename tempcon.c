#include <stdio.h>

int main() {
    double celsius;
    int ch,t;
    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    do{
	
    // Convert Celsius to Fahrenheit and Kelvin
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;
    printf("CHOOSE YOUR CONVERSION FACTOR\n");
    
    printf("1.CELSIUS TO KELVIN\n2.CELCIUS TO FAHRENHEIT");
    scanf("%d",&ch);
    switch(ch)
    {
    	// Output the results
      case 1: printf("Temperature in Kelvin: %.lf\n", kelvin);
	          break;
	  case 2: printf("Temperature in Fahrenheit: %.lf\n", fahrenheit);
	  		  break;	  	
	}
    
    printf("KEEP CONVERTING [PRESS 1]");
    scanf("%d",&t);
	}while(t==1);
	
    
   

    return 0;
}

