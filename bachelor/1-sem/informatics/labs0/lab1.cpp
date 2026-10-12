cout << "Zadanie 1. Vychislenie vyrazheniya\n";
cout << "(a+b)^3 - a^3 / (3ab^2 + b^3 + 3a^2b^2)\n";
cout << "a = 1000, b = 0.0001\n\n";

// ---------- тип float ----------
float af = 1000.0;
float bf = 0.0001;

float a2f, a3f, b2f, b3f;      // промежуточные переменные
float sumf, sum3f;              // (a+b) и (a+b)^3
float t1f, t2f, t3f, znf;       // слагаемые знаменателя и сам знаменатель
float rezf;

a2f = af * af;
a3f = a2f * af;
b2f = bf * bf;
b3f = b2f * bf;

sumf  = af + bf;
sum3f = sumf * sumf * sumf;

t1f = 3 * af * b2f;
t2f = b3f;
t3f = 3 * a2f * b2f;
znf = t1f + t2f + t3f;

rezf = sum3f - a3f / znf;

cout << "Rezultat dlya tipa float:\n";
cout << "  (a+b)^3   = " << sum3f << "\n";
cout << "  a^3       = " << a3f << "\n";
cout << "  3ab^2     = " << t1f << "\n";
cout << "  b^3       = " << t2f << "\n";
cout << "  3a^2b^2   = " << t3f << "\n";
cout << "  znamenatel= " << znf << "\n";
cout << "  REZULTAT  = " << rezf << "\n\n";

// ---------- тип double ----------
double ad = 1000.0;
double bd = 0.0001;

double a2d, a3d, b2d, b3d;
double sumd, sum3d;
double t1d, t2d, t3d, znd;
double rezd;

a2d = ad * ad;
a3d = a2d * ad;
b2d = bd * bd;
b3d = b2d * bd;

sumd  = ad + bd;
sum3d = sumd * sumd * sumd;

t1d = 3 * ad * b2d;
t2d = b3d;
t3d = 3 * a2d * b2d;
znd = t1d + t2d + t3d;

rezd = sum3d - a3d / znd;

cout << "Rezultat dlya tipa double:\n";
cout << "  (a+b)^3   = " << sum3d << "\n";
cout << "  a^3       = " << a3d << "\n";
cout << "  3ab^2     = " << t1d << "\n";
cout << "  b^3       = " << t2d << "\n";
cout << "  3a^2b^2   = " << t3d << "\n";
cout << "  znamenatel= " << znd << "\n";
cout << "  REZULTAT  = " << rezd << "\n\n";

// ================= ЗАДАНИЕ 2 =================
// 1) n++
// 2) m-- > n
// 3) n-- > m

cout << "Zadanie 2. Postfiksnye operacii\n\n";

int n = 5;
int m = 10;
int r;

cout << "Nachalnye znacheniya: n = " << n << ", m = " << m << "\n\n";

// 1) n++
cout << "1) n++\n";
cout << "   do operacii n = " << n << "\n";
r = n++;
cout << "   rezultat n++ = " << r << "\n";
cout << "   posle n = " << n << "\n\n";

// 2) m-- > n
cout << "2) m-- > n\n";
cout << "   do operacii m = " << m << ", n = " << n << "\n";
r = (m-- > n);
cout << "   rezultat m-- > n = " << r << "\n";
cout << "   posle m = " << m << ", n = " << n << "\n";
if (r == 1)
    cout << "   (eto istina)\n\n";
else
    cout << "   (eto lozh)\n\n";

// 3) n-- > m
cout << "3) n-- > m\n";
cout << "   do operacii n = " << n << ", m = " << m << "\n";
r = (n-- > m);
cout << "   rezultat n-- > m = " << r << "\n";
cout << "   posle n = " << n << ", m = " << m << "\n";
if (r == 1)
    cout << "   (eto istina)\n";
else
    cout << "   (eto lozh)\n";
