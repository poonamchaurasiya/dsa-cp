#include < iostream>
void double hashing insert (key)
{
    if ( table if full)
    return error ;
    probe 1 = h1(key),offset =h2(key);
    while(table [probe]is occuepied)
    probe 1 =(probe 1 + offset )%m;
    table [probe]= key;
}