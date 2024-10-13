#include <iostream>
using namespace std;
float price(string fruit,string day,int quan);
main(){
    int quan;
    string fruit,day;
    cout<<"Enter the fruit name:";
    cin>>fruit;
    cout<<"Enter the day of week (e.g., Monday,Sunday):";
    cin>>day;
    cout<<"Enter the quantity:";
    cin>>quan;
    float result=price(fruit,day,quan);
    cout<<result;

}
float price(string fruit,string day,int quan){
    float r;
    if(day=="Monday" ||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"){
        if(fruit=="banana"){
            r=quan*2.50;

        }
         else if(fruit=="apple"){
            r=quan*1.20;

        }
         else if(fruit=="orange"){
            r=quan*0.85;

        }
         else if(fruit=="grapefruit"){
            r=quan*1.45;

        }
         else if(fruit=="kiwi"){
            r=quan*2.70;

        }
         else if(fruit=="pineapple"){
            r=quan*5.50;

        }
         else if(fruit=="grapes"){
            r=quan*3.85;

        }
    }
    if(day=="Saturday" ||day=="Sunday"){
        if(fruit=="banana"){
            r=quan*2.70;

        }

         else if(fruit=="apple"){
            r=quan*1.25;

        }
         else if(fruit=="orange"){
            r=quan*0.90;

        }
         else if(fruit=="grapefruit"){
            r=quan*1.60;

        }
         else if(fruit=="kiwi"){
            r=quan*3.00;

        }
         else if(fruit=="pineapple"){
            r=quan*5.60;

        }
         else if(fruit=="grapes"){
            r=quan*4.20;

        }
    }
return r;

}