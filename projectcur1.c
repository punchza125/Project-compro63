#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float money, spoint, bpoint, k;

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
        k = 1;       // เงิน BTH เป็น bpoint ไปในตัวจึงต้องตั้งเงื่อไขแยก
    }
    else if(strcmp(mcurrency, "GBP") == 0){
        bpoint = 42.9129;
    }
    else if(strcmp(mcurrency, "EUR") == 0){
        bpoint = 37.0815;
    }
    else if(strcmp(mcurrency, "JPY") == 0){
        bpoint = 28.1671/100; //เพราะเป็นราคาต่อ 100 จากสกุลอื่นที่ 1
    }
    else if(strcmp(mcurrency, "HKD") == 0){
        bpoint = 3.9728;
    }
    else if(strcmp(mcurrency, "MYR") == 0){
        bpoint = 7.4683;
    }
    else if(strcmp(mcurrency, "SGD") == 0){
        bpoint = 23.0701;
    }
    else if(strcmp(mcurrency, "BND") == 0){
        bpoint = 22.9690;
    }
    else if(strcmp(mcurrency, "PHP") == 0){
        bpoint = 0.6365;
    }
    else if(strcmp(mcurrency, "IDR") == 0){
        bpoint = 2.0629/1000;
    }
    else if(strcmp(mcurrency, "INR") == 0){
        bpoint = 0.3992;
    }
    else if(strcmp(mcurrency, "CHF") == 0){
        bpoint = 33.7687;
    }
    else if(strcmp(mcurrency, "AUD") == 0){
        bpoint = 23.6710;
    }
    else if(strcmp(mcurrency, "NZD") == 0){
        bpoint = 22.0370;
    }
    else if(strcmp(mcurrency, "CAD") == 0){
        bpoint = 25.0712;
    }
    else if(strcmp(mcurrency, "SEK") == 0){
        bpoint = 3.6373;
    }
    else if(strcmp(mcurrency, "DKK") == 0){
        bpoint = 4.9881;
    }
    else if(strcmp(mcurrency, "NOK") == 0){
        bpoint = 3.7017;
    }
    else if(strcmp(mcurrency, "CNY") == 0){
        bpoint = 4.7455;
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
	else if(strcmp(currency, "JPY") == 0){
	    spoint = 28.9288/100;
	}
	else if(strcmp(currency, "BTH") == 0){
	    spoint =  999;
	    k = 1;
	}
	else if(strcmp(currency, "HKD") == 0){
	    spoint =  4.0607;
	}
	else if(strcmp(currency, "MYR") == 0){
	    spoint =  7.6797;
	}
	else if(strcmp(currency, "SGD") == 0){
	    spoint =  23.6633;
	}
	else if(strcmp(currency, "BND") == 0){
	    spoint =  23.7329;
	}
	else if(strcmp(currency, "PHP") == 0){
	    spoint =  0.6631;
	}
	else if(strcmp(currency, "IDR") == 0){
	    spoint =  2.2752/1000;
	}
	else if(strcmp(currency, "INR") == 0){
	    spoint =  0.4464;
	}
	else if(strcmp(currency, "CHF") == 0){
	    spoint =  34.5117;
	}
	else if(strcmp(currency, "AUD") == 0){
	    spoint =  24.5240;
	}
	else if(strcmp(currency, "NZD") == 0){
	    spoint =  22.6760;
	}
	else if(strcmp(currency, "CAD") == 0){
	    spoint =  25.6756;
	}
	else if(strcmp(currency, "SEK") == 0){
	    spoint =  3.7195;
	}
	else if(strcmp(currency, "DKK") == 0){
	    spoint =  5.0929;
	}
	else if(strcmp(currency, "NOK") == 0){
	    spoint =  3.7918;
	}
	else if(strcmp(currency, "CNY") == 0){
	    spoint =  4.8965;
	}
	
	
	
	//calculate
	
	printf("%f test\n", bpoint); ////เอาไว้เช็คก่อนนำเสนอ
	printf("%f test\n", spoint);////อย่าลืมลบออก
	if(k == 1 && bpoint==999){
	    printf("%f\n", money/spoint);
	}
	else if(k == 1 && spoint == 999){
	    printf("%f\n", money*bpoint);
	}
	else {
	printf("%.2f\n", (bpoint*money)/spoint);
	}
	return 0;
}
