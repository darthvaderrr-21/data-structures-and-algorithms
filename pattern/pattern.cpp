#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n) {
    // Square print:
    for(int i=1; i <=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return;
};

void printPattern2(int n) {
    // Hollow Square print:
    for(int i=1; i <=n; i++) {
        for (int j=1; j<=n; j++) {
            if((i != 1 && i != n) && (j != 1 && j != n)) {
                cout<<" "<<" ";
            } else {
               cout<<"*"<<" "; 
            }
        }
        cout<<endl;
    }
    return;
};

void printPattern3(int n) {
    // Right pyramid print:
    for(int i=1; i <=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return;
};

void printPattern4(int n) {
    // Pyramid print:
    for(int i=1; i <=n; i++) {
        for(int j=1; j<=(n-i); j++) {
            cout<<" "<<" ";
        }
        for (int j=1; j<=(2*i-1); j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return;
};

void printPattern5(int n) {
    // inverted pyramid print:
    for(int i=1; i <=n; i++) {
        for(int j=1; j<=(i-1); j++) {
            cout<<" "<<" ";
        }
        for (int j=1; j<=(2*n-2*i+1); j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return;
};

void printPattern6(int n) {
    // Rhombus print:
    for(int i=1; i <=n; i++) {
        for(int j=1; j<=(n-i); j++) {
            cout<<" "<<" ";
        }
        for (int j=1; j<=(2*i-1); j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
       
    for(int i=1; i <=n-1; i++) {
        for(int j=1; j<=(i); j++) {
            cout<<" "<<" ";
        }
        for (int j=1; j<=(2*n-2*i-1); j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return;
};

void printPattern7(int n) {
    // Butterfly print:
    // 1star 
    int i = 1;
    while(i<=n-1) {
        for(int j=1; j<=i; j++) {
            cout<<"*"<<" ";
        };
        for(int j=1; j<=2*n-2*i-1; j++) {
            cout<<" "<<" ";
        };
        for(int j=1; j<=i; j++) {
            cout<<"*"<<" ";
        };
        i++;
        cout<<endl;
    };
    i--;
    
    for(int k = 1; k<=2*n-1; k++) {
        cout<<"*"<<" ";
    };
    
    cout<<endl;
    
    while(i>=1) {
        for(int j=1; j<=i; j++) {
            cout<<"*"<<" ";
        };
        for(int j=1; j<=2*n-2*i-1; j++) {
            cout<<" "<<" ";
        };
        for(int j=1; j<=i; j++) {
            cout<<"*"<<" ";
        };
        i--;
        cout<<endl;
    };
    
};

int main() {
    int n = 5;
    cout<<"Pattern 1:"<<endl;
    printPattern1(n);

    cout<<"Pattern 2:"<<endl;
    printPattern2(n);

    cout<<"Pattern 3:"<<endl;
    printPattern3(n);

    cout<<"Pattern 4:"<<endl;
    printPattern4(n);

    cout<<"Pattern 5:"<<endl;
    printPattern5(n);

    cout<<"Pattern 6:"<<endl;
    printPattern6(n);

    cout<<"Pattern 7:"<<endl;
    printPattern7(n);

    return 0;
}