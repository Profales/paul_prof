#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int in()
    {
     ifstream f; char s = ' '; float g; int z=0, n=0, a=0, b=0, x;
     f.open ("in.txt");
     if (f.bad()) {cout<<"Произошла ошибка.\n"; return 0;}
     else {
            f>>n>>x>>s;
            a=n;
            f>>noskipws;
            while(!f.eof()) {
                while((s!='\n')&&(!f.eof()))
                    {
                    if ((s=='0')||(s=='1')||(s=='2')||(s=='3')||(s=='4')||(s=='5')||(s=='6')||(s=='7')||(s=='8')||(s=='9')||(s=='+')||(s=='-')||(s=='.'))
                        {
                            f.unget(); f>>g; z++;
                        }
                    f>>s;
                    }
                f>>s;
                b++;
                if (a>=z) a=z;
                z=0;
                if (f.eof()) break;
            }
            if (a>b) n=b;
            else n=a;
            f.close();
            return n;
        }
    }
float** obr(float **a, const int y)
    {
    int i,j,n,k=0; fstream f2;
    float max=-3.4e38;
    n=in();
    f2.open ("out.txt", fstream::app);
    if (f2.bad()) {cout<<"Произошла ошибка.\n"; return 0;}
    else {
            if (n%2==0) n--;
            for (i=y-1; i<=n-y; i++) {
                for (j=y-1; j<=n-y; j++)
                    {
                    if ((j==n/2-k)||(j==n/2+k))
                        if (a[i][j]>max) max=a[i][j];
                    }
                     if (i>n/2-1) k--;
                        else k++;
            }
            f2 << setw(10) << max << '\n';
            cout << setw(10) << max << '\n';
            f2.close();
                }
         }
float** out(const int n)
    {
        ifstream f; fstream f2; string str; int x=0,i,j,m;
        float **a= new float *[n]; char s=' ';
        for (i=0; i<n; i++) a[i] = new float [n];
        i=0; j=0;
        int skkk=0;
        skkk++;
        f2.open("out.txt", fstream::out);
        f.open("in.txt");
        if (f.bad()) {cout<<"Произошла ошибка.\n"; return 0;}
        else {
            f>>x>>m;
            f>>noskipws;
            if (m>n) {cout<<"Произошла ошибка, m=n\n"; f2<<"Произошла ошибка, m=n\n"; m=n;}
            f2 << "Обрабатываемый массив:\n\n";
            cout << "Обрабатываемый массив:\n\n";
            while((!f.eof())&&(i<n)) {
                while((j<n)&&(!f.eof()))
                    {
                        f>>s;
                        if ((s=='0')||(s=='1')||(s=='2')||(s=='3')||(s=='4')||(s=='5')||(s=='6')||(s=='7')||(s=='8')||(s=='9')||(s=='+')||(s=='-')||(s=='.'))
                            {
                                f.unget();
                                f>>a[i][j];
                                f2<<setw(10)<<a[i][j]<<' ';
                                cout<<setw(10)<<a[i][j]<<' ';
                                j++;
                            }
                    }
                getline (f, str);
                i++;
                j=0;
                f2 << '\n';
                cout << '\n';
                if (f.eof()) break;
            }
            f.close();
            cout << "\nРезультат программы:\n\n";
            f2 << "\nРезультат программы:\n\n";
            f2.close();
            obr(a,m);
            delete[]a;
        }
    }
int main()
{
    int N=0;
    setlocale (LC_ALL, "Russian");
    N = in();
    out(N);
    cout << '\n';
    return 0;
}
