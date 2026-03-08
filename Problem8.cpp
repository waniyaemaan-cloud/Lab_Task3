#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main()
{
    int num;
    string tens, ones;

    cout << "Enter number (0-100): ";
    cin >> num;

    // numbers 0 - 19
    if(num==0) cout<<"zero";
    else if(num==1) cout<<"one";
    else if(num==2) cout<<"two";
    else if(num==3) cout<<"three";
    else if(num==4) cout<<"four";
    else if(num==5) cout<<"five";
    else if(num==6) cout<<"six";
    else if(num==7) cout<<"seven";
    else if(num==8) cout<<"eight";
    else if(num==9) cout<<"nine";
    else if(num==10) cout<<"ten";
    else if(num==11) cout<<"eleven";
    else if(num==12) cout<<"twelve";
    else if(num==13) cout<<"thirteen";
    else if(num==14) cout<<"fourteen";
    else if(num==15) cout<<"fifteen";
    else if(num==16) cout<<"sixteen";
    else if(num==17) cout<<"seventeen";
    else if(num==18) cout<<"eighteen";
    else if(num==19) cout<<"nineteen";

    // numbers 20 - 99
    else if(num < 100)
    {
        int t = num / 10;   // tens
        int o = num % 10;   // ones (modulus)

        if(t==2) tens="twenty";
        else if(t==3) tens="thirty";
        else if(t==4) tens="forty";
        else if(t==5) tens="fifty";
        else if(t==6) tens="sixty";
        else if(t==7) tens="seventy";
        else if(t==8) tens="eighty";
        else if(t==9) tens="ninety";

        if(o==1) ones=" one";
        else if(o==2) ones=" two";
        else if(o==3) ones=" three";
        else if(o==4) ones=" four";
        else if(o==5) ones=" five";
        else if(o==6) ones=" six";
        else if(o==7) ones=" seven";
        else if(o==8) ones=" eight";
        else if(o==9) ones=" nine";

        cout << tens << ones;
    }

    else if(num==100)
        cout<<"one hundred";

    return 0;
}

