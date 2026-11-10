/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7a0cc; name: FUN_00d7a0cc
 */


ulong FUN_00d7a0cc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [12];
  int iVar16;
  int iVar18;
  int iVar19;
  undefined1 auVar17 [16];
  int iVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    uVar9 = 0;
    goto LAB_00d7a1b0;
  }
  lVar6 = *(long *)(param_1 + 0x58);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00d7a354;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d7a354:
        bVar4 = false;
      }
      if (bVar4) {
        plVar8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar8 = (long *)0x0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  plVar5 = (long *)FUN_00d7a3e0();
  lVar6 = *plVar5;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00d7a3a0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d7a3a0:
        bVar4 = false;
      }
      if (bVar4) {
        plVar5 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar5 = (long *)0x0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  if (plVar8 == (long *)0x0) {
    uVar9 = 0;
    if (plVar5 == (long *)0x0) goto LAB_00d7a1b0;
LAB_00d7a188:
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar7 == 0) goto LAB_00d7a2e0;
    if (plVar8 == (long *)0x0) goto LAB_00d7a1b0;
  }
  else {
    if (plVar5 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar8 + 0x68))(plVar8);
      fVar12 = *(float *)(lVar6 + 0x30);
      fVar14 = *(float *)(lVar6 + 0x34);
      fVar15 = *(float *)(lVar6 + 0x38);
      auVar11 = *(undefined1 (*) [16])(lVar6 + 0x20);
      lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5);
      fVar12 = *(float *)(lVar6 + 0x30) - fVar12;
      fVar14 = *(float *)(lVar6 + 0x34) - fVar14;
      fVar15 = *(float *)(lVar6 + 0x38) - fVar15;
      auVar17._0_4_ = fVar12 * fVar12 + fVar14 * fVar14;
      auVar17._4_4_ = fVar15 * fVar15 + 0.0;
      auVar17._8_4_ = fVar12 * fVar12 + fVar14 * fVar14;
      auVar17._12_4_ = fVar15 * fVar15 + 0.0;
      auVar17 = NEON_ext(auVar17,auVar17,4,1);
      auVar10._0_4_ = auVar17._0_4_ + auVar17._4_4_;
      auVar10._4_4_ = auVar17._8_4_ + auVar17._12_4_;
      auVar10._8_4_ = auVar17._0_4_ + auVar17._4_4_;
      auVar10._12_4_ = auVar17._8_4_ + auVar17._12_4_;
      if (*(char *)(param_1 + 0x78) == '\0') {
        fVar21 = *(float *)(param_1 + 0x70);
      }
      else {
        fVar21 = *(float *)(param_1 + 0x6c);
      }
      if (auVar10._0_4_ <= fVar21 * fVar21) {
        if (auVar10._0_4_ < 1.1920929e-07) {
          unaff_x22 = 0;
        }
        else {
          auVar17 = NEON_frsqrte(auVar10,4);
          auVar23._0_4_ = auVar10._0_4_ * auVar17._0_4_;
          auVar23._4_4_ = auVar10._4_4_ * auVar17._4_4_;
          auVar23._8_4_ = auVar10._8_4_ * auVar17._8_4_;
          auVar23._12_4_ = auVar10._12_4_ * auVar17._12_4_;
          auVar24 = NEON_frsqrts(auVar17,auVar23,4);
          auVar22._0_4_ = auVar17._0_4_ * auVar24._0_4_;
          auVar22._4_4_ = auVar17._4_4_ * auVar24._4_4_;
          auVar22._8_4_ = auVar17._8_4_ * auVar24._8_4_;
          auVar22._12_4_ = auVar17._12_4_ * auVar24._12_4_;
          auVar25._0_4_ = auVar10._0_4_ * auVar22._0_4_;
          auVar25._4_4_ = auVar10._4_4_ * auVar22._4_4_;
          auVar25._8_4_ = auVar10._8_4_ * auVar22._8_4_;
          auVar25._12_4_ = auVar10._12_4_ * auVar22._12_4_;
          iVar16 = -(uint)(auVar10._0_4_ == 0.0);
          iVar18 = -(uint)(auVar10._4_4_ == 0.0);
          iVar19 = -(uint)(auVar10._8_4_ == 0.0);
          iVar20 = -(uint)(auVar10._12_4_ == 0.0);
          auVar17 = NEON_frsqrts(auVar22,auVar25,4);
          fVar12 = fVar12 * auVar22._0_4_ * auVar17._0_4_;
          fVar14 = fVar14 * auVar22._4_4_ * auVar17._4_4_;
          fVar15 = fVar15 * auVar22._8_4_ * auVar17._8_4_;
          fVar21 = auVar22._12_4_ * auVar17._12_4_ * 0.0;
          fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                   CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                            ~(byte)((uint)iVar16 >> 0x10),
                                            CONCAT11((byte)((uint)fVar12 >> 8) &
                                                     ~(byte)((uint)iVar16 >> 8),
                                                     SUB41(fVar12,0) & ~(byte)iVar16)));
          auVar13._0_8_ =
               CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                        CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                 CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                          CONCAT14(SUB41(fVar14,0) & ~(byte)iVar18,fVar12))));
          auVar13[8] = SUB41(fVar15,0) & ~(byte)iVar19;
          auVar13[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar19 >> 8);
          auVar13[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
          auVar13[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
          auVar24[0xc] = SUB41(fVar21,0) & ~(byte)iVar20;
          auVar24._0_12_ = auVar13;
          auVar24[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar20 >> 8);
          auVar24[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
          auVar24[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
          fVar12 = auVar11._0_4_ * fVar12;
          fVar14 = auVar11._4_4_ * (float)((ulong)auVar13._0_8_ >> 0x20);
          fVar15 = auVar11._8_4_ * auVar13._8_4_;
          fVar21 = auVar24._12_4_ * 0.0;
          auVar11._0_4_ = fVar12 + fVar14;
          auVar11._4_4_ = fVar15 + fVar21;
          auVar11._8_4_ = fVar12 + fVar14;
          auVar11._12_4_ = fVar15 + fVar21;
          NEON_ext(auVar11,auVar11,4,1);
          fVar12 = (float)FUN_00d7a4e0();
          unaff_x22 = (ulong)(uint)fVar12;
          if (*(float *)(param_1 + 0x74) < fVar12) {
            uVar9 = 0;
            goto LAB_00d7a188;
          }
        }
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
      }
      goto LAB_00d7a188;
    }
    uVar9 = 0;
  }
  lVar6 = plVar8[6];
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar7 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar7 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else if (sVar7 == 0) {
LAB_00d7a2e0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00d7a1b0:
  return uVar9 | unaff_x22 << 0x20;
}


