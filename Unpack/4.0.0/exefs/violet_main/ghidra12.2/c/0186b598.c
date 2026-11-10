/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186b598; name: FUN_0186b598
 */


void FUN_0186b598(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != param_2) {
    plVar3 = plVar2 + -4;
    lVar1 = *plVar3;
    *plVar3 = 0;
    if (lVar1 != 0) {
      FUN_0186b638(plVar2 + -3);
    }
    if (plVar3 != param_2) {
      plVar3 = plVar2 + -8;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        FUN_0186b638(plVar2 + -7);
      }
      if (plVar3 != param_2) {
        do {
          lVar1 = plVar2[-0xc];
          plVar2[-0xc] = 0;
          if (lVar1 != 0) {
            FUN_0186b638(plVar2 + -0xb);
          }
          plVar2 = plVar2 + -4;
        } while (param_2 + 8 != plVar2);
      }
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


