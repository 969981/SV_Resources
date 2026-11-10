/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0135df8c; name: FUN_0135df8c
 */


void FUN_0135df8c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while ((long *)(param_1 + 8) != plVar1) {
    plVar3 = (long *)plVar1[1];
    if ((long *)(param_1 + 8) != plVar1) {
      lVar2 = *plVar3;
      *(long **)(*plVar1 + 8) = plVar3;
      *plVar3 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
    }
    FUN_00896e98();
    plVar1 = plVar3;
  }
  return;
}


