
#include "ClapTrap.cpp"

ClapTrap::ClapTrap() {
    hp = 100;
    energy = 50;
    level = 1;
    name = "default";
    std::cout<<"ClapTrap Default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string robo_name) : name(robo_name) {
    hp = 100;
    energy = 50;
    level = 1;
    std::cout<<"ClapTrap constructor with param NAME for robot "<<robo_name<<std::endl;
}

int ClapTrap::getHP() const {
    return hp;
}

int ClapTrap::getEnergy() const {
    return energy;
}

int ClapTrap::getLevel() const {
    return level;
}

const std::string& ClapTrap::getName() const {
    return name;
}

ClapTrap::ClapTrap(ClapTrap const &obj) {
    hp = obj.getHP();
    energy = obj.getEnergy();
    level = obj.getLevel();
    name = obj.getName();
    std::cout<<"ClapTrap copy onstructor for robot "<<name<<std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout<<"Delete robot ClapTrap "<<name<<std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &obj) {
    hp = obj.getHP();
    energy = obj.getEnergy();
    level = obj.getLevel();
    name = obj.getName();
    std::cout<<"ClapTrap Operator = called for robot "<<name<<std::endl;
    return (*this);
}

void ClapTrap::setHP(int _hp) {
    hp = _hp;
}

void ClapTrap::setEnergy(int en) {
    energy = en;
}

void ClapTrap::setLevel(int lv) {
    level = lv;
}

void ClapTrap::setName(const std::string &_name) {
    name = _name;
}

bool ClapTrap::isDead() const {
    return (hp <= 0);
}

bool ClapTrap::haveEnoughEnergy(int action_energy) const {
    return (energy >= action_energy);
}

void ClapTrap::takeDamage(unsigned int amount) {
    hp -= amount - arm_reduce_damage;
    if (isDead())
    {
        std::cout<<name<<" destroyed ClapTrap!"<<std::endl;
        hp = 0;
    }
    else
        std::cout<<name<<" hp = "<<hp<<std::endl;
}

void ClapTrap::wasteEnergy(int amount) {
    if (!isDead())
    {
        energy -= amount;
        if (energy < 0)
        {
            energy = 0;
            std::cout<<"Energy is null in robot "<<name<<std::endl;
        }
        else
            std::cout<<"Energy in robot "<<name<<" = "<<energy<<std::endl;
    }
}

void ClapTrap::rangedAttack(std::string const &target) {
    if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
    {
        std::cout<<"ClapTrap FR4G-TP "<<name<<" attacks "<<target<<" at range, causing "
                 <<range_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
        level++;
        takeDamage(range_damage);
        wasteEnergy(ATTACK_ENERGY);
    }
    else
        std::cout<<"Not enough energy to make ranged attack!"<<std::endl;
}

void ClapTrap::maleeAttack(std::string const &target) {
    if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
    {
        std::cout<<"ClapTrap FR4G-TP "<<name<<" attacks "<<target<<" with malee, causing "
                 <<hand_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
        level++;
        takeDamage(hand_damage);
        wasteEnergy(ATTACK_ENERGY);
    }
    else
        std::cout<<"Not enough energy to make malee attack!"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!isDead() && haveEnoughEnergy(REPAIR_ENERGY))
    {
        wasteEnergy(REPAIR_ENERGY);
        hp += amount;
        if (hp > max_hp)
            hp = 100;
        std::cout<<"Repairing ClapTrap "<<name<<" on amount "<<amount<<std::endl;
        std::cout<<"New hp of "<<name<<" = "<<hp<<std::endl;
    }
    else
        std::cout<<"Not enough energy to be repaired!"<<std::endl;
}

void ClapTrap::ramAttack(std::string const &target) {
    if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
    {
        std::cout<<"ClapTrap FR4G-TP "<<name<<" attacks "<<target<<" with ram, causing "
                 <<ram_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
        level++;
        takeDamage(ram_damage);
        wasteEnergy(ATTACK_ENERGY);
    }
    else
        std::cout<<"Not enough energy to make ram attack!"<<std::endl;
}

void ClapTrap::sniperAttack(std::string const &target) {
    if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
    {
        std::cout<<"ClapTrap FR4G-TP "<<name<<" attacks "<<target<<" with sniper, causing "
                 <<sniper_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
        level++;
        takeDamage(sniper_damage);
        wasteEnergy(ATTACK_ENERGY);
    }
    else
        std::cout<<"Not enough energy to make malee attack!"<<std::endl;
}

void ClapTrap::magnetAttack(std::string const &target) {
    if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
    {
        std::cout<<"ClapTrap FR4G-TP "<<name<<" attacks "<<target<<" with magnet, causing "
                 <<hand_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
        level++;
        takeDamage(hand_damage);
        wasteEnergy(ATTACK_ENERGY);
    }
    else
        std::cout<<"Not enough energy to make magnet attack!"<<std::endl;
}

void ClapTrap::printPrivate() {
    std::cout<<std::endl<<"{ name="<<name<<std::endl;
    std::cout<<" HP = "<<hp<<std::endl;
    std::cout<<" ENERGY = "<<energy<<std::endl;
    std::cout<<" LVL = "<<level<<" }"<<std::endl<<std::endl;
}