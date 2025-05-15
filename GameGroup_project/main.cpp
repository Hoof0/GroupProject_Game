#include <iostream>
#include <string>
#include <vector>
#include "StoryElement.h"
#include "Story.h"
#include "Choices.h"
#include "evidence.h"

using namespace std;

void clearScreen() {
    system("clear");
}

int main() {
    vector<evidence*> inventory;
    int evidenceConnectionResult = -1;

    string collectedEvidence;

    for(size_t i = 0; i < inventory.size(); i++){
        collectedEvidence += inventory[i]->getName() + "\n";
    }

    Story* mainEnding = new Story();
    Story* act1Scene = new Story();
    Story* act1Choice1 = new Story();
    Story* act1Choice2 = new Story();
    Story* sideEnding = new Story();
    

    act1Scene->setDescription("Good afternoon passengers. This is your captain speaking. First I'd like to welcome everyone on Finorza Flight 77F. We are currently cruising at an altitude of 33,000 feet at an airspeed of 400 miles per hour. The time is 3:47 pm. The weather looks good, and with the tailwind on our side, we are expecting to land in Tokyo approximately fifteen minutes ahead of schedule. The weather in Tokyo is clear and sunny, with a high of 25 degrees for this afternoon. If the weather cooperates, we should get a great view of the city as we descend. The cabin crew will be coming around in about twenty minutes to offer you a light snack and beverage. I'll talk to you again before we reach our destination. Until then, sit back, relax and enjoy the rest of the flight.\n\nIn the first class cabin…\n\nHoof Kaslei (Player):\n(sigh)\nIt has been so long since I had the time for such a wonderful vacation. Though, if any unfortunate thing happens, I might just hide myself and not interfere… At least…\n\nMika Sato:\n(approaching you with a polished smile)\n“Welcome aboard, Mr. Kaslei. Champagne? Or something stronger to help you… relax?”\n(Her tone is playful, but her eyes linger a beat too long on the empty first-class seat reserved for Victor Kane, who hasn’t boarded yet.)\n\nHoof Kaslei:\n(grunts, stowing his briefcase under the seat)\n“Just water. And save the small talk—I’m here to sleep, not chat.”\n\nMika Sato:\n(pours water into a glass, her locket swinging forward slightly)\n“Of course. Long flights can be draining. But if you change your mind…”\n(She nods to the trolley. A pen with a NovaTech logo—identical to the syringe-pen later used to kill Victor—rolls into view. She quickly tucks it away.)\n\nHoof Kaslei:\n(narrows eyes at the pen)\n“You techies and your gadgets. That thing record conversations too?”\n\nMika Sato:\n(laughs, too sharp)\n“Just a souvenir from a… difficult passenger. Let me know if you need anything else.”\n\n(She moves down the aisle, her smile tightening as she stops at Alex Rivera, slumped in his seat with a half-empty coffee cup.)\n\n…\n\nMika Sato:\n“Another coffee, sir? You’ve been awake since takeoff.”\n\nAlex Rivera:\n(startled, spills coffee on his shirt)\n“N-no! I’m fine. Totally fine. Just… jet lag.”\n\nMika Sato:\n(noticing his trembling hands, softens)\n“...I’ll bring you a blanket. You look like you’ve seen a ghost.”\n\n…\n\nMika Sato:\n“Ms. Voss, your usual gin tonic?”\n\nClara Voss:\n(doesn’t look up, voice icy)\n“Tell Victor I don’t want his ‘courtesy drinks’ when he boards. I’m not here to network.”\n\nMika Sato:\n(pours the drink anyway, placing it beside Clara’s laptop)\n“He’ll be seated in 2A. I’m sure he’ll insist on saying hello.”\n\n…\n\nMika Sato (to Harrison):\n“Whiskey, neat? You’ve barely touched your last one.”\n\nHarrison Gray:\n(slams the notebook shut, revealing a crumpled photo of Victor)\n“What I need is for this flight to land. Before I—”\n(He stops himself, glaring at Victor’s empty seat.)\n\nMika Sato:\n(gently replaces his glass)\n“Some things are best served cold, Mr. Gray.”\n\nThe flight is getting a bit too long. You decided to go to the restroom for some… personal stuff… Then, something caught your attention…\n\nAurora Antonae:\n(adjusting her scarf to hide her platinum streak, voice clipped)\n“First Class is restless. The NovaTech contingent keeps demanding upgrades. As if we stock unicorn caviar.”\n(She loads a tray with champagne flutes, her gloved hands lingering on a NovaTech pen identical to Mika’s syringe-weapon.)\n\nMika Sato:\n(stiffening, her locket chain peeking out)\n“Ignore them. They’ll drown in their own entitlement soon enough.”\n\nAurora Antonae:\n(noticing Mika’s locket, smirking)\n“Still clinging to that? Sentimentality’s a liability, senpai. Especially around vipers like—”\n(She nods toward Victor Kane’s empty seat.)\n\nMika Sato:\n(cutting her off, icy)\n“Focus on the champagne, Aurora. Or I’ll reassign you to diaper duty in Economy.”\n\n(Aurora rolls her eyes and exits the galley, nearly colliding with you, who’s ambling toward the lavatory. She pastes on a flawless smile.)\n\nAurora Antonae:\n(blocking his path with the trolley, saccharine-sweet)\n“Mr. Kaslei! Can I interest you in our exclusive pre-landing martini? Shaken, not stirred—just like your Instagram posts.”\n\nHoof Kaslei:\n(not looking up from his phone)\n“I’m good. Move the cart.”\n\nAurora Antonae:\n(leaning in, faux-concerned)\n“Of course. Though, a word of advice? The lavatory lock jams. Wouldn’t want you trapped inside… unable to call your lawyer.”\n\nHoof Kaslei:\n(finally glancing at her, deadpan)\n“You’re real invested in my bladder. Got a medical degree too?”\n\nAurora Antonae:\n(laughs lightly, adjusting her glove to reveal the scar on her wrist)\n“Just hospitality training. We’re taught to anticipate every need.”\n(She moves aside, her smile fading as he passes.)\n\nYou pause near the galley, pretending to fix your shoe. Inside, Mika and Aurora resume talking.\n\nMika Sato:\n(hissing)\n“Why provoke him? He’s harmless.”\n\nAurora Antonae:\n(snorting)\n“Harmless? Rich brats like him are fleas. But don’t worry—I’ll keep him too distracted to notice your… projects.”\n\nYou enter the lavatory and look around, without any care regarding what you have just heard.\n\nHoof Kaslei: That damn woman… Well, it’s better for me though, I do NOT want to deal with any drama on my holiday, MY PRECIOUS HOLIDAY.\n\nJust as you were grunting about the insufferable attendants, you hear a loud scream.\n\nFlight Attendant: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!!!!!!!!!!!!!!!!! HE’S DEAD!!!!!\n\nYou rush towards the source of the scream.\n\nAurora Antonae:\n“Girl, what's going on her- Oh! Hey Mika! It's that thing again!”\n\nMika Sato:\n(coolly adjusting her scarf over her locket)\n“Yes, I heard the scream. Now what?”\n\nAurora Antonae:\n(shrugging, popping a mint into her mouth)\n“Not my business, senpai. I’m too used to these already. There’s not much we can do when someone suddenly dies mid-air, you know? Unless…”\n(She glances mockingly at the panicking passengers.)\n“…someone on this flight is a policeman on vacation or something.”\n\nMika Sato:\n(deadpan, turning to secure the galley)\n“I’m grateful for your completely helpful words, Ms. Aurora.”\n\n(Aurora winks at you, who’s hovering nearby, and holds up a champagne bottle.)\n\nAurora Antonae (to you):\n“Refill, Mr. Kaslei? Might be your last chance before we all die horribly.”\n\n(The captain’s voice booms over the intercom: “REMAIN CALM. WE ARE DIVERTING TO THE NEAREST AIRPORT.” you stare at Victor’s body, the syringe-pen, and the chaos around him.)\n\nPlayer Choice:");
    
    act1Choice1->setDescription("(You kneel beside Victor, noticing the syringe-pen’s NovaTech branding and a faint bitter almond smell—aconite. Proceed to the mystery.)");
    
    act1Choice2->setDescription("(You retreat to your seat, put on noise-canceling headphones, and mutter: “MY PRECIOUS HOLIDAY.”)\n");
    
    act1Scene->setChoiceses("“Investigate the body.”", act1Choice1);
    
    sideEnding->setChoiceses("“Not my problem. I’m on holiday.”", act1Choice2);

    sideEnding->setEnding(true);
    
    
    // Main game loop
    Story currentStory = *act1Scene;
    bool gameRunning = true;

    while (!currentStory.getEnding() && gameRunning) 
    {
        clearScreen();
        
        // Display current storys
        cout << currentStory.getDescription() << endl << endl;

        // Display choices
        currentStory.display(currentStory.getDescription(), currentStory.getChoiceses());
        
        // Get player choice
        currentStory = currentStory.GetKeyPress(inventory, evidenceConnectionResult);
    
    }
       

    // Display ending
    if (currentStory.getEnding()) {
        clearScreen();
        cout << currentStory.getDescription() << endl << endl;
        cout << "THE END" << endl;
    }

    // Clean up
    delete act1Scene;
    delete act1Choice1;
    delete act1Choice2;
    delete sideEnding;
    
    for (auto ev : inventory) {
        delete ev;
    }
    
    return 0;
}