
template <typename T1, typename T2 = int>
class DefClass1;

template <typename T1 = int, typename T2>
class DefClass2;

template <typename T1=int, typename T2>
void DefFunc1(T2 a);

template <int i = 0, typename T>
void DefFunc2(T a);
