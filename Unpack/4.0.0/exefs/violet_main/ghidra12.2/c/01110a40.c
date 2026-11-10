/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01110a40; name: FUN_01110a40
 */


undefined8 FUN_01110a40(long param_1,undefined1 (*param_2) [16],long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  uint uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fStack_ac;
  undefined4 local_90;
  float fStack_8c;
  undefined8 local_88;
  float local_74;
  
  if ((*(byte *)(param_3 + 0x52) >> 4 & 1) == 0) {
    uVar4 = FUN_01110e10(param_1);
    return uVar4;
  }
  auVar18 = *param_2;
  fStack_ac = auVar18._4_4_;
  uVar5 = FUN_01110e10(param_1);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  fVar16 = *(float *)*param_2 / 3.0;
  iVar9 = (int)fVar16;
  fVar17 = *(float *)(*param_2 + 8) / 3.0;
  iVar8 = (int)fVar17;
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar9 = (iVar9 - *(int *)(param_1 + 0x60)) - (uint)(fVar16 < (float)iVar9);
    if (iVar9 < 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x38) <= iVar9) {
      return 1;
    }
    iVar8 = (iVar8 - *(int *)(param_1 + 100)) - (uint)(fVar17 < (float)iVar8);
    if (iVar8 < 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x3c) <= iVar8) {
      return 1;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x48) +
                     (long)(iVar9 + *(int *)(param_1 + 0x38) * iVar8) * 8);
    if (lVar7 != 0) {
      pauVar15 = *(undefined1 (**) [16])(lVar7 + 0x20);
      if (pauVar15 == (undefined1 (*) [16])0x0) {
        return 1;
      }
      auVar18 = NEON_rev64(auVar18,4);
      do {
        auVar19 = *pauVar15;
        if ((char)pauVar15[1][0] < '\0') {
          uVar20 = auVar19._0_4_;
          auVar25 = NEON_ext(auVar19,auVar19,8,1);
          auVar19._4_4_ = *(undefined4 *)pauVar15[2];
          auVar19._0_4_ = uVar20;
          auVar19._8_4_ = auVar25._0_4_;
          auVar19._12_4_ = 0;
        }
        fVar16 = 100.0;
        lVar7 = 0;
        pauVar6 = (undefined1 (*) [16])0x0;
        do {
          if (((((*(long *)(param_1 + 0x48) != 0) &&
                (iVar1 = (&DAT_03d60844)[lVar7 * 2] + iVar9, -1 < iVar1)) &&
               (iVar1 < *(int *)(param_1 + 0x38))) &&
              ((iVar2 = (&DAT_03d60848)[lVar7 * 2] + iVar8, -1 < iVar2 &&
               (iVar2 < *(int *)(param_1 + 0x3c))))) &&
             ((lVar10 = *(long *)(*(long *)(param_1 + 0x48) +
                                 (long)(iVar1 + *(int *)(param_1 + 0x38) * iVar2) * 8), lVar10 != 0
              && (pauVar14 = *(undefined1 (**) [16])(lVar10 + 0x20),
                 pauVar14 != (undefined1 (*) [16])0x0)))) {
            if ((char)pauVar14[1][0] < '\0') {
              fVar17 = *(float *)pauVar14[2];
            }
            else {
              fVar17 = *(float *)(*pauVar14 + 4);
            }
            fVar17 = (fStack_ac - fVar17) * (fStack_ac - fVar17);
            pauVar12 = pauVar14;
            if (3.4028235e+38 <= fVar17) {
              pauVar12 = (undefined1 (*) [16])0x0;
            }
            pauVar14 = *(undefined1 (**) [16])(pauVar14[2] + 8);
            if (pauVar14 != (undefined1 (*) [16])0x0) {
              fVar17 = (float)NEON_fminnm(fVar17,0x7f7fffff);
              pauVar11 = pauVar12;
              do {
                if ((char)pauVar14[1][0] < '\0') {
                  fVar24 = *(float *)pauVar14[2];
                }
                else {
                  fVar24 = *(float *)(*pauVar14 + 4);
                }
                fVar24 = (fStack_ac - fVar24) * (fStack_ac - fVar24);
                pauVar12 = pauVar14;
                if (fVar17 <= fVar24) {
                  pauVar12 = pauVar11;
                }
                pauVar14 = *(undefined1 (**) [16])(pauVar14[2] + 8);
                if (fVar17 <= fVar24) {
                  fVar24 = fVar17;
                }
                pauVar11 = pauVar12;
                fVar17 = fVar24;
              } while (pauVar14 != (undefined1 (*) [16])0x0);
            }
            if ((pauVar12 != (undefined1 (*) [16])0x0) &&
               (uVar13 = (uint)*(undefined8 *)pauVar12[1], (uVar13 >> 0x11 & 1) != 0)) {
              auVar25 = *pauVar12;
              if ((uVar13 >> 7 & 1) != 0) {
                auVar23 = NEON_ext(auVar25,auVar25,8,1);
                auVar25._4_4_ = *(undefined4 *)pauVar12[2];
                auVar25._8_4_ = auVar23._0_4_;
                auVar25._12_4_ = 0;
              }
              fVar17 = auVar25._0_4_ - auVar19._0_4_;
              fVar24 = auVar25._4_4_ - auVar19._4_4_;
              fVar21 = auVar25._8_4_ - auVar19._8_4_;
              fVar22 = auVar25._12_4_ - auVar19._12_4_;
              fVar17 = fVar17 * fVar17;
              fVar24 = fVar24 * fVar24;
              fVar21 = fVar21 * fVar21;
              fVar22 = fVar22 * fVar22;
              auVar23._0_4_ = fVar17 + fVar24;
              auVar23._4_4_ = fVar21 + fVar22;
              auVar23._8_4_ = fVar17 + fVar24;
              auVar23._12_4_ = fVar21 + fVar22;
              auVar25 = NEON_ext(auVar23,auVar23,4,1);
              fVar17 = auVar25._0_4_ + auVar25._4_4_;
              if (fVar17 < fVar16) {
                pauVar6 = pauVar12;
                fVar16 = fVar17;
              }
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 8);
        if ((pauVar6 != (undefined1 (*) [16])0x0) &&
           (uVar5 = FUN_0111178c(pauVar6,&local_90), fVar16 = fStack_8c, (uVar5 & 1) != 0)) {
          *(ulong *)*param_2 = CONCAT44(fStack_8c,local_90);
          *(undefined8 *)(*param_2 + 8) = local_88;
          local_74 = 0.0;
          fVar24 = modff(*(float *)(param_3 + 0x68) * 10000.0,&local_74);
          uVar13 = *(uint *)(param_3 + 100);
          fVar17 = fStack_ac;
          if (uVar13 != 9) {
            fVar21 = 0.0;
            fVar17 = 0.0;
            if (uVar13 != 0xe) {
              fVar17 = fVar16;
            }
            if ((uVar13 < 0x10) && (fVar21 = 0.0, (1 << (ulong)(uVar13 & 0x1f) & 0x9800U) != 0)) {
              fVar21 = *(float *)(param_3 + 0x44);
            }
            fVar22 = fVar17 + fVar21 + *(float *)(&DAT_03d605d8 + (long)(int)uVar13 * 0x18);
            fVar17 = fVar17 + fVar21 + *(float *)(&DAT_03d605dc + (long)(int)uVar13 * 0x18);
            if (fVar22 <= fVar16) {
              fVar22 = fVar16;
            }
            if (fVar17 <= fVar16) {
              fVar17 = fVar16;
            }
            fVar17 = fVar17 + fVar24 * (fVar22 - fVar17);
          }
          uVar20 = *(undefined4 *)*param_2;
          uVar3 = *(undefined4 *)(*param_2 + 0xc);
          *(undefined4 *)(*param_2 + 8) = *(undefined4 *)(*param_2 + 8);
          *(undefined4 *)(*param_2 + 0xc) = uVar3;
          *(undefined4 *)*param_2 = uVar20;
          *(float *)(*param_2 + 4) = fVar17;
          if (*(int *)(param_3 + 0x60) == 5) {
            *(int *)(*param_2 + 8) = auVar18._12_4_;
            *(undefined4 *)(*param_2 + 0xc) = uVar3;
            *(int *)*param_2 = auVar18._4_4_;
            *(float *)(*param_2 + 4) = fVar17;
          }
        }
        pauVar15 = *(undefined1 (**) [16])(pauVar15[2] + 8);
      } while (pauVar15 != (undefined1 (*) [16])0x0);
    }
  }
  return 1;
}


