#include <iostream>
#include <cmath>
#include <complex>
#include<fstream>
#include<string>


using namespace std;



struct table_functions {
    double* y;
    int n;
    double integral;

    table_functions(double* val, int size) {
        y = new double[size];
        n = size;
        integral = 0;
        for (int i=0; i<n; i++) {
            y[i] = val[i];
        }
    }
};


int main() {
    int c; int f=0;
    static int size=0;
    cout<<"enter amount of functions"<<endl; cin>>f;
    cout<<"enter number of x points"<<endl; cin>>size;
    double* opr = new double[size];
    for(int i=0;i<size;i++) {
        cout<<"enter point"<<i+1<<endl;
        cin>>opr[i];
    }

    do {
        cout<<"enter 1 if u want to change values"<<endl;
        cout<<"enter 2 if u want to enter main program"<<endl;
        cout<<"enter 0 to exit"<<endl;
        cin>>c;

        if (c==1) {
            int pos=0; double t=0;
            cout<<"enter the position of the X u want to change"<< endl; cin>>pos;
            cout<<"enter new value"<<endl; cin>>t;
            opr[pos]=t;
        }

        if (c==0) {
            exit(1);
        }

        if (c==2) {
            table_functions** functions = new table_functions* [f];
            for (int i=0;i<f;i++) {
                cout<<"function"<<i+1<<":"<<endl;
                double* y = new double[size];
                for (int j=0;j<size;j++) {
                    cout<<"enter point"<<j+1<<endl;
                    cin>>y[j];
                }
                functions[i] = new table_functions(y,size);
                for (int j=0;j<size-1;j++) {
                    functions[i]->integral+=((opr[j+1]-opr[j])*(functions[i]->y[j+1]+functions[i]->y[j]))/2.0;
                }
                delete[] y;
            }
            for (int i = 0; i < f-1; i++) {
                for (int j=0; j<f-i-1; j++) {
                    if (functions[j]->integral>functions[j+1]->integral) {
                        table_functions* temp = functions[j];
                        functions[j] = functions[j+1];
                        functions[j+1] = temp;
                    }
                }
            }
            cout<<"function with smallest integral num1 "<<endl;
            cout << "This function values:\n";
            for (int j = 0; j < size; j++) {
                cout << "y[" << j+1 << "] = " << functions[0]->y[j]<<endl;
            }
            cout<<"smallest integral: "<<functions[0]->integral<<endl;

            double maxY = functions[0]->y[0];
            int maxIndex = 0;
            for (int i = 1; i < size; i++) {
                if (functions[0]->y[i] > maxY) {
                    maxY = functions[0]->y[i];
                    maxIndex = i;
                }
            }

            cout << "Maximum of that function:\n";
            cout << " y_max = " << maxY << " ; x = " << opr[maxIndex] << "\n";

            for (int i = 0; i < f; i++) {
                delete functions[i];
            }
            delete[] functions;
            exit(1);
        }
    }
    while (c!=0);
    delete[] opr;
}