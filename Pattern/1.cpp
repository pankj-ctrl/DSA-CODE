#include <iostream>
using namespace std;

void print1(int n){
   for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print2 (int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print3 (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
void print4 (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void print5 (int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "* ";
        }
        cout << endl;
    }
}
void print6 (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
void print7 (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int k=0;k<(2*i+1);k++){
            cout << "*";
        }
        for(int l=0;l<n-i;l++){
            cout << " ";
        }
        cout << endl;
    }
}
void print8 (int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>=n-i;j--){
            cout << " ";
        }
        for(int j=0;j<(2*(n-i)-1);j++){
            cout << "*";
        }
        for(int j=n;j>=n-i;j--){
            cout << " ";
        }
        cout << endl;
    }
}

// long way
void print9 (int n){
    for(int i=1;i<=(2*n-1);i++){
        if(i<=n){
        for(int j=0;j<i;j++){
            cout << "* ";
        }
    }
        if(i>n){
            for(int j=i-n;j<n;j++){
                cout << "* ";
            }
        }
        cout << endl;
    }
}

// short way

void print10 (int n){
    for(int i=1; i<=(2*n-1);i++){
        int stars =i;
        if(i>n){
            stars=(2*n-i);
        }
        for(int j=1; j<=stars;j++){
            cout << "* ";
        }
        cout << endl;
    }
}


void print11(int n){
    int start=1;
  for(int i=0;i<n;i++){
    if(i%2==0) {start=1;}
    else {start=0;}
    for(int j=0; j<=i;j++){
        cout << start;
        start=1-start;
    }
    cout << endl;
  }
}

void print12 (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1;
        }
        for(int j=0;j<(2*(n-i)-2);j++){
            cout << " ";
        }
        for(int j=i; j>=0;j--){
            cout << j+1;
        }
        cout << endl;
    }
}

int num=1;
void print13 (int n){
    for(int i=0;i<n;i++){
       
        for(int j=0;j<=i;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void print14 (int n){
    for(int i=0;i<n;i++){
        char alph ='A';
        for(int j=0;j<=i;j++){
            cout << alph <<" ";
            alph++;
        }
        cout << endl;
    }
}

void print15 (int n){
    for(int i=0;i<n;i++){
        char alph ='A';
        for(int j=n;j>i;j--){
            cout << alph <<" ";
            alph++;
        }
        cout << endl;
    }
}

void print16 (int n){
    char alph='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << alph << " ";
        }
        alph++;
        cout << endl;
    }
}

void print17 (int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        // Char
        char alpha='A';
        int breakPoint=(2*i+1)/2;
        for(int k=1;k<=(2*i+1);k++){
            cout << alpha;
            if(k<=breakPoint) alpha++;
            else alpha--;
        }
        // space
        for(int l=0;l<n-i;l++){
            cout << " ";
        }
        cout << endl;
    }
}

void print18 (int n){
    char alph='E';
    for(int i=0;i<n;i++){
        for(char j=(alph-i);j<=alph;j++){
            cout << j;
        }
        cout << endl;
    }
}

void print19 (int n){
    int inispace=0;
    for(int i=0;i<n;i++){
        //star
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }

        // space
        for(int j=0;j<inispace;j++){
            cout << " ";
        }

        //star
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        inispace=inispace+2;

        cout << endl;
    }

    inispace=8;
    for(int i=1;i<=n;i++){
        //star
        for(int j=0;j<i;j++){
            cout << "*";
        }

        // space
        for(int j=0;j<inispace;j++){
            cout << " ";
        }

        //star
        for(int j=0;j<i;j++){
            cout << "*";
        }
        inispace=inispace-2;

        cout << endl;
    }
}

void print20 (int n){
    int inispace = 0;
     inispace=8;
    for(int i=1;i<=n;i++){
        
        //star
        for(int j=0;j<i;j++){
            cout << "*";
        }

        // space
        for(int j=0;j<inispace;j++){
            cout << " ";
        }

        //star
        for(int j=0;j<i;j++){
            cout << "*";
        }
        inispace=inispace-2;

        cout << endl;
    }
     
    inispace=2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        for(int j=0;j<inispace;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        inispace+=2;
        cout << endl;
    }
    
}
int main(){
    int num;
    cin >> num;

    print20(num);
    
    return 0;
}