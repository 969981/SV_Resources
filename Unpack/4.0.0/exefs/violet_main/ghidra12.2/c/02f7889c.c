/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f7889c; name: FUN_02f7889c
 */


void FUN_02f7889c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  fVar2 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar5 = (float)*param_3;
  fVar8 = fVar2 * fVar5;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar11 = fVar3 * fVar6;
  fVar4 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar7 = (float)param_3[1];
  fVar13 = fVar4 * fVar7;
  fVar9 = fVar8 + fVar11 + fVar13;
  fVar13 = fVar8 + fVar11 + fVar13;
  local_50 = CONCAT44(fVar6 - fVar3 * fVar13,fVar5 - fVar2 * fVar9);
  uStack_48 = CONCAT44((float)((ulong)param_3[1] >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar13,
                       fVar7 - fVar4 * fVar9);
  FUN_02f78a30(param_2,&local_50,param_6);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar5 = (float)*param_6;
  fVar8 = fVar2 * fVar5;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar6 = (float)((ulong)*param_6 >> 0x20);
  fVar11 = fVar3 * fVar6;
  fVar4 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar7 = (float)param_6[1];
  fVar13 = fVar4 * fVar7;
  fVar9 = fVar8 + fVar11 + fVar13;
  fVar13 = fVar8 + fVar11 + fVar13;
  param_6[1] = CONCAT44((float)((ulong)param_6[1] >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar13,
                        fVar7 - fVar4 * fVar9);
  *param_6 = CONCAT44(fVar6 - fVar3 * fVar13,fVar5 - fVar2 * fVar9);
  fVar2 = -(float)*param_3;
  fVar4 = -(float)((ulong)*param_3 >> 0x20);
  fVar6 = -(float)param_3[1];
  fVar3 = (float)param_5[4] * fVar6 + (float)*param_5 * fVar2 + (float)param_5[2] * fVar4;
  fVar5 = (float)((ulong)param_5[4] >> 0x20) * fVar6 +
          (float)((ulong)*param_5 >> 0x20) * fVar2 + (float)((ulong)param_5[2] >> 0x20) * fVar4;
  fVar7 = (float)param_5[5] * fVar6 + (float)param_5[1] * fVar2 + (float)param_5[3] * fVar4;
  fVar8 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar13 = fVar3 * fVar8;
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar12 = fVar5 * fVar9;
  fVar11 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar14 = fVar7 * fVar11;
  fVar10 = fVar13 + fVar12 + fVar14;
  fVar14 = fVar13 + fVar12 + fVar14;
  local_60 = CONCAT44(fVar5 - fVar9 * fVar14,fVar3 - fVar8 * fVar10);
  uStack_58 = CONCAT44(((float)((ulong)param_5[5] >> 0x20) * fVar6 +
                       (float)((ulong)param_5[1] >> 0x20) * fVar2 +
                       (float)((ulong)param_5[3] >> 0x20) * fVar4) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar14,
                       fVar7 - fVar11 * fVar10);
  FUN_02f78a30(param_4,&local_60,param_6 + 2);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar7 = (float)param_6[2];
  fVar13 = fVar4 * fVar7;
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar8 = (float)((ulong)param_6[2] >> 0x20);
  fVar10 = fVar5 * fVar8;
  fVar6 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar9 = (float)param_6[3];
  fVar2 = fVar6 * fVar9;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar11 = (float)((ulong)param_6[3] >> 0x20);
  fVar12 = fVar3 * fVar11;
  auVar15._4_4_ = fVar10;
  auVar15._0_4_ = fVar13;
  auVar15._8_4_ = fVar2;
  auVar15._12_4_ = fVar12;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = fVar12;
  auVar15 = NEON_ext(auVar15,auVar1,8,1);
  fVar3 = auVar15._0_4_ + fVar3;
  fVar2 = fVar13 + fVar10 + fVar3;
  fVar3 = fVar13 + fVar10 + fVar3;
  param_6[3] = CONCAT44(fVar11 - fVar3 * 0.0,fVar9 - fVar6 * fVar2);
  param_6[2] = CONCAT44(fVar8 - fVar5 * fVar3,fVar7 - fVar4 * fVar2);
  return;
}


