//
// Created by sunhw on 2020-03-31.
//

#ifndef LAB5_UTPOD_SONG_H
#define LAB5_UTPOD_SONG_H
#include <string>
#include <iostream>

using namespace std;
class Song{
    private:
        string title;
        string artist;
        int size;

    public:
        Song(string _title, string _artist, int _size);

        string getTitle();
        void setTitle(string _title);

        string getArtist();
        void setArtist(string _artist);

        int getSize();
        void setSize(int _size);

        bool operator ==(Song const &rhs);
        bool operator >(Song const &rhs);
        bool operator <(Song const &rhs);

     ~Song();

};




#endif //LAB5_UTPOD_SONG_H
