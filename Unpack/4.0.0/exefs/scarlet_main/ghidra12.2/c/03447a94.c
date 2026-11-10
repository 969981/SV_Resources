/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03447a94; name: FUN_03447a94
 */


void FUN_03447a94(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == 0.0) {
    if (param_1 == 0.0) {
      *param_5 = 0.0;
      if (param_3 == 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = *(float *)(&DAT_03cb53b8 + (ulong)(0.0 < param_3) * 4);
      }
      goto LAB_03447c18;
    }
    *param_5 = *(float *)(&DAT_03cb53b8 + (ulong)(0.0 < param_1) * 4);
    fVar1 = (float)NEON_fminnm(param_3 / param_4,0x3f800000);
  }
  else {
    fVar1 = param_1 / param_2;
    if (1.0 <= ABS(fVar1)) {
      fVar2 = fVar1 / (fVar1 * fVar1 + 0.28);
      fVar1 = 1.5707964 - fVar2;
      fVar2 = -1.5707964 - fVar2;
      param_2 = param_1;
    }
    else {
      fVar1 = fVar1 / (fVar1 * fVar1 * 0.28 + 1.0);
      fVar2 = fVar1 + 3.1415927;
      if (param_1 < 0.0) {
        fVar2 = fVar1 + -3.1415927;
      }
    }
    if (param_2 < 0.0) {
      fVar1 = fVar2;
    }
    *param_5 = fVar1;
    fVar1 = (float)NEON_fminnm(param_3 / param_4,0x3f800000);
  }
  if (fVar1 <= -1.0) {
    fVar1 = -1.0;
  }
  fVar3 = ABS(fVar1);
  fVar4 = fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * 84.31466 + -242.71996) + 262.81305) +
                           -131.11235) + 29.66154) + -1.4518384;
  fVar2 = fVar3 * fVar4 + 0.0328437;
  if (fVar1 < 0.0) {
    fVar2 = -(fVar4 * fVar3) - 0.0328437;
  }
LAB_03447c18:
  *param_6 = fVar2;
  return;
}


