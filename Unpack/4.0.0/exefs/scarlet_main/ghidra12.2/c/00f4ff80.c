/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4ff80; name: FUN_00f4ff80
 */


long FUN_00f4ff80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = param_2;
  if (param_2 + 0x10 != lVar4) {
    lVar3 = param_2;
    do {
      lVar2 = lVar3 + 0x10;
      FUN_01ec4804(lVar3,lVar2);
      lVar1 = lVar3 + 0x20;
      lVar3 = lVar2;
    } while (lVar1 != lVar4);
  }
  FUN_01a09284(param_1,lVar2);
  return param_2;
}


