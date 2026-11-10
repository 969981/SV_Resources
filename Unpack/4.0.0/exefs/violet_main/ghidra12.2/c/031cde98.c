/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cde98; name: FUN_031cde98
 */


void FUN_031cde98(undefined8 *param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar7 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar2 = *(undefined8 *)*param_2;
  pauVar1 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar11 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar4 = *(undefined8 *)*pauVar1;
  auVar14._12_4_ = uVar11;
  auVar14._0_12_ = *pauVar1;
  auVar3._12_4_ = uVar11;
  auVar3._0_12_ = *pauVar1;
  auVar14 = NEON_ext(auVar14,auVar3,8,1);
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar11 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar13._12_4_ = uVar7;
  auVar13._0_12_ = *param_2;
  auVar15._12_4_ = uVar7;
  auVar15._0_12_ = *param_2;
  auVar13 = NEON_ext(auVar13,auVar15,8,1);
  auVar5._12_4_ = uVar11;
  auVar5._0_12_ = *pauVar1;
  auVar6._12_4_ = uVar11;
  auVar6._0_12_ = *pauVar1;
  auVar15 = NEON_ext(auVar5,auVar6,8,1);
  fVar10 = (float)param_3[1];
  fVar8 = (float)*param_3;
  fVar9 = (float)((ulong)*param_3 >> 0x20);
  param_1[1] = CONCAT44(auVar15._4_4_ * fVar10 + fVar12 * fVar8 + auVar15._4_4_ * fVar9,
                        auVar15._0_4_ * fVar10 +
                        (float)*(undefined8 *)*pauVar1 * fVar8 + fVar12 * fVar9);
  *param_1 = CONCAT44(auVar14._0_4_ * fVar10 +
                      (float)uVar4 * fVar8 + (float)((ulong)uVar4 >> 0x20) * fVar9,
                      auVar13._0_4_ * fVar10 +
                      (float)uVar2 * fVar8 + (float)((ulong)uVar2 >> 0x20) * fVar9);
  return;
}


