/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b4488; name: FUN_017b4488
 */


long FUN_017b4488(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_017b44dc();
  uVar2 = FUN_017b4538(param_1);
  FUN_017b4754(&DAT_04840c58,uVar2);
  lVar1 = 0;
  if (DAT_04840c58 != 0) {
    lVar1 = DAT_04840c58 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04840c58;
}


