Primerorden.png : Exp_delta0.1.dat Exp_delta0.01.dat Exp_delta1.dat Imp_delta0.1.dat Imp_delta0.01.dat Imp_delta1.dat Ejercicio27_AlbertoMendoza.py
	python Ejercicio27_AlbertoMendoza.py

Exp_delta0.1.dat Exp_delta0.01.dat Exp_delta1.dat Imp_delta0.1.dat Imp_delta0.01.dat Imp_delta1.dat : Ejercicio27.x
	./Ejercicio27.x

Ejercicio27.x : Ejercicio27.cpp
	c++ Ejercicio27.cpp -o Ejercicio27.x
    


