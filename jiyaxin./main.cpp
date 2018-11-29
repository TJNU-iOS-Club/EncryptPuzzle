//
//  main.cpp
//  iOS_club1
//
//  Created by 鑫鑫之火 on 2018/11/22.
//  Copyright © 2018年 鑫鑫之火. All rights reserved.
//

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    char c;
    int n;
    cout<<"n=";
    cin>>n;
    while((c=getchar())!='000')
    {
        if((c+n)>'z'&&c>'a')     c=96+((((c+n)-'z')%26));
        if((c+n)>'a'&&(c+n)<'z'&&c>'a')   c=c+n;
        if((c+n)>'Z'&&c<'Z')       c=64+((((c+n)-'Z')%26));
        if((c+n)>'A'&&(c+n)<'Z'&&c<'Z')   c=c+n;
        cout<<c;
    }
    cout<<endl;
    return 0;
}

