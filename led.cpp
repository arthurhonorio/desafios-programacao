#include <iostream>

using namespace std;

int main () {
    string a;
    int n, leds=0;

    cin >> n;
    
    for(int x=0; x<n; x++){    
    
        cin >> a;
        
        for(int i=0; i<a.size(); i++) {
            if(a[i]=='1') {
                leds+=2;
            }
            if(a[i]=='2') {
                leds+=5;
            }
            if(a[i]=='3') {
                leds+=5;
            }
            if(a[i]=='4') {
                leds+=4;
            }
            if(a[i]=='5') {
                leds+=5;
            }
            if(a[i]=='6') {
                leds+=6;
            }
            if(a[i]=='7') {
                leds+=3;
            }
            if(a[i]=='8') {
                leds+=7;
            }
            if(a[i]=='9') {
                leds+=6;
            }
            if(a[i]=='0') {
                leds+=6;
            }
        }
        cout << leds << " leds\n";
        leds=0;    
    }
    

}
