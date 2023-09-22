#include "songs.h"


songs::songs(string FileName){
    this->Memo = new virtualMemo(FileName);
    this->Memo->fullPages();
}



vector<Album> songs::passAgetPrev(){
    int res = this->Memo->getprevPage();
    if(res == -1){
        return {};
    }
    return this->Memo->returnPrev();

}
vector<Album> songs::passAgetNext(){
    int res = this->Memo->getnextPage();
    if(res == -1){
        return {};
    }
    return this->Memo->returnNext();
}


vector<Album> songs::getPrev(){
    return this->Memo->returnNext();
}

vector<Album> songs::getCurr(){
    return this->Memo->returnCurr();
}

vector<Album> songs::getNext(){
    return this->Memo->returnNext();
}
