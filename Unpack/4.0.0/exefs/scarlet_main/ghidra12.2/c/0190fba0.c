/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190fba0; name: FUN_0190fba0
 */


long * FUN_0190fba0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_3;
  if ((param_1 != param_2) && (*param_1 != lVar2)) {
    plVar3 = param_1;
    do {
      if (param_2 + -1 == plVar3) {
        return param_2;
      }
      param_1 = plVar3 + 1;
      plVar1 = plVar3 + 1;
      plVar3 = param_1;
    } while (*plVar1 != lVar2);
  }
  if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
    plVar3 = param_1 + 2;
    plVar1 = param_1;
    while( true ) {
      param_1 = plVar1;
      if (plVar3[-1] != lVar2) {
        param_1 = plVar1 + 1;
        *plVar1 = plVar3[-1];
      }
      if (param_2 == plVar3) break;
      lVar2 = *param_3;
      plVar3 = plVar3 + 1;
      plVar1 = param_1;
    }
  }
  return param_1;
}


