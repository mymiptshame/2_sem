void rip_samurai(const Track *all_songs, unsigned int all_n, Track **in_memoriam_johnny, unsigned int* johnny_n){
    *johnny_n = 0;
    int t = 0;
    for (int i = 0; i<all_n;i++){
        if ((*(all_songs+i)).author == 0){
            *johnny_n = *johnny_n + 1;
        }
    }
    (*in_memoriam_johnny) =  new Track [*johnny_n];
    for (int i = 0; i<all_n ;i++){
        if ((*(all_songs+i)).author == 0){
            *(*in_memoriam_johnny+t) = (*(all_songs+i));
            t+=1;
        }
    }

}