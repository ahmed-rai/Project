#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>



  int main() {

    SDL_Surface * start = NULL, * settings = NULL, * quit = NULL, * cadre = NULL,*t=NULL, *starm=NULL,*sets=NULL,*exits=NULL, * startc = NULL, * settingc = NULL,        * quitc = NULL, * single = NULL, * multi = NULL, * load = NULL,* singles = NULL, * multis = NULL, * loads = NULL,* singlec = NULL, * multic = NULL, * loadc = NULL,*size=NULL,*volume=NULL,*diff=NULL;
SDL_Surface *sizes=NULL,*volumes=NULL,*diffs=NULL,*sizec=NULL,*volumec=NULL,*diffc=NULL;
   Mix_Music * musique,*click;

click= Mix_LoadMUS("click.mp3"); 
int i=0,v = MIX_MAX_VOLUME / 2;
int g = 1 ,a=0;
    int done= 1,h=900,w=729,select=0,k=1;
char anim[8];
int x,y;
    SDL_Surface * ecran = NULL, * imageDeFond = NULL;
    SDL_Rect positionFond, posstart, possettings, posexit, poscad,posking , post,postarm,posets,poxit,posstartc, possettingc, posexitc;
    SDL_Event event;
SDL_Color couleur = {255, 255,255};
    SDL_Init(SDL_INIT_EVERYTHING); 
    posking.x = 400;
    posking.y = 150;
    post.x = (h/9)*2;
    post.y = w/7 ;
    posstart.x = h*(0.35);
postarm.x = h*(0.35);
    posstart.y = w*0.4115;
postarm.y = w*0.4115;
    possettings.x =  h*(0.35);

posets.x=possettings.x;


    possettings.y = w*0.5487;
posets.y=possettings.y;
    posexit.x =  h*(0.35);

    posexit.y = w*0.6859;

  poxit.x=  posexit.x;
    poxit.y=posexit.y;
// position des butons sous menu play




    positionFond.x = 0;
    positionFond.y = 0;
    poscad.x = h*0.3;
    poscad.y = w*0.4252;
    SDL_WM_SetCaption("SDL_Mixer", NULL);
SDL_WM_SetCaption("Gestion des événements en SDL", NULL);
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) {
      printf("%s", Mix_GetError());
    }
 
    musique = Mix_LoadMUS("music.mp3");
    Mix_PlayMusic(musique, -1);
 TTF_Init();
    ecran = SDL_SetVideoMode(h,w, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);
 SDL_WM_SetCaption("ROBOT MESS !", NULL);
    imageDeFond = IMG_Load("menu.jpg");
  // load des images originaux >>> bleu 
////





    start = IMG_Load("start.png");
starm = IMG_Load("starm.png");
    settings = IMG_Load("settings.png");
   quit= IMG_Load("exit.png");            
    sets = IMG_Load("sets.png");
    exits = IMG_Load("exits.png");
    

multi= IMG_Load("multi.png");
single= IMG_Load("single.png");
load= IMG_Load("load.jpg");


// load des images bleu ciel 
 

multis= IMG_Load("multis.png");
singles= IMG_Load("singles.png");
loads= IMG_Load("loads.jpg");



diff= IMG_Load("diff.png");
volume= IMG_Load("volume.png");
size= IMG_Load("size.png");







// load des images oranges >>>>clicked


startc =IMG_Load("startc.png");
settingc= IMG_Load("settingc.png");
 quitc= IMG_Load("quitc.png");
multic= IMG_Load("multic.png");
singlec= IMG_Load("singlec.png");
loadc= IMG_Load("loadc.jpg");











TTF_Font *police = NULL;
    /* Chargement de la police */
    police = TTF_OpenFont("font.ttf",100 );
    /* Écriture du texte dans la SDL_Surface texte en mode Blended (optimal) */

    t= TTF_RenderText_Blended(police, "Robot Mess !", couleur);
 // arja3lou baad fel jeu hedha SDL_EnableKeyRepeat(10, 10);
musique= Mix_LoadMUS("music.mp3");
    Mix_PlayMusic(musique, -1);


  SDL_BlitSurface(imageDeFond, NULL, ecran, & positionFond);
 
    SDL_BlitSurface(start, NULL, ecran, & posstart);
    SDL_BlitSurface(settings, NULL, ecran, & possettings);
    SDL_BlitSurface(quit, NULL, ecran, & posexit);
 
 SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);

     
while (done) {

	 sprintf(anim, "%d.png" , k) ; 
   imageDeFond = IMG_Load(anim) ; 

k++ ;
if (k==8) 
  {
    k=1 ; 
  }

 

	 SDL_WaitEvent(&event);
      switch (event.type) {


//1

      case SDL_QUIT:
        done = 0;
        break;
   //2
case SDL_MOUSEBUTTONDOWN:
a++;
			if (event.button.button == SDL_BUTTON_LEFT)
{





// click start
if ((event.button.x>posstart.x)&&(event.button.x<posstart.x+300)&&(event.button.y>posstart.y)&&(event.button.y<posstart.y+80)) 


{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(startc, NULL, ecran, & posstart);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(quit, NULL, ecran, & posexit);
 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_Flip(ecran);
               
}



// select option

else if((event.button.x>possettings.x)&&(event.button.x<possettings.x+300)&&(event.button.y>possettings.y)&&(event.button.y<possettings.y+80)) 


{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

 SDL_BlitSurface(settingc, NULL, ecran, & posets);
SDL_BlitSurface(start, NULL, ecran, & posstart);
SDL_BlitSurface(quit, NULL, ecran, & posexit);

 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);

SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           

}
// click exit
else if((event.button.x>poxit.x)&&(event.button.x<poxit.x+300)&&(event.button.y>poxit.y)&&(event.button.y<poxit.y+80)) 


{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(start, NULL, ecran, & posstart);

SDL_BlitSurface(quitc, NULL, ecran, & poxit);
 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           
             
}



else
    {
    SDL_BlitSurface(start, NULL, ecran, & posstart);
    SDL_BlitSurface(settings, NULL, ecran, & possettings);
    SDL_BlitSurface(quit, NULL, ecran, & posexit);
    
    SDL_BlitSurface(t, NULL , ecran , &post);
    SDL_Flip(ecran);
}
    


}
break;
//3

case SDL_MOUSEBUTTONUP:
a++;
			if (event.button.button == SDL_BUTTON_LEFT)

{


// click start up
if ((event.button.x>posstart.x)&&(event.button.x<posstart.x+300)&&(event.button.y>posstart.y)&&(event.button.y<posstart.y+80)) 



{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(single, NULL, ecran, & posstart);
 SDL_BlitSurface(multi, NULL, ecran, & possettings);
SDL_BlitSurface(load, NULL, ecran, & posexit);
 
//  SDL_BlitSurface(t, NULL , ecran , &post);
SDL_Flip(ecran); 
// hne t7all sous menu play>> alors on fait un autre poll event de meme            
}



// select option up

else if((event.button.x>possettings.x)&&(event.button.x<possettings.x+300)&&(event.button.y>possettings.y)&&(event.button.y<possettings.y+80)) 


{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

 SDL_BlitSurface(size, NULL, ecran, & posets);
SDL_BlitSurface(volume, NULL, ecran, & posstart);
SDL_BlitSurface(diff, NULL, ecran, & posexit);


SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           
// ici un autre poll event apres a faire 
}
// click exit up
else if((event.button.x>poxit.x)&&(event.button.x<poxit.x+300)&&(event.button.y>poxit.y)&&(event.button.y<poxit.y+80)) 


{
 
   done=0;
exit(0);          
}


}

break;







//4


case SDL_MOUSEMOTION:

a++;
// select start
if ((event.motion.x>posstart.x)&&(event.motion.x<posstart.x+300)&&(event.motion.y>posstart.y)&&(event.motion.y<posstart.y+80)) 



{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(starm, NULL, ecran, & postarm);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(quit, NULL, ecran, & posexit);
 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
SDL_Flip(ecran);
               
}



// select option

else if((event.motion.x>possettings.x)&&(event.motion.x<possettings.x+300)&&(event.motion.y>possettings.y)&&(event.motion.y<possettings.y+80)) 


{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

 SDL_BlitSurface(sets, NULL, ecran, & posets);
SDL_BlitSurface(start, NULL, ecran, & posstart);
SDL_BlitSurface(quit, NULL, ecran, & posexit);


 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           

}
// selecti exit
else if((event.motion.x>poxit.x)&&(event.motion.x<poxit.x+300)&&(event.motion.y>poxit.y)&&(event.motion.y<poxit.y+80)) 


{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(start, NULL, ecran, & posstart);
SDL_BlitSurface(exits, NULL, ecran, & poxit);
 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           
             

}

else
    {
    SDL_BlitSurface(start, NULL, ecran, & posstart);
    SDL_BlitSurface(settings, NULL, ecran, & possettings);
    SDL_BlitSurface(quit, NULL, ecran, & posexit);
    SDL_BlitSurface(cadre, NULL, ecran, & poscad); 
    SDL_BlitSurface(t, NULL , ecran , &post);
    SDL_Flip(ecran);
}
    

break;
//5


   case SDL_KEYDOWN:
a++;
        switch (event.key.keysym.sym) {

case SDLK_LEFT:
                if (v > 0)
                {
                    v = v - 20;
                }
                Mix_VolumeMusic(v);
                break;
case SDLK_RIGHT:
                if (v < 128)
                {
                    v = v + 20;
                }
                Mix_VolumeMusic(v);
                break;

case SDLK_a:
a=0; break;

case SDLK_m:

                Mix_PauseMusic();
                break;
case SDLK_p:
musique = Mix_LoadMUS("music.mp3");
    Mix_PlayMusic(musique, -1);
		break;


  
case SDLK_DOWN:
i++;
if(i==4)  {i=1;}
if(i==1)
{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(starm, NULL, ecran, & postarm);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(quit, NULL, ecran, & posexit);
 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
SDL_Flip(ecran);
               
}
else if(i==2)
{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

 SDL_BlitSurface(sets, NULL, ecran, & posets);
SDL_BlitSurface(start, NULL, ecran, & posstart);
SDL_BlitSurface(quit, NULL, ecran, & posexit);


 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           
}
else if(i==3)
{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(start, NULL, ecran, & posstart);
SDL_BlitSurface(exits, NULL, ecran, & poxit);
 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           
             
}

break;
case SDLK_UP : 
i -- ; 
if(i==0) {i = 3 ; }
if (i == 4) { i = 1 ;} 
if(i==1)
{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(starm, NULL, ecran, & postarm);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(quit, NULL, ecran, & posexit);
  click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
SDL_Flip(ecran);
               
}
else if(i==2)
{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

 SDL_BlitSurface(sets, NULL, ecran, & posets);
SDL_BlitSurface(start, NULL, ecran, & posstart);
SDL_BlitSurface(quit, NULL, ecran, & posexit);


 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           
}
else if(i==3)
{
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
 SDL_BlitSurface(settings, NULL, ecran, & possettings);
SDL_BlitSurface(start, NULL, ecran, & posstart);
SDL_BlitSurface(exits, NULL, ecran, & poxit);
 click= Mix_LoadMUS("click.mp3");
    Mix_PlayMusic(click, 1);
SDL_BlitSurface(t, NULL , ecran , &post);
   SDL_Flip(ecran);           
 }




break ; // mta3 case up
    
      } // mta3 events.key

break ; // mta3 keydown


       } // taa events
} /// taa while




    /* 
    SDL_Surface * start = NULL, * settings = NULL, * quit = NULL, * cadre = NULL,*t=NULL, *starm=NULL,*sets=NULL,*exits=NULL, * startc = NULL, * settingc = NULL,        * quitc = NULL, * single = NULL, * multi = NULL, * load = NULL,* singles = NULL, * multis = NULL, * loads = NULL,* singlec = NULL, * multic = NULL, * loadc = NULL,*size=NULL,*volume=NULL,*diff=NULL;



*/





SDL_FreeSurface(imageDeFond);


SDL_FreeSurface(start);
SDL_FreeSurface(settings);
SDL_FreeSurface(quit); 
SDL_FreeSurface(cadre);
 
  
SDL_FreeSurface(starm);
SDL_FreeSurface(sets);
SDL_FreeSurface(exits) ;

  
SDL_FreeSurface(startc);
SDL_FreeSurface(settingc);
SDL_FreeSurface(quitc);
  
SDL_FreeSurface(single);
SDL_FreeSurface(multi);
SDL_FreeSurface(load); 

  
SDL_FreeSurface(singles);
SDL_FreeSurface(multis);
SDL_FreeSurface(loads);
  
SDL_FreeSurface(singlec);
SDL_FreeSurface(multic);
SDL_FreeSurface(loadc) ;



   
SDL_FreeSurface(volume);
SDL_FreeSurface(size);
SDL_FreeSurface(diff);

    
 TTF_CloseFont(police);
Mix_FreeMusic(musique);
Mix_FreeMusic(click);
 Mix_CloseAudio();
TTF_Quit();
SDL_FreeSurface(t);
SDL_Quit();

return 0;
}
