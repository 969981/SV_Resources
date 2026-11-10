/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb1ce0; name: FUN_00cb1ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cb1ce0(undefined1 (*param_1) [12],long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  float fVar19;
  float fVar20;
  int iVar25;
  int iVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long *local_8;
  
  uVar15 = (undefined4)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  fVar13 = (float)*(undefined8 *)*param_1;
  fVar14 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  fVar19 = *(float *)(param_1[1] + 4);
  fVar20 = *(float *)(param_1[1] + 8);
  fVar10 = *(float *)param_1[2];
  fVar11 = *(float *)(param_1[2] + 4);
  auVar21._12_4_ = uVar15;
  auVar21._0_12_ = *param_1;
  auVar22._12_4_ = uVar15;
  auVar22._0_12_ = *param_1;
  auVar21 = NEON_ext(auVar21,auVar22,8,1);
  auVar33._0_4_ = fVar19 * fVar19 + fVar20 * fVar20;
  auVar33._4_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar33._8_4_ = fVar19 * fVar19 + fVar20 * fVar20;
  auVar33._12_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar22 = NEON_ext(auVar33,auVar33,4,1);
  auVar48._0_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar48._4_4_ = auVar22._8_4_ + auVar22._12_4_;
  auVar48._8_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar48._12_4_ = auVar22._8_4_ + auVar22._12_4_;
  if (((int)SQRT(auVar48._0_4_) + 0x800000U & 0x7f000000) == 0) {
    auVar17._8_8_ = _UNK_03cabe58;
    auVar17._0_8_ = _DAT_03cabe50;
  }
  else {
    auVar22 = NEON_frsqrte(auVar48,4);
    auVar32._0_4_ = auVar48._0_4_ * auVar22._0_4_;
    auVar32._4_4_ = auVar48._4_4_ * auVar22._4_4_;
    auVar32._8_4_ = auVar48._8_4_ * auVar22._8_4_;
    auVar32._12_4_ = auVar48._12_4_ * auVar22._12_4_;
    auVar33 = NEON_frsqrts(auVar22,auVar32,4);
    auVar29._0_4_ = auVar22._0_4_ * auVar33._0_4_;
    auVar29._4_4_ = auVar22._4_4_ * auVar33._4_4_;
    auVar29._8_4_ = auVar22._8_4_ * auVar33._8_4_;
    auVar29._12_4_ = auVar22._12_4_ * auVar33._12_4_;
    auVar34._0_4_ = auVar48._0_4_ * auVar29._0_4_;
    auVar34._4_4_ = auVar48._4_4_ * auVar29._4_4_;
    auVar34._8_4_ = auVar48._8_4_ * auVar29._8_4_;
    auVar34._12_4_ = auVar48._12_4_ * auVar29._12_4_;
    iVar18 = -(uint)(auVar48._0_4_ == 0.0);
    iVar25 = -(uint)(auVar48._4_4_ == 0.0);
    iVar26 = -(uint)(auVar48._8_4_ == 0.0);
    iVar27 = -(uint)(auVar48._12_4_ == 0.0);
    auVar23[0] = ~(byte)iVar18;
    auVar23[1] = ~(byte)((uint)iVar18 >> 8);
    auVar23[2] = ~(byte)((uint)iVar18 >> 0x10);
    auVar23[3] = ~(byte)((uint)iVar18 >> 0x18);
    auVar23[4] = ~(byte)iVar25;
    auVar23[5] = ~(byte)((uint)iVar25 >> 8);
    auVar23[6] = ~(byte)((uint)iVar25 >> 0x10);
    auVar23[7] = ~(byte)((uint)iVar25 >> 0x18);
    auVar23[8] = ~(byte)iVar26;
    auVar23[9] = ~(byte)((uint)iVar26 >> 8);
    auVar23[10] = ~(byte)((uint)iVar26 >> 0x10);
    auVar23[0xb] = ~(byte)((uint)iVar26 >> 0x18);
    auVar23[0xc] = ~(byte)iVar27;
    auVar23[0xd] = ~(byte)((uint)iVar27 >> 8);
    auVar23[0xe] = ~(byte)((uint)iVar27 >> 0x10);
    auVar23[0xf] = ~(byte)((uint)iVar27 >> 0x18);
    auVar22 = NEON_frsqrts(auVar29,auVar34,4);
    auVar16._0_4_ = fVar19 * auVar29._0_4_ * auVar22._0_4_;
    auVar16._4_4_ = fVar20 * auVar29._4_4_ * auVar22._4_4_;
    auVar16._8_4_ = fVar10 * auVar29._8_4_ * auVar22._8_4_;
    auVar16._12_4_ = fVar11 * auVar29._12_4_ * auVar22._12_4_;
    auVar30._8_8_ = _UNK_03cabe58;
    auVar30._0_8_ = _DAT_03cabe50;
    auVar17 = auVar16 ^ (auVar16 ^ auVar30) & ~auVar23;
  }
  fVar19 = *(float *)param_1[3];
  auVar22 = NEON_ext(auVar17,auVar17,8,1);
  fVar11 = (float)((ulong)_UNK_03cabe68 >> 0x20);
  fVar10 = (float)((ulong)_DAT_03cabe60 >> 0x20);
  fVar20 = -fVar19;
  fVar37 = auVar22._4_4_ * auVar22._4_4_;
  fVar42 = (float)_DAT_03cabe60 * fVar19 * 0.5;
  fVar43 = fVar10 * fVar19 * 0.5;
  fVar44 = (float)_UNK_03cabe68 * fVar19 * 0.5;
  fVar45 = fVar11 * fVar19 * 0.5;
  auVar22 = NEON_ext(auVar17,auVar17,4,1);
  auVar24._0_4_ = (float)_DAT_03cabe60 * fVar20 * 0.5;
  auVar24._4_4_ = fVar10 * fVar20 * 0.5;
  auVar24._8_4_ = (float)_UNK_03cabe68 * fVar20 * 0.5;
  auVar24._12_4_ = fVar11 * fVar20 * 0.5;
  fVar28 = fVar37 + -0.5;
  fVar37 = fVar37 + -0.5;
  auVar48 = NEON_ext(auVar24,auVar24,4,1);
  auVar6._4_4_ = fVar43;
  auVar6._0_4_ = fVar42;
  auVar6._8_4_ = fVar44;
  auVar6._12_4_ = fVar45;
  auVar7._4_4_ = fVar43;
  auVar7._0_4_ = fVar42;
  auVar7._8_4_ = fVar44;
  auVar7._12_4_ = fVar45;
  auVar33 = NEON_ext(auVar6,auVar7,4,1);
  fVar19 = auVar17._0_4_;
  fVar10 = auVar17._4_4_;
  fVar11 = auVar17._8_4_;
  fVar12 = auVar17._12_4_;
  fVar20 = fVar19 * fVar42 + fVar10 * fVar43 + fVar11 * fVar44;
  fVar31 = fVar19 * fVar42 + fVar10 * fVar43 + fVar11 * fVar44;
  fVar46 = fVar19 * auVar24._0_4_ + fVar10 * auVar24._4_4_ + fVar11 * auVar24._8_4_;
  fVar47 = fVar19 * auVar24._0_4_ + fVar10 * auVar24._4_4_ + fVar11 * auVar24._8_4_;
  fVar38 = fVar19 * auVar33._0_4_ - auVar22._0_4_ * fVar42;
  fVar39 = fVar10 * auVar33._4_4_ - auVar22._4_4_ * fVar43;
  fVar40 = fVar11 * fVar42 - fVar19 * fVar44;
  fVar41 = fVar12 * fVar43 - fVar10 * fVar45;
  auVar35._0_4_ = fVar19 * auVar48._0_4_ - auVar22._0_4_ * auVar24._0_4_;
  auVar35._4_4_ = fVar10 * auVar48._4_4_ - auVar22._4_4_ * auVar24._4_4_;
  auVar35._8_4_ = fVar11 * auVar24._0_4_ - fVar19 * auVar24._8_4_;
  auVar35._12_4_ = fVar12 * auVar24._4_4_ - fVar10 * auVar24._12_4_;
  auVar4._4_4_ = fVar39;
  auVar4._0_4_ = fVar38;
  auVar4._8_4_ = fVar40;
  auVar4._12_4_ = fVar41;
  auVar5._4_4_ = fVar39;
  auVar5._0_4_ = fVar38;
  auVar5._8_4_ = fVar40;
  auVar5._12_4_ = fVar41;
  auVar22 = NEON_ext(auVar4,auVar5,4,1);
  auVar33 = NEON_ext(auVar35,auVar35,4,1);
  fVar39 = fVar28 * fVar42 + fVar19 * fVar20 + auVar22._0_4_ * fVar12;
  fVar40 = fVar37 * fVar43 + fVar10 * fVar31 + auVar22._4_4_ * fVar12;
  fVar38 = fVar28 * fVar44 + fVar11 * fVar20 + fVar38 * fVar12;
  fVar31 = fVar37 * fVar45 + fVar12 * fVar31 + fVar12 * 0.0;
  fVar20 = fVar28 * auVar24._0_4_ + fVar19 * fVar46 + auVar33._0_4_ * fVar12;
  fVar10 = fVar37 * auVar24._4_4_ + fVar10 * fVar47 + auVar33._4_4_ * fVar12;
  fVar11 = fVar28 * auVar24._8_4_ + fVar11 * fVar46 + auVar35._0_4_ * fVar12;
  fVar12 = fVar37 * auVar24._12_4_ + fVar12 * fVar47 + fVar12 * 0.0;
  auVar36._0_8_ = CONCAT44(fVar14 + fVar40 + fVar40,fVar13 + fVar39 + fVar39);
  auVar36._8_4_ = auVar21._0_4_ + fVar38 + fVar38;
  auVar36._12_4_ = fVar31 + fVar31 + 0.0;
  fVar19 = *(float *)(param_1[2] + 8);
  if (*(float *)(param_1[2] + 8) <= 0.001) {
    fVar19 = 0.001;
  }
  uStack_38 = CONCAT44(fVar12 + fVar12 + 0.0,auVar21._0_4_ + fVar11 + fVar11);
  local_40 = CONCAT44(fVar14 + fVar10 + fVar10,fVar13 + fVar20 + fVar20);
  uStack_28 = auVar36._8_8_;
  uStack_30 = auVar36._0_8_;
  FUN_00cb1efc(&local_8,fVar19,&uStack_30,&local_40);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar8 = (long *)*param_2;
  *param_2 = (long)plVar1;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar1 = plVar8 + 2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    if ((local_8 != (long *)0x0) && (local_8[1] != 0)) {
      plVar1 = local_8 + 2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_8 + 0x18))();
      }
    }
  }
  return;
}


