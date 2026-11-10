/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c7b68; name: FUN_008c7b68
 */


void FUN_008c7b68(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_2 + 0x48);
  lVar3 = *plVar2;
  plVar1 = (long *)(param_1 + 0x30);
  *plVar2 = *plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *plVar1 = lVar3;
  return;
}


