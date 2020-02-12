#include <iostream>

using namespace std;
unsigned long long factorial(int n)
{
    if(n>=1)
	return(n * factorial(n-1));
    else 
	return 1;
}
double factExp(double x, int n)
{
    ///fix me
    double result = 1;
   //  if(n==0)
     //  return (double)1;
     for (int i=1;i <= n; i++) {
         result = result * x/i;
     }
     return result;
}
double sin(double x,int nTerms){

    double end = 0;
    if(nTerms <= 20)
    {
        for(int i = 1; i <= (nTerms*2)-1;i+=2){
            end = end + factExp(x,i)*factExp(-1,i); 
            //end += -1*factExp(x,i)
        }
    }
    return end;
}


int main(){
//cout << factExp(2,4) << endl;
//cout << factorial(3) << endl;
cout << sin(3,4) << endl;
}
/*
double primary()	// Number or �(� Expression �)�
{
    Token t = ts.get();
    switch (t.kind)
    {
    case '(':			       // handle �(�expression �)�
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')')
            error("')' expected");


        ///Look ahead for a fact Token here before returning d
        ///don't forget to put the Token back if it is not fact
        ///fix me
        return d;	// return the number�s value

    }

    case '-':
        return - primary();

    case number:	// rather than case '8':
    {
        ///Look ahead for a fact Token here before returning t's value
        ///don't forget to put the Token back if it is not fact
        ///fix me
        return t.value;	// return the number�s value

    }

    ///if the token is of type sine, then
    ///call for a new primary
    ///pass that into the sin function
    ///use nTerms = 1000
    case sine:
        ///fix me

    ///if the token is of type root, then
    ///call for a new primary
    ///pass that into the sqrt function
    ///use nTerms = 1000
    case root:
        ///fix me

    default:
        error("primary expected");
    }
}

///The code below this line does not need to be changed at all

double expression()	// read and evaluate: 1   1+2.5   1+2+3.14  etc.
{
    double left = term(); 			// get the Term
    while (true)
    {
        Token t = ts.get();		// get the next token�
        switch (t.kind)  			// � and do the right thing with it
        {
        case '+':
            left += term();
            break;
        case '-':
            left -= term();
            break;
        default:
            ts.putback(t);

            return left;		// return the value of the expression
        }
    }
}
double term()	// exactly like expression(), but for * and  /
{
    double left = primary(); 		// get the Primary
    while (true)
    {
        Token t = ts.get();	// get the next Token
        switch (t.kind)
        {
        case '*':
            left *= primary();
            break;
        case '/':
        {
            double d = primary();
            if  (d==0)
                error("divide by zero");
            left /= d;
            break;
        }
        default:
            ts.putback(t);
            return left;	// return the value
        }
    }
}


void clean_up_mess()
{
    ts.ignore(print);
}


void calculate()
{
    while (cin)
        try
        {
            cout << prompt;
            Token t = ts.get();
            while (t.kind == print)
                t=ts.get();	// first discard all �prints�
            if (t.kind == quit)
                return;		// quit
            ts.putback(t);
            cout << result << expression() << endl;
        }
        catch (exception& e)
        {
            cerr << e.what() << endl;		// write error message
            clean_up_mess();		// <<< The tricky part!
        }
}
*/