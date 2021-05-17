bool rewrite_memories(int* begin, int* end, int* fake, unsigned int n){
    //cout << begin <<" "<< end << " "<< fake <<  " "<<n;
    if ((end - begin+1) != n){
        if ((end - begin+1) > n){
            for (int i = 0; i<n; i++){
                *(begin+i) = *(fake+i);
            }
        }
        else{
            for (int i = 0; i<=end - begin;i++){
                *(begin+i) = *(fake+i);
            }
        }
        return false;
    }
    else{
        for (int i = 0; i<n; i++) {
            *(begin + i) = *(fake + i);
        }
        return true;
    }
}