/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a27f8c; name: FUN_02a27f8c
 */


bool FUN_02a27f8c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xf8);
  plVar1 = *(long **)(param_1 + 0x100);
  if (plVar2 == plVar1) {
    return true;
  }
  do {
    if (*plVar2 == param_2) goto LAB_02a27fb4;
    plVar2 = plVar2 + 1;
  } while (plVar1 != plVar2);
  plVar2 = plVar1;
LAB_02a27fb4:
  return plVar2 != plVar1;
}


