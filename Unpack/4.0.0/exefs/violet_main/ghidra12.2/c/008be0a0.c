/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008be0a0; name: FUN_008be0a0
 */


void FUN_008be0a0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = (long *)param_1[3];
  while (param_1 + 2 != plVar2) {
    plVar5 = (long *)plVar2[1];
    if (plVar2 + 10 != (long *)plVar2[0xb]) {
      plVar4 = (long *)plVar2[0xb];
      do {
        plVar6 = (long *)plVar4[1];
        if (plVar4[3] != 0) {
          FUN_00896e98();
        }
        plVar4[3] = 0;
        if (plVar5 + 10 != plVar4) {
          plVar1 = (long *)plVar4[1];
          lVar3 = *plVar1;
          *(long **)(*plVar4 + 8) = plVar1;
          *plVar1 = *plVar4;
          *(long **)(lVar3 + 8) = plVar4;
          *plVar4 = lVar3;
        }
        FUN_00896e98(plVar4);
        plVar4 = plVar6;
      } while (plVar2 + 10 != plVar6);
    }
    if (param_1 + 2 != plVar2) {
      plVar4 = (long *)plVar2[1];
      lVar3 = *plVar4;
      *(long **)(*plVar2 + 8) = plVar4;
      *plVar4 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    FUN_00896e98(plVar2);
    plVar2 = plVar5;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


