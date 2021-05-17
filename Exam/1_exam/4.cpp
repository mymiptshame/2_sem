unsigned int is_an_invisible_bike(Vehicle* v, unsigned int n){
    int t =0;
    for (int i  =0 ; i<n;i++){
        if ((*(v+i)).is_visible == false and (*(v+i)).type ==1){
            t+=1;
        }
    }
    return t;
}