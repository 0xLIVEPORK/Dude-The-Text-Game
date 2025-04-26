#include <iostream>
#include <cstdlib>
#include <limits>


class Inventory{
  protected:

  std::string inventory[10];
}


class Weapon{
  private:

  std::string name;
  int damage;


  public:

  Weapon(std::string n, int d) : name(n), damage(d) {}

  void describeWeapon()
  {
    std::cout << "Weapon Name: <" << name << ">, Damage: <" << damage << "> \n";
  }

  void setname()
  {
  std::string new_name;
    while (true)
    {
    std::cout << "\nEnter a New Name for your " << name << ": ";
      if(!(getline(std::cin, new_name)))
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
      }

    name = new_name;
    break;
    }
  }

  void setdmg()
  {
  int dmg_factor;
    while (true)
    {
    std::cout << "Pick the Item Capable of Modifying your Weapon's Power";
      for (int i: Inventory)
    damage = dmg_factor;
    break;
    }
  }
};

int main() {

  Weapon Morning_Star("Morning Star", 5);
  Morning_Star.describeWeapon();
  Morning_Star.setname();
  Morning_Star.describeWeapon();

  Weapon Halberd("Halberd", 20);
  Halberd.describeWeapon();



  return EXIT_SUCCESS;
}
