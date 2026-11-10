/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bfd70; name: FUN_028bfd70
 */


long * FUN_028bfd70(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  if ((param_1 != param_2) && (*param_1 != param_3)) {
    plVar2 = param_1;
    do {
      if (param_2 + -1 == plVar2) {
        return param_2;
      }
      param_1 = plVar2 + 1;
      plVar1 = plVar2 + 1;
      plVar2 = param_1;
    } while (*plVar1 != param_3);
  }
  plVar2 = param_1;
  if (param_1 != param_2) {
    while (plVar2 = plVar2 + 1, plVar2 != param_2) {
      if (*plVar2 != param_3) {
        *param_1 = *plVar2;
        param_1 = param_1 + 1;
      }
    }
  }
  return param_1;
}


