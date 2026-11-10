/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03425f98; name: FUN_03425f98
 */


void FUN_03425f98(float *param_1,float *param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_30;
  float fStack_2c;
  float local_28;
  
  if ((uint)param_1[0x1e] < 8) {
    pfVar2 = param_1 + (ulong)(uint)param_1[0x1e] * 3 + 3;
    *pfVar2 = *param_2;
    pfVar2[1] = param_2[1];
    pfVar2[2] = param_2[2];
    fVar1 = param_1[0x1e];
    *(undefined8 *)(param_1 + (ulong)(uint)fVar1 * 2 + 0x2e) = param_3;
    *(undefined8 *)(param_1 + (ulong)(uint)fVar1 * 2 + 0x3e) = *(undefined8 *)(param_4 + 0x68);
    pfVar2 = param_1;
    if (fVar1 != 0.0) {
      pfVar2 = param_1 + (ulong)((int)fVar1 - 1) * 3 + 3;
    }
    fVar4 = pfVar2[1] - param_2[1];
    fVar7 = param_1[0x20];
    fVar5 = *pfVar2 - *param_2;
    fVar3 = pfVar2[2] - param_2[2];
    fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    param_1[0x20] = fVar6 + fVar7;
    if (fVar6 <= 0.0) {
      param_1[0x23] = 50.0;
    }
    else {
      fVar6 = (fVar6 + fVar7) / fVar6;
      local_30 = *param_2 + fVar5 * fVar6;
      fStack_2c = param_2[1] + fVar4 * fVar6;
      local_28 = param_2[2] + fVar3 * fVar6;
      fVar3 = (float)FUN_034239b8(param_4,&local_30);
      fVar1 = param_1[0x1e];
      fVar3 = (float)NEON_fminnm(fVar3 * 15.915494,param_1[0x23]);
      param_1[0x23] = fVar3;
    }
    param_1[0x1e] = (float)((int)fVar1 + 1);
  }
  return;
}


