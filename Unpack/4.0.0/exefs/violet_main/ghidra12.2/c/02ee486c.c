/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee486c; name: FUN_02ee486c
 */


void FUN_02ee486c(long *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  FUN_00e5cbdc();
  lVar7 = *param_1;
  iVar4 = *(int *)(lVar7 + 0x40);
  puVar1 = (undefined8 *)0x0;
  if (iVar4 != 0) {
    puVar1 = (undefined8 *)((long)iVar4 + lVar7 + 0x40);
  }
  iVar4 = *(int *)(lVar7 + 0x48);
  uVar8 = *param_2;
  fVar11 = (float)uVar8;
  fVar12 = (float)*param_3 - fVar11;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar14 = (float)((ulong)*param_3 >> 0x20) - fVar9;
  fVar10 = (float)param_2[1];
  fVar16 = (float)param_3[1] - fVar10;
  fVar13 = (float)((ulong)param_2[1] >> 0x20);
  fVar17 = (float)((ulong)param_3[1] >> 0x20) - fVar13;
  auVar18._0_4_ = *param_4 - fVar11;
  auVar18._4_4_ = param_4[1] - fVar9;
  auVar18._8_4_ = param_4[2] - fVar10;
  auVar18._12_4_ = param_4[3] - fVar13;
  auVar20._4_4_ = fVar14;
  auVar20._0_4_ = fVar12;
  auVar20._8_4_ = fVar16;
  auVar20._12_4_ = fVar17;
  auVar21._4_4_ = fVar14;
  auVar21._0_4_ = fVar12;
  auVar21._8_4_ = fVar16;
  auVar21._12_4_ = fVar17;
  auVar20 = NEON_ext(auVar20,auVar21,4,1);
  auVar21 = NEON_ext(auVar18,auVar18,4,1);
  puVar2 = (undefined8 *)0x0;
  if (iVar4 != 0) {
    puVar2 = (undefined8 *)((long)iVar4 + lVar7 + 0x48);
  }
  fVar13 = fVar12 * auVar21._0_4_ - auVar18._0_4_ * auVar20._0_4_;
  fVar15 = fVar14 * auVar21._4_4_ - auVar18._4_4_ * auVar20._4_4_;
  fVar12 = fVar16 * auVar18._0_4_ - auVar18._8_4_ * fVar12;
  fVar14 = fVar17 * auVar18._4_4_ - auVar18._12_4_ * fVar14;
  auVar5._4_4_ = fVar15;
  auVar5._0_4_ = fVar13;
  auVar5._8_4_ = fVar12;
  auVar5._12_4_ = fVar14;
  auVar6._4_4_ = fVar15;
  auVar6._0_4_ = fVar13;
  auVar6._8_4_ = fVar12;
  auVar6._12_4_ = fVar14;
  auVar20 = NEON_ext(auVar5,auVar6,4,1);
  fVar12 = auVar20._0_4_;
  fVar16 = auVar20._4_4_;
  fVar14 = fVar12 * fVar12 + fVar16 * fVar16 + fVar13 * fVar13;
  if (fVar14 == 0.0) {
    fVar14 = 0.0;
    fVar17 = 0.0;
  }
  else {
    uVar19 = NEON_fmov(0x3f800000,4);
    fVar14 = (float)uVar19 / SQRT(fVar14);
    fVar17 = (float)((ulong)uVar19 >> 0x20) /
             SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar13 * fVar13);
  }
  *puVar1 = uVar8;
  *(float *)(puVar1 + 1) = fVar10;
  uVar8 = param_3[1];
  *(undefined8 *)((long)puVar1 + 0xc) = *param_3;
  *(int *)((long)puVar1 + 0x14) = (int)uVar8;
  uVar8 = *(undefined8 *)(param_4 + 2);
  puVar1[3] = *(undefined8 *)param_4;
  *(int *)(puVar1 + 4) = (int)uVar8;
  uVar8 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)param_4;
  *(int *)((long)puVar1 + 0x2c) = (int)uVar8;
  iVar4 = *(int *)(lVar7 + 0x58);
  *(undefined4 *)(lVar7 + 0x44) = 3;
  uVar8 = CONCAT44(fVar17 * fVar16,fVar14 * fVar12);
  fVar11 = fVar17 * -(fVar10 * fVar13 + fVar11 * fVar12 + fVar9 * fVar16);
  uVar19 = CONCAT44(fVar11,fVar14 * fVar13);
  lVar3 = 0;
  if (iVar4 != 0) {
    lVar3 = (long)iVar4 + lVar7 + 0x58;
  }
  *(undefined1 *)(lVar3 + 3) = 0;
  *(undefined1 *)(lVar3 + 7) = 0;
  puVar2[1] = uVar19;
  *puVar2 = uVar8;
  puVar2[3] = CONCAT44(-fVar11,-(fVar14 * fVar13));
  puVar2[2] = CONCAT44(-(fVar17 * fVar16),-(fVar14 * fVar12));
  puVar2[5] = uVar19;
  puVar2[4] = uVar8;
  puVar2[7] = uVar19;
  puVar2[6] = uVar8;
  return;
}


