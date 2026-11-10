/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01524fa0; name: FUN_01524fa0
 */


float FUN_01524fa0(float param_1)

{
  float fVar1;
  
  if (param_1 < 0.36363637) {
    return param_1 * 121.0 * param_1 * 0.0625;
  }
  if (0.72727275 <= param_1) {
    fVar1 = param_1 * 10.8 * param_1 + param_1 * -20.52 + 10.72;
    if (param_1 < 0.9) {
      fVar1 = param_1 * 12.066482 * param_1 + param_1 * -19.635458 + 8.898061;
    }
    return fVar1;
  }
  return param_1 * 9.075 * param_1 + param_1 * -9.9 + 3.4;
}


