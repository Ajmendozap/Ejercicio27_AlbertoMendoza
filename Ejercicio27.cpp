#include <iostream>
#include <fstream>

float integrateExplicit(float delta_w, float t0, float tf, float w, std::string nombre);
float integrateImplicit(float delta_w, float t0, float tf, float w, std::string nombre);

int main(void)
{
    float w= 0.1;
    integrateExplicit(0.1,0,4/w,w,"Exp_delta0.1.dat");
	integrateImplicit(0.1,0,4/w,w,"Imp_delta0.1.dat");
	integrateExplicit(0.01,0,4/w,w,"Exp_delta0.01.dat");
	integrateImplicit(0.01,0,4/w,w,"Imp_delta0.01.dat");
	integrateExplicit(1,0,4/w,w,"Exp_delta1.dat");
	integrateImplicit(1,0,4/w,w,"Imp_delta1.dat");
	integrateExplicit(1.1,0,4/w,w,"Límite_IntegraciónExplicita.dat");
	std::cout<< "Los archivos han sido generados."<< std::endl;
	std::cout<< "Como se puede observar en el archivo Límite_integraciónExplicita.dat, para un w*delta de t mayor"<<std::endl;
	std::cout<< "o igual a 1, la integración explícita se torna inestable, mientras que para la integración impli-"<<std::endl;
	std::cout<< "cita, esto nunca ocurre a menos que los deltas sobrepasen los límites de integración."<<std::endl;
    return 0;
}

float integrateExplicit(float delta_w, float t0, float tf,float w, std::string nombre)
{
    float y= 1;
    float t= t0;
    float delta_t= delta_w/w;
    std::ofstream file(nombre);
    float limit= (tf-t0)*10/w;
    for(int i=0;i<limit;i ++)
    {
        file<< t<< " "<<y<<std::endl;
        y *= (1-delta_w);
        t += delta_t;
        if(t+delta_t>tf)
        {
            break;
        }
    }
}

float integrateImplicit(float delta_w, float t0, float tf,float w, std::string nombre)
{
    float y= 1;
    float t= t0;
    float delta_t= delta_w/w;
    std::ofstream file(nombre);
    float limit= (tf-t0)*10/w;
    for(int i=0;i<limit;i ++)
    {
        file<< t<< " "<<y<<std::endl;
        y /= (1+delta_w);
        t += delta_t;
        if(t+delta_t>tf)
        {
            break;
        }
    }
}