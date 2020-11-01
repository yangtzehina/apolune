/*********************************************************************************************
*  __    __________________   ________________________________   __________  ________       *
* /\ \  /\  __ \  ___\__  _\ /\  __ \  ___\__  _\  == \  __ \ "-.\ \  __ \ \/\ \__  _\ (tm) *
* \ \ \_\_\ \/\ \___  \/\ \/ \ \  __ \___  \/\ \/\  __<\ \/\ \ \-.  \  __ \ \_\ \/\ \/      *
*  \ \_____\_____\_____\ \_\  \ \_\ \_\_____\ \_\ \_\ \_\_____\_\\"\_\_\ \_\_____\ \_\      *
*   \/_____/_____/_____/\/_/   \/_/\/_/_____/\/_/\/_/\/_/_____/_/ \/_/_/\/_/_____/\/_/      *
*    --------------------------------------------------------------------------------       *
*     Lost Astronaut Game Development Framework (c) 2007-2020 H. Elwood Gilliland III       *
*********************************************************************************************
* This software is copyrighted software.  Use of this code is given only with permission to *
* parties who have been granted such permission by its author, Herbert Elwood Gilliland III *
* This software is licensed by permissions of the following open source LICENSE:  AGPL 3.0  *
* See https://www.gnu.org/licenses/agpl-3.0.en.html for details on this license.            *
*********************************************************************************************/
#pragma once

#include "FormUI.h"

class FormUITest : public GLWindow {
 Zp<FBOColorDepth> fbo;
 Zp<GLWindow> back_to;
 VirtualGUI vgui;
 Proce55ors editors;
 Zp<FormEditorWindow> few;
 Zint intVal;
 Zdouble doubleVal,dv2,dv3,dv4;
 Strings dictators,fortunes;
 Zdouble angleDegrees,angleRadians;
 Zstring oneLiner,twoLiner,threeLiner;
 Zbool mySwitch;
 Crayon myColor1,myColor2,myColor3,myColor4;
 Cartesian coordi;
 Cartesiand coordd;
 Zp<Film> film;
 Zp<GLImage> icon;
 Zp<GLImage> photograph;
 Zint selected,selected2;
 void OnLoad() {
  background.Pick(indigo);
  Fullscreen();
  fbo=&fbo1080p;
  vgui.VirtualDisplay1080p();
  vgui.proce55ors=&editors;
  vgui.glWindow=this;
  fast.fontSize.x=8.0;
  fast.fontSize.y=11.0;
  fast.ResponsiveRatio(fbo1080p.w,fbo1080p.h);
  virtualStyleDefault.Relative(1.0,0.8);
  // create some test data
  selected=-1;
  dictators.Add("Pol Pot");
  dictators.Add("Kim Jong Un");
  dictators.Add("Vlad the Impaler");
  dictators.Add("Henry the VIII");
  dictators.Add("Gene Simmons");
  fortunes.Add("It's never crowded along the \"extra mile\"");
  fortunes.Add("Let's finish this up now, someine is waiting for you on that");
  fortunes.Add("All troubles you have can pass away very quickly.");
  fortunes.Add("You will enjoy good health, you will be surrounded by luxury.");
  fortunes.Add("It is now, and in this world, that we must live.");
  fortunes.Add("Dream your dream and your dream will dream of you.");
  fortunes.Add("Intelligence is the door to freedom and alert attention is the mother of intelligence.");
  fortunes.Add("You can fix it with a little extra energy and a positive attitude.");
  fortunes.Add("Never upset the driver of the car you're in; they're the master of your destiny until you get home.");
  fortunes.Add("Fortune favors the brave.");
  fortunes.Add("Today it's up to you to create the peacefulness you long for.");
  fortunes.Add("A friend asks only for your time not your money.");
  fortunes.Add("If you refuse to accept anything but the best, you very often get it.");
  fortunes.Add("A smile is your passport into the hearts of others.");
  fortunes.Add("A good way to keep healthy is to eat more Chinese food.");
  fortunes.Add("Your high-minded principles spell success.");
  fortunes.Add("Hard work pays off in the future, laziness pays off now.");
  fortunes.Add("Change can hurt, but it leads a path to something better.");
  fortunes.Add("Enjoy the good luck a companion brings you.");
  fortunes.Add("People are naturally attracted to you.");
  fortunes.Add("Hidden in a valley beside an open stream- This will be the type of place where you will find your dream.");
  fortunes.Add("A chance meeting opens new doors to success and friendship.");
  fortunes.Add("You learn from your mistakes... You will learn a lot today.");
  fortunes.Add("If you have something good in your life, don't let it go!");
  fortunes.Add("What ever you're goal is in life, embrace it visualize it, and for it will be yours.");
  fortunes.Add("Your shoes will make you happy today.");
  fortunes.Add("You cannot love life until you live the life you love.");
  fortunes.Add("Be on the lookout for coming events; They cast their shadows beforehand.");
  fortunes.Add("Land is always on the mind of a flying bird.");
  fortunes.Add("The man or woman you desire feels the same about you.");
  fortunes.Add("Meeting adversity well is the source of your strength.");
  fortunes.Add("A dream you have will come true.");
  fortunes.Add("Our deeds determine us, as much as we determine our deeds.");
  fortunes.Add("Never give up. You're not a failure if you don't give up.");
  fortunes.Add("You will become great if you believe in yourself.");
  fortunes.Add("There is no greater pleasure than seeing your loved ones prosper.");
  fortunes.Add("You will marry your lover.");
  fortunes.Add("A very attractive person has a message for you.");
  fortunes.Add("You already know the answer to the questions lingering inside your head.");
  fortunes.Add("It is now, and in this world, that we must live.");
  fortunes.Add("You must try, or hate yourself for not trying.");
  fortunes.Add("You can make your own happiness.");
  fortunes.Add("The greatest risk is not taking one.");
  fortunes.Add("The love of your life is stepping into your planet this summer.");
  fortunes.Add("Love can last a lifetime, if you want it to.");
  fortunes.Add("Adversity is the parent of virtue.");
  fortunes.Add("Serious trouble will bypass you.");
  fortunes.Add("A short stranger will soon enter your life with blessings to share.");
  fortunes.Add("Now is the time to try something new.");
  fortunes.Add("Wealth awaits you very soon.");
  fortunes.Add("If you feel you are right, stand firmly by your convictions.");
  fortunes.Add("If winter comes, can spring be far behind?");
  fortunes.Add("Keep your eye out for someone special.");
  fortunes.Add("You are very talented in many ways.");
  fortunes.Add("A stranger, is a friend you have not spoken to yet.");
  fortunes.Add("A new voyage will fill your life with untold memories.");
  fortunes.Add("You will travel to many exotic places in your lifetime.");
  fortunes.Add("Your ability for accomplishment will follow with success.");
  fortunes.Add("Nothing astonishes men so much as common sense and plain dealing.");
  fortunes.Add("Its amazing how much good you can do if you dont care who gets the credit.");
  fortunes.RandomizeOrder();
  photograph=library.Load("data/images/Arecibo_message.png");
  // create the editor window
  fast.tfont.w=16;
  fast.tfont.h=22;
  fast.fontSize.x=8.0;
  fast.fontSize.y=11.0;
  fast.rr_border.x_LimeGreen();
  fast.tblend=additive;
  fast.tfont.Set(16,22);
  fast.highlight.x_LimeGreen();
  fast.activated.x_DarkGreen();
  FormEditorWidget *f=null;
  few=new FormEditorWindow;
  f=(FormEditorWidget*)few->Bind(&mySwitch.value,"crazy","ludicrous");
  f->label="My Long Label To Test This";
  f=(FormEditorWidget*)few->Bind(&mySwitch.value);
  f=(FormEditorWidget*)few->Bind(&mySwitch.value,"spoons","");
  f=(FormEditorWidget*)few->Bind(&mySwitch.value," "," ");
  f=(FormEditorWidget*)few->Bind(&angleDegrees.value);
  f=(FormEditorWidget*)few->Bind(&angleRadians.value,true);
  f=(FormEditorWidget*)few->Bind(&coordi);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(&coordi,true);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(&coordd);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(&film.pointer);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(&myColor1,true);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(&myColor2,false,true);
  f=(FormEditorWidget*)few->Bind(&myColor3,true,true);
  f=(FormEditorWidget*)few->Bind(&myColor4);
  f=(FormEditorWidget*)few->Bind(&oneLiner.value);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(&twoLiner.value,20,2);
  f=(FormEditorWidget*)few->Bind(&threeLiner.value,30,3);
  f=(FormEditorWidget*)few->Bind(&icon.pointer,"data/images/elements","Some icon you wanted");
  f->label="more label testing";
  f=(FormEditorWidget*)few->Show(photograph);
  f=(FormEditorWidget*)few->Show("This is some short text");
  f=(FormEditorWidget*)few->Show("This is some longer text that is long\nand has multiple lines and stuff.");
  f->label="more label testing";
  f=(FormEditorWidget*)few->Show("This is some even longer text that is really long\nand has multiple lines and stuff.\nLook this is line 3!\nAnd I am a really long line on line four, whooo! yay!\nThis is a short line five.");
  f=(FormEditorWidget*)few->Bind(&dictators);
//  f=(FormEditorWidget*)few->Bind(&selected.value,&fortunes,5,60);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(&selected2.value,&dictators);
  f=(FormEditorWidget*)few->Bind(&doubleVal.value,0.23,45.6);
  f=(FormEditorWidget*)few->Bind(true,&dv2.value,0.78,9.00);
  f->label="more label testing";
  f=(FormEditorWidget*)few->Bind(true,&dv3.value,1.0,10.0,true);
  f=(FormEditorWidget*)few->Bind(true,&dv4.value,0.0,100.0,true,true);
  few->Arrange();
  vgui.Add(few);
  few->Setup();
 }
 void Render() {
  if ( visible ) {
   fast.vwindows=&vgui;
   fast.vdisplay.SetRect(0,0,fbo1080p.w,fbo1080p.h);
   fbo->background.Pick(indigo);
   fbo->Bind();
   vgui.RenderPart1();
//  fast.ljust(digicaps,"some title",16,32,32,32,2,3,crayons.Pick(aliceBlue),additive);
   vgui.RenderPart2();
   fbo->Unbind();
   fbo->blend=none;  
   fbo->RenderUpsideDown(0,0,display->w,display->h);
  }
 }
 void Between() {
  if ( input->KeyDown(DX_A) ) few->Arrange();
  editors.Between();
 }
};

