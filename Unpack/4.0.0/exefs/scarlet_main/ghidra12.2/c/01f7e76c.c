/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7e76c; name: FUN_01f7e76c
 */


float FUN_01f7e76c(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0;
  if ((*(char *)(param_1 + 0x13f) == '\0') &&
     (fVar2 = *(float *)(param_1 + 0x17c), *(float *)(param_1 + 0x144) <= fVar2)) {
    if (*(float *)(param_1 + 0x14c) < fVar2) {
      return 0.0;
    }
    fVar1 = ABS(*(float *)(param_1 + 0x14c) - fVar2) / *(float *)(param_1 + 0x150);
  }
  return fVar1;
}


