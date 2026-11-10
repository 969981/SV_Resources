/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c9b4c; name: FUN_008c9b4c
 */


void FUN_008c9b4c(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != 0) {
    plVar2 = (long *)(param_1 + 0x188);
    if ((param_3 & 1) == 0) {
      for (plVar2 = (long *)*plVar2; plVar2 != (long *)(param_1 + 0x180); plVar2 = (long *)plVar2[1]
          ) {
        if (plVar2[-2] == param_2) {
          *(undefined4 *)(plVar2 + -3) = *(undefined4 *)(param_1 + 0x1a0);
          plVar2 = plVar2 + 2;
          lVar3 = *plVar2;
          *plVar2 = *(long *)(param_1 + 400);
          *(long *)(lVar3 + 8) = param_1 + 400;
          *(long **)(*(long *)(param_1 + 400) + 8) = plVar2;
          *(long *)(param_1 + 400) = lVar3;
          return;
        }
      }
    }
    else {
      while (plVar1 = (long *)*plVar2, (long *)(param_1 + 0x180) != plVar1) {
        plVar2 = plVar1 + 1;
        if (plVar1[-2] == param_2) {
          plVar1[-2] = 0;
          *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) - plVar1[-1];
          plVar2 = (long *)plVar1[1];
          lVar3 = *plVar2;
          *(long **)(*plVar1 + 8) = plVar2;
          *plVar2 = *plVar1;
          *(long **)(lVar3 + 8) = plVar1;
          *plVar1 = lVar3;
          *(long **)(param_1 + 0x1d0) = plVar1 + -3;
          *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
          return;
        }
      }
    }
  }
  return;
}


