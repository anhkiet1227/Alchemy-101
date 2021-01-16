#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z, nb_test;
    cin >> nb_test;
    for(int nb = 0; nb < nb_test; nb++)
    {
        x=y=z=0;
        cin >> n;
        int t =0;
        for (int i = 1; i<=n;i++)
        {
            t=t^i;
            //cout << i << "\t" << t << "\n";
            if (t==0)
            {
                x=i;
                continue;
            }
            if (t==1)
            {
                y=i;
                continue;
            }
            if (t==n)
            {
                z=i;
                continue;
            }
        }
        //cout << x << "\t" << y << "\t" << z;
        //cout << "\n";

        if (z>0)
        {
            cout << z << endl;
            for (int i = 1; i<=z; i++)
            {
                cout << i << " ";

            }
            cout << "\n";
        }
        else if (y<n && y>x && y>z)
        {
            cout << n - 1 << endl;
            for (int i =2; i<=n; i++)
            {
                cout << i << " ";

            } cout << "\n";
        }
        else
        {
            cout << x + 1 << endl;
            for (int i = 1; i<=x; i++)
            {
                cout << i << " ";
            } cout << n << "\n";
        }
    }

    return 0;
}
