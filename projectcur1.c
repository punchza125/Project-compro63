#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float money, spoint, bpoint;

	char mcurrency[4], currency[4];
	
	printf("Enter your currency:");
	scanf("%s", mcurrency);
	printf("Enter the currency you want to exchange:");
    scanf("%s", currency);
    printf("How many?");
    scanf("%f", &money);
    
    
    //mcurrency

    if(strcmp(mcurrency, "USD") == 0){
        bpoint = 31.0177;
    }
    else if(strcmp(mcurrency, "BTH") == 0){
        bpoint = 999;
    }
    else if(strcmp(mcurrency, "GBP") == 0){
        bpoint = 42.9129;
    }
    else if(strcmp(mcurrency, "EUR") == 0){
        bpoint = 37.0815;
    }
    else if(strcmp(mcurrency, "JPY") == 0){
        bpoint = 28.1671/100;
    }
    else if(strcmp(mcurrency, "HKD") == 0){
        bpoint = 3.9728;
    }

    
    //currency
    
    
    if(strcmp(currency, "USD") == 0){
        spoint = 31.3553;
    }
	else if(strcmp(currency, "EUR") == 0){
		spoint = 37.8612;
	}
	else if(strcmp(currency, "GBP") == 0){
	    spoint = 43.8152;
	}
	
	
	//calculate
	
	printf("%f\n", bpoint);
	printf("%f\n", spoint);
	if(bpoint==999){
	    printf("%f\n", money/spoint);
	}
	else{
	printf("%.2f\n", (bpoint*money)/spoint);}
	return 0;
}
