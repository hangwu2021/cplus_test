
template <typename T> class X {};

template <typename T> void TempFunc( T t ) {};

struct A{} a;
struct { int i; } b;

typedef struct {int i; } B;

void Func()
{
    struct C {} c;
    X<A> x1;
    X<B> x2;
    X<C> x3;
    
    TempFunc(a);
    TempFunc(b);
    TempFunc(c);
}
