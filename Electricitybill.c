#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fr;
    int id,unit;
    float rate,amt,tamt,surcharge;
    char name[50];
    fr = fopen("Eletricity bill", "w");
    printf("Customer name: ");
    scanf("%s",&name[50]);
    printf("Customer id: ");
    scanf("%d",&id);
    printf("Unit Consumed: ");
    scanf("%d",&unit);
    if(unit<=100){
        rate=1.15;
    }
    else if(unit>100&&unit<=250){
        rate=1.59;
    }
    else if(unit>250&&unit<=350){
        rate=2.3;
    }
    else if(unit>350&&unit<=450){
        rate=2.99;
    }
    else if(unit>450&&unit<=550){
        rate=3.5;
    }
    else{
        rate=4;
    }
    tamt=unit*rate;
    if(tamt>250){
        surcharge=tamt*0.15;
    }
    amt=tamt+surcharge;
    fprintf(fr,"\n*******Eletricity Bill*******\n");
    fprintf(fr,"Customer name                        :%s\n",name);
    fprintf(fr,"Customer id                              :%d\n",id);
    fprintf(fr,"Unit Consumed                         :%d\n",unit);
    fprintf(fr,"Amount charge %.2f per unit    :%.2f\n",rate,tamt);
    fprintf(fr,"Surcharge                                 :%.2f\n",surcharge);
    fprintf(fr,"Total amount                             :%.2f\n",amt);
    fclose(fr);
    
   

    return 0;
}
