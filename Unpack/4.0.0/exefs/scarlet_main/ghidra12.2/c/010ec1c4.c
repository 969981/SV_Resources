/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ec1c4; name: FUN_010ec1c4
 */


void FUN_010ec1c4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_2 + 8);
  lVar3 = *plVar1;
  plVar2 = (long *)(param_1 + 0x20);
  *plVar1 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar2 = lVar3;
  *(long *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) | 0x10;
  return;
}


