#include <iostream>
    #include<cmath>
    using namespace std;

    int main()
    {
     string x,y;
     cin>>x>>y;
     if(x==y)
        cout<<-1;
        else
            cout<<max(x.size(),y.size());

        return 0;
    }
