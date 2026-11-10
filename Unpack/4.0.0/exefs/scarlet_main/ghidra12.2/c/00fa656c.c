/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa656c; name: FUN_00fa656c
 */


void FUN_00fa656c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_00896e78(0x18);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    plVar1[2] = 0;
  }
  plVar1[2] = param_2;
  lVar2 = *plVar1;
  plVar3 = (long *)(param_1 + 8);
  *plVar1 = *plVar3;
  *(long **)(lVar2 + 8) = plVar3;
  *(long **)(*plVar3 + 8) = plVar1;
  *plVar3 = lVar2;
  return;
}


