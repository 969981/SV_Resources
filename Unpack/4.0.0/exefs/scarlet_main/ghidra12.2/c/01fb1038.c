/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb1038; name: FUN_01fb1038
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb1038(undefined1 *param_1,long param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [12];
  long lVar10;
  float *pfVar11;
  code *pcVar12;
  byte *pbVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined8 extraout_d0;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  ulong extraout_var;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  int iVar40;
  int iVar41;
  undefined1 auVar37 [16];
  int iVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar43;
  int iVar48;
  undefined1 auVar44 [12];
  int iVar47;
  undefined1 auVar45 [16];
  int iVar49;
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [12];
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar68;
  float fVar70;
  float fVar71;
  undefined1 auVar69 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 *local_140;
  code **ppcStack_138;
  undefined8 local_130;
  long *local_128;
  code *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  char *local_100;
  long lStack_f8;
  undefined8 *local_f0;
  undefined8 *local_98 [2];
  undefined8 *local_88 [2];
  char local_74 [4];
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  FUN_01667884(&local_70);
  local_74[0] = '\0';
  FUN_01fb16a0(local_88,param_2,param_3);
  if ((local_88[0] == (undefined8 *)0x0) || (local_88[0][2] == 0)) {
    FUN_00f2260c(local_98,param_2,param_3);
    if ((local_98[0] == (undefined8 *)0x0) || (local_98[0][2] == 0)) {
      puVar15 = &DAT_cbf29ce484222645;
      snprintf((char *)&local_120,0x80,"StaticTransform_%s",*(char **)(param_3 + 8));
      if ((byte)local_120 != 0) {
        pbVar13 = (byte *)((ulong)&local_120 | 1);
        bVar6 = (byte)local_120;
        do {
          puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar6 != 0);
      }
      local_130 = 0x7f;
      local_128 = (long *)0x0;
      local_140 = puVar15;
      ppcStack_138 = &local_120;
      lVar10 = FUN_01fb1898(param_2,&local_140);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if ((lVar10 != 0) || (lVar10 = FUN_01fb1898(param_2,param_3), lVar10 != 0)) {
        local_74[0] = '\x01';
        memcpy(&local_70,(void *)(lVar10 + 0x40),0x30);
      }
    }
    else {
      local_74[0] = '\x01';
      FUN_00cbc2dc(local_98[0][2] + -0x28);
      uStack_68 = _UNK_03caa988;
      local_70 = _DAT_03caa980;
      uStack_58 = _UNK_03cabe58;
      local_60 = _DAT_03cabe50;
      local_50 = extraout_d0;
      uStack_48 = extraout_var;
    }
    if (local_98[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_98[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_98[0] + 0x1c);
        do {
          iVar36 = *piVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar36 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar36 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar36 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_120 = (code *)*local_98[0];
          FUN_00c44438(lVar10 + 0x8040,&local_120);
        }
      }
      else if (sVar3 == 0) goto LAB_01fb1480;
    }
  }
  else {
    local_74[0] = '\x01';
    plVar14 = (long *)(local_88[0][2] + -0x28);
    lVar10 = (**(code **)(*plVar14 + 0x68))(plVar14);
    uStack_48 = (ulong)SUB164(*(undefined1 (*) [16])(lVar10 + 0x30),8);
    local_50 = SUB168(*(undefined1 (*) [16])(lVar10 + 0x30),0);
    pfVar11 = (float *)(**(code **)(*plVar14 + 0x68))(plVar14);
    fVar24 = *pfVar11;
    fVar27 = pfVar11[1];
    fVar29 = pfVar11[2];
    fVar31 = pfVar11[3];
    fVar32 = pfVar11[4];
    fVar33 = pfVar11[5];
    fVar34 = pfVar11[6];
    fVar35 = pfVar11[7];
    auVar73._0_4_ = fVar24 * fVar24 + fVar27 * fVar27;
    auVar73._4_4_ = fVar29 * fVar29 + fVar31 * fVar31;
    auVar73._8_4_ = fVar24 * fVar24 + fVar27 * fVar27;
    auVar73._12_4_ = fVar29 * fVar29 + fVar31 * fVar31;
    auVar37 = NEON_ext(auVar73,auVar73,4,1);
    auVar16._0_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar16._4_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar16._8_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar16._12_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar37 = NEON_frsqrte(auVar16,4);
    auVar50._0_4_ = auVar16._0_4_ * auVar37._0_4_;
    auVar50._4_4_ = auVar16._4_4_ * auVar37._4_4_;
    auVar50._8_4_ = auVar16._8_4_ * auVar37._8_4_;
    auVar50._12_4_ = auVar16._12_4_ * auVar37._12_4_;
    auVar51 = NEON_frsqrts(auVar37,auVar50,4);
    auVar45._0_4_ = auVar37._0_4_ * auVar51._0_4_;
    auVar45._4_4_ = auVar37._4_4_ * auVar51._4_4_;
    auVar45._8_4_ = auVar37._8_4_ * auVar51._8_4_;
    auVar45._12_4_ = auVar37._12_4_ * auVar51._12_4_;
    auVar52._0_4_ = auVar16._0_4_ * auVar45._0_4_;
    auVar52._4_4_ = auVar16._4_4_ * auVar45._4_4_;
    auVar52._8_4_ = auVar16._8_4_ * auVar45._8_4_;
    auVar52._12_4_ = auVar16._12_4_ * auVar45._12_4_;
    iVar36 = -(uint)(auVar16._0_4_ == 0.0);
    iVar40 = -(uint)(auVar16._4_4_ == 0.0);
    iVar41 = -(uint)(auVar16._8_4_ == 0.0);
    iVar42 = -(uint)(auVar16._12_4_ == 0.0);
    auVar37 = NEON_frsqrts(auVar45,auVar52,4);
    fVar24 = fVar24 * auVar45._0_4_ * auVar37._0_4_;
    fVar27 = fVar27 * auVar45._4_4_ * auVar37._4_4_;
    fVar29 = fVar29 * auVar45._8_4_ * auVar37._8_4_;
    fVar31 = fVar31 * auVar45._12_4_ * auVar37._12_4_;
    auVar17._0_4_ = fVar32 * fVar32 + fVar33 * fVar33;
    auVar17._4_4_ = fVar34 * fVar34 + fVar35 * fVar35;
    auVar17._8_4_ = fVar32 * fVar32 + fVar33 * fVar33;
    auVar17._12_4_ = fVar34 * fVar34 + fVar35 * fVar35;
    auVar37 = NEON_ext(auVar17,auVar17,4,1);
    auVar18._0_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar18._4_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar18._8_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar18._12_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar37 = NEON_frsqrte(auVar18,4);
    auVar55._0_4_ = auVar18._0_4_ * auVar37._0_4_;
    auVar55._4_4_ = auVar18._4_4_ * auVar37._4_4_;
    auVar55._8_4_ = auVar18._8_4_ * auVar37._8_4_;
    auVar55._12_4_ = auVar18._12_4_ * auVar37._12_4_;
    auVar51 = NEON_frsqrts(auVar37,auVar55,4);
    auVar53._0_4_ = auVar37._0_4_ * auVar51._0_4_;
    auVar53._4_4_ = auVar37._4_4_ * auVar51._4_4_;
    auVar53._8_4_ = auVar37._8_4_ * auVar51._8_4_;
    auVar53._12_4_ = auVar37._12_4_ * auVar51._12_4_;
    auVar56._0_4_ = auVar18._0_4_ * auVar53._0_4_;
    auVar56._4_4_ = auVar18._4_4_ * auVar53._4_4_;
    auVar56._8_4_ = auVar18._8_4_ * auVar53._8_4_;
    auVar56._12_4_ = auVar18._12_4_ * auVar53._12_4_;
    iVar43 = -(uint)(auVar18._0_4_ == 0.0);
    iVar47 = -(uint)(auVar18._4_4_ == 0.0);
    iVar48 = -(uint)(auVar18._8_4_ == 0.0);
    iVar49 = -(uint)(auVar18._12_4_ == 0.0);
    auVar37 = NEON_frsqrts(auVar53,auVar56,4);
    fVar32 = fVar32 * auVar53._0_4_ * auVar37._0_4_;
    fVar33 = fVar33 * auVar53._4_4_ * auVar37._4_4_;
    fVar34 = fVar34 * auVar53._8_4_ * auVar37._8_4_;
    fVar35 = fVar35 * auVar53._12_4_ * auVar37._12_4_;
    fVar25 = pfVar11[8];
    fVar28 = pfVar11[9];
    fVar30 = pfVar11[10];
    fVar58 = pfVar11[0xb] * pfVar11[0xb];
    auVar19._0_4_ = fVar25 * fVar25 + fVar28 * fVar28;
    auVar19._4_4_ = fVar30 * fVar30 + fVar58;
    auVar19._8_4_ = fVar25 * fVar25 + fVar28 * fVar28;
    auVar19._12_4_ = fVar30 * fVar30 + fVar58;
    auVar37 = NEON_ext(auVar19,auVar19,4,1);
    auVar20._0_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar20._4_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar20._8_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar20._12_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar37 = NEON_frsqrte(auVar20,4);
    auVar64._0_4_ = auVar20._0_4_ * auVar37._0_4_;
    auVar64._4_4_ = auVar20._4_4_ * auVar37._4_4_;
    auVar64._8_4_ = auVar20._8_4_ * auVar37._8_4_;
    auVar64._12_4_ = auVar20._12_4_ * auVar37._12_4_;
    auVar51 = NEON_frsqrts(auVar37,auVar64,4);
    auVar59._0_4_ = auVar37._0_4_ * auVar51._0_4_;
    auVar59._4_4_ = auVar37._4_4_ * auVar51._4_4_;
    auVar59._8_4_ = auVar37._8_4_ * auVar51._8_4_;
    auVar59._12_4_ = auVar37._12_4_ * auVar51._12_4_;
    auVar65._0_4_ = auVar20._0_4_ * auVar59._0_4_;
    auVar65._4_4_ = auVar20._4_4_ * auVar59._4_4_;
    auVar65._8_4_ = auVar20._8_4_ * auVar59._8_4_;
    auVar65._12_4_ = auVar20._12_4_ * auVar59._12_4_;
    auVar37 = NEON_frsqrts(auVar59,auVar65,4);
    fVar62 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar24 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar24,0) & ~(byte)iVar36)));
    auVar63._0_8_ =
         CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                  CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                           CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                    CONCAT14(SUB41(fVar27,0) & ~(byte)iVar40,fVar62))));
    auVar63[8] = SUB41(fVar29,0) & ~(byte)iVar41;
    auVar63[9] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar41 >> 8);
    auVar63[10] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    auVar63[0xb] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    auVar66[0xc] = SUB41(fVar31,0) & ~(byte)iVar42;
    auVar66._0_12_ = auVar63;
    auVar66[0xd] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar42 >> 8);
    auVar66[0xe] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
    auVar66[0xf] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
    iVar36 = -(uint)(auVar20._0_4_ == 0.0);
    iVar40 = -(uint)(auVar20._4_4_ == 0.0);
    iVar41 = -(uint)(auVar20._8_4_ == 0.0);
    fVar58 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar32 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar32,0) & ~(byte)iVar43)));
    auVar38._0_8_ =
         CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                  CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                           CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                    CONCAT14(SUB41(fVar33,0) & ~(byte)iVar47,fVar58))));
    auVar38[8] = SUB41(fVar34,0) & ~(byte)iVar48;
    auVar38[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar48 >> 8);
    auVar38[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
    auVar38[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
    auVar38[0xc] = SUB41(fVar35,0) & ~(byte)iVar49;
    auVar38[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar49 >> 8);
    auVar38[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
    auVar38[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
    fVar25 = fVar25 * auVar59._0_4_ * auVar37._0_4_;
    fVar28 = fVar28 * auVar59._4_4_ * auVar37._4_4_;
    fVar30 = fVar30 * auVar59._8_4_ * auVar37._8_4_;
    fVar33 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar25 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar25,0) & ~(byte)iVar36)));
    auVar44._0_8_ =
         CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                  CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                           CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                    CONCAT14(SUB41(fVar28,0) & ~(byte)iVar40,fVar33))));
    auVar44[8] = SUB41(fVar30,0) & ~(byte)iVar41;
    auVar44[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar41 >> 8);
    auVar44[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    auVar44[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    auVar37 = NEON_fmov(0x3f800000,4);
    fVar24 = (float)((ulong)auVar38._0_8_ >> 0x20);
    fVar32 = auVar44._8_4_;
    fVar27 = auVar37._0_4_ + (float)_DAT_03cab3a0 * fVar62 + (float)_DAT_03cac210 * fVar24 +
             (float)_DAT_03cabb00 * fVar32;
    fVar29 = auVar37._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar62 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar24 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar32;
    fVar31 = auVar37._8_4_ + (float)_UNK_03cab3a8 * fVar62 + (float)_UNK_03cac218 * fVar24 +
             (float)_UNK_03cabb08 * fVar32;
    fVar32 = auVar37._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar62 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar24 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar32;
    fVar34 = (float)((ulong)auVar44._0_8_ >> 0x20);
    auVar37 = NEON_fmov(0x40800000,4);
    auVar69 = NEON_ext(auVar38,auVar38,8,1);
    auVar54._0_4_ = SQRT(fVar27) * 0.5 * auVar37._0_4_;
    auVar54._4_4_ = SQRT(fVar29) * 0.5 * auVar37._4_4_;
    auVar54._8_4_ = SQRT(fVar31) * 0.5 * auVar37._8_4_;
    auVar54._12_4_ = SQRT(fVar32) * 0.5 * auVar37._12_4_;
    auVar73 = NEON_ext(auVar66,auVar66,8,1);
    auVar37 = NEON_frecpe(auVar54,4);
    auVar51 = NEON_frecps(auVar37,auVar54,4);
    fVar24 = auVar69._0_4_;
    auVar57._0_4_ = auVar37._0_4_ * auVar51._0_4_;
    auVar57._4_4_ = auVar37._4_4_ * auVar51._4_4_;
    auVar57._8_4_ = auVar37._8_4_ * auVar51._8_4_;
    auVar57._12_4_ = auVar37._12_4_ * auVar51._12_4_;
    auVar37 = NEON_frecps(auVar57,auVar54,4);
    fVar35 = auVar57._0_4_ * auVar37._0_4_;
    fVar25 = auVar57._4_4_ * auVar37._4_4_;
    fVar28 = auVar57._8_4_ * auVar37._8_4_;
    fVar30 = auVar57._12_4_ * auVar37._12_4_;
    fVar67 = (float)((ulong)auVar63._0_8_ >> 0x20);
    fVar62 = auVar73._0_4_ + fVar33;
    auVar9._8_4_ = fVar24 + -fVar34;
    auVar9._4_4_ = fVar62;
    fVar68 = (float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar29) & -(uint)(fVar27 <= fVar29));
    fVar70 = (float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar29) & -(uint)(fVar27 <= fVar29));
    fVar71 = (float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar29) & -(uint)(fVar27 <= fVar29));
    fVar72 = (float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar29) & -(uint)(fVar27 <= fVar29));
    auVar9._0_4_ = (fVar67 + fVar58) * fVar35;
    auVar60._0_8_ = auVar9._0_8_ << 0x20;
    auVar60._8_4_ = fVar62 * fVar35;
    auVar60._12_4_ = (fVar24 + -fVar34) * fVar35;
    auVar61._4_12_ = auVar60._4_12_;
    auVar61._0_4_ = SQRT(fVar27) * 0.5;
    auVar46._0_4_ = (auVar73._0_4_ + fVar33) * fVar28;
    auVar46._4_4_ = (fVar24 + fVar34) * fVar28;
    auVar46._12_4_ = (fVar67 - fVar58) * fVar28;
    auVar39._0_4_ = (fVar24 - fVar34) * fVar30;
    auVar39._4_4_ = (fVar33 - auVar63._8_4_) * fVar30;
    auVar39._8_4_ = (fVar67 - fVar58) * fVar30;
    auVar37._4_4_ = SQRT(fVar29) * 0.5;
    auVar37._0_4_ = (fVar67 + fVar58) * fVar25;
    auVar37._8_4_ = (fVar24 + fVar34) * fVar25;
    auVar37._12_4_ = (fVar33 + -auVar63._8_4_) * fVar25;
    auVar69._4_4_ = -(uint)(fVar27 <= fVar29);
    auVar69._0_4_ = -(uint)(fVar27 <= fVar29);
    auVar69._8_4_ = -(uint)(fVar27 <= fVar29);
    auVar69._12_4_ = -(uint)(fVar27 <= fVar29);
    auVar46._8_4_ = SQRT(fVar31) * 0.5;
    auVar39._12_4_ = SQRT(fVar32) * 0.5;
    auVar51._4_4_ = -(uint)(fVar70 <= fVar31);
    auVar51._0_4_ = -(uint)(fVar68 <= fVar31);
    auVar51._8_4_ = -(uint)(fVar71 <= fVar31);
    auVar51._12_4_ = -(uint)(fVar72 <= fVar31);
    auVar46 = auVar46 ^ (auVar46 ^ auVar61 ^ (auVar61 ^ auVar37) & auVar69) & ~auVar51;
    auVar26._0_4_ =
         -(uint)((float)((uint)fVar68 ^ ((uint)fVar68 ^ (uint)fVar31) & -(uint)(fVar68 <= fVar31))
                <= fVar32);
    auVar26._4_4_ =
         -(uint)((float)((uint)fVar70 ^ ((uint)fVar70 ^ (uint)fVar31) & -(uint)(fVar70 <= fVar31))
                <= fVar32);
    auVar26._8_4_ =
         -(uint)((float)((uint)fVar71 ^ ((uint)fVar71 ^ (uint)fVar31) & -(uint)(fVar71 <= fVar31))
                <= fVar32);
    auVar26._12_4_ =
         -(uint)((float)((uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar31) & -(uint)(fVar72 <= fVar31))
                <= fVar32);
    auVar46 = auVar46 ^ (auVar46 ^ auVar39) & auVar26;
    uStack_58 = auVar46._8_8_;
    local_60 = auVar46._0_8_;
    pfVar11 = (float *)(**(code **)(*plVar14 + 0x68))(plVar14);
    fVar32 = pfVar11[4] * pfVar11[4];
    fVar33 = pfVar11[5] * pfVar11[5];
    fVar34 = pfVar11[6] * pfVar11[6];
    fVar35 = pfVar11[7] * pfVar11[7];
    fVar25 = pfVar11[8] * pfVar11[8];
    fVar28 = pfVar11[9] * pfVar11[9];
    fVar30 = pfVar11[10] * pfVar11[10];
    fVar58 = pfVar11[0xb] * pfVar11[0xb];
    fVar24 = *pfVar11 * *pfVar11;
    fVar27 = pfVar11[1] * pfVar11[1];
    fVar29 = pfVar11[2] * pfVar11[2];
    fVar31 = pfVar11[3] * pfVar11[3];
    auVar21._0_4_ = fVar32 + fVar33;
    auVar21._4_4_ = fVar34 + fVar35;
    auVar21._8_4_ = fVar32 + fVar33;
    auVar21._12_4_ = fVar34 + fVar35;
    auVar22._0_4_ = fVar25 + fVar28;
    auVar22._4_4_ = fVar30 + fVar58;
    auVar22._8_4_ = fVar25 + fVar28;
    auVar22._12_4_ = fVar30 + fVar58;
    auVar23._0_4_ = fVar24 + fVar27;
    auVar23._4_4_ = fVar29 + fVar31;
    auVar23._8_4_ = fVar24 + fVar27;
    auVar23._12_4_ = fVar29 + fVar31;
    auVar51 = NEON_ext(auVar21,auVar21,4,1);
    auVar69 = NEON_ext(auVar22,auVar22,4,1);
    auVar37 = NEON_ext(auVar23,auVar23,4,1);
    uStack_68 = (ulong)(uint)SQRT(auVar69._0_4_ + auVar69._4_4_);
    local_70 = CONCAT44(SQRT(auVar51._0_4_ + auVar51._4_4_),SQRT(auVar37._0_4_ + auVar37._4_4_));
  }
  if (local_88[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_88[0] + 0x1c);
      do {
        iVar36 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar36 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar36 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar36 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_120 = (code *)*local_88[0];
        FUN_00c44438(lVar10 + 0x8040,&local_120);
      }
    }
    else if (sVar3 == 0) {
LAB_01fb1480:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_74[0] != '\0') goto LAB_01fb1308;
  local_100 = local_74;
  local_f0 = &local_70;
  pcVar12 = FUN_02a3e854;
  local_120 = FUN_01fb19a8;
  local_118 = FUN_02a3e854;
  local_110 = &LAB_02a3e858;
  puStack_108 = &LAB_02a3e86c;
  puVar4 = *(undefined8 **)(param_2 + 0x1f0);
  puVar5 = *(undefined8 **)(param_2 + 0x1f8);
  lStack_f8 = param_3;
  if (puVar4 == puVar5) {
LAB_01fb143c:
    local_110 = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)0x0;
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
    (*pcVar12)(&local_100);
  }
  else {
    local_140 = (undefined1 *)*puVar4;
    FUN_01fb19a8(&local_100,&local_140);
    pcVar12 = local_118;
    while (puVar4 = puVar4 + 1, local_118 = pcVar12, puVar4 != puVar5) {
      local_140 = (undefined1 *)*puVar4;
      (*local_120)(&local_100,&local_140);
      pcVar12 = local_118;
    }
    if (pcVar12 != (code *)0x0) goto LAB_01fb143c;
  }
  if (local_74[0] == '\0') {
    *param_1 = 0;
    return;
  }
LAB_01fb1308:
  memcpy(param_1 + 0x10,&local_70,0x30);
  *param_1 = 1;
  return;
}


