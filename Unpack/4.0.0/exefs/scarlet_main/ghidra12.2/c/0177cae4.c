/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177cae4; name: FUN_0177cae4
 */


long FUN_0177cae4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_0177cb38();
  uVar2 = FUN_0177cc5c(param_1);
  FUN_0177cb94(&DAT_0483af78,uVar2);
  lVar1 = 0;
  if (DAT_0483af78 != 0) {
    lVar1 = DAT_0483af78 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483af78;
}


