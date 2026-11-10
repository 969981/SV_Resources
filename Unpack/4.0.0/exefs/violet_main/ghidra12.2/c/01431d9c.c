/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01431d9c; name: FUN_01431d9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01431d9c(long param_1,undefined2 *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar10;
  undefined8 uVar7;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_90;
  float fStack_8c;
  undefined1 auStack_80 [4];
  float local_7c;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    lVar6 = *(long *)(param_1 + 0x70);
    lVar3 = FUN_00c4c40c(lVar6,param_2[1]);
    auVar9 = *(undefined1 (*) [16])(lVar6 + 0x3f0);
    fVar20 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar18 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    fVar12 = (float)*(undefined8 *)(lVar6 + 0x408);
    fVar21 = (float)((ulong)*(undefined8 *)(lVar6 + 0x408) >> 0x20);
    fVar17 = (float)*(undefined8 *)(lVar6 + 0x400);
    fVar19 = (float)((ulong)*(undefined8 *)(lVar6 + 0x400) >> 0x20);
    fVar23 = (float)*(undefined8 *)(lVar6 + 0x3e0) * fVar18 + auVar9._0_4_ * fVar10 +
             fVar17 * fVar20 + (float)*(undefined8 *)(lVar6 + 0x410) * fVar22;
    fVar24 = (float)((ulong)*(undefined8 *)(lVar6 + 0x3e0) >> 0x20) * fVar18 + auVar9._4_4_ * fVar10
             + fVar19 * fVar20 + (float)((ulong)*(undefined8 *)(lVar6 + 0x410) >> 0x20) * fVar22;
    fVar26 = (float)*(undefined8 *)(lVar6 + 1000) * fVar18 + auVar9._8_4_ * fVar10 + fVar12 * fVar20
             + (float)*(undefined8 *)(lVar6 + 0x418) * fVar22;
    auVar8 = FUN_014321cc(param_1,*param_2);
    iVar1 = *(int *)(param_1 + 0x250);
    auVar2._12_4_ = fVar22;
    auVar2._8_4_ = fVar20;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar18;
    fVar11 = (float)((ulong)_DAT_03cab4f0 >> 0x20);
    fVar25 = (float)((ulong)_UNK_03cab4f8 >> 0x20);
    if (iVar1 == 2) {
      local_14 = *(undefined4 *)(param_1 + 0x188);
      fVar23 = fVar23 + 0.0;
      uStack_50 = CONCAT44(fVar24 + *(float *)(param_2 + 0x26),fVar23);
      fVar26 = fVar26 + 0.0;
      uStack_48 = (ulong)(uint)fVar26;
      fVar12 = *(float *)(param_2 + 0x24);
      local_68 = auStack_80;
      auVar14._0_8_ =
           CONCAT44(fVar24 + *(float *)(param_2 + 0x26) + fVar11 * fVar12,
                    fVar23 + (float)_DAT_03cab4f0 * fVar12);
      auVar14._8_4_ = fVar26 + (float)_UNK_03cab4f8 * fVar12;
      auVar14._12_4_ = fVar25 * fVar12 + 0.0;
      uStack_58 = auVar14._8_8_;
      local_60 = auVar14._0_8_;
      uVar4 = (*DAT_0486ae00)(&DAT_0486ae20,&uStack_50,&local_60,&local_14,&local_68);
      if ((uVar4 & 1) == 0) {
        fVar23 = fVar24;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x70);
        lVar3 = FUN_00c4c40c(lVar6,*(undefined2 *)(param_1 + 0x78));
        fVar23 = local_7c + *(float *)(param_2 + 0x30) +
                 (fVar24 - ((float)((ulong)*(undefined8 *)(lVar6 + 0x3e0) >> 0x20) *
                            (float)*(undefined8 *)(lVar3 + 0x30) +
                            *(float *)(lVar6 + 0x3f4) *
                            (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar6 + 0x400) >> 0x20) *
                            (float)*(undefined8 *)(lVar3 + 0x38) +
                           (float)((ulong)*(undefined8 *)(lVar6 + 0x410) >> 0x20) *
                           (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20)));
      }
      lVar6 = *(long *)(param_1 + 0x70);
      lVar3 = FUN_00c4c40c(lVar6,*param_2);
      fVar12 = (float)*(undefined8 *)(lVar3 + 0x30);
      fVar20 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
      fVar21 = (float)*(undefined8 *)(lVar3 + 0x38);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
      fVar26 = (float)*(undefined8 *)(lVar6 + 0x3e0) * fVar12 + *(float *)(lVar6 + 0x3f0) * fVar20 +
               (float)*(undefined8 *)(lVar6 + 0x400) * fVar21 +
               (float)*(undefined8 *)(lVar6 + 0x410) * fVar25;
      fVar11 = (float)*(undefined8 *)(lVar6 + 1000) * fVar12 + *(float *)(lVar6 + 0x3f8) * fVar20 +
               (float)*(undefined8 *)(lVar6 + 0x408) * fVar21 +
               (float)*(undefined8 *)(lVar6 + 0x418) * fVar25;
      fVar23 = ((float)((ulong)*(undefined8 *)(lVar6 + 0x3e0) >> 0x20) * fVar12 +
                *(float *)(lVar6 + 0x3f4) * fVar20 +
                (float)((ulong)*(undefined8 *)(lVar6 + 0x400) >> 0x20) * fVar21 +
               (float)((ulong)*(undefined8 *)(lVar6 + 0x410) >> 0x20) * fVar25) - (fVar24 - fVar23);
      auVar16._0_12_ = auVar2._0_12_;
      auVar16._12_4_ = 0;
      fVar10 = fVar10 + auVar8._4_4_ * fVar26 + auVar9._4_4_ * fVar23 + fVar19 * fVar11;
      uVar7 = CONCAT44(fVar10,fVar18 + auVar8._0_4_ * fVar26 + auVar9._0_4_ * fVar23 +
                                       fVar17 * fVar11);
      *(float *)(param_2 + 0x50) = fVar10;
      uVar5 = *(undefined8 *)(param_1 + 0x70);
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 3) {
          return;
        }
        auVar9 = FUN_00c8ecec(*(undefined8 *)(param_1 + 0x70),*param_2);
        local_90 = auVar9._0_4_;
        fStack_8c = auVar9._4_4_;
        if (*(float *)(param_1 + 0x254) == 0.0) {
          fVar23 = 1.0;
        }
        else {
          fVar23 = *(float *)(param_1 + 600) / *(float *)(param_1 + 0x254);
          if (1.0 < fVar23) {
            fVar23 = 1.0;
          }
        }
        fVar10 = *(float *)(param_2 + 0x50);
        fVar23 = (float)(**(code **)PTR_PTR_047d9248)(fVar23);
        fVar10 = fVar10 + (0.0 - fVar10) * fVar23;
        *(float *)(param_2 + 0x50) = fVar10;
        auVar9 = NEON_ext(auVar9,auVar9,8,1);
        FUN_00cc3a84(CONCAT44(fStack_8c + fVar10,local_90),auVar9._0_4_,
                     *(undefined8 *)(param_1 + 0x70),*param_2);
        return;
      }
      local_14 = *(undefined4 *)(param_1 + 0x188);
      fVar23 = fVar23 + 0.0;
      uStack_50 = CONCAT44(fVar24 + *(float *)(param_2 + 0x26),fVar23);
      fVar26 = fVar26 + 0.0;
      uStack_48 = (ulong)(uint)fVar26;
      fVar13 = *(float *)(param_2 + 0x24);
      local_68 = auStack_80;
      auVar15._0_8_ =
           CONCAT44(fVar24 + *(float *)(param_2 + 0x26) + fVar11 * fVar13,
                    fVar23 + (float)_DAT_03cab4f0 * fVar13);
      auVar15._8_4_ = fVar26 + (float)_UNK_03cab4f8 * fVar13;
      auVar15._12_4_ = fVar25 * fVar13 + 0.0;
      uStack_58 = auVar15._8_8_;
      local_60 = auVar15._0_8_;
      uVar4 = (*DAT_0486ae00)(&DAT_0486ae20,&uStack_50,&local_60,&local_14,&local_68);
      if ((uVar4 & 1) == 0) {
        fStack_8c = fVar24;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x70);
        lVar3 = FUN_00c4c40c(lVar6,*(undefined2 *)(param_1 + 0x78));
        fStack_8c = local_7c + *(float *)(param_2 + 0x30) +
                    (fVar24 - ((float)((ulong)*(undefined8 *)(lVar6 + 0x3e0) >> 0x20) *
                               (float)*(undefined8 *)(lVar3 + 0x30) +
                               *(float *)(lVar6 + 0x3f4) *
                               (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar6 + 0x400) >> 0x20) *
                               (float)*(undefined8 *)(lVar3 + 0x38) +
                              (float)((ulong)*(undefined8 *)(lVar6 + 0x410) >> 0x20) *
                              (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20)));
      }
      lVar6 = *(long *)(param_1 + 0x70);
      lVar3 = FUN_00c4c40c(lVar6,*param_2);
      fVar11 = (float)*(undefined8 *)(lVar3 + 0x30);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
      fVar13 = (float)*(undefined8 *)(lVar3 + 0x38);
      fVar27 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
      fVar23 = (float)*(undefined8 *)(lVar6 + 0x3e0) * fVar11 + *(float *)(lVar6 + 0x3f0) * fVar25 +
               (float)*(undefined8 *)(lVar6 + 0x400) * fVar13 +
               (float)*(undefined8 *)(lVar6 + 0x410) * fVar27;
      fVar26 = (float)*(undefined8 *)(lVar6 + 1000) * fVar11 + *(float *)(lVar6 + 0x3f8) * fVar25 +
               (float)*(undefined8 *)(lVar6 + 0x408) * fVar13 +
               (float)*(undefined8 *)(lVar6 + 0x418) * fVar27;
      fVar11 = ((float)((ulong)*(undefined8 *)(lVar6 + 0x3e0) >> 0x20) * fVar11 +
                *(float *)(lVar6 + 0x3f4) * fVar25 +
                (float)((ulong)*(undefined8 *)(lVar6 + 0x400) >> 0x20) * fVar13 +
               (float)((ulong)*(undefined8 *)(lVar6 + 0x410) >> 0x20) * fVar27) -
               (fVar24 - fStack_8c);
      fVar18 = fVar18 + auVar8._0_4_ * fVar23 + auVar9._0_4_ * fVar11 + fVar17 * fVar26;
      fVar10 = fVar10 + auVar8._4_4_ * fVar23 + auVar9._4_4_ * fVar11 + fVar19 * fVar26;
      fVar20 = fVar20 + auVar8._8_4_ * fVar23 + auVar9._8_4_ * fVar11 + fVar12 * fVar26;
      fVar22 = fVar22 + auVar8._12_4_ * fVar23 + auVar9._12_4_ * fVar11 + fVar21 * fVar26;
      if (*(float *)(param_1 + 0x254) == 0.0) {
        fVar23 = 1.0;
      }
      else {
        fVar23 = *(float *)(param_1 + 600) / *(float *)(param_1 + 0x254);
        if (1.0 < fVar23) {
          fVar23 = 1.0;
        }
      }
      fVar26 = *(float *)(param_2 + 0x50);
      fVar23 = (float)(**(code **)PTR_PTR_047d9248)(fVar23);
      auVar8._4_4_ = fVar10;
      auVar8._0_4_ = fVar18;
      auVar8._8_4_ = fVar20;
      auVar9._4_4_ = fVar10;
      auVar9._0_4_ = fVar18;
      auVar9._8_4_ = fVar20;
      fVar26 = fVar26 + (fVar10 - fVar26) * fVar23;
      *(float *)(param_2 + 0x50) = fVar26;
      uVar7 = CONCAT44(fVar26,fVar18);
      auVar9._12_4_ = fVar22;
      auVar8._12_4_ = fVar22;
      auVar9 = NEON_ext(auVar9,auVar8,8,1);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      auVar16._8_8_ = auVar9._8_8_;
      auVar16._0_4_ = auVar9._0_4_;
      auVar16._4_4_ = 0;
    }
    FUN_00cc3a84(uVar7,auVar16,uVar5,*param_2);
  }
  return;
}


