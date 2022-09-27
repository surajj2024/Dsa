#include <iostream>
using namespace std;

void fun(int a[])
{
    cout << a[0] << " ";
}

void square(int *p)
{
    int a = 10;
    p = &a;
    cout << p << endl;
    cout << *p << endl;

    *p = (*p) * (*p);
    cout << *p << endl;
}

int f(int x, int *py, int **ppz)
{
    int y, z;
    cout << "Value of x = " << x << endl;
    **ppz += 1;
    cout << "Value of **ppz = " << **ppz << endl;
    z = **ppz;
    cout << "Value of z = " << z << endl;
    *py += 2;
    cout << "Value of *py = " << *py << endl;
    y = *py;
    cout << "Value of y = " << y << endl;
    x += 3;
    cout << "Value of x = " << x << endl;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return x + y + z;
}

int main()
{
    /* float f = 10.5;
    float p = 2.5;

    float *ptr = &f;
    (*ptr)++;
    *ptr = p;

    cout<<*ptr<<" "<<f<<" "<<p; */

    /* char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout<<*ptr<<endl; */

    /*
        int a = 7;
        int *c = &a;
        c = c+1;
        cout<<a<<" "<<*c<<endl;  */

    /*
        int a[] = {1, 2, 3, 4};
        cout << *(a) << " " << *(a + 1); */

    /*
        int a[] = {1,2,3,4};
        int *p = a++;
        cout<<*p<<endl; */

    /*
        int arr[] = {4, 5, 6, 7};
        int *p = (arr + 1);

        cout<<*p<<endl;
        cout<<*arr<<endl;
        cout<<arr<<endl;
        cout<<*arr+9; */

    /*
        char b[] = "xyz";
        char *c = &b[0];
        cout<<*c<<endl;
        cout<<c<<endl;
        cout<<&b<<endl;
        cout<<&b[0]<<endl;
        cout<<b[0]<<endl; */

    /*     char s[] = "hello";
        char *p = s;
        cout << s[0] << " " << p[0]<<endl;
        cout << s << " " << p<<endl;
        cout << *s << " " << *p<<endl;
     */

    /* char arr[20];
    int i;
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = 65 + i;
    }
    *(arr + i) = '\0';
    cout << arr;
 */

    /* int numbers[5];
    cout<<numbers<<" 1"<<endl;
    int *p;
    cout<<*p<<" 2"<<endl;
    cout<<p<<" 3"<<endl;
    p = numbers;
    cout<<numbers<<" 4"<<endl;
    cout<<p<<" 5"<<endl;
    *p = 10;
    cout<<p<<" 6"<<endl;
    cout<<*p<<" 7"<<endl;
    p = &numbers[2];
    cout<<numbers<<" 8"<<endl;
    cout<<p<<" 9"<<endl;
    cout<<*p<<" 10"<<endl;

    *p = 20;
    cout<<*p<<" 11"<<endl;
    cout<<p<<" 12"<<endl;
    p--;
    cout<<p<<" 13"<<endl;
    cout<<*p<<" 14"<<endl;
    *p = 30;
    cout<<*p<<" 15"<<endl;
    cout<<p<<" 16"<<endl;
    p = numbers + 3;
    cout<<p<<" 17"<<endl;
    cout<<*p<<" 18"<<endl;
    *p = 40;
    cout<<p<<" 19"<<endl;
    cout<<*p<<" 20"<<endl;
    p = numbers;
    cout<<numbers<<" 21"<<endl;
    cout<<p<<" 22"<<endl;
    cout<<*p<<" 23"<<endl;
    *(p+4) = 50;
    cout<<p<<" 24"<<endl;
    cout<<*p<<" 25"<<endl;

    for(int n = 0; n<5; n++){
        cout<<numbers[n]<<",";
    } */
    /*
        char st[] = "ABCD";
        for (int i = 0; st[i] != '\0'; i++)
        {
            cout << st[i]<<endl;
            cout << *(st) + i<<endl;
            cout << *(i + st)<<endl;
            cout << i[st]<<endl;
        } */

    /*

        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
        float *ptr1 = &arr[0];
        float *ptr2 = ptr1 + 3;

        cout<<*ptr2<<endl;
        cout<<ptr2<<endl;
        cout<<ptr1<<endl;
        cout<<ptr2 - ptr1<<endl; */

    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];

    /* int a = 10;
    square(&a);
    cout<<a<<endl; */
    /*
        int c , *b, **a;
        c = 4;
        b = &c;
        a = &b;

        cout<<f(c, b, a)<<endl; */


        /* 
        
        // Babbar mcqs

        

    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout  << first << " " << second << endl;    

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first  << endl;

    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;

    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;

    int first = 8;
    int second = 11;
    int *third = &second; 
    first = *third;
    *third = *third + 2;
    cout  << first << "  " << second << endl;

    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
    

    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;

    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;

    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;

    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;

    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);

    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;

     char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;


    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;

    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;   

    char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;


    void update(int *p){
        *p = (*p)  *  2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;
    }


    void fun(int arr[]) {
        cout << arr[0] << " ";
    }

    int main() {
        int arr[] = {11, 12, 13, 14};
        fun(arr + 1);
        cout << arr[0] << endl;
    }



    void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);
    }

    int main(){
        int a = 70;
        square(&a);
        cout << a << endl;
    }


    int first = 10;
    int *p = &a;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl; 


    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl; 

    void increment(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;
    }  



    int main()
    {
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;
    return 0;
    }


    int main()
    { 
        char *p; 
        char str[] = "pqrstuv";
        p = str;
        p += 3;
        cout << p;
        return 0;
    }


    int main()
    {
        char arr[20];
        int i;
        for(i = 0; i < 10; i++) {
            *(arr + i) = 65 + i;
        }
        *(arr + i) = '\0';
        cout << arr;
        return 0;
    }

    int main()
    {
        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
        float *ptr1 = &arr[0];
        float *ptr2 = ptr1 + 3;
        cout<<*ptr2<<" ";
        cout<< ptr2 - ptr1;
        return 0;
    }


    int main() {
        char st[] = "ABCD";
        for(int i = 0; st[i] != ‘\0’; i++) {
            cout << st[i] << *(st)+i << *(i+st) << i[st];
        }
        return 0;
    }

    void Q(int z)
    {
        z += z;
        cout<<z << " ";
    }

    void P(int *y) 
    {
        int x = *y + 2;
        Q(x);
        *y = x - 1; 
        cout<<x << " ";
    }

    int main()
    {
        int x = 5;
        P(&x);
        cout<<x;
        return 0;
    }


    int main()
    {
        int ***r, **q, *p, i=8;
        p = &i;
        (*p)++;
        q = &p;
        (**q)++;
        r = &q;
        cout<<*p << " " <<**q << " "<<***r;
        return 0;
    }


    int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x + y + z;
    }

    int main() {
        int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);
        return 0;
    }
        

        
         */

    return 0;
}