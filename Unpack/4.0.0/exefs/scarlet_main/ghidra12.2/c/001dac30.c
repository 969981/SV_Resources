/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dac30; name: FUN_001dac30
 */


void FUN_001dac30(long param_1)

{
  *(undefined8 *)(param_1 + 0xf80) = 0;
  *(undefined8 *)(param_1 + 0xf88) = 0;
  *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xffffff9f;
  return;
}


