struct Over {
    Stack2 s2;
    char eachOverRunWicket[6];
    int totalRunInEachOver[6];
   
    Over() {
        for(int i = 0; i < 6; i++) {
            eachOverRunWicket[i] = '0';
            totalRunInEachOver[i] = 0;
        }
    }

    int TotalRunInEachOver() {
        int a = 0;
        int b = 0;
        int c=0;
        for(int i = 0; i < 6; i++) {
            if (eachOverRunWicket[i] >= '0' && eachOverRunWicket[i] <= '9'){
                s2.push(eachOverRunWicket[i] - '0');

            }
            if(s2.top==1){
                a=s2.pop();
                b=s2.pop();
                c=a+b;
                s2.push(c);

            }
        }
       
       
       int popedvalues=s2.pop();
       return popedvalues;

         
    }

   

};

int main() {
    int n;
    cout << "Enter the number of overs played: ";
    cin >> n;

    Over o[n];
    cout << "Enter runs and wickets for each over:"<<endl;
    for(int i = 0; i < n; i++) {
        cout << "Over " << i + 1 << ":";
        for(int j = 0; j < 6; j++) {
            cin >> o[i].eachOverRunWicket[j];
        }
    }
   
   
    cout<<endl;
    cout<<endl;

    cout << "Runs and wickets for each over:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Over " << i + 1 << ":";
        for(int j = 0; j < 6; j++) {
            cout << o[i].eachOverRunWicket[j] << " ";
        }
        cout << endl;
    }
   
    int num=0;
    int max=0;
    int over=0;
   
   

    cout << "total Runs each over:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Over " << i + 1 << ":";
        cout << o[i].TotalRunInEachOver() << " ";
        cout << endl;
    }
   
    cout<<endl;
    cout<<endl;
   
   
    cout << "maximum Runs scoreed in over: ";
    for(int i = 0; i < n; i++) {
        if(max<o[i].TotalRunInEachOver()){
            max=o[i].TotalRunInEachOver();
            over=i+1;
        }
       
    }
    cout << over<< " ";
    cout << endl;
   
    cout << "Number of maidenOver: ";
    for(int i = 0; i < n; i++) {
       
        if(o[i].TotalRunInEachOver()==0){
            num++;
        }
    }
    cout << num << " ";
        cout << endl;

    return 0;
}
