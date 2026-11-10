/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01094fc8; name: FUN_01094fc8
 */


void FUN_01094fc8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = param_2;
  if (param_2 + 0x20 != lVar3) {
    do {
      param_2 = lVar2 + 0x20;
      FUN_021d3c8c(lVar2,param_2);
      lVar1 = lVar2 + 0x40;
      lVar2 = param_2;
    } while (lVar1 != lVar3);
  }
  FUN_021d4090(param_1,param_2);
  return;
}


