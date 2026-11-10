/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02008514; name: FUN_02008514
 */


void FUN_02008514(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  ulong uVar17;
  int iVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  int local_78;
  int iStack_74;
  
  if ((((*(long *)(param_1 + 0x48) != 0) && (iVar13 = *param_2, -1 < iVar13)) &&
      (iVar13 < *(int *)(param_1 + 0x38))) &&
     (((iVar14 = param_2[1], -1 < iVar14 && (iVar14 < *(int *)(param_1 + 0x3c))) &&
      ((lVar7 = *(long *)(*(long *)(param_1 + 0x48) +
                         (long)(iVar13 + *(int *)(param_1 + 0x38) * iVar14) * 8), lVar7 != 0 &&
       ((*(uint *)(lVar7 + 0x18) >> 2 & 1) != 0)))))) {
    pauVar11 = *(undefined1 (**) [16])(lVar7 + 0x20);
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) & 0xfffffffb;
    for (; pauVar11 != (undefined1 (*) [16])0x0; pauVar11 = *(undefined1 (**) [16])(pauVar11[2] + 8)
        ) {
      FUN_02008320(&local_90);
      auVar24 = *pauVar11;
      uVar17 = *(ulong *)(pauVar11[1] + 8);
      uVar8 = *(ulong *)pauVar11[1] & (local_90 ^ 0xffffffffffffffff);
      *(ulong *)pauVar11[1] = uVar8;
      *(ulong *)(pauVar11[1] + 8) = uVar17 & (uStack_88 ^ 0xffffffffffffffff);
      fStack_a8 = auVar24._8_4_;
      fStack_a4 = auVar24._12_4_;
      local_b0 = auVar24._0_4_;
      fStack_ac = auVar24._4_4_;
      if (((uint)uVar8 >> 7 & 1) != 0) {
        auVar24 = NEON_ext(auVar24,auVar24,8,1);
        fStack_ac = *(float *)pauVar11[2];
        fStack_a8 = auVar24._0_4_;
        fStack_a4 = 0.0;
      }
      uVar17 = 0;
      iVar13 = 0;
      local_98 = 0;
      iVar14 = 0;
      iVar15 = 0;
      local_78 = 0;
      iStack_74 = 0;
      iVar12 = 0;
      iVar18 = 0;
      local_a0 = 0;
      iStack_9c = 0;
      piVar16 = &DAT_03d60758;
      do {
        if ((((*(long *)(param_1 + 0x48) != 0) && (iVar1 = *param_2 + piVar16[-1], -1 < iVar1)) &&
            ((iVar1 < *(int *)(param_1 + 0x38) &&
             (((iVar2 = param_2[1] + *piVar16, -1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x3c))) &&
              (lVar7 = *(long *)(*(long *)(param_1 + 0x48) +
                                (long)(iVar1 + *(int *)(param_1 + 0x38) * iVar2) * 8), lVar7 != 0)))
             ))) && (pauVar6 = (undefined1 (*) [16])FUN_0200892c(lVar7,pauVar11),
                    pauVar6 != (undefined1 (*) [16])0x0)) {
          auVar24 = *pauVar6;
          uVar8 = *(ulong *)pauVar6[1];
          if (((uint)uVar8 >> 7 & 1) != 0) {
            auVar20 = NEON_ext(auVar24,auVar24,8,1);
            auVar24._4_4_ = *(undefined4 *)pauVar6[2];
            auVar24._8_4_ = auVar20._0_4_;
            auVar24._12_4_ = 0;
          }
          fVar19 = auVar24._0_4_ - local_b0;
          fVar21 = auVar24._4_4_ - fStack_ac;
          fVar22 = auVar24._8_4_ - fStack_a8;
          fVar23 = auVar24._12_4_ - fStack_a4;
          fVar19 = fVar19 * fVar19;
          fVar22 = fVar22 * fVar22;
          fVar23 = fVar23 * fVar23;
          auVar20._0_4_ = fVar19 + fVar21 * fVar21;
          auVar20._4_4_ = fVar22 + fVar23;
          auVar20._8_4_ = fVar19 + fVar21 * fVar21;
          auVar20._12_4_ = fVar22 + fVar23;
          auVar24 = NEON_ext(auVar20,auVar20,4,1);
          uVar4 = (uint)(uVar8 >> 0x20);
          if (auVar24._0_4_ + auVar24._4_4_ < 81.0) {
            uVar3 = (uint)uVar8 >> 0x11 & 1;
            bVar5 = (uVar8 & 0x80) != 0;
            if (bVar5) {
              iVar13 = uVar3 + iVar13;
            }
            if (bVar5) {
              iVar14 = (uVar3 ^ 1) + iVar14;
              iVar15 = (uVar4 >> 0xf & 1) + iVar15;
              iVar12 = (uVar4 >> 0xe & 1) + iVar12;
              iVar18 = (uVar4 >> 0xd & 1) + iVar18;
            }
            if (*(short *)(pauVar6[1] + 10) != 0) {
              local_98._0_4_ = (int)local_98 + 1;
            }
            local_98 = CONCAT44(local_98._4_4_ + 1,(int)local_98);
          }
          if ((0xe670UL >> (uVar17 & 0x3f) & 1) != 0) {
            iStack_9c = (uVar4 >> 5 & 1) + iStack_9c;
            local_a0 = local_a0 + 1;
            iStack_74 = iStack_74 + (uint)(3.0 < fVar21);
            local_78 = local_78 + (uint)(fVar21 < -3.0);
          }
        }
        uVar17 = uVar17 + 1;
        piVar16 = piVar16 + 3;
      } while (uVar17 != 0x14);
      uVar8 = *(ulong *)pauVar11[1];
      uVar17 = (ulong)(0 < iStack_74) << 0x22 | 0x800000000;
      if (local_78 < 1) {
        uVar17 = (ulong)(0 < iStack_74) << 0x22;
      }
      uVar4 = (uint)(uVar8 >> 0x20);
      if (((uint)uVar8 >> 2 & 1) == 0) {
        if (iVar13 + iVar14 < local_98._4_4_) {
          uVar17 = uVar17 | 0x8000;
        }
        else {
          uVar17 = uVar17 | 0x200000000;
        }
      }
      else {
        if ((uVar8 >> 0x25 & 1) == 0) {
          if (local_a0 + -3 <= iStack_9c) {
            uVar17 = uVar17 | 0x8000000000;
          }
        }
        else {
          uVar17 = uVar17 | 0x8000000000;
        }
        uVar9 = uVar17 | 0x102000;
        if (iVar13 < 1 || iVar14 != 0) {
          uVar9 = uVar17;
        }
        uVar10 = 0x40;
        if (iVar13 + iVar14 < 1) {
          uVar10 = 0x1000;
        }
        uVar17 = uVar9 | uVar10;
        if (local_78 + iStack_74 == 0 && (uVar4 >> 0x13 & 1) == 0) {
          uVar17 = uVar9 | uVar10 | 0x1000000000;
        }
      }
      if (iVar18 == 0 && (uVar4 >> 0xd & 1) == 0) {
        uVar17 = uVar17 | 0x1000000000000;
      }
      if (iVar12 == 0 && (uVar4 >> 0xe & 1) == 0) {
        uVar17 = uVar17 | 0x2000000000000;
      }
      if (iVar15 == 0 && (uVar4 >> 0xf & 1) == 0) {
        uVar17 = uVar17 | 0x4000000000000;
      }
      uVar9 = *(ulong *)(pauVar11[1] + 8);
      if ((uVar9 & 0xffff0000) != 0) {
        local_98._0_4_ = (int)local_98 + 1;
      }
      fVar19 = (float)(int)local_98 / (float)(local_98._4_4_ + 1);
      if (1.0 <= fVar19) {
        uVar10 = 0xffffffff00000000;
      }
      else if (0.8 <= fVar19) {
        uVar10 = 0xffff000000000000;
      }
      else {
        uVar10 = 0;
      }
      *(ulong *)pauVar11[1] = uVar8 | uVar17 | 0xc0000;
      *(ulong *)(pauVar11[1] + 8) = uVar10 | uVar9;
    }
  }
  return;
}


