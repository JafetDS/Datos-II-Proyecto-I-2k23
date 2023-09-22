
#include "virtualMemo.h"




#ifndef SONGS_H
#define SONGS_H



class songs{
    public:

        songs(string);

        virtualMemo *Memo;

        vector<Album> getNext();
        vector<Album> getCurr();
        vector<Album> getPrev();
        vector<Album> passAgetNext();
        vector<Album> passAgetPrev();


        
    private:






};





#endif
