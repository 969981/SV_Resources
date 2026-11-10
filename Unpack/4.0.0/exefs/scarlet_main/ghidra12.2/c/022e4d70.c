/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e4d70; name: FUN_022e4d70
 */


void FUN_022e4d70(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0xc) = param_1;
  if (param_1 < fVar1) {
    *(float *)(param_2 + 0xc) = fVar1;
    param_1 = fVar1;
  }
  if (*(float *)(param_2 + 0x14) < param_1) {
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0x14);
  }
  return;
}


