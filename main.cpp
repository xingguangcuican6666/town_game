#include <cctype>
#include <iostream>
#include <optional>
using namespace std;
//dim some settings
std::string emery_name[3] = 
    {"整合运动士兵",
    "整合运动扩散术士",
    "整合运动空降兵"};
std::string fight_emery_name[5] = {nullptr,nullptr,nullptr,nullptr,nullptr};
int emery_attack[3] = {300,500,200};
int fight_emery_attack[5];
int emery_heathy[3] = {2000,5000,1500};
int fight_emery_heathy[5];
int emery_speed[3] = {2,1,5};
int fight_emery_speed[5];
int emery_def[3] = {300,700,300};
int fight_emery_def[5];
int emery_flash_def[3] = {30,50,10};
int fight_emery_flash_def[5];
std::string player_name[4] = {"sharp","Stormeye","黑角","阿米娅"};
std::string fight_player_name[4];
int player_attack[4] = {300,500,200,300};
int fight_player_attack[4];
int player_heathy[4] = {2000,1500,3500,2000};
int fight_player_heathy[4];
int player_speed[4] = {2,5,1,3};
int fight_player_speed[4];
int player_def[4] = {500,300,700,300};
int fight_player_def[4];
int player_flash_def[4] = {30,20,10,30};
int fight_player_flash_def[4];
//get user input
int choose;
int choose_userinput(){
    _input:
    std::cout << "请选择:";
    std::cin >> choose;
    if (isdigit(choose) == false){
        std::cin.clear();
        std::cout << "please input a true vault.";
    }
    return 0;
    goto _input;
}
//init game
int main(){
    //main menu
    std::cout << "";
}

