//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <cmath>

using namespace std;
int pal;

int check(int n)
{
    int spal=1;
    int i;
    pal=1;
    
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            pal+=i;
            pal+=n/i;
        }
    }
    for(i=2;i<sqrt(pal);i++)
    {
        if(pal%i==0)
        {
            spal+=i;
            spal+=pal/i;
        }
    }
    
    if(spal==n && pal!=n)
        return 1;
    return 0;
}

int main()
{
    int s;
    int i;
    
    cin >> s;
    i=s+1;
    
    while(1==1)
    {
        if(check(i))
        {
            cout << i << " " << pal << endl;
            break;
        }
        i++;
    }
    
    return 0;
}
