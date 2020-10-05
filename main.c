int pageCount(int n, int p) {
    int lastpage=n;
    int firstpage=1;
    int turn;
    int midpage=n/2;
    if(p==firstpage||p==lastpage)
        {
            turn=0;
        }
    if(p<=midpage)
         {
            turn=p/2;
         }
    if(p>midpage)
    {
        turn=(n-p)/2;
    }
    return turn; 
}
