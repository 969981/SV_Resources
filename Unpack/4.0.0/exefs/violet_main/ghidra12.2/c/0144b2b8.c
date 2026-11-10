/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144b2b8; name: FUN_0144b2b8
 */


long * FUN_0144b2b8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar3 = *(long **)(param_2 + 0x10);
    if (*plVar3 != param_2) {
      lVar2 = *(long *)(param_2 + 0x10);
      plVar3 = *(long **)(lVar2 + 0x10);
      if (*plVar3 != lVar2) {
        lVar2 = *(long *)(lVar2 + 0x10);
        while( true ) {
          plVar3 = *(long **)(lVar2 + 0x10);
          if (*plVar3 == lVar2) break;
          lVar2 = *(long *)(lVar2 + 0x10);
        }
      }
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar3;
  }
  param_1[6] = param_1[6] + -1;
  FUN_01336080(param_1[1]);
  return plVar3;
}


