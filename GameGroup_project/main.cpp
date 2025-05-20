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
    int evidenceConnectionResult;

    string collectedEvidence;



    for(size_t i = 0; i < inventory.size(); i++){
        collectedEvidence += inventory[i]->getName() + "\n";
    }

    Story* mainEnding = new Story();

    //act1
    Story* inven = new Story();
    Story* act1Scene = new Story();
    Story* act1Choice1 = new Story();
    Story* act1Choice2 = new Story();
    Story* act1End = new Story();

    //evidence
    Story* mikaToRay = new Story();
    Story* hoofToAmi = new Story();
    Story* harrisonToHoof = new Story();
    Story* alexToClara = new Story();
    Story* securityToHoof = new Story();
    Story* auroraToMikaPen = new Story();
    Story* alexToHoof = new Story();
    Story* claraToHoof = new Story();
    Story* alexRead = new Story();
    Story* mikaToAurora = new Story();
    Story* harrisonToMika = new Story();
    Story* auroraToMikaFlute = new Story();

    inven->setDescription("Check your inventory.");

    act1Scene->setDescription("Good afternoon passengers. This is your captain speaking. First I'd like to welcome everyone on Finorza Flight 77F. We are currently cruising at an altitude of 33,000 feet at an airspeed of 400 miles per hour. The time is 3:47 pm. The weather looks good, and with the tailwind on our side, we are expecting to land in Tokyo approximately fifteen minutes ahead of schedule. The weather in Tokyo is clear and sunny, with a high of 25 degrees for this afternoon. If the weather cooperates, we should get a great view of the city as we descend. The cabin crew will be coming around in about twenty minutes to offer you a light snack and beverage. I'll talk to you again before we reach our destination. Until then, sit back, relax and enjoy the rest of the flight.\n\nIn the first class cabin...\n\nHoof Kaslei (Player):\n(sigh)\nIt has been so long since I had the time for such a wonderful vacation. Though, if any unfortunate thing happens, I might just hide myself and not interfere... At least...\n\nMika Sato:\n(approaching you with a polished smile)\nWelcome aboard, Mr. Kaslei. Champagne? Or something stronger to help you... relax?\n(Her tone is playful, but her eyes linger a beat too long on the empty first-class seat reserved for Victor Kane, who hasn't boarded yet.)\n\nHoof Kaslei:\n(grunts, stowing his briefcase under the seat)\nJust water. And save the small talk—I'm here to sleep, not chat.\n\nMika Sato:\n(pours water into a glass, her locket swinging forward slightly)\nOf course. Long flights can be draining. But if you change your mind...\n(She nods to the trolley. A pen with a NovaTech logo—identical to the syringe-pen later used to kill Victor—rolls into view. She quickly tucks it away.)\n\nHoof Kaslei:\n(narrows eyes at the pen)\nYou techies and your gadgets. That thing record conversations too?\n\nMika Sato:\n(laughs, too sharp)\nJust a souvenir from a... difficult passenger. Let me know if you need anything else.\n\n(She moves down the aisle, her smile tightening as she stops at Alex Rivera, slumped in his seat with a half-empty coffee cup.)\n\n...\n\nMika Sato:\nAnother coffee, sir? You've been awake since takeoff.\n\nAlex Rivera:\n(startled, spills coffee on his shirt)\nN-no! I'm fine. Totally fine. Just... jet lag.\n\nMika Sato:\n(noticing his trembling hands, softens)\n...I'll bring you a blanket. You look like you've seen a ghost.\n\n...\n\nMika Sato:\nMs. Voss, your usual gin tonic?\n\nClara Voss:\n(doesn't look up, voice icy)\nTell Victor I don't want his ‘courtesy drinks' when he boards. I'm not here to network.\n\nMika Sato:\n(pours the drink anyway, placing it beside Clara's laptop)\nHe'll be seated in 2A. I'm sure he'll insist on saying hello.\n\n...\n\nMika Sato (to Harrison):\nWhiskey, neat? You've barely touched your last one.\n\nHarrison Gray:\n(slams the notebook shut, revealing a crumpled photo of Victor)\nWhat I need is for this flight to land. Before I—\n(He stops himself, glaring at Victor's empty seat.)\n\nMika Sato:\n(gently replaces his glass)\nSome things are best served cold, Mr. Gray.\n\nThe flight is getting a bit too long. You decided to go to the restroom for some... personal stuff... Then, something caught your attention...\n\nAurora Antonae:\n(adjusting her scarf to hide her platinum streak, voice clipped)\nFirst Class is restless. The NovaTech contingent keeps demanding upgrades. As if we stock unicorn caviar.\n(She loads a tray with champagne flutes, her gloved hands lingering on a NovaTech pen identical to Mika's syringe-weapon.)\n\nMika Sato:\n(stiffening, her locket chain peeking out)\nIgnore them. They'll drown in their own entitlement soon enough.\n\nAurora Antonae:\n(noticing Mika's locket, smirking)\nStill clinging to that? Sentimentality's a liability, senpai. Especially around vipers like—\n(She nods toward Victor Kane's empty seat.)\n\nMika Sato:\n(cutting her off, icy)\nFocus on the champagne, Aurora. Or I'll reassign you to diaper duty in Economy.\n\n(Aurora rolls her eyes and exits the galley, nearly colliding with you, who's ambling toward the lavatory. She pastes on a flawless smile.)\n\nAurora Antonae:\n(blocking his path with the trolley, saccharine-sweet)\nMr. Kaslei! Can I interest you in our exclusive pre-landing martini? Shaken, not stirred—just like your Instagram posts.\n\nHoof Kaslei:\n(not looking up from his phone)\nI'm good. Move the cart.\n\nAurora Antonae:\n(leaning in, faux-concerned)\nOf course. Though, a word of advice? The lavatory lock jams. Wouldn't want you trapped inside... unable to call your lawyer.\n\nHoof Kaslei:\n(finally glancing at her, deadpan)\nYou're real invested in my bladder. Got a medical degree too?\n\nAurora Antonae:\n(laughs lightly, adjusting her glove to reveal the scar on her wrist)\nJust hospitality training. We're taught to anticipate every need.\n(She moves aside, her smile fading as he passes.)\n\nYou pause near the galley, pretending to fix your shoe. Inside, Mika and Aurora resume talking.\n\nMika Sato:\n(hissing)\nWhy provoke him? He's harmless.\n\nAurora Antonae:\n(snorting)\nHarmless? Rich brats like him are fleas. But don't worry—I'll keep him too distracted to notice your... projects.\n\nYou enter the lavatory and look around, without any care regarding what you have just heard.\n\nHoof Kaslei: That damn woman... Well, it's better for me though, I do NOT want to deal with any drama on my holiday, MY PRECIOUS HOLIDAY.\n\nJust as you were grunting about the insufferable attendants, you hear a loud scream.\n\nFlight Attendant: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!!!!!!!!!!!!!!!!! HE'S DEAD!!!!!\n\nYou rush towards the source of the scream.\n\nAurora Antonae:\nGirl, what's going on her- Oh! Hey Mika! It's that thing again!\n\nMika Sato:\n(coolly adjusting her scarf over her locket)\nYes, I heard the scream. Now what?\n\nAurora Antonae:\n(shrugging, popping a mint into her mouth)\nNot my business, senpai. I'm too used to these already. There's not much we can do when someone suddenly dies mid-air, you know? Unless...\n(She glances mockingly at the panicking passengers.)\n...someone on this flight is a policeman on vacation or something.\n\nMika Sato:\n(deadpan, turning to secure the galley)\nI'm grateful for your completely helpful words, Ms. Aurora.\n\n(Aurora winks at you, who's hovering nearby, and holds up a champagne bottle.)\n\nAurora Antonae (to you):\nRefill, Mr. Kaslei? Might be your last chance before we all die horribly.\n\n(The captain's voice booms over the intercom: REMAIN CALM. WE ARE DIVERTING TO THE NEAREST AIRPORT. you stare at Victor's body, the syringe-pen, and the chaos around him.)\n\nPlayer Choice:");
    
    act1Choice1->setDescription("(You kneel beside Victor, noticing the syringe-pen's NovaTech branding and a faint bitter almond smell—aconite. Proceed to the mystery.)");
    act1Choice2->setDescription("(You retreat to your seat, put on noise-canceling headphones, and mutter: MY PRECIOUS HOLIDAY.)\n");

    act1Scene->setChoiceses("Investigate the body.", act1Choice1, 0);
    act1Scene->setChoiceses("Not my problem. I'm on holiday.", act1Choice2, 0);
    act1Scene->setChoiceses("Your inventory have: ", inven, 2);

    act1End->setDescription("(The plane lands hours later. Police arrest Aurora Antonae—framed by Mika via planted evidence. Headlines scream: NOVATECH CEO MURDERED BY DISGRUNTLED FLIGHT ATTENDANT.\n\nHoof Kaslei (ending narration):\n(sipping a tropical drink on a beach, scrolling past the news)\nHuh. Guess rich guys do have enemies. ...Wait, was that the lady with the scar? Whatever.\n\nGAME OVER");
    act1End->setEnding(true);

    //Key clues
    evidence* penInTrash = new evidence();
    penInTrash->setName("Syringe-Pen in the Galley Trash");
    penInTrash->setDescription("Coated with aconite residue, NovaTech-branded — matches the murder weapon used on Victor's neck pillow.");
    penInTrash->setIDnumber(0);
    penInTrash->setHasFound(false);
    mikaToRay->setDescription("(Flight Attendant Mika to Captain Ray):\nMika: Captain, I found this pen in the trash. It looks just like the one Victor complained about—and it's laced with aconite.\nCaptain Ray: Keep it safe, Mika. This could be our biggest break.");

    evidence* tornPhoto = new evidence();
    tornPhoto->setName("Torn Photo in Victor's Pocket");
    tornPhoto->setDescription("One half shows Victor with a young woman (Ami Sato) at a NovaTech gala; the other half is hidden in Mika's locket.");
    tornPhoto->setIDnumber(1);
    tornPhoto->setHasFound(false);
    hoofToAmi->setDescription("(Detective Hoof to Ami Sato):\nHoof: Why was your photo half here—and the other half in Mika's locket?\nAmi: I don't know... Victor and I only met once. But someone must have planted it.");

    evidence* threatNote = new evidence();
    threatNote->setName("Threatening Note under Harrison's Seat");
    threatNote->setDescription("Hand-written: You ruined my life. Enjoy your last flight. Matches Harrison's handwriting.");
    threatNote->setIDnumber(2);
    threatNote->setHasFound(false);
    harrisonToHoof->setDescription("(Harrison to Detective Hoof):\nHoof: Why did you write this note?\nHarrison: I didn't. My handwriting? Someone sat in my seat to frame me.");
    
    evidence* sedativeCoffee = new evidence();
    sedativeCoffee->setName("Sedative-Laced Coffee Cup at Alex's Seat");
    sedativeCoffee->setDescription("Traces of a fast-acting sedative prove Alex was awake and drugged, falsifying his 'jet-lag' alibi.");
    sedativeCoffee->setIDnumber(3);
    sedativeCoffee->setHasFound(false);
    alexToClara->setDescription("(Alex to Clara):\nAlex: Clara, this coffee... I don't remember drinking it.\nClara: Someone wanted you out of commission. But why?");

    evidence* lavaFootage = new evidence();
    lavaFootage->setName("Lavatory Security Footage");
    lavaFootage->setDescription("Clara Voss is seen entering the lavatory 10 minutes before Victor—seems damning but she was actually ill.");
    lavaFootage->setIDnumber(4);
    lavaFootage->setHasFound(false);
    securityToHoof->setDescription("(Security Officer to Detective Hoof):\nOfficer: She went in before Victor—looked suspicious.\nHoof: Check her medical log. I bet she has an explanation.");

    //False leads
    evidence* penAurora = new evidence();
    penAurora->setName("Clean Syringe-Pen on Aurora's Apron");
    penAurora->setDescription("Identical pen, no poison—Aurora insists it's standard catering issue.");
    penAurora->setIDnumber(5);
    penAurora->setHasFound(false);
    auroraToMikaPen->setDescription("(Aurora to Mika):\nAurora: This pen? I use it for kitchen notes. It's brand-new—no poison.\nMika: It looked too familiar... but you're right, Aurora.");

    evidence* insulinPen = new evidence();
    insulinPen->setName("Broken Insulin Pen in Alex's Bag");
    insulinPen->setDescription("A diabetic passenger's device, mistaken at first for the murder weapon.");
    insulinPen->setIDnumber(6);
    insulinPen->setHasFound(false);
    alexToHoof->setDescription("(Alex to Detective Hoof):\nHoof: This pen was broken... possible murder weapon?\nAlex: It's just my insulin pen—broke this morning. Nothing more.");

    evidence* wedPhoto = new evidence();
    wedPhoto->setName("Wedding Photo Fragment in Clara's Purse");
    wedPhoto->setDescription("Clara and Victor at a charity gala—suggests romance, but strictly professional.");
    wedPhoto->setIDnumber(7);
    wedPhoto->setHasFound(false);
    claraToHoof->setDescription("(Clara to Hoof):\nHoof: A wedding photo? You two look close.\nClara: We were colleagues. That night was a fundraiser, nothing else.");

    evidence* anonymousNote = new evidence();
    anonymousNote->setName("Anonymous Typed Note on Alex's Coffee Cup");
    anonymousNote->setDescription("Payback's a killer. Generic and not linked to any suspect's handwriting.");
    anonymousNote->setIDnumber(8);
    anonymousNote->setHasFound(false);
    alexRead->setDescription("(Alex reading to himself):\nAlex (muttering): Payback's a killer... Who sent this?");

    evidence* teaBagMika = new evidence();
    teaBagMika->setName("Herbal Tea Bag on Mika's Trolley");
    teaBagMika->setDescription("Chamomile — looks like a poison pouch but harmless.");
    teaBagMika->setIDnumber(9);
    teaBagMika->setHasFound(false);
    mikaToAurora->setDescription("(Mika to Aurora):\nMika: Someone dropped this in my trolley—thought it was poison.\nAurora: Just tea—relaxing, not lethal.");

    evidence* whiskeyBottle = new evidence();
    whiskeyBottle->setName("Whiskey Bottle near Harrison's Seat");
    whiskeyBottle->setDescription("Suggests murder by liquor, but contains only plain alcohol.");
    whiskeyBottle->setIDnumber(10);
    whiskeyBottle->setHasFound(false);
    harrisonToMika->setDescription("(Harrison to Mika):\nHarrison: That bottle? I poured it myself.\nMika: Thought it might be spiked... but it's clean.");

    evidence* fingerprintFlute = new evidence();
    fingerprintFlute->setName("Champagne Flute with Fingerprints in the Galley (new Aurora lead)");
    fingerprintFlute->setDescription("A single flute stained with aconite traces and Aurora's fingerprints—seems to implicate her, but was planted by Mika.");
    fingerprintFlute->setIDnumber(11);
    fingerprintFlute->setHasFound(false);
    auroraToMikaFlute->setDescription("(Aurora and Mika):\nAurora: Why are my fingerprints here? I just served everyone.\nMika: I... I must have handled it during cleanup. But the poison was already there.");

    // Main game loop
    Story currentStory = *act1Scene;
    bool gameRunning = true;

    while (!currentStory.getEnding() && gameRunning) 
    {
        clearScreen();
        
        // Display current storys
        cout << currentStory.getDescription() << endl << endl;

        //Dialogue snippets of characters with collected evidences
        if (currentStory.getDescription() == penInTrash->getDescription())
        {
            penInTrash->setHasFound(true);
            inventory.push_back(penInTrash);
            cout << "\nNEW EVIDENCE: You noticed " << penInTrash->getName() << " and later overheard the conversation between Mika and Captain:\n " << mikaToRay->getDescription() << endl;
        }
        else if (currentStory.getDescription() == tornPhoto->getDescription())
        {
            tornPhoto->setHasFound(true);
            inventory.push_back(tornPhoto);
            cout << "\nNEW EVIDENCE: You found " << tornPhoto->getName() << " and went to ask Ami about it:\n " << hoofToAmi->getDescription() << endl;
        }
        else if (currentStory.getDescription() == threatNote->getDescription())
        {
            threatNote->setHasFound(true);
            inventory.push_back(threatNote);
            cout << "\nNEW EVIDENCE: You found " << threatNote->getName() << " and confronted Harrison about it:\n " << harrisonToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == sedativeCoffee->getDescription())
        {
            sedativeCoffee->setHasFound(true);
            inventory.push_back(sedativeCoffee);
            cout << "\nNEW EVIDENCE: You found out " << sedativeCoffee->getName() << " and heard Alex and Clara talked about it:\n " << alexToClara->getDescription() << endl;
        }
        else if (currentStory.getDescription() == lavaFootage->getDescription())
        {
            lavaFootage->setHasFound(true);
            inventory.push_back(lavaFootage);
            cout << "\nNEW EVIDENCE: Security Officer brought you a suspicious footage, in it " << lavaFootage->getName() << endl << securityToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == penAurora->getDescription())
        {
            penAurora->setHasFound(true);
            inventory.push_back(penAurora);
            cout << "\nNEW EVIDENCE: You found " << penAurora->getName() << " and saw Mika asked Aurora about it:\n " << mikaToAurora->getDescription() << endl;
        }
        else if (currentStory.getDescription() == insulinPen->getDescription())
        {
            insulinPen->setHasFound(true);
            inventory.push_back(insulinPen);
            cout << "\nNEW EVIDENCE: You found " << insulinPen->getName() << " and confronted Alex about it:\n " << alexToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == wedPhoto->getDescription())
        {
            wedPhoto->setHasFound(true);
            inventory.push_back(wedPhoto);
            cout << "\nNEW EVIDENCE: You found " << wedPhoto->getName() << " and asked Clara about it:\n " << claraToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == anonymousNote->getDescription())
        {
            anonymousNote->setHasFound(true);
            inventory.push_back(anonymousNote);
            cout << "\nNEW EVIDENCE: Alex found " << anonymousNote->getName() << "\n " << alexRead->getDescription() << endl;
        }
        else if (currentStory.getDescription() == teaBagMika->getDescription())
        {
            teaBagMika->setHasFound(true);
            inventory.push_back(teaBagMika);
            cout << "\nNEW EVIDENCE: You noticed " << teaBagMika->getName() << " and heard Mika talked about it with Aurora:\n " << mikaToAurora->getDescription() << endl;
        }
        else if (currentStory.getDescription() == whiskeyBottle->getDescription())
        {
            whiskeyBottle->setHasFound(true);
            inventory.push_back(whiskeyBottle);
            cout << "\nNEW EVIDENCE: You noticed " << whiskeyBottle->getName() << " and caught Harrison talking to Mika about it:\n " << harrisonToMika->getDescription() << endl;
        }
        else if (currentStory.getDescription() == fingerprintFlute->getDescription())
        {
            fingerprintFlute->setHasFound(true);
            inventory.push_back(fingerprintFlute);
            cout << "\nNEW EVIDENCE: You found " << fingerprintFlute->getName() << " and confronted Aurora and Mika about it:\n " << auroraToMikaFlute->getDescription() << endl;
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
    delete act1Scene;
    delete act1Choice1;
    delete act1Choice2;
    
    for (auto ev : inventory) {
        delete ev;
    }
    
    return 0;
}