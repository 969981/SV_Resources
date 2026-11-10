/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178e9f0; name: FUN_0178e9f0
 */


void FUN_0178e9f0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xb0);
  if ((plVar2 != plVar1) && (*plVar2 != *param_2)) {
    do {
      plVar2 = plVar2 + 1;
      if (plVar1 == plVar2) {
        plVar2 = plVar1;
        goto LAB_0178ea00;
      }
    } while (*plVar2 != *param_2);
  }
LAB_0178ea00:
  if (plVar1 != plVar2) {
    return;
  }
  if (*(long *)(param_1 + 0xb0) == *(long *)(param_1 + 0xb8)) {
    FUN_0178fa44();
    return;
  }
  FUN_01792354();
  return;
}


