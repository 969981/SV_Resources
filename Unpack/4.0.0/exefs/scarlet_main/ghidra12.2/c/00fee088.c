/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fee088; name: FUN_00fee088
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00fee088(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  float fVar20;
  undefined1 auVar19 [16];
  int iVar21;
  int iVar23;
  int iVar24;
  undefined1 auVar22 [16];
  int iVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  long *local_38;
  
  lVar11 = *(long *)(param_1 + 0x50);
  if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar12 = *(short *)(lVar11 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00fee0fc;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00fee0fc:
      bVar4 = false;
    }
    if (bVar4) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        return 0;
      }
      FUN_00d6d590(&local_38);
      uVar6 = _UNK_03cabe68;
      uVar5 = _DAT_03cabe60;
      if (local_38 == (long *)0x0) {
        uVar14 = 0;
        goto LAB_00fee278;
      }
      iVar8 = 0;
      if (local_38[0x17] != 0) {
        iVar8 = *(int *)(local_38[0x17] + 0x20);
      }
      if (iVar8 < 1) goto LAB_00fee2cc;
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      iVar13 = 0;
      uVar9 = (ulong)(*(float *)((long)local_38 + 0x334) *
                     (fVar16 / *(float *)PTR_FloatDegree180_047d2390));
      fVar26 = *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar9 >> 0x18 & 0xff) * 0x10) + 8
                         );
      fVar16 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar9 >> 0x18 & 0xff) * 0x10);
      break;
    }
    sVar12 = sVar2;
    if (sVar2 == 0) {
      return 0;
    }
  } while( true );
LAB_00fee1b4:
  local_80[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uVar7 = FUN_00f314bc(local_38,iVar13,local_80);
  if ((uVar7 & 1) != 0) {
    auVar22._0_4_ = (float)local_60 * (float)local_60 + local_60._4_4_ * local_60._4_4_;
    auVar22._4_4_ = (float)uStack_58 * (float)uStack_58 + uStack_58._4_4_ * uStack_58._4_4_;
    auVar22._8_4_ = (float)local_60 * (float)local_60 + local_60._4_4_ * local_60._4_4_;
    auVar22._12_4_ = (float)uStack_58 * (float)uStack_58 + uStack_58._4_4_ * uStack_58._4_4_;
    auVar22 = NEON_ext(auVar22,auVar22,4,1);
    auVar15._0_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar15._4_4_ = auVar22._8_4_ + auVar22._12_4_;
    auVar15._8_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar15._12_4_ = auVar22._8_4_ + auVar22._12_4_;
    auVar22 = NEON_frsqrte(auVar15,4);
    auVar28._0_4_ = auVar15._0_4_ * auVar22._0_4_;
    auVar28._4_4_ = auVar15._4_4_ * auVar22._4_4_;
    auVar28._8_4_ = auVar15._8_4_ * auVar22._8_4_;
    auVar28._12_4_ = auVar15._12_4_ * auVar22._12_4_;
    auVar29 = NEON_frsqrts(auVar22,auVar28,4);
    auVar27._0_4_ = auVar22._0_4_ * auVar29._0_4_;
    auVar27._4_4_ = auVar22._4_4_ * auVar29._4_4_;
    auVar27._8_4_ = auVar22._8_4_ * auVar29._8_4_;
    auVar27._12_4_ = auVar22._12_4_ * auVar29._12_4_;
    auVar30._0_4_ = auVar15._0_4_ * auVar27._0_4_;
    auVar30._4_4_ = auVar15._4_4_ * auVar27._4_4_;
    auVar30._8_4_ = auVar15._8_4_ * auVar27._8_4_;
    auVar30._12_4_ = auVar15._12_4_ * auVar27._12_4_;
    iVar21 = -(uint)(auVar15._0_4_ == 0.0);
    iVar23 = -(uint)(auVar15._4_4_ == 0.0);
    iVar24 = -(uint)(auVar15._8_4_ == 0.0);
    iVar25 = -(uint)(auVar15._12_4_ == 0.0);
    auVar22 = NEON_frsqrts(auVar27,auVar30,4);
    local_90 = (float)uVar5;
    fStack_8c = (float)((ulong)uVar5 >> 0x20);
    fStack_88 = (float)uVar6;
    fStack_84 = (float)((ulong)uVar6 >> 0x20);
    local_90 = (float)local_60 * auVar27._0_4_ * auVar22._0_4_ * local_90;
    fStack_8c = local_60._4_4_ * auVar27._4_4_ * auVar22._4_4_ * fStack_8c;
    fStack_88 = (float)uStack_58 * auVar27._8_4_ * auVar22._8_4_ * fStack_88;
    fStack_84 = uStack_58._4_4_ * auVar27._12_4_ * auVar22._12_4_ * fStack_84;
    fVar17 = (float)CONCAT13((byte)((uint)local_90 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                             CONCAT12((byte)((uint)local_90 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10)
                                      ,CONCAT11((byte)((uint)local_90 >> 8) &
                                                ~(byte)((uint)iVar21 >> 8),
                                                SUB41(local_90,0) & ~(byte)iVar21)));
    auVar18._0_8_ =
         CONCAT17((byte)((uint)fStack_8c >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                  CONCAT16((byte)((uint)fStack_8c >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                           CONCAT15((byte)((uint)fStack_8c >> 8) & ~(byte)((uint)iVar23 >> 8),
                                    CONCAT14(SUB41(fStack_8c,0) & ~(byte)iVar23,fVar17))));
    auVar18[8] = SUB41(fStack_88,0) & ~(byte)iVar24;
    auVar18[9] = (byte)((uint)fStack_88 >> 8) & ~(byte)((uint)iVar24 >> 8);
    auVar18[10] = (byte)((uint)fStack_88 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
    auVar18[0xb] = (byte)((uint)fStack_88 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
    auVar19[0xc] = SUB41(fStack_84,0) & ~(byte)iVar25;
    auVar19._0_12_ = auVar18;
    auVar19[0xd] = (byte)((uint)fStack_84 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar19[0xe] = (byte)((uint)fStack_84 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar19[0xf] = (byte)((uint)fStack_84 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    fVar20 = (float)((ulong)auVar18._0_8_ >> 0x20);
    auVar29._0_4_ = fVar17 + fVar20;
    auVar29._4_4_ = auVar18._8_4_ + auVar19._12_4_;
    auVar29._8_4_ = fVar17 + fVar20;
    auVar29._12_4_ = auVar18._8_4_ + auVar19._12_4_;
    auVar22 = NEON_ext(auVar29,auVar29,4,1);
    if (fVar16 + fVar26 * (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08 <=
        auVar22._0_4_ + auVar22._4_4_) {
      uVar14 = 1;
      goto LAB_00fee24c;
    }
  }
  if (iVar8 + -1 == iVar13) goto LAB_00fee2cc;
  iVar13 = iVar13 + 1;
  goto LAB_00fee1b4;
LAB_00fee2cc:
  uVar14 = 0;
LAB_00fee24c:
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_00fee2a4;
  }
LAB_00fee278:
  lVar10 = *(long *)(lVar11 + 0x70);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))();
  }
  else if (sVar12 == 0) {
LAB_00fee2a4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return uVar14;
}


