#include < iostream>
struct my hash {
    int  * arr ;
    int cap, size ;
    myHash (int c )
    {
        cap = c;
        size =0;
        arr = new int [cap];
        for (int i +0; i<cap; i++)
    arr [i] =-1;
    }
    int hash (int key)
    {
        return key %cap;
    }
    bool  search (int key ){
        int h = hash(key);
        int i =h;
        while (arr [i] ! = -1){
            if (arr [i] == key)
            return true ;
             
            i =( i  +  1) % cap;
            if (i ==  h)
            return false ;
        }
        bool insert ( int key ){
            if (size == cap )
            return false ;

            itn i = hash (key);

            while ( arr [i] ! = -1 && arr [i] ! =-2 && arr [i]  != key)
            i = ( i + 1) % cap ;
            
            if (arr [i] == key)
            return false ;
            arr [i] = key;
            size ++;
            return true;

        }
        bool erase (int key ){
            int i =hash (key);
            int h = i;

            while (arr[i] ! = -1){
                if ( arr [i] == key ){
                    arr [i] = -2;
                    return true ;
                }
                i = ( i+ 1) % cap ;
                if ( if == h ) 
                return false ;
            }
        };
        int main () {
            myHash h(7);
            h. insert(10);
            h.insert (20);
            h.insert (15);

            cout << h.search(20) << end1;
            cout  << h.search(25) << end1;
            
            h.erase(20);
            cout << h. search(20) << end1;
            return 0;
        }
    }
    