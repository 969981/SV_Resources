/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ecf6c; name: FUN_007ecf6c
 */


int FUN_007ecf6c(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_150;
  undefined4 local_148;
  char acStack_140 [256];
  
  memset(acStack_140,0,0xff);
  if ((long *)param_1[3] == param_1 + 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    plVar5 = (long *)(param_1[3] - (long)*(int *)((long)param_1 + 0x24));
    do {
      cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5);
      if (cVar1 == -1) {
        local_148 = 0;
        local_150 = 1;
        (**(code **)(*param_1 + 0x10))(param_1,&local_150);
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
        if (acStack_140[uVar2 & 0xff] == '\0') {
          iVar4 = iVar4 + 1;
          uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
          acStack_140[uVar2 & 0xff] = '\x01';
        }
      }
      plVar3 = *(long **)((long)plVar5 + (long)*(int *)((long)param_1 + 0x24) + 8);
      plVar5 = (long *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x24));
    } while (plVar3 != param_1 + 2);
  }
  return iVar4;
}


