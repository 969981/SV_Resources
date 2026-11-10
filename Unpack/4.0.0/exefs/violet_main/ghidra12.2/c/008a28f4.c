/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a28f4; name: FUN_008a28f4
 */


void FUN_008a28f4(float *param_1,float *param_2)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  fVar5 = param_2[3];
  uVar2 = (ulong)(param_2[2] * (fVar3 / *(float *)PTR_FloatDegree180_047d2390));
  pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar2 >> 0x18 & 0xff) * 0x10);
  fVar3 = (float)((uint)uVar2 & 0xffffff) * 5.9604645e-08;
  fVar4 = pfVar1[1] + pfVar1[3] * fVar3;
  fVar3 = *pfVar1 + pfVar1[2] * fVar3;
  fVar6 = param_2[4];
  *param_1 = fVar5 * fVar3;
  param_1[1] = fVar6 * -fVar4;
  param_1[2] = ((*param_2 + 0.5) - fVar5 * fVar3 * 0.5) - fVar6 * -fVar4 * 0.5;
  fVar5 = param_2[3];
  fVar6 = param_2[4];
  fVar8 = fVar3 * fVar6;
  fVar7 = fVar4 * fVar5;
  param_1[3] = fVar7;
  param_1[4] = fVar8;
  fVar9 = param_2[1];
  param_1[3] = -(fVar4 * fVar5);
  param_1[4] = -(fVar3 * fVar6);
  param_1[5] = (fVar8 * 0.5 - ((fVar9 + 0.5) - fVar7 * 0.5)) + 1.0;
  return;
}


