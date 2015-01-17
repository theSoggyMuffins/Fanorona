// classes example
#include <iostream>
#include <string>

using namespace std;

class piece {

  //Neighboring nodes
  string North;
  string South;
  string East;
  string West;
  string North_East;
  string North_West;
  string South_East;
  string South_West;

  //Black or white
  string team;

  //Board Position
  int pos_vert;
  int pos_horz;

  //Constructor
  void piece(){
  };
};

void movePiece (int new_vert, int new_horz){
  pos_vert = new_vert;
  pos_horz = new_horz;
};

