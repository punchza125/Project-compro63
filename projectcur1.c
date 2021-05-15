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
    printf("How much would you like to exchange ?:");
    scanf("%f", &money);
    
    
    //mcurrency

    if(strcmp(mcurrency, "USD") == 0){
        bpoint = 31.1756;
    }
    else if(strcmp(mcurrency, "BTH") == 0){
        bpoint = 999; 
        k = 1;       // เงิน BTH เป็น bpoint ไปในตัวจึงต้องตั้งเงื่อไขแยก
    }
    else if(strcmp(mcurrency, "GBP") == 0){
        bpoint = 43.5881;
    }
    else if(strcmp(mcurrency, "EUR") == 0){
        bpoint = 37.4961;
    }
    else if(strcmp(mcurrency, "JPY") == 0){
        bpoint = 28.2589/100; //เพราะเป็นราคาต่อ 100 จากสกุลอื่นที่ 1
    }
    else if(strcmp(mcurrency, "HKD") == 0){
        bpoint = 3.9946;
    }
    else if(strcmp(mcurrency, "MYR") == 0){
        bpoint = 7.4939;
    }
    else if(strcmp(mcurrency, "SGD") == 0){
        bpoint = 23.1950;
    }
    else if(strcmp(mcurrency, "BND") == 0){
        bpoint = 23.1051;
    }
    else if(strcmp(mcurrency, "PHP") == 0){
        bpoint = 0.6410;
    }
    else if(strcmp(mcurrency, "IDR") == 0){
        bpoint = 2.1154/1000;
    }
    else if(strcmp(mcurrency, "INR") == 0){
        bpoint = 0.4057;
    }
    else if(strcmp(mcurrency, "CHF") == 0){
        bpoint = 34.2585;
    }
    else if(strcmp(mcurrency, "AUD") == 0){
        bpoint = 23.8023;
    }
    else if(strcmp(mcurrency, "NZD") == 0){
        bpoint = 22.1759;
    }
    else if(strcmp(mcurrency, "CAD") == 0){
        bpoint = 25.4624;
    }
    else if(strcmp(mcurrency, "SEK") == 0){
        bpoint = 3.6880;
    }
    else if(strcmp(mcurrency, "DKK") == 0){
        bpoint = 5.0417;
    }
    else if(strcmp(mcurrency, "NOK") == 0){
        bpoint = 3.7080;
    }
    else if(strcmp(mcurrency, "CNY") == 0){
        bpoint = 4.7987;
    }
    else if(strcmp(mcurrency, "MXN") == 0){
        bpoint = 1.5637;
    }
    else if(strcmp(mcurrency, "ZAR") == 0){
        bpoint = 2.2087;
    }
    else if(strcmp(mcurrency, "KRW") == 0){
        bpoint = 0.0277;
    }
    else if(strcmp(mcurrency, "TWD") == 0){
        bpoint = 1.1152;
    }
    else if(strcmp(mcurrency, "KWD") == 0){
        bpoint = 103.5390;
    }
    else if(strcmp(mcurrency, "SAR") == 0){
        bpoint = 8.3128;
    }
    else if(strcmp(mcurrency, "AED") == 0){
        bpoint = 8.4873;
    }
    else if(strcmp(mcurrency, "MMK") == 0){
        bpoint = 0.0200;
    }
    else if(strcmp(mcurrency, "BDT") == 0){
        bpoint = 0.3677;
    }
    else if(strcmp(mcurrency, "CZK") == 0){
        bpoint = 1.4771;
    }
    else if(strcmp(mcurrency, "KHR") == 0){
        bpoint = 0.7669/100;
    }
    else if(strcmp(mcurrency, "KES") == 0){
        bpoint = 0.2908;
    }
    else if(strcmp(mcurrency, "LAK") == 0){
        bpoint = 0.3304/100;
    }
    else if(strcmp(mcurrency, "RUB") == 0){
        bpoint = 0.4208;
    }
    else if(strcmp(mcurrency, "VND") == 0){
        bpoint = 0.1353/100;
    }
    else if(strcmp(mcurrency, "EGP") == 0){
        bpoint = 1.9908;
    }
    else if(strcmp(mcurrency, "PLN") == 0){
        bpoint = 8.3179;
    }
    else if(strcmp(mcurrency, "LKR") == 0){
        bpoint = 0.1583;
    }
    else if(strcmp(mcurrency, "IQD") == 0){
        bpoint = 0.0214;
    }
    else if(strcmp(mcurrency, "BHD") == 0){
        bpoint = 82.6939;
    }
    else if(strcmp(mcurrency, "OMR") == 0){
        bpoint = 80.9756;
    }
    else if(strcmp(mcurrency, "JOD") == 0){
        bpoint = 43.9712;
    }
    else if(strcmp(mcurrency, "QAR") == 0){
        bpoint = 8.4133;
    }
    else if(strcmp(mcurrency, "MVR") == 0){
        bpoint = 2.0165;
    }
    else if(strcmp(mcurrency, "NPR") == 0){
        bpoint = 0.2654;
    }
    else if(strcmp(mcurrency, "PGK") == 0){
        bpoint = 8.7697;
    }
    else if(strcmp(mcurrency, "ILS") == 0){
        bpoint = 9.4811;
    }
    else if(strcmp(mcurrency, "HUF") == 0){
        bpoint = 0.1055;
    }
    else if(strcmp(mcurrency, "PKR") == 0){
        bpoint = 0.2048;
    }
    
    
    
    
    
    
    

    
    //currency
    
    
    if(strcmp(currency, "USD") == 0){
        spoint = 31.5097;
    }
	else if(strcmp(currency, "EUR") == 0){
		spoint = 38.2497;
	}
	else if(strcmp(currency, "GBP") == 0){
	    spoint = 44.4726;
	}
	else if(strcmp(currency, "JPY") == 0){
	    spoint = 28.9911/100;
	}
	else if(strcmp(currency, "BTH") == 0){
	    spoint =  999;
	    k = 1;
	}
	else if(strcmp(currency, "HKD") == 0){
	    spoint =  4.0796;
	}
	else if(strcmp(currency, "MYR") == 0){
	    spoint =  7.7071;
	}
	else if(strcmp(currency, "SGD") == 0){
	    spoint =  23.7759;
	}
	else if(strcmp(currency, "BND") == 0){
	    spoint =  23.8814;
	}
	else if(strcmp(currency, "PHP") == 0){
	    spoint =  0.6689;
	}
	else if(strcmp(currency, "IDR") == 0){
	    spoint =  2.3085/1000;
	}
	else if(strcmp(currency, "INR") == 0){
	    spoint =  0.4507;
	}
	else if(strcmp(currency, "CHF") == 0){
	    spoint =  34.9761;
	}
	else if(strcmp(currency, "AUD") == 0){
	    spoint =  24.6108;
	}
	else if(strcmp(currency, "NZD") == 0){
	    spoint =  22.8064;
	}
	else if(strcmp(currency, "CAD") == 0){
	    spoint =  26.0505;
	}
	else if(strcmp(currency, "SEK") == 0){
	    spoint =  3.7700;
	}
	else if(strcmp(currency, "DKK") == 0){
	    spoint =  5.1449;
	}
	else if(strcmp(currency, "NOK") == 0){
	    spoint =  3.7961;
	}
	else if(strcmp(currency, "CNY") == 0){
	    spoint =  4.9433;
	}
	else if(strcmp(currency, "MXN") == 0){
	    spoint =  1.5805;
	}
	else if(strcmp(currency, "ZAR") == 0){
	    spoint =  2.2324;
	}
	else if(strcmp(currency, "KRW") == 0){
	    spoint =  0.0280;
	}
	else if(strcmp(currency, "TWD") == 0){
	    spoint =  1.1271;
	}
	else if(strcmp(currency, "KWD") == 0){
	    spoint =  104.6486;
	}
	else if(strcmp(currency, "SAR") == 0){
	    spoint =  8.4019;
	}
	else if(strcmp(currency, "AED") == 0){
	    spoint =  8.5783;
	}
	else if(strcmp(currency, "MMK") == 0){
	    spoint =  0.0202;
	}
	else if(strcmp(currency, "BDT") == 0){
	    spoint =  0.3716;
	}
	else if(strcmp(currency, "CZK") == 0){
	    spoint =  1.4929;
	}
	else if(strcmp(currency, "KHR") == 0){
	    spoint =  0.7751/100;
	}
	else if(strcmp(currency, "KES") == 0){
	    spoint =  0.2939;
	}
	else if(strcmp(currency, "LAK") == 0){
	    spoint =  0.3340/100;
	}
	else if(strcmp(currency, "RUB") == 0){
	    spoint =  0.4253;
	}
	else if(strcmp(currency, "VND") == 0){
	    spoint =  0.1367/100;
	}
	else if(strcmp(currency, "EGP") == 0){
	    spoint =  2.0121;
	}
	else if(strcmp(currency, "PLN") == 0){
	    spoint =  8.4071;
	}
	else if(strcmp(currency, "LKR") == 0){
	    spoint =  0.1599;
	}
	else if(strcmp(currency, "IQD") == 0){
	    spoint =  0.0216;
	}
	else if(strcmp(currency, "BHD") == 0){
	    spoint =  83.5801;
	}
	else if(strcmp(currency, "OMR") == 0){
	    spoint =  81.8434;
	}
	else if(strcmp(currency, "JOD") == 0){
	    spoint =  44.4425;
	}
	else if(strcmp(currency, "QAR") == 0){
	    spoint =  8.5035;
	}
	else if(strcmp(currency, "MVR") == 0){
	    spoint =  2.0381;
	}
	else if(strcmp(currency, "NPR") == 0){
	    spoint =  0.2682;
	}
	else if(strcmp(currency, "PGK") == 0){
	    spoint =  8.8637;
	}
	else if(strcmp(currency, "ILS") == 0){
	    spoint =  9.5827;
	}
	else if(strcmp(currency, "HUF") == 0){
	    spoint =  0.1066;
	}
	else if(strcmp(currency, "PKR") == 0){
	    spoint =  0.2070;
	}
	
	
	
	
	//calculate
	

	if(k == 1 && bpoint==999){
	    printf("%f %s\n", money/spoint, currency);
	}
	else if(k == 1 && spoint == 999){
	    printf("%f %s\n", money*bpoint, currency);
	}
	else {
	printf("%f %s\n", (bpoint*money)/spoint, currency);
	}
	return 0;
}
