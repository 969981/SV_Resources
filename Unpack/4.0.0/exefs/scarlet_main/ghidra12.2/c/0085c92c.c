/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085c92c; name: FUN_0085c92c
 */


/* WARNING: Removing unreachable block (ram,0x0085c990) */

void FUN_0085c92c(long param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined1 auVar7 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [512];
  
  puVar1 = PTR_DAT_047d19b0;
  fVar6 = *(float *)(param_1 + 0x20);
  fVar9 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x28);
  if (fVar12 != 0.0 || (fVar6 != 0.0 || fVar9 != 0.0)) {
    *(ulong *)(param_1 + 0x138) = (ulong)*(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x14);
    *(ulong *)(param_1 + 0x148) = (ulong)(uint)fVar12;
    *(float *)(param_1 + 0x140) = fVar6;
    *(float *)(param_1 + 0x144) = fVar9;
    fVar14 = *(float *)(PTR_DAT_047d19b0 + 0x60);
    fVar19 = *(float *)(PTR_DAT_047d19b0 + 100);
    fVar20 = *(float *)(PTR_DAT_047d19b0 + 0x68);
    goto LAB_0085caf8;
  }
  if (param_3 == 0) {
    return;
  }
  auVar16 = *param_2;
  auVar7 = auVar16;
  if (1 < (int)param_3) {
    if (param_3 == 2) {
      lVar4 = 1;
    }
    else {
      lVar2 = 0;
      do {
        lVar4 = lVar2;
        auVar16 = NEON_fmin(auVar16,param_2[lVar4 + 1],4);
        auVar7 = NEON_fmax(auVar7,param_2[lVar4 + 1],4);
        auVar16 = NEON_fmin(auVar16,param_2[lVar4 + 2],4);
        auVar7 = NEON_fmax(auVar7,param_2[lVar4 + 2],4);
        lVar2 = lVar4 + 2;
      } while (~((ulong)(param_3 - 1) & 1) + (ulong)param_3 != lVar4 + 2);
      lVar4 = lVar4 + 3;
      if ((param_3 - 1 & 1) == 0) goto LAB_0085ca0c;
    }
    auVar7 = NEON_fmax(auVar7,param_2[lVar4],4);
    auVar16 = NEON_fmin(auVar16,param_2[lVar4],4);
  }
LAB_0085ca0c:
  fVar17 = auVar16._0_4_;
  fVar21 = auVar16._4_4_;
  fVar22 = auVar16._8_4_;
  if (((fVar21 < -*(float *)(PTR_DAT_047d19b0 + 0x244) ||
       (*(float *)(PTR_DAT_047d19b0 + 0x248) < auVar7._8_4_ ||
       (*(float *)(PTR_DAT_047d19b0 + 0x240) < auVar7._0_4_ ||
       *(float *)(PTR_DAT_047d19b0 + 0x244) < auVar7._4_4_))) ||
      fVar17 < -*(float *)(PTR_DAT_047d19b0 + 0x240)) ||
      fVar22 < -*(float *)(PTR_DAT_047d19b0 + 0x248)) {
    FUN_032260f8(auStack_240,auStack_230,0x200);
    FUN_0322b1e0(auStack_240,"Input domain out of range");
    iVar3 = FUN_03226f50(0x405a2174,auStack_230,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x266);
    if (iVar3 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(auStack_240);
  }
  auVar15._8_4_ = 0x37a7c5ac;
  auVar15._0_8_ = 0x37a7c5ac37a7c5ac;
  auVar15._12_4_ = 0x37a7c5ac;
  auVar18._0_4_ = auVar7._0_4_ - fVar17;
  auVar18._4_4_ = auVar7._4_4_ - fVar21;
  auVar18._8_4_ = auVar7._8_4_ - fVar22;
  auVar18._12_4_ = auVar7._12_4_ - auVar16._12_4_;
  auVar7 = NEON_fmax(auVar18,auVar15,4);
  auVar16 = *(undefined1 (*) [16])(puVar1 + 0x150);
  auVar18 = NEON_ext(auVar16,auVar16,8,1);
  auVar16 = NEON_ext(auVar18,auVar16,8,1);
  fVar5 = auVar7._0_4_ * auVar16._0_4_;
  fVar8 = auVar7._4_4_ * auVar16._4_4_;
  fVar11 = auVar7._8_4_ * auVar16._8_4_;
  fVar14 = *(float *)(puVar1 + 0x60);
  fVar19 = *(float *)(puVar1 + 100);
  fVar20 = *(float *)(puVar1 + 0x68);
  fVar6 = (fVar14 / fVar5) * 8191.0;
  fVar9 = (fVar19 / fVar8) * 8191.0;
  fVar12 = (fVar20 / fVar11) * 8191.0;
  *(ulong *)(param_1 + 0x138) = (ulong)(uint)(fVar22 + fVar11);
  *(ulong *)(param_1 + 0x130) = CONCAT44(fVar21 + fVar8,fVar17 + fVar5);
  *(ulong *)(param_1 + 0x148) = (ulong)(uint)fVar12;
  *(float *)(param_1 + 0x140) = fVar6;
  *(float *)(param_1 + 0x144) = fVar9;
LAB_0085caf8:
  fVar17 = fVar14 / fVar6;
  fVar19 = fVar19 / fVar9;
  fVar20 = fVar20 / fVar12;
  iVar3 = -(uint)(fVar6 == 0.0);
  iVar10 = -(uint)(fVar9 == 0.0);
  iVar13 = -(uint)(fVar12 == 0.0);
  auVar16._0_8_ =
       CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                CONCAT16((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                         CONCAT15((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                  CONCAT14(SUB41(fVar19,0) & ~(byte)iVar10,
                                           CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                    ~(byte)((uint)iVar3 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                             ~(byte)((uint)iVar3 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar17 >> 8) &
                                                                      ~(byte)((uint)iVar3 >> 8),
                                                                      SUB41(fVar17,0) & ~(byte)iVar3
                                                                     )))))));
  auVar16[8] = SUB41(fVar20,0) & ~(byte)iVar13;
  auVar16[9] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar13 >> 8);
  auVar16[10] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
  auVar16[0xb] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
  auVar16._12_4_ = fVar14;
  *(long *)(param_1 + 0x158) = auVar16._8_8_;
  *(undefined8 *)(param_1 + 0x150) = auVar16._0_8_;
  return;
}


