enum Blocks {titan, wall, rock, dirt, diamant, air, player, enemy, door};
class Object{
    private:
    Blocks type;
    bool hasVelocity;
    public:
    Object(Blocks type){
        this->type = type;
        hasVelocity = false;
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


};