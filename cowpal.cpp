/*

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>

*/


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
