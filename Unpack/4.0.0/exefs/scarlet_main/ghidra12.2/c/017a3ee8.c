/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a3ee8; name: FUN_017a3ee8
 */


void FUN_017a3ee8(float param_1,long param_2)

{
  float fVar1;
  
  if (*(int *)(param_2 + 0x1b8) != 4) {
    return;
  }
  fVar1 = *(float *)(param_2 + 0x1d4) / param_1;
  if (0.0 <= *(float *)(param_2 + 0x1d8)) {
    fVar1 = fVar1 + 1.0;
  }
  *(undefined1 *)(param_2 + 0x1dc) = 1;
  *(float *)(param_2 + 0x1e0) = (float)(int)fVar1 * param_1;
  return;
}


