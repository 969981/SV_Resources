/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e29a3c; name: FUN_01e29a3c
 */


int FUN_01e29a3c(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      if ((plVar2[6] != 0) && (*(int *)(plVar2[6] + 4) == param_2)) {
        iVar1 = iVar1 + 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = *(long **)(param_1 + 0xc0);
  if (plVar2 == (long *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      if ((plVar2[6] != 0) && (*(int *)(plVar2[6] + 4) == param_2)) {
        iVar3 = iVar3 + 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  if ((param_3 & 1) == 0) {
    iVar3 = 0;
  }
  return iVar3 + iVar1;
}


