/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c33a0; name: FUN_001c33a0
 */


void FUN_001c33a0(long param_1)

{
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffff00;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffb | 1;
  *(undefined **)(param_1 + 8) = &DAT_044841b8;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * 4.0;
  return;
}


