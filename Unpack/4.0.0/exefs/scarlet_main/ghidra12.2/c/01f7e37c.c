/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7e37c; name: FUN_01f7e37c
 */


float FUN_01f7e37c(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x58);
  fVar3 = *(float *)(param_1 + 0x5c);
  fVar1 = (float)(**(code **)PTR_PTR_047d9248)
                           (*(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x54));
  return fVar2 + (fVar3 - fVar2) * fVar1;
}


