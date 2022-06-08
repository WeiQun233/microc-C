void main(){
    int i = 0;
    switch (i){
        case 1: print (1);
        case 2: print (2);
        case 0: {int j = 1; print (j);}
    }
    i = 5;
    switch (i){
        case 1: print (1);
        case 2: print (2);
        case 0: {int j = 1; print (j);}
        default: print (i);
    }
}