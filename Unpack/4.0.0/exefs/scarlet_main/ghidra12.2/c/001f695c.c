/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f695c; name: FUN_001f695c
 */


undefined8 FUN_001f695c(long param_1)

{
  FUN_001f8300(*(undefined8 *)(param_1 + 0xb0));
  FUN_001f8300(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  return 0;
}


