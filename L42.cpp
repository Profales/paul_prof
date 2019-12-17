#include <iostream>
#include <fstream>
using namespace std;
int main() {
setlocale(LC_ALL,"Russian");
const int n=100;
int i, z, t, j;
int* p; int s;
fstream f1,f2,f3,f4;
f1.open ("L42_in1.txt",ios::in);
if (f1.bad()) {cout << "Error"; return 0;}
    else {f1>>s; z=0;
          while (!f1.eof()) {f1>>s; if (!f1.eof()) z++;}
          f1.close();
          p=new int[z];
          f1.open ("L42_in1.txt",ios::in);
         if (z<0) {cout<<"Произошла ошибка, z=0\n"; z=0;}
         else {if (z>n) {cout<<"Произошла ошибка, z=n\n"; z=n;}}
         f1>>s;
         for (i=0; i<z; ++i)
            {f1>>*(p+i); if (f1.eof()) {z=i; break;}}
          f1.close();
          f1.open("L42_out.txt",ios::out);
          for (i=0; i<z; ++i) f1<<"1. Контрольный вывод: \n"<<*(p+i)<<'\n';
          j=z-1;
          for (i=0; i<z-i; ++i)
          {if (*(p+i)>0)
            while (j>z-j) if (*(p+j)>0) {t=*(p+i); *(p+i)=*(p+j); *(p+j)=t; j--; break;} else j--;
          }
          for (i=0; i<z; ++i) f1<<*(p+i)<<'\n'; f1.close();
         }
f2.open ("L42_in2.txt",ios::in);
if (f2.bad()) {cout << "Error"; return 0;}
    else {f2>>s; z=0;
          while (!f2.eof()) {f2>>s; if (!f2.eof()) z++;}
          f2.close();
          p=new int[z];
          f2.open ("L42_in2.txt",ios::in);
         if (z<0) {cout<<"Произошла ошибка, z=0\n"; z=0;}
         else {if (z>n) {cout<<"Произошла ошибка, z=n\n"; z=n;}}
         f2>>s;
         for (i=0; i<z; ++i)
            {f2>>*(p+i); if (f2.eof()) {z=i; break;}}
          f2.close();
          f2.open("L42_out.txt",ios::out);
          for (i=0; i<z; ++i) f2<<"2. Контрольный вывод: \n"<<*(p+i)<<'\n';
          j=z-1;
          for (i=0; i<z-i; ++i)
          {if (*(p+i)>0)
            while (j>z-j) if (*(p+j)>0) {t=*(p+i); *(p+i)=*(p+j); *(p+j)=t; j--; break;} else j--;
          }
          for (i=0; i<z; ++i) f2<<*(p+i)<<'\n'; f2.close();
         }
f3.open ("L42_in3.txt",ios::in);
if (f3.bad()) {cout << "Error"; return 0;}
    else {f3>>s; z=0;
          while (!f3.eof()) {f3>>s; if (!f3.eof()) z++;}
          f3.close();
          p=new int[z];
          f3.open ("L42_in3.txt",ios::in);
         if (z<0) {cout<<"Произошла ошибка, z=0\n"; z=0;}
         else {if (z>n) {cout<<"Произошла ошибка, z=n\n"; z=n;}}
         f3>>s;
         for (i=0; i<z; ++i)
            {f3>>*(p+i); if (f3.eof()) {z=i; break;}}
          f3.close();
          f3.open("L42_out.txt",ios::out);
          for (i=0; i<z; ++i) f3<<"3. Контрольный вывод: \n"<<*(p+i)<<'\n';
          j=z-1;
          for (i=0; i<z-i; ++i)
          {if (*(p+i)>0)
            while (j>z-j) if (*(p+j)>0) {t=*(p+i); *(p+i)=*(p+j); *(p+j)=t; j--; break;} else j--;
          }
          for (i=0; i<z; ++i) f3<<*(p+i)<<'\n'; f3.close();
         }
f4.open ("L42_in4.txt",ios::in);
if (f4.bad()) {cout << "Error"; return 0;}
    else {f4>>s; z=0;
          while (!f4.eof()) {f4>>s; if (!f4.eof()) z++;}
          f4.close();
          p=new int[z];
          f4.open ("L42_in4.txt",ios::in);
         if (z<0) {cout<<"Произошла ошибка, z=0\n"; z=0;}
         else {if (z>n) {cout<<"Произошла ошибка, z=n\n"; z=n;}}
         f4>>s;
         for (i=0; i<z; ++i)
            {f4>>*(p+i); if (f4.eof()) {z=i; break;}}
          f4.close();
          f4.open("L42_out.txt",ios::out);
          for (i=0; i<z; ++i) f4<<"4. Контрольный вывод: \n"<<*(p+i)<<'\n';
          j=z-1;
          for (i=0; i<z-i; ++i)
          {if (*(p+i)>0)
            while (j>z-j) if (*(p+j)>0) {t=*(p+i); *(p+i)=*(p+j); *(p+j)=t; j--; break;} else j--;
          }
          for (i=0; i<z; ++i) f4<<*(p+i)<<'\n'; f4.close(); delete[] p; return 0;
         }
}
