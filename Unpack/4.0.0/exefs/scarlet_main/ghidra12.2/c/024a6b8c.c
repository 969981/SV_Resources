/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a6b8c; name: FUN_024a6b8c
 */


void FUN_024a6b8c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar2 = (long *)(param_2 + 0x10);
    plVar1 = (long *)*plVar2;
    if (*plVar1 != param_2) {
      do {
        lVar3 = *plVar2;
        plVar2 = (long *)(lVar3 + 0x10);
        plVar1 = (long *)*plVar2;
      } while (*plVar1 != lVar3);
    }
  }
  else {
    do {
      plVar1 = plVar2;
      plVar2 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar1;
  }
  param_1[3] = param_1[3] + -1;
  FUN_01336080(param_1[1]);
  return;
}


