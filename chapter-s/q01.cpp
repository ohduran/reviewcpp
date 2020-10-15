#include <iostream>
#include <string>


enum class MonsterType
{
    MONSTER_TYPE_OGRE,
    MONSTER_TYPE_SLIME,
};

struct Monster
{
    MonsterType type;
    std::string name;
    int health;
};

std::string getMonsterTypeString(MonsterType type)
{
    return type == MonsterType::MONSTER_TYPE_OGRE ? "Ogre" : "Slime";
}

void printMonster(Monster monster)
{
    
    std::cout << "This " << getMonsterTypeString(monster.type) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster torg = {MonsterType::MONSTER_TYPE_OGRE, "Torg", 145};
    Monster blurp = {MonsterType::MONSTER_TYPE_SLIME, "Blurp", 23};

    printMonster(torg);
    printMonster(blurp);
    return 0;
}