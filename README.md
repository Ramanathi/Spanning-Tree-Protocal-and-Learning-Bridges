# Spanning-Tree-Protocal-and-Learning-Bridges
### Implemented STP and Learning bridges in C++
#### Model Input :
 ##### check out testinput in testcases folder <br>
1 <br>
5 <br>
B1: A G B <br>
B2: G F <br>
B3: B C <br>
B4: C F E <br>
B5: C D E <br>
    Here, 1 is a trace flag, which if set to 1 should write a detailed trace to stdout, and if set to 0 should produce no trace. 5 specifies the number of bridges whose details will be specified. Each Bridge is then listed in the given syntax showing the LANs to which it is connected directly. You may assume that bridges names will be B1, B2, B3… and LAN names will be single Characters. <br> <br>
A: H1 H2 H3 <br>
B: H4 H5 <br>
C: H6 H7 H8 <br>
D: H9 H10 <br>
E: H11 <br>
F: H12 H13 <br>
G: H14 <br>
2 <br>
H9 H2 <br>
H4 H12 <br>
##### Explanation of above input:
3: This means that 3 transfers will be specified. <br>
H9 H2  : means Host H9 is sending to Host H2 <br>

#### Model Output :
 ##### check out output in testcases folder
B1: A-DP  B-DP  G-DP <br>
B2: F-DP  G-RP <br>
B3: B-RP  C-DP <br>
B4: C-NP  E-DP   F-RP <br>
B5: C-RP  D-DP  E-NP <br>
Here DP = Designated  Port,  RP = Root Port,  and NP = Null Port (deactivated port). Note here that the port of a bridge is simply referred to by the name of the LAN which it is connected to. <br> <br>

And after each input communications output must specify forwarding tables at each bridge. <br>
like in the above input,  <br> <br>
after H9 - H2 communication, Forwarding tables at each bridge : <br> 
B1: <br>
HOST ID | FORWARDING PORT <br>
H9 | B <br>
B2: <br>
HOST ID | FORWARDING PORT <br>
H9 | G <br>
B3: <br>
HOST ID | FORWARDING PORT <br>
H9 | C <br>
B4: <br>
HOST ID | FORWARDING PORT <br>
H9 | F <br>
B5: <br>
HOST ID | FORWARDING PORT <br>
H9 | D <br> <br>
after H4 - H12 communication, Forwarding tables at each bridge : <br> 
B1: <br>
HOST ID | FORWARDING PORT <br>
H4 | B <br>
H9 | B <br>
B2:
HOST ID | FORWARDING PORT <br>
H4 | G <br>
H9 | G <br>
B3:
HOST ID | FORWARDING PORT <br>
H4 | B <br>
H9 | C <br>
B4: <br>
HOST ID | FORWARDING PORT <br>
H4 | F <br>
H9 | F <br>
B5: <br>
HOST ID | FORWARDING PORT <br>
H4 | C <br>
H9 | D <br>
