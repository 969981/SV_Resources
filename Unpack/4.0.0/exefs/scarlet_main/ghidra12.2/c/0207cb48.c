/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0207cb48; name: FUN_0207cb48
 */


void FUN_0207cb48(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar15;
  int iVar16;
  undefined1 auVar14 [16];
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (*(char *)(param_3 + 0x40) != '\0') {
    lVar10 = *(long *)(param_3 + 0x78);
    lVar7 = *(long *)(lVar10 + 0x30);
    fVar5 = param_1._0_4_;
    if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
      plVar9 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0207cc80;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0207cc80:
          bVar4 = false;
        }
        if (bVar4) {
          plVar9 = (long *)0x0;
          if (*(long *)(lVar7 + 0x10) != 0) {
            plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
          }
          break;
        }
        plVar9 = (long *)0x0;
        sVar8 = sVar2;
      } while (sVar2 != 0);
    }
    lVar7 = (**(code **)(*plVar9 + 0x68))(plVar9);
    fVar11 = param_1._8_4_;
    fVar12 = param_1._12_4_;
    auVar14._0_4_ = fVar5 * fVar5 + 0.0;
    auVar14._4_4_ = fVar11 * fVar11 + fVar12 * fVar12;
    auVar14._8_4_ = fVar5 * fVar5 + 0.0;
    auVar14._12_4_ = fVar11 * fVar11 + fVar12 * fVar12;
    auVar14 = NEON_ext(auVar14,auVar14,4,1);
    auVar21._0_4_ = auVar14._0_4_ + auVar14._4_4_;
    auVar21._4_4_ = auVar14._8_4_ + auVar14._12_4_;
    auVar21._8_4_ = auVar14._0_4_ + auVar14._4_4_;
    auVar21._12_4_ = auVar14._8_4_ + auVar14._12_4_;
    auVar14 = NEON_frsqrte(auVar21,4);
    auVar19._0_4_ = auVar21._0_4_ * auVar14._0_4_;
    auVar19._4_4_ = auVar21._4_4_ * auVar14._4_4_;
    auVar19._8_4_ = auVar21._8_4_ * auVar14._8_4_;
    auVar19._12_4_ = auVar21._12_4_ * auVar14._12_4_;
    auVar19 = NEON_frsqrts(auVar14,auVar19,4);
    auVar18._0_4_ = auVar14._0_4_ * auVar19._0_4_;
    auVar18._4_4_ = auVar14._4_4_ * auVar19._4_4_;
    auVar18._8_4_ = auVar14._8_4_ * auVar19._8_4_;
    auVar18._12_4_ = auVar14._12_4_ * auVar19._12_4_;
    auVar20._0_4_ = auVar21._0_4_ * auVar18._0_4_;
    auVar20._4_4_ = auVar21._4_4_ * auVar18._4_4_;
    auVar20._8_4_ = auVar21._8_4_ * auVar18._8_4_;
    auVar20._12_4_ = auVar21._12_4_ * auVar18._12_4_;
    iVar13 = -(uint)(auVar21._0_4_ == 0.0);
    iVar15 = -(uint)(auVar21._4_4_ == 0.0);
    iVar16 = -(uint)(auVar21._8_4_ == 0.0);
    iVar17 = -(uint)(auVar21._12_4_ == 0.0);
    auVar21 = NEON_frsqrts(auVar18,auVar20,4);
    auVar14 = *(undefined1 (*) [16])(lVar7 + 0x30);
    *(undefined2 *)(lVar10 + 0x4ac) = 1;
    *(undefined8 *)(lVar10 + 0x4d8) = 0x100000000;
    *(undefined8 *)(lVar10 + 0x4d0) = 0x100000000;
    fVar5 = fVar5 * auVar18._0_4_ * auVar21._0_4_;
    fVar6 = auVar18._4_4_ * auVar21._4_4_ * 0.0;
    fVar11 = fVar11 * auVar18._8_4_ * auVar21._8_4_;
    fVar12 = fVar12 * auVar18._12_4_ * auVar21._12_4_;
    *(undefined8 *)(lVar10 + 0x4e0) = 0;
    *(undefined4 *)(lVar10 + 0x510) = param_2;
    *(ulong *)(lVar10 + 0x4b8) = (ulong)auVar14._8_4_;
    *(long *)(lVar10 + 0x4b0) = auVar14._0_8_;
    *(ulong *)(lVar10 + 0x4c8) =
         CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                  CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                           CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                    CONCAT14(SUB41(fVar12,0) & ~(byte)iVar17,
                                             CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                      ~(byte)((uint)iVar16 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                                               ~(byte)((uint)iVar16 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar11 >> 8) &
                                                                        ~(byte)((uint)iVar16 >> 8),
                                                                        SUB41(fVar11,0) &
                                                                        ~(byte)iVar16)))))));
    *(ulong *)(lVar10 + 0x4c0) =
         CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                  CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                           CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                    CONCAT14(SUB41(fVar6,0) & ~(byte)iVar15,
                                             CONCAT13((byte)((uint)fVar5 >> 0x18) &
                                                      ~(byte)((uint)iVar13 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar5 >> 0x10) &
                                                               ~(byte)((uint)iVar13 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar5 >> 8) &
                                                                        ~(byte)((uint)iVar13 >> 8),
                                                                        SUB41(fVar5,0) &
                                                                        ~(byte)iVar13)))))));
    *(undefined4 *)(lVar10 + 0x540) = 0;
    if (*(char *)(lVar10 + 0x14f) != '\0') {
      *(undefined4 *)(lVar10 + 0x4e0) = 0x22;
    }
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0207cc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x60))(plVar9);
      return;
    }
  }
  return;
}


