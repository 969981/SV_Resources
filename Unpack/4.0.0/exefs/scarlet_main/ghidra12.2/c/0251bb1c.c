/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0251bb1c; name: FUN_0251bb1c
 */


void FUN_0251bb1c(undefined1 param_1 [16],float param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  
  param_3[1] = param_1._8_8_;
  *param_3 = param_1._0_8_;
  fVar2 = 1.0;
  if (0.0 <= param_2) {
    fVar2 = 0.0;
  }
  fVar1 = 1.0;
  if (0.0 > param_2) {
    fVar1 = 0.0;
  }
  *(float *)(param_3 + 2) = fVar1 * param_2 - fVar2 * param_2;
  return;
}


