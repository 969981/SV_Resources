/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f45cb0; name: FUN_00f45cb0
 */


long FUN_00f45cb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = FUN_00f45d0c();
  lVar2 = FUN_00f45d0c(param_1 + 8);
  lVar3 = FUN_00f45d0c(param_1 + 0x10);
  lVar4 = FUN_00f45d0c(param_1 + 0x18);
  return lVar1 + lVar2 + lVar3 + lVar4 + 10;
}


