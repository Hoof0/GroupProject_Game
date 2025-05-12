#include <string>
using namespace std;

class NPC
{
    private:
        string npc_name;
        string npc_characteristics;
        string dialogue;
    public:
        string get_name() const;
        void set_name(string name);
        string get_characteristics() const;
        void set_characteristics(string characteristics);
        string get_dialogue() const;
        void set_dialogue(string new_dialogue);
};