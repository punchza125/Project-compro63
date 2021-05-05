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
    scanf("%f", money);
    
    

	
	
    if(strcmp(mcurrency, "USD") == 0){
        bpoint = 31.0177;
    }
	if(strcmp(currency, "EUR") == 0){
		spoint = 37.8612;
	}
	
	
	
	
	
	printf("%.2f\n", bpoint);
	printf("%.2f\n", spoint);
	return 0;
}
