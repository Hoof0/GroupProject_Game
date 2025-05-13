#include <iostream>
#include <string>
#include <vector>
#include <limits>
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
    int evidenceConnectionResult = -1; // Default to -1 (no connection found)

    // Create evidence objects
    evidence* victimBody = new evidence();
    victimBody->setDescription("Victor Kane died from poison administered via a syringe-pen. There was a faint bitter almond smell—suggesting aconite. The syringe-pen has a NovaTech logo.");
    victimBody->setName("Victim's Body");
    victimBody->setIDnumber(0);
    victimBody->setHasFound(false);

    evidence* mikaPen = new evidence();
    mikaPen->setDescription("A pen with a NovaTech logo that Mika Sato quickly tucked away when you noticed it. It looks identical to the syringe-pen found in Victor's neck.");
    mikaPen->setName("Mika's NovaTech Pen");
    mikaPen->setIDnumber(0); // Same ID as victimBody for connection
    mikaPen->setHasFound(false);

    evidence* auroraScar = new evidence();
    auroraScar->setDescription("A noticeable scar on Aurora's wrist, briefly visible when she adjusted her glove while talking to you.");
    auroraScar->setName("Aurora's Scar");
    auroraScar->setIDnumber(1);
    auroraScar->setHasFound(false);

    evidence* mikaLocket = new evidence();
    mikaLocket->setDescription("A locket worn by Mika that seems to have significance. It was visible when she was talking with Aurora in the galley.");
    mikaLocket->setName("Mika's Locket");
    mikaLocket->setIDnumber(2);
    mikaLocket->setHasFound(false);

    evidence* auroraPen = new evidence();
    auroraPen->setDescription("A NovaTech pen identical to Mika's that Aurora handled in the galley.");
    auroraPen->setName("Aurora's NovaTech Pen");
    auroraPen->setIDnumber(3);
    auroraPen->setHasFound(false);

    evidence* poisonConclusion = new evidence();
    poisonConclusion->setDescription("The NovaTech pen was used as a syringe to deliver aconite poison to Victor Kane. The pen belonged to one of the flight attendants.");
    poisonConclusion->setName("Murder Weapon Conclusion");
    poisonConclusion->setIDnumber(4);
    poisonConclusion->setHasFound(false);

    evidence* flightAttendantConversation = new evidence();
    flightAttendantConversation->setDescription("You overheard Mika and Aurora talking in the galley. They seemed to have a tense relationship and Aurora referred to Mika as 'senpai'. Aurora mentioned keeping you distracted for Mika's 'projects'.");
    flightAttendantConversation->setName("Suspicious Conversation");
    flightAttendantConversation->setIDnumber(5);
    flightAttendantConversation->setHasFound(false);

    // Create Story objects for each scene
    Story* gameOver = new Story("GAME OVER: \"Ignorance is (Bitter) Bliss\"\n\nThe plane lands hours later. Police arrest Aurora Antonae—framed by Mika via planted evidence. Headlines scream: \"NOVATECH CEO MURDERED BY DISGRUNTLED FLIGHT ATTENDANT.\"\n\nHoof Kaslei (ending narration):\n(sipping a tropical drink on a beach, scrolling past the news)\n\"Huh. Guess rich guys do have enemies. …Wait, was that the lady with the scar? Whatever.\"", vector<Choices>(), true);
    
    Story* introScene = new Story("Good afternoon passengers. This is your captain speaking. First I'd like to welcome everyone on Finorza Flight 77F. We are currently cruising at an altitude of 33,000 feet at an airspeed of 400 miles per hour. The time is 3:47 pm. The weather looks good, and with the tailwind on our side, we are expecting to land in Tokyo approximately fifteen minutes ahead of schedule. The weather in Tokyo is clear and sunny, with a high of 25 degrees for this afternoon. If the weather cooperates, we should get a great view of the city as we descend. The cabin crew will be coming around in about twenty minutes to offer you a light snack and beverage. I'll talk to you again before we reach our destination. Until then, sit back, relax and enjoy the rest of the flight.", vector<Choices>());
    
    Story* firstClassCabin = new Story("In the first class cabin…\n\nHoof Kaslei (Player): \n(sigh)\nIt has been so long since I had the time for such a wonderful vacation. Though, if any unfortunate thing happens, I might just hide myself and not interfere… At least…\n\nMika Sato approaches you with a polished smile.\n\nMika Sato: \"Welcome aboard, Mr. Kaslei. Champagne? Or something stronger to help you… relax?\"\nHer tone is playful, but her eyes linger a beat too long on the empty first-class seat reserved for Victor Kane, who hasn't boarded yet.", vector<Choices>());
    
    Story* mikaInteraction = new Story("Hoof Kaslei:\n(grunts, stowing his briefcase under the seat)\n\"Just water. And save the small talk—I'm here to sleep, not chat.\"\n\nMika Sato:\n(pours water into a glass, her locket swinging forward slightly)\n\"Of course. Long flights can be draining. But if you change your mind…\"\n(She nods to the trolley. A pen with a NovaTech logo—identical to the syringe-pen later used to kill Victor—rolls into view. She quickly tucks it away.)\n\nHoof Kaslei:\n(narrows eyes at the pen)\n\"You techies and your gadgets. That thing record conversations too?\"\n\nMika Sato:\n(laughs, too sharp)\n\"Just a souvenir from a… difficult passenger. Let me know if you need anything else.\"", vector<Choices>());
    
    Story* observeOtherPassengers = new Story("Mika moves down the aisle, her smile tightening as she stops at Alex Rivera, slumped in his seat with a half-empty coffee cup.\n\nMika Sato:\n\"Another coffee, sir? You've been awake since takeoff.\"\n\nAlex Rivera:\n(startled, spills coffee on his shirt)\n\"N-no! I'm fine. Totally fine. Just… jet lag.\"\n\nMika Sato:\n(noticing his trembling hands, softens)\n\"...I'll bring you a blanket. You look like you've seen a ghost.\"\n\nNext, she approaches Clara Voss.\n\nMika Sato:\n\"Ms. Voss, your usual gin tonic?\"\n\nClara Voss:\n(doesn't look up, voice icy)\n\"Tell Victor I don't want his 'courtesy drinks' when he boards. I'm not here to network.\"\n\nMika Sato:\n(pours the drink anyway, placing it beside Clara's laptop)\n\"He'll be seated in 2A. I'm sure he'll insist on saying hello.\"\n\nFinally, she approaches Harrison Gray.\n\nMika Sato:\n\"Whiskey, neat? You've barely touched your last one.\"\n\nHarrison Gray:\n(slams the notebook shut, revealing a crumpled photo of Victor)\n\"What I need is for this flight to land. Before I—\"\n(He stops himself, glaring at Victor's empty seat.)\n\nMika Sato:\n(gently replaces his glass)\n\"Some things are best served cold, Mr. Gray.\"", vector<Choices>());
    
    Story* needRestroom = new Story("The flight is getting a bit too long. You decided to go to the restroom for some… personal stuff…", vector<Choices>());
    
    Story* overhearConversation = new Story("Something caught your attention as you approach the restroom...\n\nAurora Antonae:\n(adjusting her scarf to hide her platinum streak, voice clipped)\n\"First Class is restless. The NovaTech contingent keeps demanding upgrades. As if we stock unicorn caviar.\"\n(She loads a tray with champagne flutes, her gloved hands lingering on a NovaTech pen identical to Mika's syringe-weapon.)\n\nMika Sato:\n(stiffening, her locket chain peeking out)\n\"Ignore them. They'll drown in their own entitlement soon enough.\"\n\nAurora Antonae:\n(noticing Mika's locket, smirking)\n\"Still clinging to that? Sentimentality's a liability, senpai. Especially around vipers like—\"\n(She nods toward Victor Kane's empty seat.)\n\nMika Sato:\n(cutting her off, icy)\n\"Focus on the champagne, Aurora. Or I'll reassign you to diaper duty in Economy.\"", vector<Choices>());
    
    Story* auroraInteraction = new Story("Aurora rolls her eyes and exits the galley, nearly colliding with you, who's ambling toward the lavatory. She pastes on a flawless smile.\n\nAurora Antonae:\n(blocking your path with the trolley, saccharine-sweet)\n\"Mr. Kaslei! Can I interest you in our exclusive pre-landing martini? Shaken, not stirred—just like your Instagram posts.\"\n\nHoof Kaslei:\n(not looking up from your phone)\n\"I'm good. Move the cart.\"\n\nAurora Antonae:\n(leaning in, faux-concerned)\n\"Of course. Though, a word of advice? The lavatory lock jams. Wouldn't want you trapped inside… unable to call your lawyer.\"\n\nHoof Kaslei:\n(finally glancing at her, deadpan)\n\"You're real invested in my bladder. Got a medical degree too?\"\n\nAurora Antonae:\n(laughs lightly, adjusting her glove to reveal the scar on her wrist)\n\"Just hospitality training. We're taught to anticipate every need.\"\n(She moves aside, her smile fading as you pass.)", vector<Choices>());
    
    Story* eavesdropMore = new Story("You pause near the galley, pretending to fix your shoe. Inside, Mika and Aurora resume talking.\n\nMika Sato:\n(hissing)\n\"Why provoke him? He's harmless.\"\n\nAurora Antonae:\n(snorting)\n\"Harmless? Rich brats like him are fleas. But don't worry—I'll keep him too distracted to notice your… projects.\"", vector<Choices>());
    
    Story* enterLavatory = new Story("You enter the lavatory and look around, without any care regarding what you have just heard.\n\nHoof Kaslei: That damn woman… Well, it's better for me though, I do NOT want to deal with any drama on my holiday, MY PRECIOUS HOLIDAY.\n\nJust as you were grunting about the insufferable attendants, you hear a loud scream.", vector<Choices>());
    
    Story* murderDiscovered = new Story("Flight Attendant: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!!!!!!!!!!!!!!!!! HE'S DEAD!!!!!\n\nYou rush towards the source of the scream.\n\nAurora Antonae: \n\"Girl, what's going on her- Oh! Hey Mika! It's that thing again!\"\n\nMika Sato:\n(coolly adjusting her scarf over her locket)\n\"Yes, I heard the scream. Now what?\"\n\nAurora Antonae:\n(shrugging, popping a mint into her mouth)\n\"Not my business, senpai. I'm too used to these already. There's not much we can do when someone suddenly dies mid-air, you know? Unless…\"\n(She glances mockingly at the panicking passengers.)\n\"…someone on this flight is a policeman on vacation or something.\"\n\nMika Sato:\n(deadpan, turning to secure the galley)\n\"I'm grateful for your completely helpful words, Ms. Aurora.\"\n\n(Aurora winks at you, who's hovering nearby, and holds up a champagne bottle.)\n\nAurora Antonae (to you):\n\"Refill, Mr. Kaslei? Might be your last chance before we all die horribly.\"\n\nThe captain's voice booms over the intercom: \"REMAIN CALM. WE ARE DIVERTING TO THE NEAREST AIRPORT.\" You stare at Victor's body, the syringe-pen, and the chaos around him.", vector<Choices>());
    
    Story* investigateBody = new Story("You kneel beside Victor, examining the body closely. There's a syringe-pen with NovaTech branding sticking out of his neck. You notice a faint bitter almond smell—aconite, a deadly poison. The pen looks identical to the one you saw Mika with earlier.\n\nYou notice something else strange. Both flight attendants seem unusually calm about the situation. Aurora even joked about it, saying \"It's that thing again\" as if they've experienced this before.", vector<Choices>());
    
    Story* examineEvidence = new Story("You should examine the evidence you've collected and try to establish connections.", vector<Choices>(), false);
    
    Story* solution = new Story("After connecting the evidence, you've uncovered the truth. The NovaTech pen was used to deliver aconite poison to Victor Kane. Based on your observations, Mika Sato is the prime suspect, though Aurora seems to be involved as well.\n\nYou decide to share your findings with the air marshal on board, who ensures both flight attendants are detained upon landing for further questioning.", vector<Choices>(), true);

    // Set connections between scenes
    introScene->setChoiceses("Continue to first class cabin", firstClassCabin);
    
    firstClassCabin->setChoiceses("Interact with Mika", mikaInteraction);
    
    mikaInteraction->setChoiceses("Observe other passengers", observeOtherPassengers);
    mikaInteraction->setChoiceses("Notice the NovaTech pen and make a mental note", observeOtherPassengers);
    // When player notices the pen, add it to inventory
    
    observeOtherPassengers->setChoiceses("Continue your flight", needRestroom);
    
    needRestroom->setChoiceses("Head to the restroom", overhearConversation);
    
    overhearConversation->setChoiceses("Continue to the lavatory", auroraInteraction);
    overhearConversation->setChoiceses("Stay and listen more", eavesdropMore);
    // When player overhears conversation, add it to inventory
    
    eavesdropMore->setChoiceses("Head to the lavatory now", auroraInteraction);
    
    auroraInteraction->setChoiceses("Enter the lavatory", enterLavatory);
    auroraInteraction->setChoiceses("Notice Aurora's scar", enterLavatory);
    // When player notices scar, add it to inventory
    
    enterLavatory->setChoiceses("Rush to the source of the scream", murderDiscovered);
    
    murderDiscovered->setChoiceses("Investigate the body", investigateBody);
    murderDiscovered->setChoiceses("Not my problem. I'm on holiday.", gameOver);
    
    investigateBody->setChoiceses("Examine collected evidence", examineEvidence, true);
    
    examineEvidence->setChoiceses("Continue investigation", investigateBody);
    examineEvidence->setChoiceses("Solve the case", solution);

    // Main game loop
    Story currentStory = *introScene;
    bool gameRunning = true;

    while (!currentStory.getEnding() && gameRunning) {
        clearScreen();
        
        // Display current story
        cout << currentStory.getDescription() << endl << endl;
        
        // Handle special cases for evidence collection
        if (currentStory.getDescription() == mikaInteraction->getDescription()) {
            mikaPen->setHasFound(true);
            inventory.push_back(mikaPen);
            cout << "\nNEW EVIDENCE: You noticed " << mikaPen->getName() << endl;
        }
        else if (currentStory.getDescription() == investigateBody->getDescription()) {
            victimBody->setHasFound(true);
            inventory.push_back(victimBody);
            cout << "\nNEW EVIDENCE: You examined " << victimBody->getName() << endl;
        }
        else if (currentStory.getDescription() == auroraInteraction->getDescription()) {
            auroraScar->setHasFound(true);
            inventory.push_back(auroraScar);
            cout << "\nNEW EVIDENCE: You noticed " << auroraScar->getName() << endl;
        }
        else if (currentStory.getDescription() == overhearConversation->getDescription()) {
            mikaLocket->setHasFound(true);
            inventory.push_back(mikaLocket);
            auroraPen->setHasFound(true);
            inventory.push_back(auroraPen);
            cout << "\nNEW EVIDENCE: You noticed " << mikaLocket->getName() << endl;
            cout << "NEW EVIDENCE: You noticed " << auroraPen->getName() << endl;
        }
        else if (currentStory.getDescription() == eavesdropMore->getDescription()) {
            flightAttendantConversation->setHasFound(true);
            inventory.push_back(flightAttendantConversation);
            cout << "\nNEW EVIDENCE: You collected " << flightAttendantConversation->getName() << endl;
        }
        
        // Handle evidence connections
        if (evidenceConnectionResult == 0) {
            // Connection between NovaTech pen and victim's body
            poisonConclusion->setHasFound(true);
            inventory.push_back(poisonConclusion);
            cout << "\nCONNECTION FOUND: " << poisonConclusion->getDescription() << endl;
            evidenceConnectionResult = -1; // Reset
        }
        
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
    delete introScene;
    delete firstClassCabin;
    delete mikaInteraction;
    delete observeOtherPassengers;
    delete needRestroom;
    delete overhearConversation;
    delete auroraInteraction;
    delete eavesdropMore;
    delete enterLavatory;
    delete murderDiscovered;
    delete investigateBody;
    delete examineEvidence;
    delete solution;
    delete gameOver;
    
    for (auto ev : inventory) {
        delete ev;
    }
    
    return 0;
}