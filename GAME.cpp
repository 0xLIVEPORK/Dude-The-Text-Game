#include <iostream>
#include <cstdlib>
#include <limits>


class Inventory{
  protected:

  std::string inventory[10];
};


class Weapon : Inventory{
  private:

  std::string name;
  int damage;


  public:
  // Have to put comments cause my monitor is shit and I need comments to not get confused by the dark balance of my monitor
  // CONSTRUCTORS
  Weapon(std::string n, int d) : name(n), damage(d) {}

  Weapon(std::string n) : name(n), damage(0) {}
  // CONSTRUCTORS

  void describeWeapon()
  {
    std::cout << "Weapon Name: <" << name << ">, Damage: <" << damage << "> \n";
  }

  // SETTERS
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
  inventory; //imma leave this cause Idk jack shit about inheritance
  }
};

int main() {

  Weapon Morning_Star("Morning Star", 5);
  Morning_Star.describeWeapon();
  Morning_Star.setname();
  Morning_Star.describeWeapon();

  Weapon Halberd("Halberd");
  Halberd.describeWeapon();



  return EXIT_SUCCESS;

}
