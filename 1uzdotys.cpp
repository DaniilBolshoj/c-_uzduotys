
/*
#include <bits/stdc++.h>

using namespace std;

double squireit(double);
double cubeit(double);

int main(){
    double x;
    cout << "Įvesk numerį: ";
    
    cin >> x;
    cout << squireit(x) << endl;
    cout << cubeit(x) << endl;
    
    return 0;
}

double squireit(double number){
    
    double x = number;
    
    return x = x * x;
}

double cubeit(double number){
    
    double x = number;
    
    return x = x * x * x;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, y, z;
    cout << "Įvesk numerius: ";
    
    cin >> x >> y >> z;
    cout << x + y + z << endl;
    cout << x * y * z << endl;
    
    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, y, suma, skirtumas, sandauga, dalmuo;
    cout << "Įvesk du numerius: ";
    cin >> x >> y;

    suma = x + y;
    skirtumas = x - y;
    sandauga = suma * skirtumas;
    dalmuo = suma / skirtumas;
    cout << "Suma: " << suma << endl;
    cout << "Skirtumas: " << skirtumas << endl;
    cout << "Sandauga: " << sandauga << endl;
    cout << "Dalmuo: " << dalmuo << endl;
    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, d, vidurkis;
    cout << "Įvesk keturis numerius: ";
    cin >> a >> b >> c >> d;
    vidurkis = (a + b + c + d) / 4;
    cout << "Vidurkis: " << vidurkis << endl;
    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, suma, skirtumas, sandauga, dalmuo, laipsnis, saknis;
    cout << "Įvesk du numerius: ";
    cin >> a >> b;
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " ^ " << b << " = " << pow(a, b) << endl;
    cout << "√" << a << " = " << sqrt(a) << endl;
    cout << "√" << b << " = " << sqrt(b) << endl;
    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c;
    cout << "Įvesk tris numerius: ";
    cin >> a >> b >> c;

    cout << "Pirmas reiskinys: " << a + b * c << endl;

    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cout << "Įvesk tris numerius: ";
    cin >> a >> b >> c;

    cout << "Antras reiskinys: " << (a+b)%c << endl;

    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    cout << "Įvesk keturis numerius: ";
    cin >> a >> b >> c >> d;

    cout << "Trecias reiskinys: " << a + b * c / d << endl;

    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    cout << "Įvesk sesis numerius: ";
    cin >> a >> b >> c >> d >> e >> f;
    

    cout << "Ketvirtas2 reiskinys: " << a + b / c * d - e % f << endl;

    return 0;
}
*/

/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, pirmas_skaicius, antras_skaicius;
    cout << "Įvesk numeri: ";
    cin >> a;

    pirmas_skaicius = a / 10;
    antras_skaicius = a % 10;
    

    cout << a << " -> " << pirmas_skaicius << " + " << antras_skaicius << " = " <<pirmas_skaicius + antras_skaicius << endl;

    return 0;
}
*/

