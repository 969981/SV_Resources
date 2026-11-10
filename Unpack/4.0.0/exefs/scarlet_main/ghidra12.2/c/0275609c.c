/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275609c; name: FUN_0275609c
 */


void FUN_0275609c(float param_1,long param_2)

{
  *(float *)(param_2 + 0x14) = param_1;
  if (param_1 < *(float *)(param_2 + 0x10)) {
    *(float *)(param_2 + 0x10) = param_1;
  }
  if (param_1 < *(float *)(param_2 + 0xc)) {
    *(float *)(param_2 + 0xc) = param_1;
  }
  return;
}


