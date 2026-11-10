/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fe6f4; name: FUN_026fe6f4
 */


float FUN_026fe6f4(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_1 - param_2;
  param_1 = param_1 - param_3;
  fVar3 = 1.0;
  if (0.0 <= fVar1) {
    fVar3 = 0.0;
  }
  fVar5 = 1.0;
  if (0.0 > fVar1) {
    fVar5 = 0.0;
  }
  fVar4 = 1.0;
  if (0.0 <= param_1) {
    fVar4 = 0.0;
  }
  fVar2 = 1.0;
  if (0.0 > param_1) {
    fVar2 = 0.0;
  }
  if (param_1 * fVar2 - param_1 * fVar4 <= fVar1 * fVar5 - fVar1 * fVar3) {
    param_2 = param_3;
  }
  return param_2;
}


