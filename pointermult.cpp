#include <iostream>
using namespace std;
int main()
{
    int a[4][4], b[4][4];
    int ans[4][4];
    cout << "enter the elements in the array A\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(*(a + i) + j);
        }
    }

    cout << "enter the elements in the array B\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(*(b + i) + j);
        }
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
          *(*(ans+i)+j)=0;
           for(int k=0;k<33;k++)
           *(*(ans+i)+j)+=*(*(a+i)+k) * (*(*(b+k)+j));

                //printing the matrix
                     for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                            cout<<*(*(ans+i)+j);
                        }
                        cout<<endl;
                    }
                return 0;
}