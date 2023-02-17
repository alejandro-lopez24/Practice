class Var{
    private:
    double vars[2];

    public:
    Var(double var1, double var2){
        vars[0]=var1;
        vars[1]=var2;
    };

    //Getters
    double getVar1(){return vars[0];}
    double getVar2(){return vars[1];}

    //Setters
    void setVars(double var1, double var2){
        vars[0]=var1;
        vars[1]=var2;
    }

    //Instance methods
    double getSum();
    double getSub();
    double getDiv();
    double getMult();

    //Static methods
    static Var getLargest(Var vars[]);
};