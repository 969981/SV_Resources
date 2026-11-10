/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02118dc8; name: FUN_02118dc8
 */


void FUN_02118dc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_02118f3c(param_1,param_2);
    return;
  }
  FUN_02118e1c(param_1 + 0x18,lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}


