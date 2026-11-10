/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b6bf4; name: FUN_015b6bf4
 */


long * FUN_015b6bf4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(param_2 + 0x10);
    if (*plVar3 != param_2) {
      lVar2 = *(long *)(param_2 + 0x10);
      while( true ) {
        plVar3 = *(long **)(lVar2 + 0x10);
        if (*plVar3 == lVar2) break;
        lVar2 = *(long *)(lVar2 + 0x10);
      }
    }
  }
  else {
    for (plVar1 = (long *)*plVar3; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      plVar3 = plVar1;
    }
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar3;
  }
  param_1[6] = param_1[6] + -1;
  FUN_01336080(param_1[1]);
  return plVar3;
}


