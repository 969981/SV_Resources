/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0179bc50; name: FUN_0179bc50
 */


void FUN_0179bc50(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  int iVar24;
  
  iVar9 = *(int *)(param_1 + 0x1a8);
  *(float *)(param_3 + 2) =
       (*(float *)(param_1 + 0x1a0) + *(float *)(param_1 + 0x1a0)) /
       (float)*(ulong *)(param_1 + 0x48);
  uVar5 = *(ulong *)(param_1 + 0x50);
  fVar10 = *(float *)(param_1 + 0x1a4);
  *(undefined4 *)(param_3 + 3) = 0;
  *(float *)((long)param_3 + 0x14) = (fVar10 + fVar10) / (float)uVar5;
  puVar6 = (undefined8 *)*param_4;
  uVar2 = *(undefined4 *)(puVar6 + 1);
  uVar3 = *(undefined4 *)((long)puVar6 + 0xc);
  *param_3 = *puVar6;
  *(undefined4 *)(param_3 + 1) = uVar2;
  *(undefined4 *)((long)param_3 + 0xc) = uVar3;
  uVar18 = *(uint *)(param_1 + 0x1a8);
  uVar5 = (ulong)uVar18;
  if (-1 < (int)uVar18) {
    auVar15 = NEON_fmov(0x3f800000,4);
    puVar7 = (undefined4 *)((long)param_3 + 0x34);
    uVar8 = 0;
    do {
      uVar1 = uVar8 + 1;
      iVar17 = 0;
      if (uVar1 != (int)uVar5 + 1) {
        iVar17 = (int)uVar8;
      }
      fVar10 = (6.2831855 / (float)iVar9) * (float)iVar17;
      fVar19 = fVar10 + 1.5707964;
      iVar24 = -(uint)(ABS(fVar19) == INFINITY);
      iVar4 = -(uint)(fVar10 == 0.0);
      auVar16._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar10) & 0x80000000 ^ 0xbf000000) + fVar10 * 0.15915494);
      auVar16._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar10) & 0x80000000 ^ 0xbf000000) + fVar10 * 0.15915494);
      auVar16._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar10) & 0x80000000 ^ 0xbf000000) + fVar10 * 0.15915494);
      auVar16._12_4_ =
           (int)((float)(-(uint)(0.0 <= fVar10) & 0x80000000 ^ 0xbf000000) + fVar10 * 0.15915494);
      auVar22._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar19) & 0x80000000 ^ 0xbf000000) + fVar19 * 0.15915494);
      auVar22._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar10 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                (fVar10 + 1.5707964) * 0.15915494);
      auVar22._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar10 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                (fVar10 + 1.5707964) * 0.15915494);
      auVar22._12_4_ =
           (int)((float)(-(uint)(0.0 <= fVar10 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                (fVar10 + 1.5707964) * 0.15915494);
      auVar16 = NEON_scvtf(auVar16,4);
      fVar23 = fVar10 - auVar16._0_4_ * 6.2831855;
      auVar16 = NEON_scvtf(auVar22,4);
      fVar19 = fVar19 - auVar16._0_4_ * 6.2831855;
      puVar6 = (undefined8 *)(*param_4 + (long)iVar17 * 0x14);
      fVar23 = (float)((uint)fVar23 ^
                      ((uint)fVar23 ^ (uint)(-3.1415927 - fVar23)) & -(uint)(fVar23 < -1.5707964));
      iVar17 = -(uint)(ABS(fVar10) == INFINITY);
      uVar18 = CONCAT13(~(byte)((uint)iVar17 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar17 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar17 >> 8),~(byte)iVar17)));
      uVar5 = *(ulong *)(param_1 + 0x48);
      uVar8 = *(ulong *)(param_1 + 0x50);
      fVar19 = (float)((uint)fVar19 ^
                      ((uint)fVar19 ^ (uint)(-3.1415927 - fVar19)) & -(uint)(fVar19 < -1.5707964));
      fVar23 = (float)((uint)fVar23 ^
                      ((uint)fVar23 ^ (uint)(3.1415927 - fVar23)) & -(uint)(1.5707964 < fVar23));
      fVar14 = fVar23 * fVar23;
      fVar19 = (float)((uint)fVar19 ^
                      ((uint)fVar19 ^ (uint)(3.1415927 - fVar19)) & -(uint)(1.5707964 < fVar19));
      fVar12 = fVar19 * fVar19;
      fVar21 = *(float *)(puVar6 + 2);
      fVar13 = auVar15._0_4_;
      fVar11 = *(float *)(param_1 + 0x1a0);
      fVar10 = *(float *)(param_1 + 0x1ac);
      fVar23 = fVar23 * (fVar13 + fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * -2.5052108e-08 +
                                                                         2.7557319e-06) +
                                                               -0.0001984127) + 0.008333334) +
                                           -0.16666667));
      fVar19 = fVar19 * (fVar13 + fVar12 * (fVar12 * (fVar12 * (fVar12 * (fVar12 * -2.5052108e-08 +
                                                                         2.7557319e-06) +
                                                               -0.0001984127) + 0.008333334) +
                                           -0.16666667));
      uVar20 = (uint)fVar19 ^
               ((uint)fVar19 ^ 0x7fc00000) &
               ~CONCAT13(~(byte)((uint)iVar24 >> 0x18),
                         CONCAT12(~(byte)((uint)iVar24 >> 0x10),
                                  CONCAT11(~(byte)((uint)iVar24 >> 8),~(byte)iVar24)));
      fVar12 = *(float *)(param_1 + 0x1a4);
      *puVar7 = 0;
      fVar11 = fVar11 + fVar10 * fVar21 * (float)((uint)fVar23 ^
                                                 ((uint)fVar23 ^ 0x7fc00000) & ~uVar18);
      fVar12 = fVar12 + fVar10 * fVar21 * (float)((uVar20 ^ (uVar20 ^ (uint)fVar13) &
                                                            ~CONCAT13(~(byte)((uint)iVar4 >> 0x18),
                                                                      CONCAT12(~(byte)((uint)iVar4
                                                                                      >> 0x10),
                                                                               CONCAT11(~(byte)((
                                                  uint)iVar4 >> 8),~(byte)iVar4))) ^ 0x7fc00000) &
                                                  uVar18 ^ 0x7fc00000);
      puVar7[-2] = (fVar11 + fVar11) / (float)uVar5;
      puVar7[-1] = (fVar12 + fVar12) / (float)uVar8;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      uVar3 = *(undefined4 *)((long)puVar6 + 0xc);
      *(undefined8 *)(puVar7 + -6) = *puVar6;
      puVar7[-4] = uVar2;
      puVar7[-3] = uVar3;
      uVar18 = *(uint *)(param_1 + 0x1a8);
      uVar5 = (ulong)(int)uVar18;
      puVar7 = puVar7 + 7;
      uVar8 = uVar1;
    } while ((long)uVar1 <= (long)uVar5);
  }
  FUN_00c4db90(*(undefined8 *)(*param_2 + 200),uVar18 + 2,0,0,0,0);
  return;
}


