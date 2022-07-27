
class Info {
public:
    Info() : Info(1) { }
    Info(int i) : Info(i, 'a') { }
    Info(char e) : Info(1, e) { }
    
private:
    Info(int i, char e) : type(1), name(e) { }
    int type;
    char name;
};
