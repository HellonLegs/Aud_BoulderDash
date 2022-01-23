#pragma once
class Adress{
    private:
        int x;
        int y;
        bool vel;
    public:
    Adress(){
        x = 0;
        y = 0;
    }
    Adress(int x, int y){
        this->x = x;
        this->y = y;
    }
    
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void setX(int x){
        this->x = x;
    }
    void setY(int y){
        this->y = y;
    }
};