/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116fc5c; name: FUN_0116fc5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0116fc5c(undefined1 (*param_1) [16],long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  float fVar24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar32;
  int iVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar26;
  float fVar33;
  int iVar34;
  int iVar36;
  undefined1 auVar31 [16];
  float fVar37;
  ulong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  undefined8 uVar57;
  undefined8 uVar59;
  float local_190;
  float fStack_18c;
  long *local_138;
  float local_130;
  undefined1 uStack_12c;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  
  puVar7 = PTR_PTR_047d1a50;
  auVar6 = *param_1;
  auVar27 = NEON_ext(auVar6,auVar6,8,1);
  uVar2 = *(uint *)(param_1[2] + 0xc);
  fVar15 = *(float *)param_1[2];
  fVar37 = *(float *)(param_1[2] + 8);
  fVar16 = *(float *)(param_1[2] + 4) + fVar37;
  uVar12 = uVar2 << 1 | 1;
  if ((int)uVar12 < 1) {
    lVar8 = 0;
    uVar12 = 0;
    uVar11 = 0x80000000;
  }
  else {
    lVar8 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar12 << 4);
    uVar11 = uVar12;
  }
  fVar49 = (float)_DAT_03cabe60 * fVar37;
  fVar54 = (float)((ulong)_DAT_03cabe60 >> 0x20);
  fVar50 = fVar54 * fVar37;
  fVar51 = (float)_UNK_03cabe68 * fVar37;
  fVar56 = (float)((ulong)_UNK_03cabe68 >> 0x20);
  fVar52 = fVar56 * fVar37;
  fVar53 = (float)_DAT_03cabe60 * fVar16;
  fVar54 = fVar54 * fVar16;
  fVar55 = (float)_UNK_03cabe68 * fVar16;
  fVar56 = fVar56 * fVar16;
  uVar57 = _DAT_03cabe60;
  uVar59 = _UNK_03cabe68;
  if (fVar37 < fVar16) {
    fVar16 = fVar53 - fVar49;
    fVar37 = fVar54 - fVar50;
    fVar24 = fVar55 - fVar51;
    fVar25 = fVar24 * fVar24 + fVar16 * fVar16 + fVar37 * fVar37;
    if (fVar25 == 0.0) {
      uVar57 = 0;
      uVar59 = 0;
    }
    else {
      fVar25 = SQRT(fVar25);
      fVar32 = SQRT(fVar24 * fVar24 + fVar16 * fVar16 + fVar37 * fVar37);
      uVar57 = CONCAT44(fVar37 / fVar32,fVar16 / fVar25);
      uVar59 = CONCAT44((fVar56 - fVar52) / fVar32,fVar24 / fVar25);
    }
  }
  auVar18._8_8_ = uVar59;
  auVar18._0_8_ = uVar57;
  auVar48._0_12_ = auVar18._0_12_;
  auVar48._12_4_ = 0;
  auVar28._8_8_ = _UNK_03caaa68;
  auVar28._0_8_ = _DAT_03caaa60;
  auVar39._8_8_ = _UNK_03cabbb8;
  auVar39._0_8_ = _DAT_03cabbb0;
  auVar29 = a64_TBL(ZEXT816(0),auVar48,auVar28);
  auVar18 = a64_TBL(ZEXT816(0),auVar48,auVar39);
  fVar32 = (float)uVar57;
  fVar58 = (float)((ulong)uVar57 >> 0x20);
  fVar37 = auVar18._0_4_;
  auVar45._0_4_ = fVar37 * fVar37;
  auVar45._4_4_ = auVar18._4_4_ * auVar18._4_4_;
  auVar45._8_4_ = auVar18._8_4_ * auVar18._8_4_;
  auVar45._12_4_ = auVar18._12_4_ * auVar18._12_4_;
  auVar48 = NEON_ext(auVar45,auVar45,8,1);
  fVar16 = auVar48._0_4_ + auVar48._4_4_;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = -auVar29._0_4_;
  auVar29._4_12_ = auVar18._4_12_;
  auVar29._0_4_ = -fVar37;
  uVar38 = CONCAT44(-(uint)(fVar32 * fVar32 + fVar58 * fVar58 <
                           auVar45._0_4_ + auVar45._4_4_ + fVar16),
                    -(uint)(fVar32 * fVar32 + fVar58 * fVar58 <
                           auVar45._0_4_ + auVar45._4_4_ + fVar16)) & 0x100000001;
  iVar26 = (int)uVar38;
  iVar34 = (int)(uVar38 >> 0x20);
  auVar40._0_4_ = (iVar26 << 0x1f) >> 0x1f;
  auVar40._4_4_ = (iVar34 << 0x1f) >> 0x1f;
  auVar40._8_4_ = (iVar26 << 0x1f) >> 0x1f;
  auVar40._12_4_ = (iVar34 << 0x1f) >> 0x1f;
  auVar29 = auVar29 ^ (auVar29 ^ auVar30) & ~auVar40;
  fVar16 = auVar29._0_4_;
  fVar37 = auVar29._4_4_;
  fVar24 = auVar29._8_4_;
  fVar25 = fVar16 * fVar16 + fVar37 * fVar37 + fVar24 * fVar24;
  if (fVar25 == 0.0) {
    fVar16 = 0.0;
    fVar37 = 0.0;
    fVar24 = 0.0;
    fVar33 = 0.0;
  }
  else {
    fVar25 = SQRT(fVar25);
    fVar33 = SQRT(fVar16 * fVar16 + fVar37 * fVar37 + fVar24 * fVar24);
    fVar16 = fVar16 / fVar25;
    fVar37 = fVar37 / fVar33;
    fVar24 = fVar24 / fVar25;
    fVar33 = auVar29._12_4_ / fVar33;
  }
  if (0 < (int)uVar2) {
    auVar41._0_4_ = fVar16 * fVar15;
    auVar41._4_4_ = fVar37 * fVar15;
    auVar41._8_4_ = fVar24 * fVar15;
    auVar41._12_4_ = fVar33 * fVar15;
    auVar18 = NEON_ext(auVar41,auVar41,4,1);
    uVar38 = 0;
    do {
      fVar15 = (1.0 / (float)(int)uVar2) * 6.2831855 * (float)(int)uVar38 * 0.5;
      auVar19._0_8_ = CONCAT44(fVar15,fVar15);
      auVar19._8_4_ = fVar15;
      auVar19._12_4_ = fVar15;
      uStack_98 = auVar19._8_8_;
      local_a0 = auVar19._0_8_;
      FUN_01170160(&local_a0,&local_130,&local_e0);
      local_190 = auVar18._0_4_;
      fStack_18c = auVar18._4_4_;
      auVar17._0_4_ = fVar32 * local_130;
      auVar17._4_4_ = fVar58 * local_130;
      auVar17._8_4_ = (float)uVar59 * local_130;
      auVar20._12_4_ = (float)((ulong)uVar59 >> 0x20) * local_130;
      auVar20._0_12_ = auVar17;
      auVar48 = NEON_ext(auVar20,auVar20,4,1);
      auVar21._12_4_ = local_e0._4_4_;
      auVar21._0_12_ = auVar17;
      auVar29 = NEON_ext(auVar21,auVar21,8,1);
      fVar33 = auVar29._4_4_ * auVar29._4_4_;
      fVar25 = fVar33 + -0.5;
      fVar33 = fVar33 + -0.5;
      auVar42._0_4_ = local_190 * auVar17._0_4_ - auVar41._0_4_ * auVar48._0_4_;
      auVar42._4_4_ = fStack_18c * auVar17._4_4_ - auVar41._4_4_ * auVar48._4_4_;
      auVar42._8_4_ = auVar41._0_4_ * auVar17._8_4_ - auVar41._8_4_ * auVar17._0_4_;
      auVar42._12_4_ = auVar41._4_4_ * local_e0._4_4_ - auVar41._12_4_ * auVar17._4_4_;
      fVar37 = auVar41._0_4_ * auVar17._0_4_ + auVar41._4_4_ * auVar17._4_4_ +
               auVar41._8_4_ * auVar17._8_4_;
      fVar24 = auVar41._0_4_ * auVar17._0_4_ + auVar41._4_4_ * auVar17._4_4_ +
               auVar41._8_4_ * auVar17._8_4_;
      auVar48 = NEON_ext(auVar42,auVar42,4,1);
      fVar15 = auVar41._0_4_ * fVar25 + auVar17._0_4_ * fVar37 + auVar48._0_4_ * local_e0._4_4_;
      fVar16 = auVar41._4_4_ * fVar33 + auVar17._4_4_ * fVar24 + auVar48._4_4_ * local_e0._4_4_;
      fVar37 = auVar41._8_4_ * fVar25 + auVar17._8_4_ * fVar37 + auVar42._0_4_ * local_e0._4_4_;
      fVar24 = auVar41._12_4_ * fVar33 + local_e0._4_4_ * fVar24 + local_e0._4_4_ * 0.0;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar37 = fVar37 + fVar37;
      fVar24 = fVar24 + fVar24;
      pfVar5 = (float *)(lVar8 + uVar38 * 0x10);
      pfVar5[2] = fVar51 + fVar37;
      pfVar5[3] = fVar52 + fVar24;
      *pfVar5 = fVar49 + fVar15;
      pfVar5[1] = fVar50 + fVar16;
      pfVar5 = (float *)(lVar8 + (ulong)uVar2 * 0x10 + uVar38 * 0x10);
      pfVar5[2] = fVar55 + fVar37;
      pfVar5[3] = fVar56 + fVar24;
      *pfVar5 = fVar53 + fVar15;
      pfVar5[1] = fVar54 + fVar16;
      uVar38 = uVar38 + 1;
    } while (uVar2 != uVar38);
  }
  lVar10 = lVar8 + (long)(int)uVar12 * 0x10;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined8 *)(lVar10 + -8) = 0;
  fVar15 = *(float *)param_1[1];
  fVar16 = *(float *)(param_1[1] + 4);
  fVar37 = *(float *)(param_1[1] + 8);
  fVar49 = *(float *)(param_1[1] + 0xc);
  auVar13._0_4_ = fVar15 * fVar15 + fVar16 * fVar16;
  auVar13._4_4_ = fVar37 * fVar37 + fVar49 * fVar49;
  auVar13._8_4_ = fVar15 * fVar15 + fVar16 * fVar16;
  auVar13._12_4_ = fVar37 * fVar37 + fVar49 * fVar49;
  auVar18 = NEON_ext(auVar13,auVar13,4,1);
  auVar14._0_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar14._4_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar14._8_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar14._12_4_ = auVar18._8_4_ + auVar18._12_4_;
  if (((int)SQRT(auVar14._0_4_) + 0x800000U & 0x7f000000) == 0) {
    auVar23._8_8_ = _UNK_03cabe58;
    auVar23._0_8_ = _DAT_03cabe50;
  }
  else {
    auVar18 = NEON_frsqrte(auVar14,4);
    auVar46._0_4_ = auVar14._0_4_ * auVar18._0_4_;
    auVar46._4_4_ = auVar14._4_4_ * auVar18._4_4_;
    auVar46._8_4_ = auVar14._8_4_ * auVar18._8_4_;
    auVar46._12_4_ = auVar14._12_4_ * auVar18._12_4_;
    auVar48 = NEON_frsqrts(auVar18,auVar46,4);
    auVar43._0_4_ = auVar18._0_4_ * auVar48._0_4_;
    auVar43._4_4_ = auVar18._4_4_ * auVar48._4_4_;
    auVar43._8_4_ = auVar18._8_4_ * auVar48._8_4_;
    auVar43._12_4_ = auVar18._12_4_ * auVar48._12_4_;
    auVar47._0_4_ = auVar14._0_4_ * auVar43._0_4_;
    auVar47._4_4_ = auVar14._4_4_ * auVar43._4_4_;
    auVar47._8_4_ = auVar14._8_4_ * auVar43._8_4_;
    auVar47._12_4_ = auVar14._12_4_ * auVar43._12_4_;
    iVar26 = -(uint)(auVar14._0_4_ == 0.0);
    iVar34 = -(uint)(auVar14._4_4_ == 0.0);
    iVar35 = -(uint)(auVar14._8_4_ == 0.0);
    iVar36 = -(uint)(auVar14._12_4_ == 0.0);
    auVar31[0] = ~(byte)iVar26;
    auVar31[1] = ~(byte)((uint)iVar26 >> 8);
    auVar31[2] = ~(byte)((uint)iVar26 >> 0x10);
    auVar31[3] = ~(byte)((uint)iVar26 >> 0x18);
    auVar31[4] = ~(byte)iVar34;
    auVar31[5] = ~(byte)((uint)iVar34 >> 8);
    auVar31[6] = ~(byte)((uint)iVar34 >> 0x10);
    auVar31[7] = ~(byte)((uint)iVar34 >> 0x18);
    auVar31[8] = ~(byte)iVar35;
    auVar31[9] = ~(byte)((uint)iVar35 >> 8);
    auVar31[10] = ~(byte)((uint)iVar35 >> 0x10);
    auVar31[0xb] = ~(byte)((uint)iVar35 >> 0x18);
    auVar31[0xc] = ~(byte)iVar36;
    auVar31[0xd] = ~(byte)((uint)iVar36 >> 8);
    auVar31[0xe] = ~(byte)((uint)iVar36 >> 0x10);
    auVar31[0xf] = ~(byte)((uint)iVar36 >> 0x18);
    auVar18 = NEON_frsqrts(auVar43,auVar47,4);
    auVar22._0_4_ = fVar15 * auVar43._0_4_ * auVar18._0_4_;
    auVar22._4_4_ = fVar16 * auVar43._4_4_ * auVar18._4_4_;
    auVar22._8_4_ = fVar37 * auVar43._8_4_ * auVar18._8_4_;
    auVar22._12_4_ = fVar49 * auVar43._12_4_ * auVar18._12_4_;
    auVar44._8_8_ = _UNK_03cabe58;
    auVar44._0_8_ = _DAT_03cabe50;
    auVar23 = auVar22 ^ (auVar22 ^ auVar44) & ~auVar31;
  }
  fVar15 = auVar23._0_4_;
  fVar49 = auVar23._4_4_;
  fVar51 = fVar49 + fVar49;
  fVar37 = auVar23._8_4_;
  fVar52 = fVar37 + fVar37;
  fVar50 = auVar23._12_4_;
  fVar54 = (fVar15 + fVar15) * fVar50;
  fVar16 = (fVar15 + fVar15) * fVar15;
  fVar53 = 1.0 - fVar37 * fVar52;
  uStack_128 = 0xbf8000003f800000;
  fVar55 = fVar52 * fVar15 + fVar51 * fVar50;
  local_d0 = CONCAT44(fVar53 - fVar16,fVar51 * fVar15 - fVar52 * fVar50);
  fVar37 = fVar52 * fVar49 - fVar54;
  uStack_c0 = CONCAT44(fVar37,fVar55);
  local_130 = 0.01;
  uStack_d8 = CONCAT44(fVar37,fVar52 * fVar15 - fVar51 * fVar50);
  local_120 = 0x101;
  uStack_c8 = CONCAT44(fVar55,fVar52 * fVar49 + fVar54);
  uStack_12c = 1;
  local_108 = 1;
  uStack_100 = 0x3fc0000000000002;
  local_f8 = 0xc47a0000;
  local_e8 = 0xfc;
  local_f0 = &local_e0;
  local_e2 = 0;
  local_e4 = 0x100;
  local_e0 = CONCAT44(fVar51 * fVar15 + fVar52 * fVar50,fVar53 - fVar51 * fVar49);
  uStack_b8 = (ulong)(uint)((1.0 - fVar16) - fVar51 * fVar49);
  local_118 = PTR_DAT_047ddc10 + 0x10;
  uStack_110 = 0xffffffff;
  uStack_98 = CONCAT44(0x10,uVar12);
  local_b0 = auVar6._0_8_;
  uStack_a8 = (ulong)auVar27._0_4_;
  local_a0 = lVar8;
  FUN_011711f0(&local_138,&local_a0,&local_130);
  plVar1 = local_138;
  local_138 = (long *)0x0;
  plVar9 = (long *)*param_2;
  *param_2 = (long)plVar1;
  if (plVar9 != (long *)0x0) {
    if (plVar9[1] != 0) {
      plVar1 = plVar9 + 2;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    if ((local_138 != (long *)0x0) && (local_138[1] != 0)) {
      plVar1 = local_138 + 2;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_138 + 0x18))();
      }
    }
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*(long *)puVar7 + 0x20))(puVar7,lVar8,(ulong)uVar11 << 4);
  }
  return;
}


