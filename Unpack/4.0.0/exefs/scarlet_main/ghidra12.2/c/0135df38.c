/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0135df38; name: FUN_0135df38
 */


void FUN_0135df38(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  while( true ) {
    if ((long *)(param_1 + 8) == plVar2) {
      return;
    }
    if (plVar2[2] == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  if ((long *)(param_1 + 8) != plVar2) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
  }
  FUN_00896e98();
  return;
}


