/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb4960; name: FUN_00cb4960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cb4960(undefined4 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar14;
  int iVar15;
  undefined1 auVar12 [16];
  int iVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long *local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  fVar8 = (float)param_1[8];
  if (fVar8 <= 0.001) {
    fVar8 = 0.001;
  }
  fVar9 = (float)param_1[9];
  if ((float)param_1[9] <= 0.001) {
    fVar9 = 0.001;
  }
  fVar20 = (float)*(undefined8 *)(param_1 + 10);
  if ((float)*(undefined8 *)(param_1 + 10) <= 0.001) {
    fVar20 = 0.001;
  }
  uStack_30 = CONCAT44(fVar9 * 0.5,fVar8 * 0.5);
  local_90 = &local_80;
  uStack_38 = CONCAT44(0x80000000,-(fVar20 * 0.5));
  local_40 = CONCAT44(-(fVar9 * 0.5),-(fVar8 * 0.5));
  uStack_28 = (ulong)(uint)(fVar20 * 0.5);
  fVar20 = (float)*(undefined8 *)(param_1 + 6);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_1 + 4);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  auVar12._0_4_ = fVar8 * fVar8 + fVar9 * fVar9;
  auVar12._4_4_ = fVar20 * fVar20 + fVar10 * fVar10;
  auVar12._8_4_ = fVar8 * fVar8 + fVar9 * fVar9;
  auVar12._12_4_ = fVar20 * fVar20 + fVar10 * fVar10;
  auVar12 = NEON_ext(auVar12,auVar12,4,1);
  auVar7._0_4_ = auVar12._0_4_ + auVar12._4_4_;
  auVar7._4_4_ = auVar12._8_4_ + auVar12._12_4_;
  auVar7._8_4_ = auVar12._0_4_ + auVar12._4_4_;
  auVar7._12_4_ = auVar12._8_4_ + auVar12._12_4_;
  if (((int)SQRT(auVar7._0_4_) + 0x800000U & 0x7f000000) == 0) {
    auVar23._8_8_ = _UNK_03cabe58;
    auVar23._0_8_ = _DAT_03cabe50;
  }
  else {
    auVar12 = NEON_frsqrte(auVar7,4);
    auVar22._0_4_ = auVar7._0_4_ * auVar12._0_4_;
    auVar22._4_4_ = auVar7._4_4_ * auVar12._4_4_;
    auVar22._8_4_ = auVar7._8_4_ * auVar12._8_4_;
    auVar22._12_4_ = auVar7._12_4_ * auVar12._12_4_;
    auVar23 = NEON_frsqrts(auVar12,auVar22,4);
    auVar17._0_4_ = auVar12._0_4_ * auVar23._0_4_;
    auVar17._4_4_ = auVar12._4_4_ * auVar23._4_4_;
    auVar17._8_4_ = auVar12._8_4_ * auVar23._8_4_;
    auVar17._12_4_ = auVar12._12_4_ * auVar23._12_4_;
    auVar24._0_4_ = auVar7._0_4_ * auVar17._0_4_;
    auVar24._4_4_ = auVar7._4_4_ * auVar17._4_4_;
    auVar24._8_4_ = auVar7._8_4_ * auVar17._8_4_;
    auVar24._12_4_ = auVar7._12_4_ * auVar17._12_4_;
    iVar11 = -(uint)(auVar7._0_4_ == 0.0);
    iVar14 = -(uint)(auVar7._4_4_ == 0.0);
    iVar15 = -(uint)(auVar7._8_4_ == 0.0);
    iVar16 = -(uint)(auVar7._12_4_ == 0.0);
    auVar13[0] = ~(byte)iVar11;
    auVar13[1] = ~(byte)((uint)iVar11 >> 8);
    auVar13[2] = ~(byte)((uint)iVar11 >> 0x10);
    auVar13[3] = ~(byte)((uint)iVar11 >> 0x18);
    auVar13[4] = ~(byte)iVar14;
    auVar13[5] = ~(byte)((uint)iVar14 >> 8);
    auVar13[6] = ~(byte)((uint)iVar14 >> 0x10);
    auVar13[7] = ~(byte)((uint)iVar14 >> 0x18);
    auVar13[8] = ~(byte)iVar15;
    auVar13[9] = ~(byte)((uint)iVar15 >> 8);
    auVar13[10] = ~(byte)((uint)iVar15 >> 0x10);
    auVar13[0xb] = ~(byte)((uint)iVar15 >> 0x18);
    auVar13[0xc] = ~(byte)iVar16;
    auVar13[0xd] = ~(byte)((uint)iVar16 >> 8);
    auVar13[0xe] = ~(byte)((uint)iVar16 >> 0x10);
    auVar13[0xf] = ~(byte)((uint)iVar16 >> 0x18);
    auVar12 = NEON_frsqrts(auVar17,auVar24,4);
    auVar18._8_8_ = _UNK_03cabe58;
    auVar18._0_8_ = _DAT_03cabe50;
    auVar4._4_4_ = fVar9 * auVar17._4_4_ * auVar12._4_4_;
    auVar4._0_4_ = fVar8 * auVar17._0_4_ * auVar12._0_4_;
    auVar4._8_4_ = fVar20 * auVar17._8_4_ * auVar12._8_4_;
    auVar4._12_4_ = fVar10 * auVar17._12_4_ * auVar12._12_4_;
    auVar23 = auVar18 ^ (auVar18 ^ auVar4) & auVar13;
  }
  fVar8 = auVar23._0_4_;
  fVar9 = auVar23._4_4_;
  fVar25 = fVar9 + fVar9;
  fVar20 = auVar23._8_4_;
  fVar26 = fVar20 + fVar20;
  fVar10 = auVar23._12_4_;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  fVar27 = (fVar8 + fVar8) * fVar8;
  fVar28 = (fVar8 + fVar8) * fVar10;
  local_d0 = 0x3c23d70a;
  fVar20 = 1.0 - fVar20 * fVar26;
  fVar29 = fVar26 * fVar9 - fVar28;
  local_c8 = 0xbf8000003f800000;
  uStack_48 = (ulong)(uint)param_1[2];
  auVar19._0_8_ = CONCAT44(fVar25 * fVar8 + fVar26 * fVar10,fVar20 - fVar25 * fVar9);
  auVar19._8_4_ = fVar26 * fVar8 - fVar25 * fVar10;
  local_a8 = 1;
  uStack_a0 = 0x3fc0000000000002;
  local_c0 = 0x101;
  fVar21 = fVar26 * fVar8 + fVar25 * fVar10;
  auVar19._12_4_ = fVar29;
  uStack_68 = CONCAT44(fVar21,fVar26 * fVar9 + fVar28);
  local_cc = 1;
  local_60 = CONCAT44(fVar29,fVar21);
  local_98 = 0xc47a0000;
  uStack_78 = auVar19._8_8_;
  uStack_70 = CONCAT44(fVar20 - fVar27,fVar25 * fVar8 - fVar26 * fVar10);
  uStack_58 = (ulong)(uint)((1.0 - fVar27) - fVar25 * fVar9);
  local_88 = 0xfc;
  local_82 = 0;
  local_b8 = PTR_DAT_047ddc10 + 0x10;
  uStack_b0 = 0xffffffff;
  local_84 = 0x100;
  local_80 = auVar19._0_8_;
  FUN_00cb4bd8(&local_d8,0x3c75c28f,&local_40,&local_d0);
  plVar1 = local_d8;
  local_d8 = (long *)0x0;
  plVar5 = (long *)*param_2;
  *param_2 = (long)plVar1;
  if (plVar5 != (long *)0x0) {
    if (plVar5[1] != 0) {
      plVar1 = plVar5 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    if ((local_d8 != (long *)0x0) && (local_d8[1] != 0)) {
      plVar1 = local_d8 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_d8 + 0x18))();
      }
    }
  }
  return;
}


