/*
 * main.cpp
 *
 *  Created on: Jan 7, 2013
 *      Author: Mindofbeholder & xBollinger
 *      ETA: February 1st
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include "functions.h"

using namespace std;



int main()
{
	resize(100, 300);
	clear();
	system("TITLE Got Milk?");
	system("COLOR 0A");
	int milk = 0;
	int reg = 0;

	noEffect("You awaken on an early spring Morning. The bright morning sun is shining through your window,\nblinding you as you struggle to force your eyes open.  Suddenly, your stomach rumbles violently.\nYou are hungry.  At your age, and in these days and times, the only viable option for food is of\ncourse cereal.  You walk to the kitchen and open the cabinet. Your mouth waters at the sight of \ntwo cereal boxes.  One says Cap'n Crunch.  The other:  Reese's Puffs.  \nWhich cereal do you choose?  Enter the cereal's corresponding number and then press Enter.\n","Cap'n Crunch", "Reese's Puffs", "", "");
	cout << "\n";
	clear();
	cout << "You reach out towards the cereal box.  Your hands tremble with anticipation.  Finally, your hand\nreaches the box and grasps it.  You quickly grab a bowl and pour the cereal into the bowl. You \ncannot wait to taste the sweet flavor as the cereal hits your tongue. YUM.  Slowly, but proudly,\nwith your head held high, you march towards the refrigerator and open it...\n";
	cout << endl;
	cout << "SUDDENLY! You scream out in anguish.  The pain...Unbearable... You scan once, twice through the \nrefrigerator.  Then begin to dig violently.  There is no milk in the fridge.  Never have you felt\nsuch desperation.  It pierces to the very depths of your heart...and your stomach. \n";
	cout << endl;
	cout << "With a sigh you walk to your bedroom and throw on jeans and a T-shirt. Adventure clothes. \nBecause you are now going on an Adventure!\n";
	cout << endl;
	cout << "You mount your steed; a sexy sleek Prius. Green. Off you drive into the far distance.  Your\ndestination Wal-Mart.  Through mountainous hills and over treacherous curbs you travel with speed.\n'Make haste for Cereal awaits!'  Finally after a long 10 minutes of travel, you arrive at your\ndestination.  The towering corporate fortress looms menacingly above you.\n";
	cout << endl;
	cout << "You walk in, the magical doors opening for you.  You feel like a God among men.  You notice a small\ngroup of people near the registers purchasing goods.  You observe your surroundings and notice the\ndairy section at the far rear of the fortress.  It's just not your day today, now is it?  You\nquickly make your way to the dairy section and face the wall of cow-excreted beauty.\nYou are faced with a choice.\n";

	switch(twoChoice("Will you choose 2% milk or whole milk?","2%","Whole Milk")){
	case 1:
		milk = 1;
		clear();
		break;
	case 2:
		milk = 2;
		clear();
		break;
	}
	cout << "You open the cooler door and firmly take the milk.  Glory is now in your hands!  Quickly now!\nQuickly to the registers!  As you reach the front of the store you come to a halt.. Your jaw drops\nto the floor. The small group of customers you noticed upon arrival has grown to a violent mob. You\nquickly and desperately scan for the best possible route out of this hellish place.  You see two\npossible escapes.";


	registerSelect:
	switch(twoChoice("You must choose. Register 1 or Register 3?","Register 1","Register 3")){
	case 1:
		reg = 1;
		clear();
		break;
	case 2:
		reg = 2;
		clear();
		break;
	}

	if(reg == 1){
		cout << "You rush to Register 1.  Upon reaching the register, your progress is halted by an older lady.\nShort, gray haired and wearing spectacles.  She slowly places her goods on the counter and waits\nfor the items to be rang up.  After all of her items are scanned she slowly pulls out her pocket\nbook and a coupon book.  Slowly she pulls out a handful of coupons and hands them to the cashier.\nThe pressure is mounting! Your cereal awaits!  You haven't the time for this.  Your blood begins to\nboil. Beads of sweat forming on your brow.  The cashier is taking too long!\n";
		cout << endl;
		cout << "10 minutes later...\nFinally the lady has paid and your milk has been rung up.  You quickly pay and run out the doors.\nNevermind the fancy magical doors! There is cereal to be had!\n\n";
		goto registerOver;
	}
	if( reg==2){
		cout << "You rush to Register 3.  Upon reaching the register the customer ahead of you takes their goods \nand walks away.  You quickly place your jug of milk on the counter and grab your wallet. The\ncashier quickly rings up your milk.  You notice a '#1 Cashier!!!' button on her name badge.  You\npay for your milk and walk towards the doors.  You beam and hold your head high as you pass through the magical doors. The doors praise your holy awesomeness as you pass.\n";
		goto registerOver;
	}
	if( reg != 1 | reg != 2){
		clear();
		goto registerSelect;
	}
	registerOver:
	pause();
	clear();

	cout << "You jump back on your noble steed and race home.  You are so happy you practically fly over the\nmountains and curbs. These being only subtle nuisances.  You quickly arrive at your humble abode.\nYou are thoroughly prepared for the orgasmic taste of this milk and cereal. You tremble at the\nthought. I could go on but I'd be quoting Fifty Shades.\n\n";

	cout << "You rush through the door and spring into the kitchen.  You notice your bowl is not where you left\nit. Upon further investigation you notice a similar bowl in the sink.  Two cereal boxes rest on the\nkitchen counter. You suddenly feel uneasy and unsure of your current situation.  You slowly and\ncarefully walk towards the counter. You grab a bowl and then grab the cereal box.  You attempt to\npour the cereal..EMPTY! Nothing but crumbs... Sweat pours down your face.  A massive knot forms in\nyour stomach.  You desperately reach for the other box of cereal and quickly tilt it and pour.\nEMPTY! AGAIN!  What foul trouble is this? What evil witchcraft has befallen your cereal!  Suddenly, you hear footsteps.  They approach like thunder. Closer and closer.  You turn quickly.  Your\nsibling stands in front of you.  You both stare at each other. Then your sibling asks 'Did you get\nany more cereal while you were out?  I ate the last of it.' A look of hatred, a look of contempt\nshoots through your eyes.  You glare at your sibling... And then realize... Your journey.. It was\nall for nothing.  You drop to your knees and reach to the heavens. 'Why, God? Why?!!' A single\nsolitary tear runs down your cheek.  You then ask yourself....\n";

	glassMilk:
	switch(twoChoice("Would you like a glass of milk?","Yes","No")){
	case 1:
		goto milkEnding;
		break;
	case 2:
		goto noMilkEnding;
		break;
	default:
		goto glassMilk;
	}

	milkEnding:
	if(milk == 1){
		clear();
		cout << "You pour a glass of milk and take a sip.  The cool liquid runs down your throat and cools your\nwhole body. You smile and look out the window.  Though you didn’t achieve your original goal... You\nare now feeling better and more easily suited for vengeance.  The sibling must pay....\n";
		cout << endl << endl;
		cout << "FIN";
		cout << endl << endl;
		pause();
		exit(1);
	}
	if(milk == 2){
		clear();
		cout << "You pour a glass of milk and take a sip.  The cool liquid runs down your throat and reaches your\nstomach. You suddenly feel nauseous.  You have a belly ache.  You are having a bad day, aren't you?\nRecover quickly. You must feel better and you need to be more easily suited for vengeance.\nThe sibling must pay....\n";
		cout << endl << endl;
		cout << "FIN";
		cout << endl << endl;
		pause();
		exit(1);
	}

	noMilkEnding:
		clear();
		cout << "You look at your sibling.  Then at the milk jug.  You pick up the jug slowly and stare at it. Then\nwith a battlecry worthy of a fierce warrior you sling the milk jug directly at your sibling's face.\nThe jug explodes in their face. Milk and blood mix in a frothy white and red symphony of vengeance.\nYou have won something today. Honor. And victory.\n";
		cout << endl << endl;
		cout << "FIN";
		cout << endl << endl;
		pause();
		exit(1);

	//cout << endl << endl; pause();





}
