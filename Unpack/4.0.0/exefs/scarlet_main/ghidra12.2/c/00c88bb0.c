/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c88bb0; name: FUN_00c88bb0
 */


undefined * FUN_00c88bb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)FUN_02192b2c(*(undefined8 *)(param_1 + 0x30));
  puVar1 = &DAT_045a0098;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  return puVar1;
}


