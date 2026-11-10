/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9810; name: FUN_001f9810
 */


undefined8 FUN_001f9810(long param_1)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xf3;
  iVar1 = FUN_001f9538(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN_001f9cbc(param_1);
  }
  return 0;
}


