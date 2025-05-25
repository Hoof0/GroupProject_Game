#include <iostream>
#include <string>
#include <vector>
#include "StoryElement.h"
#include "Story.h"
#include "Choices.h"
#include "evidence.h"

using namespace std;

void clearScreen(){
    cout << "\033[2J\033[1;1H";
}

int main() {
    vector<evidence*> inventory;
    int evidenceConnectionResult;

    string collectedEvidence;



    for(size_t i = 0; i < inventory.size(); i++){
        collectedEvidence += inventory[i]->getName() + "\n";
    }

    //act1
    Story* inven = new Story();
    Story* act1Scene = new Story();
    Story* act1Choice1 = new Story();
    Story* act1Choice2 = new Story();
    Story* act1End = new Story();

    

    //evidence
    Story* hoofToMika = new Story();
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

    //evidence collecting
    Story* collectPen = new Story();
    Story* collectTornPhoto = new Story();
    Story* investigatePassengers = new Story();
    Story* investigateHarrisonNote = new Story();
    Story* collectThreatNote = new Story();
    Story* investigateHarrisonBottle = new Story();
    Story* collectWhiskeyBottle = new Story();
    Story* investigateAlexCoffee = new Story();
    Story* collectAlexCoffee = new Story();
    Story* inspectAlexBag = new Story();
    Story* collectAlexPen = new Story();
    Story* eavesdropAlex = new Story();
    Story* getAnonymousNote = new Story();
    Story* collectAnonymousNote = new Story();
    Story* checkCam = new Story();
    Story* collectFootage = new Story();
    Story* investigateClara = new Story();
    Story* collectClaraPhoto = new Story();
    Story* investigateAuroraPen = new Story();
    Story* collectAuroraPen = new Story();
    Story* investigateAuroraFlute = new Story();
    Story* collectAuroraFlute = new Story();
    Story* investigateMika = new Story();
    Story* collectTeabag = new Story();
    Story* interrogatePassengers = new Story();
    Story* checkTestimony = new Story();

    //act3
    Story* act3Investigation = new Story();
    Story* accuseMika = new Story();
    Story* accuseAurora = new Story();
    Story* accuseAlex = new Story();
    Story* accuseClara = new Story();
    Story* accuseHarrison = new Story();

    //True path(revealing Mika)
    Story* reviewPenOnVictor = new Story();
    Story* checkPenOnVictor = new Story();
    Story* reviewTornPhoto = new Story();
    Story* compareMika = new Story();
    Story* confrontMika = new Story();

    //False path 1 (Aurora)
    Story* reviewFlute = new Story();
    Story* reviewAuroraPen = new Story();

    //False path 2 (Alex)
    Story* reviewInsulinPen = new Story();

    //False path 3 (Clara)
    Story* reviewCam = new Story();

    //False path 4 (Harrison)
    Story* reviewNote = new Story();

    //Menu test
    Story* menu = new Story();
    menu->setDescription("Test menu\n");
    menu->setChoiceses("Inspect the pen.", collectPen, 0);

    //Menu
    act1Scene->setDescription("Captain (Intercom):\nFinorza Flight 77F to Tokyo, arriving ahead of schedule. Enjoy the flight\n\nIn the first class cabin...\n\nHoof Kaslei (Player):\n(sigh)\nIt has been so long since I had the time for such a wonderful vacation.\n Though, if any unfortunate thing happens, I might just hide myself and not interfere...\n At least...\n\nMika Sato:\n(approaching you with a polished smile)\nChampagne, Mr. Kaslei? Or… water?\n(A NovaTech syringe-pen slips from her trolley.)\nHoof Kaslei:\n(grunts, stowing his briefcase under the seat)\nJust water, and save the chatter.\n\nMika Sato (noticing Alex’s trembling hands):\n\nI’ll bring you a blanket, sir.\n\nClara Voss (coldly):\n\nTell Victor I don't want his drink.\n\nHarrison Gray:\n(slams the notebook shut, revealing a crumpled photo of Victor)\nWhat I need is for this flight to land. Before I-\n\nMika Sato:\n(gently replaces his glass)\nSome things are best served cold, Mr. Gray.\n\nThe flight is getting a bit too long. You decided to go to the restroom for some... personal stuff... Then, something caught your attention...\n\nAurora Antonae (to Mika, mocking):\nStill clinging to that? Sentimentality's a liability, senpai.\n\nAurora (blocking your way):\nThe lavatory lock jams. Wouldn't want you... trapped.\n(Adjust her glove, revealing a scar.)\n\nMika Sato:\n(hissing to Aurora)\nWhy provoke him? He's harmless.\n\nAurora Antonae:\n(snorting)\nHarmless? Rich brats like him are fleas. But don't worry-I'll keep him too distracted to notice your... projects.\n\nYou enter the lavatory and look around, without any care regarding what you have just heard.\n\nHoof Kaslei: That damn woman... Well, it's better for me though, I do NOT want to deal with any drama on my holiday, MY PRECIOUS HOLIDAY.\n\nJust as you were grunting about the insufferable attendants, you hear a loud scream.\n\nFlight Attendant: HE'S DEAD!!!!!\n\nYou rush towards the source of the scream.\n\nAurora(smirking):\n\nRefill, Mr. Kaslei? Might be your last chance before we all die horribly.\n\n(The captain's voice booms over the intercom: REMAIN CALM. WE ARE DIVERTING TO THE NEAREST AIRPORT. you stare at Victor's body, the syringe-pen, and the chaos around him.)\n\nPlayer Choice:");
  
    act1Choice1->setDescription("(You kneel beside Victor, noticing the syringe-pen's NovaTech branding and a faint bitter almond smell-aconite. Victor was poisoned. Proceed to the mystery.)");
    act1Choice2->setDescription("(You retreat to your seat, put on noise-canceling headphones, and mutter: MY PRECIOUS HOLIDAY.)\n");
    act1Choice2->setChoiceses("You wait for the flight to end...",act1End,0);

    act1Scene->setChoiceses("investigate the body.", act1Choice1, 0);
    act1Scene->setChoiceses("Not my problem. I'm on holiday.", act1Choice2, 0);
    act1Scene->setChoiceses("Your inventory have: ", inven, 2);

    act1End->setDescription("(The plane lands hours later. Police arrest Aurora Antonae. Headlines scream: NOVATECH CEO MURDERED BY DISGRUNTLED FLIGHT ATTENDANT.\n\nHoof Kaslei (ending narration):\n(sipping a tropical drink on a beach, scrolling past the news)\nHuh. Guess rich guys do have enemies. ...Wait, was that the lady with the scar? Whatever.\n\nGAME OVER");
    act1End->setEnding(true);

    //act 2
    //act 3 test
    investigatePassengers->setChoiceses("Move to act 3 immediately", act3Investigation,0);
    //Collect evidence 1, 2
    act1Choice1->setChoiceses("Inspect the pen.", collectPen, 0);
    act1Choice1->setChoiceses("Your inventory have: ", inven, 2);
    collectPen->setDescription("Coated with aconite residue, NovaTech-branded - matched the murder weapon used on Victor's neck pillow.");
    collectPen->setChoiceses("Inspect Victor's clothes to find other evidence.", collectTornPhoto, 0);
    collectPen->setChoiceses("Your inventory have: ", inven, 2);
    collectTornPhoto->setDescription("One half showed Victor with a young woman (Mika Sato) at a NovaTech gala; the other half wass hidden in Mika's locket, which you had noticed when she served you water.");
    collectTornPhoto->setChoiceses("Go investigate other passengers:", investigatePassengers, 0);
    collectTornPhoto->setChoiceses("Your inventory have: ", inven, 2);
    investigatePassengers->setDescription("Harrison, Alex, the attendants Mika and Aurora, or check security footage. After collecting enough evidence, you can interrogate suspects for their testimony.");
    investigatePassengers->setChoiceses("Your inventory have: ", inven, 2);
    //Collect evidence 3, 11
    investigatePassengers->setChoiceses("Harrison", investigateHarrisonNote, 0);
    investigateHarrisonNote->setDescription("When you were wondering who you should go to first, Harrison approached you with a note in his hand.");
    investigateHarrisonNote->setChoiceses("Take the note", collectThreatNote, 0);
    investigateHarrisonNote->setChoiceses("Your inventory have: ", inven, 2);
    collectThreatNote->setDescription("Hand-written: 'You ruined my life. Enjoy your last flight'. Matches Harrison's handwriting.");
    collectThreatNote->setChoiceses("Follow Harrison back to his seat", investigateHarrisonBottle, 0);
    collectThreatNote->setChoiceses("Your inventory have: ", inven, 2);
    investigateHarrisonBottle->setDescription("When you followed Harrison back to his seat to check his belongings, you caught Harrison and Mika talking about something. You eavesdropped on them, and what you heard piqued your attention. After that, you quickly inspected Harrison's whiskey bottle.");
    investigateHarrisonBottle->setChoiceses("Inspect the bottle", collectWhiskeyBottle, 0);
    investigateHarrisonBottle->setChoiceses("Your inventory have: ", inven, 2);
    collectWhiskeyBottle->setDescription("The bottle suggests murder by liquor, but contains only plain alcohol.");
    //Collect evidence 4, 7, 9
    collectWhiskeyBottle->setChoiceses("Continue investigating.", investigatePassengers, 0);
    collectWhiskeyBottle->setChoiceses("Your inventory have: ", inven, 2);
    investigatePassengers->setChoiceses("Alex", investigateAlexCoffee, 0);
    investigateAlexCoffee->setDescription("When you approached Alex's seat, you heard Alex telling Clara that his coffee was drugged. When Clara left, you asked Alex to check his belongings and got his permission.");
    investigateAlexCoffee->setChoiceses("Inspect Alex's cup of coffee.", collectAlexCoffee, 0);
    investigateAlexCoffee->setChoiceses("Your inventory have: ", inven, 2);
    collectAlexCoffee->setDescription("Traces of a fast-acting sedative prove Alex was awake and drugged, falsifying his 'jet-lag' alibi.");
    collectAlexCoffee->setChoiceses("Search his bag for other evidence, if any.", inspectAlexBag, 0);
    collectAlexCoffee->setChoiceses("Your inventory have: ", inven, 2);
    inspectAlexBag->setDescription("You had gotten his permission, so you might as well make use of it.\nYou searched his bag, and found a broken insulin pen.");
    inspectAlexBag->setChoiceses("Inspect the pen and retrieve it for later investigation.", collectAlexPen, 0);
    inspectAlexBag->setChoiceses("Your inventory have: ", inven, 2);
    collectAlexPen->setDescription("A diabetic passenger's device, can be easily mistaken for the murder weapon.");
    collectAlexPen->setChoiceses("Leave and go investigate other passengers.", eavesdropAlex, 0);
    collectAlexPen->setChoiceses("Your inventory have: ", inven, 2);
    eavesdropAlex->setDescription("When you had gathered your evidence, you bid Alex a temporary goodbye. However, right when you turned away, Alex's voice rang from behind you. At first, you thought he was calling you, but then you realized his voice was very small, barely above a whisper, and if yours ears were not fooling you, it contained the words 'payback', 'kill'. You halted your footsteps and pretended to inspect the passenger cabin, while eavesdropping on Alex.");
    eavesdropAlex->setChoiceses("Hear what Alex is saying.", getAnonymousNote, 0);
    eavesdropAlex->setChoiceses("Your inventory have: ", inven, 2);
    getAnonymousNote->setDescription("From Alex's tone, it seemed like he was reading from something, maybe a note. His voice was very small and was hard to hear. I'd need to find a way to retrieve that note from him.\n...\nFortunately, I didn't have to wait for long. After reading the note, Alex crumpled it up and threw it away, muttering 'Nonsense...'. He probably deemed the note a joke meant to scare him, and I wasted no time to pick it up. Ironically, were it not for the chaos in the passenger cabin caused by the murder, attendants would surely have stopped Alex from littering, and it would have been much harder for me to collect this evidence.");
    getAnonymousNote->setChoiceses("Inspect the note.", collectAnonymousNote, 0);
    getAnonymousNote->setChoiceses("Your inventory have: ", inven, 2);
    collectAnonymousNote->setDescription("'Payback's a killer'. Generic and not linked to any suspect's handwriting.");
    //Collect evidence 5, 8
    collectAnonymousNote->setChoiceses("Continue investigating.", investigatePassengers, 0);
    collectAnonymousNote->setChoiceses("Your inventory have: ", inven, 2);
    investigatePassengers->setChoiceses("Check security footage.", checkCam, 0);
    checkCam->setDescription("You decided that you should request a security footage to check if there's anything abnormal happened before, during, and after the murder.\nIt turned out to be quite the smart idea, as the lavatory camera did indeed catch a person who shouldn't be there at that time.");
    checkCam->setChoiceses("Inspect the footage", collectFootage, 0);
    checkCam->setChoiceses("Your inventory have: ", inven, 2);
    collectFootage->setDescription("Clara Voss is seen entering the lavatory 10 minutes before Victor died and 15 minutes after that-seems damning.");
    collectFootage->setChoiceses("Investigate Clara.", investigateClara, 0);
    collectFootage->setChoiceses("Your inventory have: ", inven, 2);
    investigateClara->setDescription("You approached Clara and requested to search her belongings. She resisted at first, but relented when showed a part of the footage.\nYou searched her bag, and found a photo in her purse.");
    investigateClara->setChoiceses("Inspect the photo.", collectClaraPhoto, 0);
    investigateClara->setChoiceses("Your inventory have: ", inven, 2);
    collectClaraPhoto->setDescription("Clara and Victor at a charity gala-the two might be in a romantic relationship in the past.");
    //Collect evidence 6, 10, 12
    collectClaraPhoto->setChoiceses("Continue investigating.", investigatePassengers, 0);
    collectClaraPhoto->setChoiceses("Your inventory have: ", inven, 2);
    investigatePassengers->setChoiceses("Flight attendants", investigateAuroraPen, 0);
    investigateAuroraPen->setDescription("When you came to talk to Aurora, you saw her chatting with Mika. They were talking about Aurora's pen. Seeing you coming, Mika excused herself and left, while Aurora greeted you.\nAurora Antonae:\n(bowing her head slightly)\nMr Kaslei. Are you coming back for that martini? I assure you, you won't be disappointed.\n\nHoof Kaslei:\n(grunted, ignoring Aurora's invitation)\nNo interest nor time for that. What were you...\n\nYour voice died in your throat, and your eyes were glued to the pen hung on the chest pocket of Aurora's uniform.\n\nHoof Kaslei:\n(supressed surprise and wariness in his voice)\nMay I have a look at your pen?\n\nAurora Antonae:\n(shrugging)\nSure, why not?\n(hand you her pen).");
    investigateAuroraPen->setChoiceses("Inspect Aurora's pen.", collectAuroraPen, 0);
    investigateAuroraPen->setChoiceses("Your inventory have: ", inven, 2);
    collectAuroraPen->setDescription("Identical to the one found near Victor's body, no poison - Aurora insists it's standard catering issue.");
    collectAuroraPen->setChoiceses("Continue investigating.", investigateAuroraFlute, 0);
    collectAuroraPen->setChoiceses("Your inventory have: ", inven, 2);
    investigateAuroraFlute->setDescription("After asking Aurora some questions about her whereabouts during the murder, you left to investigate other passengers.\nWhen passing the plane's galley, a faint smell caught your nose. Bitter almond. Aconite.\nYou followed the smell, and found its origin: a champagne flute, on Aurora's trolley. There were her fingerprints on the flute.");
    investigateAuroraFlute->setChoiceses("Inspect the flute.", collectAuroraFlute, 0);
    investigateAuroraFlute->setChoiceses("Your inventory have: ", inven, 2);
    collectAuroraFlute->setDescription("A single flute stained with aconite traces and Aurora's fingerprints.");
    collectAuroraFlute->setChoiceses("Investigate Mika", investigateMika, 0);
    collectAuroraFlute->setChoiceses("Your inventory have: ", inven, 2);
    investigateMika->setDescription(" You quickly retrieved the flute, and returned to Aurora's seat. Mika was also there, likely coming back to continue their chat. When you approached, Mika handed you a herbal tea bag, claiming she found it on her trolley, and that she left a while ago to retrieve it and bring it to you. Mika suspected that the tea bag might contain poison.");
    investigateMika->setChoiceses("Inspect the tea bag.", collectTeabag, 0);
    investigateMika->setChoiceses("Your inventory have: ", inven, 2);
    collectTeabag->setDescription("Chamomile - looks like a poison pouch but harmless.");

    //Interrogate NPC to take testimony
    collectTeabag->setChoiceses("Continue investigating.", investigatePassengers, 0);
    collectTeabag->setChoiceses("Your inventory have: ", inven, 2);
    interrogatePassengers->setDescription("Alex Rivera: I slept through the flight! I'd never hurt him!\nClara Voss: I went to the lavatory once because I didn't feel good. Victor was alive when I left!\nMika Sato: I served meals the whole time. Check the logs! I have neither the chance nor the motive to kill Victor!\nHarrison Gray: I didn't know about the syringe! I just wanted my money!\nAurora Antonae: I only served drinks—I canceled my break to help with the rush.");
    interrogatePassengers->setChoiceses("Analyze the validity of the testimonies.", checkTestimony, 0);
    interrogatePassengers->setChoiceses("Your inventory have: ", inven, 2);
    checkTestimony->setDescription("Hoof Kaslei:\n(after some contemplation)\nAlex was definitely lying. The coffee cup with sedatives proved that he was awake, and likely didn't have a jet-lag.\nClara also wasn't truthful. The part of the security footage that I didn't showed her before recorded her entering the lavatory a second time not long after Victor's death.\nMika is a suspect, too. She claimed she didn't do it, but the torn photo revealed she's the woman in the picture - Mika personally knew Victor. Her motive could be revenge.\nHarrison also lied. The threatening note matches his handwriting, found in his briefcase. Harrison said another person wrote it to frame him, but no one on this plane knows him, so it's unlikely his handwriting can be replicated.\n Aurora may be the only one telling the truth. Her catering pen was clean, but the champagne flute suggests another story. Technically, she had no reason to take off her gloves and leave her fingerprint on it, but if she did, then it could only be to do one thing...\n\n Hoof Kaslei:\n(groaning)\nOh God, why does every person I investigate look dubious? (massages his temple) I miss my holiday.");
    checkTestimony->setChoiceses("Further investigation.", act3Investigation, 0);
    checkTestimony->setChoiceses("Your inventory have: ", inven, 2);

    //act3
    //True path (revealing Mika)
    act3Investigation->setDescription("You knew for a fact that one of the passengers and attendants was the murderer. From the evidence and testimonies above, you decided to accuse...");
    act3Investigation->setChoiceses("Mika.", accuseMika, 0);
    act3Investigation->setChoiceses("Your inventory have: ", inven, 2);
    accuseMika->setDescription("Mika looked suspicious. I'd check the syringe pen and torn photo for further investigation.");
    accuseMika->setChoiceses("Review on the syringe pen.", reviewPenOnVictor, 0);
    accuseMika->setChoiceses("Review on the torn photo on Victor's body.", reviewTornPhoto, 0);
    accuseMika->setChoiceses("Compare evidence.", compareMika, 1);
    accuseMika->setChoiceses("Resolute.", compareMika,0);
    accuseMika->setChoiceses("Your inventory have: ", inven, 2);
    reviewPenOnVictor->setDescription("Using the forensic lab kit you brought, you tested the pen, and received a positive result for aconite on the pen's tip, the same poison found on Victor's pillow. But you weren't sure if this was Mika's pen.\n...\nWait. Aurora also had the same pen. She and Mika were both attendants. If all attendants on this flight were given the same pen, then...");
    reviewPenOnVictor->setChoiceses("Cross-check with NovaTech and other attendants.", checkPenOnVictor, 0);
    reviewPenOnVictor->setChoiceses("Your inventory have: ", inven, 2);
    checkPenOnVictor->setDescription("You contacted NovaTech and explained the situation to the company's receptionist. After some waiting, you got their reply:\nNovaTech Rep: No external pens were logged - only crew supplies.\nKaslei: 'Then the pen must belong to an attendant on this flight.'\nAfter asking other attendants, you were sure that the pen belonged to Mika.\n\nYou had found the weapon, now you needed to find Mika's motive.");
    checkPenOnVictor->setChoiceses("Find Mika's motive.", accuseMika, 0);
    checkPenOnVictor->setChoiceses("Your inventory have: ", inven, 2);
    reviewTornPhoto->setDescription("The torn photo matched \the half found in Mika's locket. They were very close in the past, probably had a romantic relationship. But the photo was ripped in half. They broke up? Then Mika could have killed Victor for revenge.\n\nYou had found the motive, now you needed to find Mika's weapon.");
    reviewTornPhoto->setChoiceses("Find Mika's weapon.", accuseMika, 0);
    reviewTornPhoto->setChoiceses("Your inventory have: ", inven, 2);
    compareMika->setDescription("A solid proof combined from Mika's weapon and motive, showing that she killed Victor.");
    compareMika->setChoiceses("Confront Mika with your evidence.", confrontMika, 0);
    compareMika->setChoiceses("Your inventory have: ", inven, 2);
    confrontMika->setDescription("Hoof Kaslei: Where's your pen, Mika?\nMika: I lost it during the chaos. Wh...What of it?\nHoof Kaslei:\n(showing her the pen)\nI found it. Near Victor's body.\nMika:\n(face paling rapidly)\nM...Maybe I dropped it there.\n\nHoof Kaslei:\n(showing Mika the torn photo)\nYour locket contains the other half of this photo - do you recognize him?\nMika: He… he was my mentor. But I didn't kill him!\n\nKaslei: Poison in your pen, motive from the photo—explain yourself.\nMika (breaking down): It was justice… he betrayed me years ago. I...I had to stop him.\n\n\nYou had found out the murderer and handed her and the evidence to the police when the airplane landed.\n\nYOU SOLVED THE CASE. CONGRATULATIONS.");
    confrontMika->setEnding(true);

    //False path 1 (Aurora)
    act3Investigation->setChoiceses("Aurora.", accuseAurora, 0);
    accuseAurora->setDescription("Aurora looked suspicious. I'd check on the champagne flute that had her fingerprints.");
    accuseAurora->setChoiceses("Review on the champagne flute.", reviewFlute, 0);
    accuseAurora->setChoiceses("Your inventory have: ", inven, 2);
    reviewFlute->setDescription("You followed the champagne flute with Aurora's fingerprints stained with aconite - a chain of custody that led to galley cleanup.\n\nHoof Kaslei: Aurora, did you touch this flute?\nAurora: Yes. I served it, but I saw no poison. No strange smell nor colour. Just champagne.\nHoof Kaslei: I see. Can I borrow your pen for a while? Just for some testing.\nAurora: Here you are. But you won't find anything on it. I'm sure of that.");
    reviewFlute->setChoiceses("Review on Aurora's pen.", reviewAuroraPen, 0);
    reviewFlute->setChoiceses("Your inventory have: ", inven, 2);
    reviewAuroraPen->setDescription("Aurora's pen was, as she said, completely clean. The forensic lab kit you brought couldn't find any traces on it. However, the real headache came when the kit's test results pointed out that poison residue on the flute predated fingerprint deposition, meaning that someone set Aurora up.\nIt seemed I've hit a dead end. I'd have to return the pen to Aurora, and informed her that she was innocent.");
    reviewAuroraPen->setChoiceses("Start over and investigate someone else.", act3Investigation, 0);
    reviewAuroraPen->setChoiceses("Your inventory have: ", inven, 2);
    
    //False path 2 (Alex)
    act3Investigation->setChoiceses("Alex.", accuseAlex, 0);
    accuseAlex->setDescription("Alex looked suspicious. I'd check on the insulin pen.");
    accuseAlex->setChoiceses("Review on the insulin pen.", reviewInsulinPen, 0);
    accuseAlex->setChoiceses("Your inventory have: ", inven, 2);
    reviewInsulinPen->setDescription("The insulin pen could be the murder weapon. It can be used to store aconite.\n\nHowever, when tested with the forensic lab kit I brought, the results were negative. The pen was just a normal insulin pen. Alex also displayed some symptoms of diabetes like drinking lots of water and going to the toilet multiple times.\nHuh, guess he was just a poor patient.\nIt seemed this wasn't the right path.");
    reviewInsulinPen->setChoiceses("Start over and investigate someone else.", act3Investigation, 0);
    reviewInsulinPen->setChoiceses("Your inventory have: ", inven, 2);

    //False path 3 (Clara)
    act3Investigation->setChoiceses("Clara.", accuseClara, 0);
    accuseClara->setDescription("Clara looked suspicious. I'd check on the camera footage that recorded her.");
    accuseClara->setChoiceses("Review on the camera footage.", reviewCam, 0);
    accuseClara->setChoiceses("Your inventory have: ", inven, 2);
    reviewCam->setDescription("It was completely normal to go to the lavatory, but Clara's timing was a bit too convenient. She could have come to the lavatory to prepare the weapon, and returned afterwards to clean all the traces that could expose her. I'd confront her about this.\n...\n...\nRight before I was about to interrogate Clara, the Security Officer came back with her medical logs, which I had told him to retrieved before. It confirmed that Clara was indeed ill.\nThe forensic lab kit I brought also found no traces of aconite in the lavatory.\nIt seemed I was stuck.");
    reviewCam->setChoiceses("Start over and investigate someone else.", act3Investigation, 0);
    reviewCam->setChoiceses("Your inventory have: ", inven, 2);

    //False path 4 (Harrison)
    act3Investigation->setChoiceses("Harrison.", accuseHarrison, 0);
    accuseHarrison->setDescription("Harrison looked suspicious. I'd check on the threatening note he received.");
    accuseHarrison->setChoiceses("Review on the threatening note.", reviewNote, 0);
    accuseHarrison->setChoiceses("Your inventory have: ", inven, 2);
    reviewNote->setDescription("The handwriting on the note matched Harrison's. It was definitely him who wrote this note.\nI came back to Harrison's seat and requested to search his belongings once more. He looked quite annoyed, but allowed me nonetheless.\nWhile searching his briefcase, I found no poison, but a lot of notes. Harrison seemed like the type to write everything he thought of down on his notes. The notes, including the threatening one, were all identical in shape and size. They probably came from the same notebook.\n\nWell, I found that notebook at the bottom of the briefcase. Many pages were torn down, and the remaining ones were also full of words. I tried to read some of them, and saw that their topics vary, from meeting schedules to lists of recommended restaurant. I even found another note with threatening words. It seemed Harrison liked to write notes for all the situations, including ones yet to happen. No wonder he forgot about them and thought that his threatening note was a prank of another person.\n\nTurned out, Harrison wasn't the murderer.");
    reviewNote->setChoiceses("Start over and investigate someone else.", act3Investigation, 0);
    reviewNote->setChoiceses("Your inventory have: ", inven, 2);

    //Key clues
    evidence* penOnVictor = new evidence();
    penOnVictor->setName("Syringe-Pen found near Victor's body");
    penOnVictor->setDescription("Coated with aconite residue, NovaTech-branded - matches the murder weapon used on Victor's neck pillow.");
    penOnVictor->setIDnumber(0);
    penOnVictor->setHasFound(false);

    evidence* tornPhoto = new evidence();
    tornPhoto->setName("Torn Photo in Victor's Pocket");
    tornPhoto->setDescription("One half shows Victor with a young woman (Mika Sato) at a NovaTech gala; the other half is hidden in Mika's locket, which you have noticed when she served you water.");
    tornPhoto->setIDnumber(0);
    tornPhoto->setHasFound(false);
    hoofToMika->setDescription("(Detective Hoof to Mika Sato):\nHoof: Why was your photo half here, and the other half in your locket?\nMika: I don't know... Victor and I only met once. Someone must have planted it.");

    evidence* threatNote = new evidence();
    threatNote->setName("Threatening Note under Harrison's Seat");
    threatNote->setDescription("Hand-written: 'You ruined my life. Enjoy your last flight'. Matches Harrison's handwriting.");
    threatNote->setIDnumber(1);
    threatNote->setHasFound(false);
    harrisonToHoof->setDescription("(Harrison to Detective Hoof):\nHoof: Why did you write this note?\nHarrison: I didn't. My handwriting? Someone wants to frame me.");
    
    evidence* sedativeCoffee = new evidence();
    sedativeCoffee->setName("Sedative-Laced Coffee Cup at Alex's Seat");
    sedativeCoffee->setDescription("Traces of a fast-acting sedative prove Alex was awake and drugged, falsifying his 'jet-lag' alibi.");
    sedativeCoffee->setIDnumber(2);
    sedativeCoffee->setHasFound(false);
    alexToClara->setDescription("(Alex to Clara):\nAlex: Clara, this coffee... I don't remember drinking it.\nClara: Someone wanted you out of commission. But why?");

    evidence* lavaFootage = new evidence();
    lavaFootage->setName("Lavatory Security Footage");
    lavaFootage->setDescription("Clara Voss is seen entering the lavatory 10 minutes before Victor died and 15 minutes after that-seems damning.");
    lavaFootage->setIDnumber(3);
    lavaFootage->setHasFound(false);
    securityToHoof->setDescription("(Security Officer to Detective Hoof):\nOfficer: She went in before and after Victor died-looked suspicious.\nHoof: Check her medical log. I bet she has an explanation.");

    //False leads
    evidence* penAurora = new evidence();
    penAurora->setName("Clean Syringe-Pen on Aurora's Apron");
    penAurora->setDescription("Identical to the one found near Victor's body, no poison - Aurora insists it's standard catering issue.");
    penAurora->setIDnumber(4);
    penAurora->setHasFound(false);
    auroraToMikaPen->setDescription("(Aurora to Mika):\nAurora: This pen? I use it for kitchen notes. It's brand-new - no poison.\nMika: It looks familiar... but I trust you, Aurora.");

    evidence* insulinPen = new evidence();
    insulinPen->setName("Broken Insulin Pen in Alex's Bag");
    insulinPen->setDescription("A diabetic passenger's device, can be easily mistaken for the murder weapon.");
    insulinPen->setIDnumber(5);
    insulinPen->setHasFound(false);
    alexToHoof->setDescription("(Alex to Detective Hoof):\nHoof: This pen was broken... possible murder weapon?\nAlex: It's just my insulin pen-broke this morning. Nothing more.");

    evidence* partyPhoto = new evidence();
    partyPhoto->setName("Party Photo in Clara's Purse");
    partyPhoto->setDescription("Clara and Victor at a charity gala-the two might be in a romantic relationship in the past.");
    partyPhoto->setIDnumber(6);
    partyPhoto->setHasFound(false);
    claraToHoof->setDescription("(Clara to Hoof):\nHoof: A wedding photo? You two look close.\nClara: We were colleagues. That night was a fundraiser, nothing else.");

    evidence* anonymousNote = new evidence();
    anonymousNote->setName("Anonymous Typed Note on Alex's Coffee Cup");
    anonymousNote->setDescription("'Payback's a killer'. Generic and not linked to any suspect's handwriting.");
    anonymousNote->setIDnumber(7);
    anonymousNote->setHasFound(false);
    alexRead->setDescription("(Alex reading to himself, unaware that you wasn't far behind and was listening in):\nAlex (muttering): Payback's a killer... Who sent this?");

    evidence* teaBagMika = new evidence();
    teaBagMika->setName("Herbal Tea Bag on Mika's Trolley");
    teaBagMika->setDescription("Chamomile - looks like a poison pouch but harmless.");
    teaBagMika->setIDnumber(8);
    teaBagMika->setHasFound(false);
    mikaToAurora->setDescription("(Mika to Aurora):\nMika: Someone dropped this in my trolley-thought it was poison.\nAurora: Just tea - relax, it's not lethal.");

    evidence* whiskeyBottle = new evidence();
    whiskeyBottle->setName("Whiskey Bottle near Harrison's Seat");
    whiskeyBottle->setDescription("The bottle suggests murder by liquor, but contains only plain alcohol.");
    whiskeyBottle->setIDnumber(9);
    whiskeyBottle->setHasFound(false);
    harrisonToMika->setDescription("(Harrison to Mika):\nHarrison: That bottle? I poured it myself.\nMika: Thought it might be spiked... but it's clean.");

    evidence* fingerprintFlute = new evidence();
    fingerprintFlute->setName("Champagne Flute with Fingerprints in the Galley (new Aurora lead)");
    fingerprintFlute->setDescription("A single flute stained with aconite traces and Aurora's fingerprints.");
    fingerprintFlute->setIDnumber(11);
    fingerprintFlute->setHasFound(false);
    auroraToMikaFlute->setDescription("(Aurora and Mika):\nAurora: It cannot be! I always wear gloves when serving passengers.\nMika: I... I must have mishandled it during cleanup. But the poison was already there from before.");

    evidence* mikaMurder = new evidence();
    mikaMurder->setName("Proof that Mika committed Victor's murder");
    mikaMurder->setDescription("A solid proof combined from Mika's weapon and motive, showing that she killed Victor.");
    mikaMurder->setIDnumber(10);
    mikaMurder->setHasFound(false);



    // Main game loop
    //Main game
    Story currentStory = *act1Scene;
    bool gameRunning = true;
    
    //Inventory
    inventory.push_back(threatNote);
    inventory.push_back(sedativeCoffee);
    inventory.push_back(lavaFootage);
    inventory.push_back(penOnVictor);
    inventory.push_back(tornPhoto);
    inventory.push_back(penAurora);
    inventory.push_back(insulinPen);
    inventory.push_back(partyPhoto);
    inventory.push_back(anonymousNote);
    inventory.push_back(teaBagMika);
    inventory.push_back(whiskeyBottle);
    inventory.push_back(fingerprintFlute);
    inventory.push_back(mikaMurder);
    //Check hasFound
    //Function to check if all evidence has been collected
    bool allEvidenceCollected(const vector<evidence*>& inventory); {
        for (const auto& item : inventory) {
            if (!item->getHasFound()) {
                return false; // If any evidence is not found, return false
            }
        }
        return true; // All evidence has been found
    };
    //Main game
    while (!currentStory.getEnding() && gameRunning) 
    {
        
        clearScreen();
        
        // Display current storys
        string currentDescription = currentStory.getDescription();
        currentStory.printDescription();
        cout << endl;
         

        //Dialogue snippets of characters with collected evidences
        if (currentStory.getDescription() == collectPen->getDescription())
        {
            penOnVictor->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You noticed " << penOnVictor->getName() << endl;
        }
        else if (currentStory.getDescription() == collectTornPhoto->getDescription())
        {
            tornPhoto->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You found " << tornPhoto->getName() << " and went to ask Mika about it:\n " << hoofToMika->getDescription() << endl;
        }
        else if (currentStory.getDescription() == threatNote->getDescription())
        {
            threatNote->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You found " << threatNote->getName() << " and confronted Harrison about it:\n " << harrisonToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == sedativeCoffee->getDescription())
        {
            sedativeCoffee->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You found out " << sedativeCoffee->getName() << " and heard Alex and Clara talked about it:\n " << alexToClara->getDescription() << endl;
        }
        else if (currentStory.getDescription() == lavaFootage->getDescription())
        {
            lavaFootage->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You asked the Security Officer to check the security camera and found a suspicious footage, in it " << lavaFootage->getName() << endl << securityToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == penAurora->getDescription())
        {
            penAurora->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You found " << penAurora->getName() << " and saw Mika asked Aurora about it:\n " << mikaToAurora->getDescription() << endl;
        }
        else if (currentStory.getDescription() == insulinPen->getDescription())
        {
            insulinPen->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You found " << insulinPen->getName() << " and confronted Alex about it:\n " << alexToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == partyPhoto->getDescription())
        {
            partyPhoto->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You found " << partyPhoto->getName() << " and asked Clara about it:\n " << claraToHoof->getDescription() << endl;
        }
        else if (currentStory.getDescription() == anonymousNote->getDescription())
        {
            anonymousNote->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: Alex found " << anonymousNote->getName() << "\n " << alexRead->getDescription() << endl;
        }
        else if (currentStory.getDescription() == teaBagMika->getDescription())
        {
            teaBagMika->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You noticed " << teaBagMika->getName() << " and heard Aurora reassured Mika:\n " << mikaToAurora->getDescription() << endl;
        }
        else if (currentStory.getDescription() == whiskeyBottle->getDescription())
        {
            whiskeyBottle->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You noticed " << whiskeyBottle->getName() << " and eavesdropped Harrison talking to Mika about it:\n " << harrisonToMika->getDescription() << endl;
        }
        else if (currentStory.getDescription() == fingerprintFlute->getDescription())
        {
            fingerprintFlute->setHasFound(true);
            
            cout << "\nNEW EVIDENCE: You found " << fingerprintFlute->getName() << " and confronted Aurora and Mika about it:\n " << auroraToMikaFlute->getDescription() << endl;
        }
        else if (currentStory.getDescription() == investigatePassengers->getDescription() && allEvidenceCollected(inventory))
        {
        cout << "Now that you had collected all the evidence, it was time to confront each suspect for their testimony";
        investigatePassengers->setChoiceses("Interrogate", interrogatePassengers, 0);
        }
        else if (currentStory.getDescription() == mikaMurder->getDescription())
        {
            mikaMurder->setHasFound(true);
            cout << "\nNEW EVIDENCE: You found " << mikaMurder->getName();
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
    delete act1End;
    delete hoofToMika;
    delete harrisonToHoof;
    delete alexToClara;
    delete securityToHoof;
    delete auroraToMikaPen;
    delete alexToHoof;
    delete claraToHoof;
    delete alexRead;
    delete mikaToAurora;
    delete harrisonToMika;
    delete auroraToMikaFlute;
    delete collectPen;
    delete collectTornPhoto;
    delete investigatePassengers;
    delete investigateHarrisonNote;
    delete collectThreatNote;
    delete investigateHarrisonBottle;
    delete collectWhiskeyBottle;
    delete investigateAlexCoffee;
    delete collectAlexCoffee;
    delete inspectAlexBag;
    delete collectAlexPen;
    delete eavesdropAlex;
    delete getAnonymousNote;
    delete collectAnonymousNote;
    delete checkCam;
    delete collectFootage;
    delete investigateClara;
    delete collectClaraPhoto;
    delete investigateAuroraPen;
    delete collectAuroraPen;
    delete investigateAuroraFlute;
    delete collectAuroraFlute;
    delete investigateMika;
    delete collectTeabag;
    delete interrogatePassengers;
    delete checkTestimony;
    delete act3Investigation;
    delete accuseMika;
    delete accuseAurora;
    delete accuseAlex;
    delete accuseClara;
    delete accuseHarrison;
    delete reviewPenOnVictor;
    delete checkPenOnVictor;
    delete reviewTornPhoto;
    delete compareMika;
    delete confrontMika;
    delete reviewFlute;
    delete reviewAuroraPen;
    delete reviewInsulinPen;
    delete reviewCam;
    delete reviewNote;
    
    for (auto ev : inventory) {
        delete ev;
    }
    
    return 0;
}