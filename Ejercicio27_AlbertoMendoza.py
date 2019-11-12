import numpy as np
import matplotlib.pylab as plt

g1_1= np.loadtxt('Exp_delta1.dat')
g1_2= np.loadtxt('Exp_delta0.1.dat')
g1_3= np.loadtxt('Exp_delta0.01.dat')
g2_1= np.loadtxt('Imp_delta1.dat')
g2_2= np.loadtxt('Imp_delta0.1.dat')
g2_3= np.loadtxt('Imp_delta0.01.dat')

plt.figure(figsize=(10,10))
plt.suptitle('Tipos de integración')
plt.subplot(2,2,1)
plt.title('Explicit Integration')
plt.xlabel('t')
plt.ylabel('y')
plt.plot(g1_1[:,0],g1_1[:,1],label='$\omega$$\Delta$t=1')
plt.plot(g1_2[:,0],g1_2[:,1],label='$\omega$$\Delta$t=0.1')
plt.plot(g1_3[:,0],g1_3[:,1],label='$\omega$$\Delta$t=0.01')
plt.legend()
plt.subplot(2,2,2)
plt.title('Implicit integration')
plt.xlabel('t')
plt.ylabel('y')
plt.plot(g2_1[:,0],g2_1[:,1],label='$\omega$$\Delta$t=1')
plt.plot(g2_2[:,0],g2_2[:,1],label='$\omega$$\Delta$t=0.1')
plt.plot(g2_3[:,0],g2_3[:,1],label='$\omega$$\Delta$t=0.01')
plt.legend()
plt.savefig('Primerorden.png')
plt.show()
     