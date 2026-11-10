/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a97130; name: FUN_00a97130
 */


void FUN_00a97130(undefined1 param_1 [16],undefined4 param_2,long param_3)

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
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar14;
  int iVar15;
  undefined1 auVar13 [16];
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar7 = *(long *)(param_3 + 0x30);
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
        if (cVar3 != '\0') goto LAB_00a97260;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a97260:
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
  fVar10 = param_1._8_4_;
  fVar11 = param_1._12_4_;
  auVar13._0_4_ = fVar5 * fVar5 + 0.0;
  auVar13._4_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar13._8_4_ = fVar5 * fVar5 + 0.0;
  auVar13._12_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar13 = NEON_ext(auVar13,auVar13,4,1);
  auVar20._0_4_ = auVar13._0_4_ + auVar13._4_4_;
  auVar20._4_4_ = auVar13._8_4_ + auVar13._12_4_;
  auVar20._8_4_ = auVar13._0_4_ + auVar13._4_4_;
  auVar20._12_4_ = auVar13._8_4_ + auVar13._12_4_;
  auVar13 = NEON_frsqrte(auVar20,4);
  auVar18._0_4_ = auVar20._0_4_ * auVar13._0_4_;
  auVar18._4_4_ = auVar20._4_4_ * auVar13._4_4_;
  auVar18._8_4_ = auVar20._8_4_ * auVar13._8_4_;
  auVar18._12_4_ = auVar20._12_4_ * auVar13._12_4_;
  auVar18 = NEON_frsqrts(auVar13,auVar18,4);
  auVar17._0_4_ = auVar13._0_4_ * auVar18._0_4_;
  auVar17._4_4_ = auVar13._4_4_ * auVar18._4_4_;
  auVar17._8_4_ = auVar13._8_4_ * auVar18._8_4_;
  auVar17._12_4_ = auVar13._12_4_ * auVar18._12_4_;
  auVar19._0_4_ = auVar20._0_4_ * auVar17._0_4_;
  auVar19._4_4_ = auVar20._4_4_ * auVar17._4_4_;
  auVar19._8_4_ = auVar20._8_4_ * auVar17._8_4_;
  auVar19._12_4_ = auVar20._12_4_ * auVar17._12_4_;
  iVar12 = -(uint)(auVar20._0_4_ == 0.0);
  iVar14 = -(uint)(auVar20._4_4_ == 0.0);
  iVar15 = -(uint)(auVar20._8_4_ == 0.0);
  iVar16 = -(uint)(auVar20._12_4_ == 0.0);
  auVar20 = NEON_frsqrts(auVar17,auVar19,4);
  auVar13 = *(undefined1 (*) [16])(lVar7 + 0x30);
  *(undefined2 *)(param_3 + 0x4ac) = 1;
  *(undefined8 *)(param_3 + 0x4d8) = 0x100000000;
  *(undefined8 *)(param_3 + 0x4d0) = 0x100000000;
  fVar5 = fVar5 * auVar17._0_4_ * auVar20._0_4_;
  fVar6 = auVar17._4_4_ * auVar20._4_4_ * 0.0;
  fVar10 = fVar10 * auVar17._8_4_ * auVar20._8_4_;
  fVar11 = fVar11 * auVar17._12_4_ * auVar20._12_4_;
  *(undefined8 *)(param_3 + 0x4e0) = 0;
  *(undefined4 *)(param_3 + 0x510) = param_2;
  *(ulong *)(param_3 + 0x4b8) = (ulong)auVar13._8_4_;
  *(long *)(param_3 + 0x4b0) = auVar13._0_8_;
  *(ulong *)(param_3 + 0x4c8) =
       CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                         CONCAT15((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                  CONCAT14(SUB41(fVar11,0) & ~(byte)iVar16,
                                           CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                                    ~(byte)((uint)iVar15 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                             ~(byte)((uint)iVar15 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar10 >> 8) &
                                                                      ~(byte)((uint)iVar15 >> 8),
                                                                      SUB41(fVar10,0) &
                                                                      ~(byte)iVar15)))))));
  *(ulong *)(param_3 + 0x4c0) =
       CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                         CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                  CONCAT14(SUB41(fVar6,0) & ~(byte)iVar14,
                                           CONCAT13((byte)((uint)fVar5 >> 0x18) &
                                                    ~(byte)((uint)iVar12 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar5 >> 0x10) &
                                                             ~(byte)((uint)iVar12 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar5 >> 8) &
                                                                      ~(byte)((uint)iVar12 >> 8),
                                                                      SUB41(fVar5,0) & ~(byte)iVar12
                                                                     )))))));
  *(undefined4 *)(param_3 + 0x540) = 0;
  if (*(char *)(param_3 + 0x14f) != '\0') {
    *(undefined4 *)(param_3 + 0x4e0) = 0x22;
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a97228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x60))(plVar9);
  return;
}


