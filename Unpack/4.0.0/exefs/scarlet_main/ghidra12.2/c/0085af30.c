/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085af30; name: FUN_0085af30
 */


void FUN_0085af30(float param_1,long param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [512];
  
  if (*(char *)(param_2 + 0x1fe) == '\0') {
    FUN_032260f8(auStack_280,auStack_270,0x200);
    uVar29 = FUN_0322b1e0(auStack_280,"No index available (");
    uVar29 = FUN_0322b2c8(uVar29,*(undefined4 *)(param_2 + 0x1f8));
    FUN_0322b1e0(uVar29,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar8 = FUN_03226f50(0x79f9d886,auStack_270,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x189);
    if (iVar8 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(auStack_280);
    iVar8 = *(int *)(param_2 + 0x1f0);
    puVar7 = PTR_PTR_047d1a50;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x1f0);
    puVar7 = PTR_PTR_047d1a50;
  }
  PTR_PTR_047d1a50 = puVar7;
  if ((iVar8 == 3) && (plVar13 = *(long **)(param_2 + 0x70), plVar13 != (long *)0x0)) {
    uVar29 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uVar30 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    do {
      lVar14 = 0;
      do {
        uVar11 = plVar13[lVar14 + 5];
        lVar9 = plVar13[lVar14 + 2];
        lVar12 = plVar13[(ulong)(9U >> (ulong)(((uint)lVar14 & 0xf) << 1) & 3) + 2];
        if (*(int *)(lVar9 + 0x20) < *(int *)(lVar12 + 0x20)) {
LAB_0085b08c:
          iVar8 = *(int *)((uVar11 & 0xfffffffffffffffc) + 0x58);
          if ((int)plVar13[0xb] != iVar8) {
            puVar4 = (undefined8 *)(*(long *)(param_2 + 0x90) + (long)(int)plVar13[0xb] * 0x10);
            uVar20 = puVar4[1];
            fVar17 = (float)uVar20;
            fVar18 = (float)((ulong)uVar20 >> 0x20);
            uVar20 = *puVar4;
            fVar15 = (float)uVar20;
            fVar16 = (float)((ulong)uVar20 >> 0x20);
            auVar5 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x90) + (long)iVar8 * 0x10);
            auVar19._0_4_ = fVar15 * auVar5._0_4_;
            auVar19._4_4_ = fVar16 * auVar5._4_4_;
            auVar19._8_4_ = fVar17 * auVar5._8_4_;
            auVar19._12_4_ = fVar18 * auVar5._12_4_;
            auVar24 = NEON_ext(auVar19,auVar19,8,1);
            if (auVar19._0_4_ + auVar19._4_4_ + auVar24._0_4_ < param_1) {
              fVar15 = fVar15 + auVar5._0_4_;
              fVar16 = fVar16 + auVar5._4_4_;
              fVar17 = fVar17 + auVar5._8_4_;
              fVar18 = fVar18 + auVar5._12_4_;
              fVar23 = fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
              fVar25 = fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
              uVar2 = (uint)(0.0 < fVar23);
              uVar3 = (uint)(0.0 < fVar25);
              uVar20 = uVar29;
              if (fVar23 != 0.0) {
                uVar20 = CONCAT44((float)((ulong)uVar30 >> 0x20) / SQRT(fVar25),
                                  (float)uVar30 / SQRT(fVar23));
              }
              if (uVar2 != 0 || uVar3 != 0) {
                auVar26._0_4_ = (int)(uVar2 * -0x80000000) >> 0x1f;
                auVar26._4_4_ = (int)(uVar3 * -0x80000000) >> 0x1f;
                auVar26._8_4_ = (int)(uVar2 * -0x80000000) >> 0x1f;
                auVar26._12_4_ = (int)(uVar3 * -0x80000000) >> 0x1f;
                auVar21._0_4_ = fVar15 * (float)uVar20;
                fVar23 = (float)((ulong)uVar20 >> 0x20);
                auVar21._4_4_ = fVar16 * fVar23;
                auVar21._8_4_ = fVar17 * (float)uVar20;
                auVar21._12_4_ = fVar18 * fVar23;
                auVar5._4_4_ = fVar16;
                auVar5._0_4_ = fVar15;
                auVar5._8_4_ = fVar17;
                auVar5._12_4_ = fVar18;
                auVar24._4_4_ = fVar16;
                auVar24._0_4_ = fVar15;
                auVar24._8_4_ = fVar17;
                auVar24._12_4_ = fVar18;
                auVar24 = auVar24 ^ (auVar5 ^ auVar21) & auVar26;
                auVar6._12_4_ = (int)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
                auVar6._0_12_ = *(undefined1 (*) [12])(lVar9 + 0x20);
                auVar19 = NEON_scvtf(auVar6,4);
                fVar17 = (float)*(undefined8 *)(param_2 + 0x158);
                fVar15 = (float)*(undefined8 *)(param_2 + 0x150);
                fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x150) >> 0x20);
                auVar5 = *(undefined1 (*) [16])(param_2 + 0x130);
                auVar22._0_4_ = auVar24._0_4_ * (auVar5._0_4_ + fVar15 * auVar19._0_4_);
                auVar22._4_4_ = auVar24._4_4_ * (auVar5._4_4_ + fVar16 * auVar19._4_4_);
                auVar22._8_4_ = auVar24._8_4_ * (auVar5._8_4_ + fVar17 * auVar19._8_4_);
                auVar22._12_4_ =
                     auVar24._12_4_ *
                     (auVar5._12_4_ + (float)((ulong)*(undefined8 *)(param_2 + 0x158) >> 0x20) * 0.0
                     );
                auVar19 = NEON_ext(auVar22,auVar22,8,1);
                auVar27._0_12_ = auVar24._0_12_;
                auVar27._12_4_ = auVar22._0_4_ + auVar22._4_4_ + auVar19._0_4_;
                if (*(char *)(param_2 + 0xe) != '\0') {
                  plVar10 = *(long **)(param_2 + 0x58);
                  while (plVar10 != (long *)0x0) {
                    pauVar1 = (undefined1 (*) [16])(plVar10 + 4);
                    plVar10 = (long *)*plVar10;
                    auVar19 = NEON_scvtf(*pauVar1,4);
                    fVar18 = auVar27._0_4_ * (auVar5._0_4_ + fVar15 * auVar19._0_4_);
                    fVar23 = auVar27._4_4_ * (auVar5._4_4_ + fVar16 * auVar19._4_4_);
                    fVar25 = auVar27._8_4_ * (auVar5._8_4_ + fVar17 * auVar19._8_4_);
                    uVar20 = NEON_fmax(CONCAT44(auVar27._12_4_,auVar27._12_4_),
                                       CONCAT44(fVar18 + fVar23 + fVar25,fVar18 + fVar23 + fVar25),4
                                      );
                    auVar27._12_4_ = (int)uVar20;
                  }
                }
                iVar8 = (int)param_3[1];
                lVar9 = (long)iVar8;
                auVar28._0_12_ = auVar27._0_12_;
                auVar28._12_4_ = -auVar27._12_4_;
                if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar8) {
                  FUN_02e9b11c(param_3,puVar7,lVar9 + 1);
                  auVar28._8_8_ = auVar28._8_8_;
                  auVar28._0_8_ = auVar27._0_8_;
                  iVar8 = (int)param_3[1];
                }
                puVar4 = (undefined8 *)(*param_3 + (long)iVar8 * 0x10);
                puVar4[1] = auVar28._8_8_;
                *puVar4 = auVar28._0_8_;
                *(int *)(param_3 + 1) = (int)(lVar9 + 1);
              }
            }
          }
        }
        else if (*(int *)(lVar12 + 0x20) < *(int *)(lVar9 + 0x20)) {
LAB_0085b070:
          if (uVar11 < 4) goto LAB_0085b08c;
        }
        else {
          if (*(int *)(lVar9 + 0x24) < *(int *)(lVar12 + 0x24)) goto LAB_0085b08c;
          if (*(int *)(lVar12 + 0x24) < *(int *)(lVar9 + 0x24)) goto LAB_0085b070;
          if ((uVar11 < 4) || (*(int *)(lVar9 + 0x28) <= *(int *)(lVar12 + 0x28)))
          goto LAB_0085b08c;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return;
}


