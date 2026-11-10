/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003af6a0; name: FUN_003af6a0
 */


undefined * FUN_003af6a0(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_1 < 9) {
    puVar1 = &DAT_03cdc584 + param_1 * 8;
  }
  return puVar1;
}


