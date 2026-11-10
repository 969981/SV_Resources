/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cc588; name: FUN_031cc588
 */


void FUN_031cc588(undefined8 *param_1,undefined1 (*param_2) [12])

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar8 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar6 = (float)*(undefined8 *)*param_2;
  fVar7 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar15 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  fVar10 = (float)*(undefined8 *)*pauVar1;
  fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar18._12_4_ = uVar15;
  auVar18._0_12_ = *pauVar1;
  auVar2._12_4_ = uVar15;
  auVar2._0_12_ = *pauVar1;
  auVar18 = NEON_ext(auVar18,auVar2,8,1);
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar15 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  uVar5 = *(undefined8 *)*pauVar1;
  fVar16 = (float)((ulong)uVar5 >> 0x20);
  auVar17._12_4_ = uVar8;
  auVar17._0_12_ = *param_2;
  auVar19._12_4_ = uVar8;
  auVar19._0_12_ = *param_2;
  auVar17 = NEON_ext(auVar17,auVar19,8,1);
  auVar3._12_4_ = uVar15;
  auVar3._0_12_ = *pauVar1;
  auVar4._12_4_ = uVar15;
  auVar4._0_12_ = *pauVar1;
  auVar19 = NEON_ext(auVar3,auVar4,8,1);
  fVar9 = auVar19._4_4_;
  param_1[5] = auVar19._0_8_;
  param_1[4] = CONCAT44(auVar18._0_4_,auVar17._0_4_);
  param_1[1] = uVar5;
  *param_1 = CONCAT44(fVar10,fVar6);
  param_1[3] = CONCAT44(fVar9,fVar16);
  param_1[2] = CONCAT44(fVar12,fVar7);
  fVar11 = -(float)*(undefined8 *)param_2[4];
  fVar13 = -(float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
  fVar14 = -(float)*(undefined8 *)(param_2[4] + 8);
  param_1[7] = CONCAT44(fVar9 * fVar14 + fVar16 * fVar11 + fVar9 * fVar13,
                        auVar19._0_4_ * fVar14 + (float)uVar5 * fVar11 + fVar16 * fVar13);
  param_1[6] = CONCAT44(auVar18._0_4_ * fVar14 + fVar10 * fVar11 + fVar12 * fVar13,
                        auVar17._0_4_ * fVar14 + fVar6 * fVar11 + fVar7 * fVar13);
  return;
}


