#include <algoviz/SVG.hpp>
#include "Object.hpp"
#include "Adress.hpp"
#include "maploader.hpp"

class Map{
    private:
        Object* map[40][22];
        Adress playerC;
        Adress exitC;
        SVG *view;
        Image bilder[30][16];
        Image buffer[23];
        int currentFrameX;
        int currentFrameY;
        int playerCircle;
        int diamantCircle;
        int enemyCircle;
    
    public:
    Map(int lvl, SVG *view){
        this->view = view;
        currentFrameX = 0;
        currentFrameY = 0;
        playerCircle = 0;
        diamantCircle = 0;
        enemyCircle = 0;
        
        buffer[0] = Image("img/titan.png", -16, -16, 16, 16, view);
        buffer[1] = Image("img/wall.png", -16, -16, 16, 16, view);
        buffer[2] = Image("img/rock.png", -16, -16, 16, 16, view);
        buffer[3] = Image("img/dirt.png", -16, -16, 16, 16, view);
        buffer[4] = Image("img/diamant0.png", -16, -16, 16, 16, view);
        buffer[5] = Image("img/diamant1.png", -16, -16, 16, 16, view);
        buffer[6] = Image("img/diamant2.png", -16, -16, 16, 16, view);
        buffer[7] = Image("img/diamant3.png", -16, -16, 16, 16, view);
        buffer[8] = Image("img/diamant4.png", -16, -16, 16, 16, view);
        buffer[9] = Image("img/diamant5.png", -16, -16, 16, 16, view);
        buffer[10] = Image("img/diamant6.png", -16, -16, 16, 16, view);
        buffer[11] = Image("img/diamant7.png", -16, -16, 16, 16, view);
        buffer[12] = Image("img/air.png", -16, -16, 16, 16, view);
        buffer[13] = Image("img/rockford_left.png", -16, -16, 16, 16, view);
        buffer[14] = Image("img/rockford_right.png", -16, -16, 16, 16, view);
        buffer[15] = Image("img/rockford_standing0.png", -16, -16, 16, 16, view);
        buffer[16] = Image("img/rockford_standing1.png", -16, -16, 16, 16, view);
        buffer[17] = Image("img/rockford_standing2.png", -16, -16, 16, 16, view);
        buffer[18] = Image("img/enemy0.png", -16, -16, 16, 16, view);
        buffer[19] = Image("img/enemy1.png", -16, -16, 16, 16, view);
        buffer[20] = Image("img/enemy2.png", -16, -16, 16, 16, view);
        buffer[21] = Image("img/enemy3.png", -16, -16, 16, 16, view);
        buffer[22] = Image("img/door.png", -16, -16, 16, 16, view);
        
        loadMap(1, &playerC, &exitC, map)

        for(int i = 0; i < 40; i++){
                    for(int j = 0; j < 22; j++){
                        map[i][j] = new Object(dirt);
                    }
                }
        for(int j = 0; j < 22; j++){
            map[0][j] = new Object(titan);
            map[39][j] = new Object(titan);
        }
        for(int j = 1; j < 39; j++){
            map[j][0] = new Object(titan);
            map[j][21] = new Object(titan);
        }
                playerC = Adress(3, 2);
                exitC = Adress(38,16);
                map[playerC.getX()][playerC.getY()] = new Object(player);
                for(int j = 1; j < 31; j++){
                    map[j][7] = new Object(wall);
                }
                for(int j = 8; j < 39; j++){
                    map[j][14] = new Object(wall);
                }
                map[12][1] = new Object(rock);
                map[19][1] = new Object(rock);
                map[21][1] = new Object(rock);
                map[34][1] = new Object(rock);
                map[2][2] = new Object(rock);
                map[4][2] = new Object(rock);
                map[21][2] = new Object(rock);
                map[25][2] = new Object(rock);
                map[14][3] = new Object(rock);
                map[20][3] = new Object(rock);
                map[22][3] = new Object(rock);
                map[25][3] = new Object(rock);
                map[34][3] = new Object(rock);
                map[1][4] = new Object(rock);
                map[3][4] = new Object(rock);
                map[4][4] = new Object(rock);
                map[14][4] = new Object(rock);
                map[21][4] = new Object(rock);
                map[24][4] = new Object(rock);
                map[28][4] = new Object(rock);
                map[33][4] = new Object(rock);
                map[1][5] = new Object(rock);
                map[4][5] = new Object(rock);
                map[15][5] = new Object(rock);
                map[18][5] = new Object(rock);
                map[27][5] = new Object(rock);
                map[34][5] = new Object(rock);
                map[36][5] = new Object(rock);
                map[37][5] = new Object(rock);
                map[7][6] = new Object(rock);
                map[16][6] = new Object(rock);
                map[22][6] = new Object(rock);
                map[25][6] = new Object(rock);
                map[34][6] = new Object(rock);
                map[36][6] = new Object(rock);
                map[37][6] = new Object(rock);
                map[34][7] = new Object(rock);
                map[37][7] = new Object(rock);
                map[6][8] = new Object(rock);
                map[14][8] = new Object(rock);
                map[16][8] = new Object(rock);
                map[29][8] = new Object(rock);
                map[9][9] = new Object(rock);
                map[24][9] = new Object(rock);
                map[25][9] = new Object(rock);
                map[28][9] = new Object(rock);
                map[30][9] = new Object(rock);
                map[35][9] = new Object(rock);
                map[4][10] = new Object(rock);
                map[7][10] = new Object(rock);
                map[9][10] = new Object(rock);
                map[24][10] = new Object(rock);
                map[27][10] = new Object(rock);
                map[30][10] = new Object(rock);
                map[2][11] = new Object(rock);
                map[8][11] = new Object(rock);
                map[17][11] = new Object(rock);
                map[18][11] = new Object(rock);
                map[19][11] = new Object(rock);
                map[27][11] = new Object(rock);
                map[37][11] = new Object(rock);
                map[8][12] = new Object(rock);
                map[17][12] = new Object(rock);
                map[19][12] = new Object(rock);
                map[28][12] = new Object(rock);
                map[32][12] = new Object(rock);
                map[3][13] = new Object(rock);
                map[17][13] = new Object(rock);
                map[20][13] = new Object(rock);
                map[23][13] = new Object(rock);
                map[38][13] = new Object(rock);
                map[2][15] = new Object(rock);
                map[12][15] = new Object(rock);
                map[21][15] = new Object(rock);
                map[27][15] = new Object(rock);
                map[31][15] = new Object(rock);
                map[2][16] = new Object(rock);
                map[13][16] = new Object(rock);
                map[16][16] = new Object(rock);
                map[25][16] = new Object(rock);
                map[32][16] = new Object(rock);
                map[34][16] = new Object(rock);
                map[35][16] = new Object(rock);
                map[5][17] = new Object(rock);
                map[14][17] = new Object(rock);
                map[20][17] = new Object(rock);
                map[32][17] = new Object(rock);
                map[34][17] = new Object(rock);
                map[35][17] = new Object(rock);
                map[5][18] = new Object(rock);
                map[9][18] = new Object(rock);
                map[18][18] = new Object(rock);
                map[25][18] = new Object(rock);
                map[27][18] = new Object(rock);
                map[35][18] = new Object(rock);
                map[7][19] = new Object(rock);
                map[12][19] = new Object(rock);
                map[14][19] = new Object(rock);
                map[15][19] = new Object(rock);
                map[25][19] = new Object(rock);
                map[27][19] = new Object(rock);
                map[38][19] = new Object(rock);
                map[25][20] = new Object(rock);
                map[28][20] = new Object(rock);
                map[33][20] = new Object(rock);
                map[37][20] = new Object(rock);
                map[10][1] = new Object(diamant);
                map[22][2] = new Object(diamant);
                map[9][8] = new Object(diamant);
                map[27][8] = new Object(diamant);
                map[30][8] = new Object(diamant);
                map[3][9] = new Object(diamant);
                map[32][11] = new Object(diamant);
                map[2][12] = new Object(diamant);
                map[20][12] = new Object(diamant);
                map[22][12] = new Object(diamant);
                map[35][12] = new Object(diamant);
                map[32][13] = new Object(diamant);
                map[16][15] = new Object(diamant);
                map[28][17] = new Object(diamant);
                map[6][18] = new Object(diamant);
                map[28][18] = new Object(diamant);
                map[28][19] = new Object(diamant);
                map[2][20] = new Object(diamant);
                map[7][1] = new Object(air);
                map[13][1] = new Object(air);
                map[29][1] = new Object(air);
                map[11][2] = new Object(air);
                map[30][2] = new Object(air);
                map[36][2] = new Object(air);
                map[11][3] = new Object(air);
                map[3][5] = new Object(air);
                map[14][5] = new Object(air);
                map[4][6] = new Object(air);
                map[24][6] = new Object(air);
                map[2][8] = new Object(air);
                map[11][8] = new Object(air);
                map[37][8] = new Object(air);
                map[15][9] = new Object(air);
                map[26][9] = new Object(air);
                map[25][10] = new Object(air);
                map[30][11] = new Object(air);
                map[5][12] = new Object(air);
                map[10][12] = new Object(air);
                map[11][12] = new Object(air);
                map[37][12] = new Object(air);
                map[2][13] = new Object(air);
                map[19][13] = new Object(air);
                map[1][15] = new Object(air);
                map[1][16] = new Object(air);
                map[12][16] = new Object(air);
                map[2][17] = new Object(air);
                map[22][17] = new Object(air);
                map[23][17] = new Object(air);
                map[4][19] = new Object(air);
                map[9][19] = new Object(air);
                map[35][19] = new Object(air);
                map[7][20] = new Object(air);
                map[13][20] = new Object(air);
                map[23][20] = new Object(air);
        buffer[18] = Image("img/enemy.png", -16, -16, 16, 16, view);
        buffer[19] = Image("img/door.png", -16, -16, 16, 16, view);


        loadMap(1, &playerC, &exitC, map);

        
>>>>>>> Stashed changes
        drawAll();
    }
    
    void drawAll(){
        AlgoViz::collectMessages();
        int x = currentFrameX * 10;
        int y = currentFrameY * 6;
        for(int i = 0; i < 30; i++){
            for(int j = 0; j < 16; j++){
                switch (map[i + x][j + y]->getType()){
                    case titan :
                        bilder[i][j] = buffer[0];
                        bilder[i][j].moveTo(i * 16, j * 16);
                        break;
                    case wall :
                        bilder[i][j] = buffer[1];
                        bilder[i][j].moveTo(i * 16, j * 16);
                        break;
                    case rock :
                        bilder[i][j] = buffer[2];
                        bilder[i][j].moveTo(i * 16, j * 16);
                        break;
                    case dirt :
                        bilder[i][j] = buffer[3];
                        bilder[i][j].moveTo(i * 16, j * 16);
                        break;
                    case diamant :
                        switch (diamantCircle){
                            case 0 :
                                bilder[i][j] = buffer[4];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 1 :
                                bilder[i][j] = buffer[5];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 2 :
                                bilder[i][j] = buffer[6];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 3 :
                                bilder[i][j] = buffer[7];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 4 :
                                bilder[i][j] = buffer[8];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 5 :
                                bilder[i][j] = buffer[9];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 6 :
                                bilder[i][j] = buffer[10];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 7 :
                                bilder[i][j] = buffer[11];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                        }
                        break;
                    case air :
                        bilder[i][j] = buffer[12];
                        bilder[i][j].moveTo(i * 16, j * 16);
                        break;
                    case player :
                        switch (playerCircle){
                            case -2 :
                                bilder[i][j] = buffer[13];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case -1 :
                                bilder[i][j] = buffer[14];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 0 :
                                bilder[i][j] = buffer[15];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 1 :
                                bilder[i][j] = buffer[16];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 2 :
                                bilder[i][j] = buffer[17];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                        }
                        break;
                    case enemy :
                        switch (playerCircle){
                            case 0 :
                                bilder[i][j] = buffer[18];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 1 :
                                bilder[i][j] = buffer[19];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 2 :
                                bilder[i][j] = buffer[20];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                            case 3 :
                                bilder[i][j] = buffer[21];
                                bilder[i][j].moveTo(i * 16, j * 16);
                                break;
                        }
                        break;
                    case door :
                    bilder[i][j] = buffer[22];
                    bilder[i][j].moveTo(i * 16, j * 16);
                        break;
                }
            }
        }
        diamantCircle = (diamantCircle + 1) % 8;
        enemyCircle = (diamantCircle + 1) % 4;
        AlgoViz::flushMessages();
    }
    
    int movePlayer(int dx, int dy, string last){
        int p = 0;
        
        switch (dx){
            case 0 : 
                if(playerCircle >= 0){
                    playerCircle = (playerCircle + 1) % 3;
                }else{
                    playerCircle = 0;
                }
                break;
            case -1 : 
                playerCircle = -2;
                break;
            case 1 : 
                playerCircle = -1;
                break;
        }
        
        Object* player = map[playerC.getX()][playerC.getY()];
        Object* target = map[playerC.getX() + dx][playerC.getY() + dy];
        Object* targetx = map[playerC.getX() + dx][playerC.getY()];
        Object* target2x = map[playerC.getX() + (2 * dx)][playerC.getY()];

        if(target->getType() != titan && target->getType() != wall && !(targetx->getType() == rock && target2x->getType() == rock))
        {
            if(targetx->getType() == rock && target2x->getType() == air)
            {
                AlgoViz::sleep(200);
                if(view->lastKey() == last)
                {
                    map[playerC.getX()][playerC.getY()] = target2x;
                    map[playerC.getX() + (2 * dx)][playerC.getY()] = targetx;
                    map[playerC.getX() + dx][playerC.getY()] = player;
                    playerC.setX(playerC.getX() + dx);
                    playerC.setY(playerC.getY());
                }
            }
            else if(target->getType() == diamant)
            {
                p = 1;
                delete map[playerC.getX() + dx][playerC.getY() + dy];
                map[playerC.getX() + dx][playerC.getY() + dy] = player;
                map[playerC.getX()][playerC.getY()] = new Object(air);
                playerC.setX(playerC.getX() + dx);
                playerC.setY(playerC.getY() + dy);
            }
            else if(target->getType() == dirt)
            {
                delete map[playerC.getX() + dx][playerC.getY() + dy];
                map[playerC.getX() + dx][playerC.getY() + dy] = player;
                map[playerC.getX()][playerC.getY()] = new Object(air);
                playerC.setX(playerC.getX() + dx);
                playerC.setY(playerC.getY() + dy);
            }
            else if(target->getType() == air)
            {
                map[playerC.getX()][playerC.getY()] = target;
                map[playerC.getX() + dx][playerC.getY() + dy] = player;
                playerC.setX(playerC.getX() + dx);
                playerC.setY(playerC.getY() + dy);
            }else if(target->getType() == door){
                p = -1;
                delete map[playerC.getX() + dx][playerC.getY() + dy];
                map[playerC.getX() + dx][playerC.getY() + dy] = player;
                map[playerC.getX()][playerC.getY()] = new Object(air);
                playerC.setX(playerC.getX() + dx);
                playerC.setY(playerC.getY() + dy);
            }    
            
            if(playerC.getX() == 25 && dx == 1 && currentFrameX == 0){
                currentFrameX = 1;
            }else if(playerC.getX() == 16 && dx == -1 && currentFrameX == 1){
                currentFrameX = 0;
            }else if(playerC.getY() == 14 && dy == 1 && currentFrameY == 0){
                currentFrameY = 1;
            }else if(playerC.getY() == 7 && dy == -1 && currentFrameY == 1){
                currentFrameY = 0;
            }
        }
        return p;
    }
    
    void moveEnemys(){
        for(int i = 0; i < 40; i++){
            for(int j = 0; j < 22; j++){
                Object *enemyToMove = map[i][j];
                if(enemyToMove->getType() == enemy){
                    if(enemyToMove->getDx() == 1){
                        if(map[i][j + 1]->getType() == air){
                            map[i][j]->setDx(0);
                            map[i][j]->setDy(1);
                            map[i][j] = map[i][j + 1];
                            map[i][j + 1] = enemyToMove;
                        }else if(map[i + 1][j]->getType() == air){
                            map[i][j] = map[i + 1][j];
                            map[i + 1][j] = enemyToMove;
                        }else if(map[i][j - 1]->getType() == air){
                            map[i][j]->setDx(0);
                            map[i][j]->setDy(-1);
                            map[i][j] = map[i][j - 1];
                            map[i][j - 1] = enemyToMove;
                        }else if(map[i - 1][j]->getType() == air){
                            map[i][j]->setDx(-1);
                            map[i][j] = map[i - 1][j];
                            map[i - 1][j] = enemyToMove;
                        }
                    }else if(enemyToMove->getDy() == 1){
                        if(map[i - 1][j]->getType() == air){
                            map[i][j]->setDx(-1);
                            map[i][j]->setDy(0);
                            map[i][j] = map[i - 1][j];
                            map[i - 1][j] = enemyToMove;
                        }else if(map[i][j + 1]->getType() == air){
                            map[i][j] = map[i][j + 1];
                            map[i][j + 1] = enemyToMove;
                        }else if(map[i + 1][j]->getType() == air){
                            map[i][j]->setDx(1);
                            map[i][j]->setDy(0);
                            map[i][j] = map[i + 1][j];
                            map[i + 1][j] = enemyToMove;
                        }else if(map[i][j - 1]->getType() == air){
                            map[i][j]->setDy(-1);
                            map[i][j] = map[i][j - 1];
                            map[i][j - 1] = enemyToMove;
                        }
                    }else if(enemyToMove->getDx() == -1){
                        if(map[i][j - 1]->getType() == air){
                            map[i][j]->setDx(0);
                            map[i][j]->setDy(-1);
                            map[i][j] = map[i][j - 1];
                            map[i][j - 1] = enemyToMove;
                        }else if(map[i - 1][j]->getType() == air){
                            map[i][j] = map[i - 1][j];
                            map[i - 1][j] = enemyToMove;
                        }else if(map[i][j + 1]->getType() == air){
                            map[i][j]->setDx(0);
                            map[i][j]->setDy(1);
                            map[i][j] = map[i][j + 1];
                            map[i][j + 1] = enemyToMove;
                        }else if(map[i + 1][j]->getType() == air){
                            map[i][j]->setDx(1);
                            map[i][j] = map[i + 1][j];
                            map[i + 1][j] = enemyToMove;
                        }
                    }else if(enemyToMove->getDy() == -1){
                        if(map[i + 1][j]->getType() == air){
                            map[i][j]->setDx(1);
                            map[i][j]->setDy(0);
                            map[i][j] = map[i + 1][j];
                            map[i + 1][j] = enemyToMove;
                        }else if(map[i][j - 1]->getType() == air){
                            map[i][j] = map[i][j - 1];
                            map[i][j - 1] = enemyToMove;
                        }else if(map[i - 1][j]->getType() == air){
                            map[i][j]->setDx(-1);
                            map[i][j]->setDy(0);
                            map[i][j] = map[i - 1][j];
                            map[i - 1][j] = enemyToMove;
                        }else if(map[i][j + 1]->getType() == air){
                            map[i][j]->setDy(1);
                            map[i][j] = map[i][j + 1];
                            map[i][j + 1] = enemyToMove;
                        }
                    }
                }
            }
        }
    }
    
    bool checkDeath(){
        Object *oben = map[playerC.getX()][playerC.getY() - 1];
        Object *unten = map[playerC.getX()][playerC.getY() + 1];
        Object *rechts = map[playerC.getX() + 1][playerC.getY()];
        Object *links = map[playerC.getX() - 1][playerC.getY()];
        if(oben->getType() == rock || oben->getType() == diamant){
            if(oben->getVelocity()){
                for(int i = playerC.getX() - 1; i <= playerC.getX() + 1; i++){
                    for(int j = playerC.getY() - 1; j <= playerC.getY() + 1; j++){
                        delete map[i][j];
                        map[i][j] = new Object(air);
                        return true;
                    }
                }
            }
        }
        if(oben->getType() == enemy || unten->getType() == enemy || rechts->getType() == enemy || links->getType() == enemy){
            for(int i = playerC.getX() - 1; i <= playerC.getX() + 1; i++){
                for(int j = playerC.getY() - 1; j <= playerC.getY() + 1; j++){
                    delete map[i][j];
                    map[i][j] = new Object(air);
                    return true;
                }
            }
        }
        return false;
    }
    
    void checkFalling(){
        for(int x = 1; x < 39; x++){
            for(int y = 1; y < 21; y++){
                if(map[x][y]->getType() == rock || map[x][y]->getType() == diamant)
                {
                    if(map[x][y]->getVelocity() && map[x][y + 1]->getType() == enemy){
                        for(int i = x - 1; i <= x + 1; i++){
                            for(int j = y - 1; j <= y + 1; j++){
                                delete map[i][j];
                                map[i][j] = new Object(air);
                            }
                        }
                    }
                    else if(map[x][y + 1]->getType() == air)
                    {
                        Object *swap = map[x][y];
                        map[x][y] = map[x][y + 1];
                        map[x][y + 1] = swap;
                        map[x][y + 1]->setVelocity(true);
                    }
                    else if(map[x][y + 1]->getType() == rock || map[x][y + 1]->getType() == diamant || map[x][y + 1]->getType() == wall)
                    {
                        if(map[x - 1][y]->getType() == air && map[x - 1][y + 1]->getType() == air)
                        {
                            Object *swap = map[x][y];
                            map[x][y] = map[x - 1][y + 1];
                            map[x - 1][y + 1] = swap;
                            map[x - 1][y + 1]->setVelocity(true);
                        }
                        else if(map[x + 1][y]->getType() == air && map[x + 1][y + 1]->getType() == air)
                        {
                            Object *swap = map[x][y];
                            map[x][y] = map[x + 1][y + 1];
                            map[x + 1][y + 1] = swap;
                            map[x + 1][y + 1]->setVelocity(true);
                        }
                    }else if(map[x][y + 1]->getType() == player){
                        
                    }else
                    {
                        map[x][y]->setVelocity(false);
                    }
                }
            }
        }
    }
    void enableExit(){
        delete map[exitC.getX()][exitC.getY()];
        map[exitC.getX()][exitC.getY()] = new Object(door);
    }
    
};