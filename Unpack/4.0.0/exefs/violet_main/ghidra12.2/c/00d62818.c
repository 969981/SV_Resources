/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d62818; name: FUN_00d62818
 */


uint FUN_00d62818(long param_1)

{
  long lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  int iVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long *local_48;
  
  lVar1 = param_1 + 0x30;
  uVar7 = FUN_00d6803c(lVar1);
  if ((uVar7 & 1) == 0) goto LAB_00d62848;
  FUN_00d6ea1c(param_1 + 0x370,lVar1);
  lVar8 = *(long *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x4ac) = 0;
  *(undefined1 *)(param_1 + 0x4ae) = 0;
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d62b70;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d62b70:
        bVar6 = false;
      }
      if (bVar6) {
        plVar10 = (long *)0x0;
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        }
        break;
      }
      plVar10 = (long *)0x0;
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  lVar8 = (**(code **)(*plVar10 + 0x68))(plVar10);
  uVar18 = *(undefined8 *)(lVar8 + 0x28);
  uVar15 = *(undefined8 *)(lVar8 + 0x20);
  uVar24 = *(ulong *)(lVar8 + 0x38);
  uVar21 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 *)(param_1 + 0x4d0) = 0x100000000;
  uVar14 = 0;
  if (*(char *)(param_1 + 0x14f) != '\0') {
    uVar14 = 0x22;
  }
  fVar17 = (float)uVar18;
  *(undefined4 *)(param_1 + 0x4e0) = uVar14;
  *(ulong *)(param_1 + 0x4b8) = uVar24 & 0xffffffff;
  *(undefined8 *)(param_1 + 0x4b0) = uVar21;
  fVar13 = (float)uVar15;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  auVar26._0_4_ = fVar13 * fVar13 + fVar16 * fVar16;
  auVar26._4_4_ = fVar17 * fVar17 + 0.0;
  auVar26._8_4_ = fVar13 * fVar13 + fVar16 * fVar16;
  auVar26._12_4_ = fVar17 * fVar17 + 0.0;
  auVar26 = NEON_ext(auVar26,auVar26,4,1);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  auVar12._0_4_ = auVar26._0_4_ + auVar26._4_4_;
  auVar12._4_4_ = auVar26._8_4_ + auVar26._12_4_;
  auVar12._8_4_ = auVar26._0_4_ + auVar26._4_4_;
  auVar12._12_4_ = auVar26._8_4_ + auVar26._12_4_;
  auVar26 = NEON_frsqrte(auVar12,4);
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  iVar20 = -(uint)(auVar12._0_4_ == 0.0);
  iVar22 = -(uint)(auVar12._4_4_ == 0.0);
  iVar23 = -(uint)(auVar12._8_4_ == 0.0);
  iVar25 = -(uint)(auVar12._12_4_ == 0.0);
  auVar28._0_4_ = auVar12._0_4_ * auVar26._0_4_;
  auVar28._4_4_ = auVar12._4_4_ * auVar26._4_4_;
  auVar28._8_4_ = auVar12._8_4_ * auVar26._8_4_;
  auVar28._12_4_ = auVar12._12_4_ * auVar26._12_4_;
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x4b0);
  auVar28 = NEON_frsqrts(auVar26,auVar28,4);
  auVar27._0_4_ = auVar26._0_4_ * auVar28._0_4_;
  auVar27._4_4_ = auVar26._4_4_ * auVar28._4_4_;
  auVar27._8_4_ = auVar26._8_4_ * auVar28._8_4_;
  auVar27._12_4_ = auVar26._12_4_ * auVar28._12_4_;
  auVar29._0_4_ = auVar12._0_4_ * auVar27._0_4_;
  auVar29._4_4_ = auVar12._4_4_ * auVar27._4_4_;
  auVar29._8_4_ = auVar12._8_4_ * auVar27._8_4_;
  auVar29._12_4_ = auVar12._12_4_ * auVar27._12_4_;
  auVar26 = NEON_frsqrts(auVar27,auVar29,4);
  fVar13 = fVar13 * auVar27._0_4_ * auVar26._0_4_;
  fVar16 = fVar16 * auVar27._4_4_ * auVar26._4_4_;
  fVar17 = fVar17 * auVar27._8_4_ * auVar26._8_4_;
  fVar19 = auVar27._12_4_ * auVar26._12_4_ * 0.0;
  *(ulong *)(param_1 + 0x4c8) =
       CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                CONCAT16((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                         CONCAT15((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                  CONCAT14(SUB41(fVar19,0) & ~(byte)iVar25,
                                           CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                    ~(byte)((uint)iVar23 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                             ~(byte)((uint)iVar23 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar17 >> 8) &
                                                                      ~(byte)((uint)iVar23 >> 8),
                                                                      SUB41(fVar17,0) &
                                                                      ~(byte)iVar23)))))));
  *(ulong *)(param_1 + 0x4c0) =
       CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                         CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                  CONCAT14(SUB41(fVar16,0) & ~(byte)iVar22,
                                           CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                    ~(byte)((uint)iVar20 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                             ~(byte)((uint)iVar20 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar13 >> 8) &
                                                                      ~(byte)((uint)iVar20 >> 8),
                                                                      SUB41(fVar13,0) &
                                                                      ~(byte)iVar20)))))));
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined2 *)(param_1 + 0x544) = 0;
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x548) = 0xffffffff;
  lVar8 = *(long *)(param_1 + 0x50);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
LAB_00d62aa0:
    sVar4 = *psVar2;
    if (sVar4 == sVar9) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00d62ac4;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d62ac4:
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x00d62acc;
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + -0x28);
      FUN_00e9afa8(plVar11,1);
      lVar8 = *(long *)(lVar8 + 8);
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_00d62b14;
    }
  }
LAB_00d6294c:
  FUN_00d6d590(&local_48,lVar1);
  uVar14 = DAT_04544b5c;
  if (local_48 != (long *)0x0) {
    *(undefined4 *)(local_48 + 0x67) = DAT_04544b5c;
    if (*(int *)((long)local_48 + 0x74) == 2) {
      *(undefined4 *)(local_48[0x17] + 0x140) = uVar14;
      uVar14 = 0x3f800000;
      if (*(float *)(local_48 + 0x67) <= 1.1920929e-07) {
        uVar14 = 0;
      }
      *(undefined4 *)(local_48[0x17] + 0x15c) = uVar14;
      if (*(int *)((long)local_48 + 0x74) != 2) goto LAB_00d62a50;
      uVar3 = *(uint *)(local_48 + 0x4e);
      if ((uVar3 == 3) || ((uVar3 < 8 && ((1 << (ulong)(uVar3 & 0x1f) & 0xc2U) != 0)))) {
        *(undefined1 *)(local_48 + 0x7a) = 1;
      }
      uVar14 = *(undefined4 *)(param_1 + 0x11c);
      *(undefined4 *)((long)local_48 + 0x33c) = uVar14;
      *(undefined4 *)(local_48[0x17] + 0x144) = uVar14;
    }
    else {
LAB_00d62a50:
      *(undefined4 *)((long)local_48 + 0x33c) = *(undefined4 *)(param_1 + 0x11c);
    }
    lVar8 = local_48[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar9 == 0) {
LAB_00d62b14:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00d6c288(*(undefined8 *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4c0),param_1 + 0x2e0,
               lVar1,*(undefined4 *)(param_1 + 0x4d4),*(undefined4 *)(param_1 + 0x4d8),
               *(undefined4 *)(param_1 + 0x4dc),*(undefined4 *)(param_1 + 0x4d0),
               *(undefined4 *)(param_1 + 0x4e0));
  FUN_00d6d310(param_1 + 0x170,lVar1,param_1 + 0x2e0);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))(plVar10);
  }
LAB_00d62848:
  return uVar7 & 1;
code_r0x00d62acc:
  sVar9 = sVar4;
  if (sVar4 == 0) goto LAB_00d6294c;
  goto LAB_00d62aa0;
}


