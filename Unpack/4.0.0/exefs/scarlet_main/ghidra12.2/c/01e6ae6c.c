/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6ae6c; name: FUN_01e6ae6c
 */


void FUN_01e6ae6c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long local_18;
  
  plVar2 = *(long **)(param_1 + 0x80);
  plVar1 = *(long **)(param_1 + 0x88);
  if ((plVar2 != plVar1) && (*plVar2 != param_2)) {
    do {
      plVar2 = plVar2 + 1;
      if (plVar1 == plVar2) {
        plVar2 = plVar1;
        goto LAB_01e6ae98;
      }
    } while (*plVar2 != param_2);
  }
LAB_01e6ae98:
  if (plVar1 == plVar2) {
    local_18 = param_2;
    FUN_01e6b02c((long *)(param_1 + 0x80),&local_18);
  }
  return;
}


