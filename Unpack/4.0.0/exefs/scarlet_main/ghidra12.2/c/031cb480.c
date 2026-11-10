/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031cb480; name: FUN_031cb480
 */


float FUN_031cb480(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (ABS(param_1) == 0.0) {
    return 0.0;
  }
  fVar1 = (float)(((uint)ABS(param_1) >> 0x10) * 0x5555 + 0x2a555556);
  fVar2 = fVar1 * fVar1;
  fVar1 = ((param_1 + param_1) * fVar1 + fVar2 * fVar2) / (fVar2 * (fVar1 + fVar1) + param_1);
  fVar2 = fVar1 * fVar1;
  fVar1 = ((param_1 + param_1) * fVar1 + fVar2 * fVar2) / (fVar2 * (fVar1 + fVar1) + param_1);
  if (param_1 <= 0.0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}


