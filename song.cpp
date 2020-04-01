//
// Created by sunhw on 2020-03-31.
//
#include "song.h"

Song::Song(string _title, string _artist, int _size){
    title = _title;
    artist = _artist;
    size = _size;
}
string Song::getTitle(){
    return title;
}

void Song::setTitle(string _title) {
    title = _title;
}

string Song::getArtist(){
    return artist;
}

void Song::setArtist(string _artist) {
    artist = _artist;
}

int Song::getSize() {
    return size;
}

void Song::setSize(int _size) {
    size = _size;
}

bool Song::operator ==(Song const &rhs){
    return(title == rhs.title && artist == rhs.artist && size == rhs.size);
}

bool Song::operator >(Song const &rhs){
    if(artist != rhs.artist){
        return (artist.compare(rhs.artist) == 1);
    }
    else if(title != rhs.title) {
        return (title.compare(rhs.title) == 1);
    }
    else if(size != rhs.size){
        return(size > rhs.size);
    }
    else{
        return false;
    }
}

bool Song::operator <(Song const &rhs){
    if(artist != rhs.artist){
        return (artist.compare(rhs.artist) == -1);
    }
    else if(title != rhs.title) {
        return (title.compare(rhs.title) == -1);
    }
    else if(size != rhs.size){
        return(size < rhs.size);
    }
    else{
        return false;
    }
}