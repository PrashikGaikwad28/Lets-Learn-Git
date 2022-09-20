#include<bits/stdc++.h>
using namespace std;
void frequencyOfCharacters(string input){
    int b=0, f=0, j=0, p=0, v=0;
    for(int i=0; i<input.size(); i++){
        if(input[i]=='b' || input[i]=='B')
            b++;
        else if(input[i]=='f' || input[i]=='F')
            f++;
        else if(input[i]=='j' || input[i]=='J')
            j++;
        else if(input[i]=='p' || input[i]=='P')
            p++;
        else if(input[i]=='v' || input[i]=='V')
            v++;
    }
    if(b)
        cout<<"b="<<b<<", ";
    if(f)
        cout<<"f="<<f<<", ";
    if(j)
        cout<<"j="<<j<<", ";
    if(p)
        cout<<"p="<<p<<", ";
    if(v)
        cout<<"v="<<v<<", ";
    cout<<"others="<<input.size()-(b+f+j+p+v);
}
int main(){
    string input;
    cin>>input;
    frequencyOfCharacters(input);
}