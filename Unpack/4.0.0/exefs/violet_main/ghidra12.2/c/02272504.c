/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02272504; name: FUN_02272504
 */


void FUN_02272504(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x168);
  plVar2 = *(long **)(param_1 + 0x170);
  if (plVar3 != plVar2) {
    if (*param_2 == 0) {
      do {
        if (*plVar3 == 0) {
          return;
        }
        if (*(long *)(*plVar3 + 0x10) == 0) {
          return;
        }
        plVar3 = plVar3 + 2;
      } while (plVar2 != plVar3);
    }
    else {
      lVar4 = *(long *)(*param_2 + 0x10);
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = lVar4 + -0x28;
      }
      do {
        lVar4 = 0;
        if (*plVar3 != 0) {
          lVar5 = *(long *)(*plVar3 + 0x10);
          lVar4 = 0;
          if (lVar5 != 0) {
            lVar4 = lVar5 + -0x28;
          }
        }
        if (lVar1 == lVar4) {
          return;
        }
        plVar3 = plVar3 + 2;
      } while (plVar2 != plVar3);
    }
  }
  plVar3 = *(long **)(param_1 + 0x130);
  plVar2 = *(long **)(param_1 + 0x138);
  if (plVar3 != plVar2) {
    if (*param_2 == 0) {
      do {
        if (*plVar3 == 0) {
          return;
        }
        if (*(long *)(*plVar3 + 0x10) == 0) {
          return;
        }
        plVar3 = plVar3 + 2;
      } while (plVar2 != plVar3);
    }
    else {
      lVar4 = *(long *)(*param_2 + 0x10);
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = lVar4 + -0x28;
      }
      do {
        lVar4 = 0;
        if (*plVar3 != 0) {
          lVar5 = *(long *)(*plVar3 + 0x10);
          lVar4 = 0;
          if (lVar5 != 0) {
            lVar4 = lVar5 + -0x28;
          }
        }
        if (lVar1 == lVar4) {
          return;
        }
        plVar3 = plVar3 + 2;
      } while (plVar2 != plVar3);
    }
  }
  FUN_0227379c(param_1 + 0x130);
  return;
}


