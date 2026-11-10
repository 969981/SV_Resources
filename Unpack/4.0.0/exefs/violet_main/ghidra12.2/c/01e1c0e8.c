/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1c0e8; name: FUN_01e1c0e8
 */


long * FUN_01e1c0e8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(param_2 + 0x10);
    if (**(long **)(param_2 + 0x10) != param_2) {
      lVar3 = *(long *)(param_2 + 0x10);
      while( true ) {
        plVar4 = *(long **)(lVar3 + 0x10);
        if (*plVar4 == lVar3) break;
        lVar3 = *(long *)(lVar3 + 0x10);
      }
    }
  }
  else {
    plVar1 = (long *)*plVar4;
    if (((plVar1 != (long *)0x0) &&
        (plVar2 = (long *)*plVar1, plVar4 = plVar1, plVar2 != (long *)0x0)) &&
       (plVar1 = (long *)*plVar2, plVar4 = plVar2, plVar1 != (long *)0x0)) {
      plVar4 = plVar1;
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar4 = plVar1;
      }
    }
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[6] = param_1[6] + -1;
  FUN_01336080(param_1[1]);
  return plVar4;
}


