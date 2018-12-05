//
//  main.cpp
//  ios_club_1
//
//  Created by 鑫鑫之火 on 2018/12/3.
//  Copyright © 2018年 鑫鑫之火. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Z;
    int i;
    cout << "这是原码:" ;
    getline(cin,Z);     //输入字符
    int n;               //输入移动位数
    cout << endl<<"使字母移动n位:" ;
    cin >> n;
    cout << "输出译码" << endl;
    for(i = 0 ; i < Z.length() ; i++)
    {
        if((Z[i]+n)>'z'&&Z[i]>='a')     Z[i]=96+((((Z[i]+n)-'z')%26));
        if((Z[i]+n)>'a'&&(Z[i]+n)<='z'&&Z[i]>='a')   Z[i]=Z[i]+n;
        if((Z[i]+n)>'Z'&&Z[i]<='Z')       Z[i]=64+((((Z[i]+n)-'Z')%26));
        if((Z[i]+n)>'A'&&(Z[i]+n)<='Z'&&Z[i]<='Z')   Z[i]=Z[i]+n;
    }
    
    for(i = 0 ; i<= Z.length() ; i++)
    {
        cout << Z[i];
    }
    cout << endl;
    return 0;
}


