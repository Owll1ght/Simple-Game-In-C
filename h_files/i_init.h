#define desiredFPS 90
#define elapsedTime 1000/desiredFPS

// player initialize
#define defaultSpeed 16
#define speed (defaultSpeed*defaultSpeed*elapsedTime)/1000

#define playerPositionX 512
#define playerPositionY 256

const int playerSize = 16;

// enemy initialize
#define defaultEnemySpeed 20
#define enemySpeed (defaultEnemySpeed*defaultEnemySpeed*elapsedTime)/1000

#define enemyPositionX 300
#define enemyPositionY 300

const int enemySize = 32;
