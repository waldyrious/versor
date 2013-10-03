#include "vsr_cga2D_types.h"  
#include "vsr_cga2D_draw.h" 
#include "vsr_GLVimpl.h" 

using namespace vsr;

void GLVApp :: onDraw(){
	      
	Dls a = Ro::dls( Vec(1,0),  1.0);
	
	Draw(a);
	
	a.bprint();  
	
	for (int i = 0; i < 10; ++i){          
		float t = 1.0 * i/10; 
		auto tmp = a.sp( Gen::trv( Tnv(0,1) * t ) ); 
		tmp.vprint();
		Draw(  tmp );		
	}           
	
}
                        
GLVApp * myApp;

int main(){

	GLV glv(0,0);	
    		        
	Window * win = new Window(500,500,"CGA2D",&glv);    
	myApp = new GLVApp(win);
	myApp -> stretch(1,1);
	    
	glv << *myApp;

	Application::run();
	
	return 0;
	
}

