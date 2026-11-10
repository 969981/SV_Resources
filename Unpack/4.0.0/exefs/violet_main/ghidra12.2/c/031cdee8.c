/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cdee8; name: FUN_031cdee8
 */


void FUN_031cdee8(undefined8 *param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar11 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar6 = (float)*param_3 - (float)*(undefined8 *)param_2[4];
  fVar7 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
  fVar8 = (float)param_3[1] - (float)*(undefined8 *)(param_2[4] + 8);
  uVar9 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar3 = *(undefined8 *)*param_2;
  pauVar2 = (undefined1 (*) [16])(param_2[1] + 4);
  uVar12 = *(undefined8 *)*pauVar2;
  auVar14 = NEON_ext(*pauVar2,*pauVar2,8,1);
  auVar13._12_4_ = uVar9;
  auVar13._0_12_ = *param_2;
  auVar15._12_4_ = uVar9;
  auVar15._0_12_ = *param_2;
  auVar13 = NEON_ext(auVar13,auVar15,8,1);
  auVar4._12_4_ = uVar11;
  auVar4._0_12_ = *pauVar1;
  auVar5._12_4_ = uVar11;
  auVar5._0_12_ = *pauVar1;
  auVar15 = NEON_ext(auVar4,auVar5,8,1);
  param_1[1] = CONCAT44(auVar15._4_4_ * fVar8 + fVar10 * fVar6 + auVar15._4_4_ * fVar7,
                        auVar15._0_4_ * fVar8 +
                        (float)*(undefined8 *)*pauVar1 * fVar6 + fVar10 * fVar7);
  *param_1 = CONCAT44(auVar14._0_4_ * fVar8 +
                      (float)uVar12 * fVar6 + (float)((ulong)uVar12 >> 0x20) * fVar7,
                      auVar13._0_4_ * fVar8 +
                      (float)uVar3 * fVar6 + (float)((ulong)uVar3 >> 0x20) * fVar7);
  return;
}


