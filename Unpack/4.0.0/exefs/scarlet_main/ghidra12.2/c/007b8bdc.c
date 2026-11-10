/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b8bdc; name: FUN_007b8bdc
 */


long FUN_007b8bdc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bf9f0(0x840,uVar1);
  if (lVar2 != 0) {
    FUN_007bbe40(lVar2,param_1);
  }
  return lVar2;
}


