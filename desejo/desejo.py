import networkx as nx

G = nx.Graph()
G.add_node(1)
G.add_edge(2,3)
G.add_edge(3,2)
nx.info(G)
'''
numb = input()
while(numb != "0 0"):
  spl = numb.split()
  hlp = int(spl[1])
  if(hlp == 0): 
    print("Y")
  else:
    nod = int(spl[0])
    i = 0
    while(i < nod)
      G.add_node(i)
      i += 1
    i = 0
    while(i < hlp):      
      odm = input()
      crc = odm.split()
      G.add_edge(crc[0],crc[1])      
      i += 1


  numb = input()
  '''
