enum Blocks {titan, wall, rock, dirt, diamant, air, player, enemy, door};
class Object{
    private:
    Blocks type;
    bool hasVelocity;
    int dx;
    int dy;
    public:
    Object(Blocks type){
        this->type = type;
        hasVelocity = false;
        dx = 0;
        dy = 0;
    }
    Blocks getType(){
        return type;
    }
    void setVelocity(bool vel){
        hasVelocity = vel;
    }
    bool getVelocity(){
        return hasVelocity;
    }
    void setDx(int dx){
        this->dx = dx;
    }
    void setDy(int dy){
        this->dy = dy;
    }
    int getDx(){
        return dx;
    }
    int getDy(){
        return dy;
    }
};