/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c948d0; name: FUN_00c948d0
 */


undefined1  [16] FUN_00c948d0(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined8 extraout_d0;
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar17 [16];
  undefined8 extraout_var;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_8 [4];
  float local_4;
  
  plVar6 = *(long **)(param_1 + 0x188);
  if (plVar6 == (long *)0x0) {
    uVar24 = 0;
    uVar26 = 0;
  }
  else {
    auVar20 = ZEXT816(0);
    do {
      lVar7 = *(long *)(plVar6[6] + 0x70);
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x15c) != 1)) {
LAB_00c94980:
        uVar24 = auVar20._0_8_;
        uVar26 = auVar20._8_8_;
      }
      else {
        fVar15 = auVar20._12_4_;
        uVar26 = *(undefined8 *)(*(long *)(lVar7 + 0x90) + 0x308);
        uVar24 = *(undefined8 *)(*(long *)(lVar7 + 0x90) + 0x300);
        if (0.0 < fVar15) {
          fVar18 = (float)((ulong)uVar26 >> 0x20);
          if (fVar18 <= 0.0) goto LAB_00c94980;
          fVar28 = (float)uVar24 - auVar20._0_4_;
          fVar29 = (float)((ulong)uVar24 >> 0x20) - auVar20._4_4_;
          fVar30 = (float)uVar26 - auVar20._8_4_;
          fVar27 = fVar18 - fVar15;
          auVar19._0_4_ = fVar28 * fVar28 + fVar29 * fVar29;
          auVar19._4_4_ = fVar30 * fVar30 + 0.0;
          auVar19._8_4_ = fVar28 * fVar28 + fVar29 * fVar29;
          auVar19._12_4_ = fVar30 * fVar30 + 0.0;
          auVar19 = NEON_ext(auVar19,auVar19,4,1);
          fVar8 = auVar19._0_4_ + auVar19._4_4_;
          if (fVar27 * fVar27 < fVar8) {
            fVar14 = SQRT(fVar8);
            if (NAN(fVar14)) {
              local_4 = fVar27;
              fVar14 = sqrtf(fVar8);
              fVar27 = local_4;
            }
            fVar27 = (fVar27 + fVar14) / (fVar14 + fVar14);
            uVar24 = CONCAT44(auVar20._4_4_ + fVar29 * fVar27,auVar20._0_4_ + fVar28 * fVar27);
            uVar26 = CONCAT44((fVar18 + fVar15 + fVar14) * 0.5,auVar20._8_4_ + fVar30 * fVar27);
          }
          else if (fVar27 < 0.0) goto LAB_00c94980;
        }
      }
      plVar6 = (long *)*plVar6;
      auVar20._8_8_ = uVar26;
      auVar20._0_8_ = uVar24;
    } while (plVar6 != (long *)0x0);
  }
  lVar7 = *(long *)(param_1 + 0x120);
  fVar15 = (float)uVar24;
  fVar18 = (float)((ulong)uVar24 >> 0x20);
  fVar27 = (float)uVar26;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 200) != 0) {
      fVar15 = *(float *)(param_1 + 0x310) - fVar15;
      fVar18 = *(float *)(param_1 + 0x314) - fVar18;
      fVar27 = *(float *)(param_1 + 0x318) - fVar27;
      fVar15 = fVar15 * fVar15;
      fVar18 = fVar18 * fVar18;
      fVar27 = fVar27 * fVar27;
      auVar13._0_4_ = fVar15 + fVar18;
      auVar13._4_4_ = fVar27 + 0.0;
      auVar13._8_4_ = fVar15 + fVar18;
      auVar13._12_4_ = fVar27 + 0.0;
      auVar20 = NEON_ext(auVar13,auVar13,4,1);
      if (1.1920929e-07 < auVar20._0_4_ + auVar20._4_4_) {
        *(undefined8 *)(param_1 + 0x318) = uVar26;
        *(undefined8 *)(param_1 + 0x310) = uVar24;
        auVar17._8_8_ = uVar26;
        auVar17._0_8_ = uVar24;
        FUN_00c95db0(auVar17,*(undefined8 *)(lVar7 + 200));
        *(undefined8 *)(param_1 + 0x328) = extraout_var;
        *(undefined8 *)(param_1 + 800) = extraout_d0;
        uVar24 = extraout_d0;
        uVar26 = extraout_var;
      }
      else {
        uVar26 = *(undefined8 *)(param_1 + 0x328);
        uVar24 = *(undefined8 *)(param_1 + 800);
      }
      goto LAB_00c94a88;
    }
    if (*(char *)(param_1 + 0x2fc) == '\0') {
      lVar7 = 0;
      if (*(long *)(param_1 + 0xe8) != 0) {
        lVar7 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
      }
      lVar7 = FUN_00c95aec(lVar7 + 0x108,auStack_8);
      cVar4 = lVar7 != 0;
      *(undefined1 *)(param_1 + 0x2fc) = 1;
      *(char *)(param_1 + 0x2fd) = cVar4;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x2fd);
    }
    if (cVar4 != '\0') {
      uVar24 = 0;
      uVar26 = 0;
      goto LAB_00c94a88;
    }
  }
  pfVar5 = (float *)(**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
  fVar8 = *pfVar5;
  fVar28 = pfVar5[1];
  fVar29 = pfVar5[2];
  fVar30 = pfVar5[4];
  fVar14 = pfVar5[5];
  fVar1 = pfVar5[6];
  fVar22 = pfVar5[3] * pfVar5[3];
  fVar21 = pfVar5[7] * pfVar5[7];
  auVar10._0_4_ = fVar8 * fVar8 + fVar28 * fVar28;
  auVar10._4_4_ = fVar29 * fVar29 + fVar22;
  auVar10._8_4_ = fVar8 * fVar8 + fVar28 * fVar28;
  auVar10._12_4_ = fVar29 * fVar29 + fVar22;
  fVar22 = pfVar5[8];
  fVar2 = pfVar5[9];
  fVar3 = pfVar5[10];
  uVar25 = *(undefined8 *)(pfVar5 + 0xe);
  auVar11._0_4_ = fVar30 * fVar30 + fVar14 * fVar14;
  auVar11._4_4_ = fVar1 * fVar1 + fVar21;
  auVar11._8_4_ = fVar30 * fVar30 + fVar14 * fVar14;
  auVar11._12_4_ = fVar1 * fVar1 + fVar21;
  fVar23 = pfVar5[0xb] * pfVar5[0xb];
  auVar19 = NEON_ext(auVar10,auVar10,4,1);
  auVar20 = NEON_ext(auVar11,auVar11,4,1);
  fVar21 = auVar19._0_4_ + auVar19._4_4_;
  fVar9 = auVar20._0_4_ + auVar20._4_4_;
  auVar12._0_4_ = fVar22 * fVar22 + fVar2 * fVar2;
  auVar12._4_4_ = fVar3 * fVar3 + fVar23;
  auVar12._8_4_ = fVar22 * fVar22 + fVar2 * fVar2;
  auVar12._12_4_ = fVar3 * fVar3 + fVar23;
  uVar24 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + 0xc) >> 0x20) +
                    fVar28 * fVar15 + fVar14 * fVar18 + fVar2 * fVar27,
                    (float)*(undefined8 *)(pfVar5 + 0xc) +
                    fVar8 * fVar15 + fVar30 * fVar18 + fVar22 * fVar27);
  auVar20 = NEON_ext(auVar12,auVar12,4,1);
  fVar8 = auVar20._0_4_ + auVar20._4_4_;
  fVar9 = (float)((uint)fVar9 ^
                 ((uint)fVar9 ^ (uint)fVar21) & ~(int)(short)-(ushort)(fVar21 < fVar9));
  fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ (uint)fVar8) & -(uint)(fVar9 < fVar8));
  fVar8 = SQRT(fVar9);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(fVar9);
  }
  uVar26 = CONCAT44(fVar8 * (float)((ulong)uVar26 >> 0x20),
                    (float)uVar25 + fVar29 * fVar15 + fVar1 * fVar18 + fVar3 * fVar27);
LAB_00c94a88:
  auVar16._8_8_ = uVar26;
  auVar16._0_8_ = uVar24;
  return auVar16;
}


