/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01234fa8; name: FUN_01234fa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01234fa8(long param_1)

{
  short *psVar1;
  int *piVar2;
  long **pplVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar6 [12];
  float fVar7;
  long *plVar8;
  undefined1 auVar9 [12];
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  bool bVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  float *pfVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  short sVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar29;
  float fVar30;
  float fVar31;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar39;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  int iVar55;
  int iVar56;
  undefined1 auVar52 [16];
  int iVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar58;
  int iVar64;
  undefined1 auVar59 [12];
  int iVar63;
  undefined1 in_q3 [16];
  undefined1 auVar60 [16];
  int iVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar75;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined1 auVar81 [12];
  float fVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  byte local_120;
  byte bStack_11f;
  byte bStack_11e;
  byte bStack_11d;
  byte bStack_11c;
  byte bStack_11b;
  byte bStack_11a;
  byte bStack_119;
  byte bStack_118;
  byte bStack_117;
  byte bStack_116;
  byte bStack_115;
  undefined8 local_110;
  ulong uStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long *local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0 [2];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  local_90 = *(undefined8 *)(param_1 + 0x110);
  uStack_88 = *(undefined8 *)(param_1 + 0x118);
  local_80 = *(undefined8 *)(param_1 + 0x120);
  plVar20 = *(long **)(param_1 + 0x128);
  local_78 = plVar20;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_70,param_1 + 0x30,&local_90);
    plVar20 = local_78;
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (local_70 == (undefined8 *)0x0) {
LAB_01235034:
    uStack_108 = 0;
    local_110 = 0;
  }
  else {
    if (*(short *)((long)local_70 + 0x1a) == 0) {
      uStack_108 = 0;
      local_110 = 0;
    }
    else {
      if (local_70 == (undefined8 *)0x0) goto LAB_01235034;
      uStack_108 = 0;
      local_110 = 0;
      if (*(short *)((long)local_70 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_70 + 0x1a);
        sVar23 = *(short *)((long)local_70 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar23) {
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar14) {
              *psVar1 = sVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_012350e8;
            bVar14 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_012350e8:
            bVar14 = false;
          }
          puVar10 = PTR_DAT_047d4240;
          if (bVar14) {
            lVar19 = local_70[2];
            plVar20 = (long *)(lVar19 + -0x28);
            if (lVar19 != 0) {
              if (((*PTR_DAT_047d4240 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
                FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d4240);
              }
              puVar12 = PTR_DAT_047d4250;
              puVar11 = PTR_DAT_047d4248;
              uVar17 = *(undefined8 *)PTR_DAT_047d4248;
              *(undefined8 *)PTR_DAT_047d4250 = uVar17;
              FUN_00cf9884(&local_e0,uVar17,&DAT_03c3caca);
              plVar13 = local_e0;
              plVar8 = (long *)PTR_DAT_047d8b70;
              plVar22 = (long *)PTR_PTR_047d4508;
              plVar21 = (long *)PTR_DAT_047d8b70;
              if (local_e0 != (long *)0x0) {
                plVar21 = local_e0 + 6;
              }
              local_100 = *plVar21;
              plVar21 = (long *)PTR_PTR_047d4508;
              if (local_e0 != (long *)0x0) {
                plVar21 = local_e0 + 7;
              }
              lStack_f8 = *plVar21;
              if (local_e0 == (long *)0x0) {
                local_f0 = 0;
              }
              else {
                local_f0 = local_e0[8];
              }
              local_e8 = (long *)0x0;
              plVar21 = (long *)0x0;
              if (local_e0 != (long *)0x0) {
                (**(code **)(*local_e0 + 0x18))(local_e0);
                plVar21 = plVar13;
              }
              local_e8 = plVar21;
              FUN_01315eac(&local_e0,param_1,&local_100);
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar15 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              bVar14 = (char)local_e0 != '\0';
              puVar16 = (undefined8 *)PTR_DAT_047d3e30;
              if (bVar14) {
                puVar16 = &local_d8;
              }
              local_b0 = *puVar16;
              puVar16 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
              if (bVar14) {
                puVar16 = &local_d0;
              }
              local_a8 = (char *)*puVar16;
              puVar16 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
              if (bVar14) {
                puVar16 = &uStack_c8;
              }
              local_a0 = *puVar16;
              pplVar3 = (long **)(PTR_DAT_047d3e30 + 0x18);
              if (bVar14) {
                pplVar3 = local_c0;
              }
              local_98 = *pplVar3;
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x18))();
              }
              if ((char)local_e0 != '\0') {
                if (local_c0[0] != (long *)0x0) {
                  (**(code **)(*local_c0[0] + 0x20))();
                }
                local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
              }
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
              if (*local_a8 == '\0') {
                lVar19 = (**(code **)(*plVar20 + 0x68))(plVar20);
                local_110 = *(undefined8 *)(lVar19 + 0x30);
                fVar7 = *(float *)(lVar19 + 0x38);
              }
              else {
                lVar19 = FUN_01104bd8(lVar19 + 0xe0,&local_e0);
                if (lVar19 == 0) {
                  fVar7 = 0.0;
                  local_110 = 0;
                }
                else {
                  (**(code **)(*(long *)(lVar19 + 0x128) + 0x50))(lVar19 + 0x128,&local_b0);
                  fVar7 = in_q3._8_4_;
                  local_110 = in_q3._0_8_;
                }
              }
              if (((*puVar10 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
                FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d4240);
              }
              uVar17 = *(undefined8 *)puVar11;
              *(undefined8 *)puVar12 = uVar17;
              FUN_00cf9884(&local_e0,uVar17,"Offset");
              plVar21 = local_e0;
              if (local_e0 != (long *)0x0) {
                plVar22 = local_e0 + 7;
                plVar8 = local_e0 + 6;
              }
              local_100 = *plVar8;
              lStack_f8 = *plVar22;
              if (local_e0 == (long *)0x0) {
                local_f0 = 0;
              }
              else {
                local_f0 = local_e0[8];
              }
              local_e8 = (long *)0x0;
              plVar22 = (long *)0x0;
              if (local_e0 != (long *)0x0) {
                (**(code **)(*local_e0 + 0x18))(local_e0);
                plVar22 = plVar21;
              }
              local_e8 = plVar22;
              FUN_015eea10(&local_e0,param_1,&local_100);
              bVar29 = -((char)local_e0 == '\0');
              bStack_118 = local_d0._8_1_;
              bStack_117 = local_d0._9_1_;
              bStack_116 = local_d0._10_1_;
              bStack_115 = local_d0._11_1_;
              local_120 = (byte)local_d0;
              bStack_11f = local_d0._1_1_;
              bStack_11e = local_d0._2_1_;
              bStack_11d = local_d0._3_1_;
              bStack_11c = local_d0._4_1_;
              bStack_11b = local_d0._5_1_;
              bStack_11a = local_d0._6_1_;
              bStack_119 = local_d0._7_1_;
              if ((char)local_e0 != '\0') {
                local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
              }
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x20))(plVar21);
              }
              pfVar18 = (float *)(**(code **)(*plVar20 + 0x68))(plVar20);
              fVar30 = *pfVar18;
              fVar34 = pfVar18[1];
              fVar36 = pfVar18[2];
              fVar38 = pfVar18[3];
              fVar39 = pfVar18[4];
              fVar49 = pfVar18[5];
              fVar50 = pfVar18[6];
              fVar51 = pfVar18[7];
              auVar89._0_4_ = fVar30 * fVar30 + fVar34 * fVar34;
              auVar89._4_4_ = fVar36 * fVar36 + fVar38 * fVar38;
              auVar89._8_4_ = fVar30 * fVar30 + fVar34 * fVar34;
              auVar89._12_4_ = fVar36 * fVar36 + fVar38 * fVar38;
              auVar52 = NEON_ext(auVar89,auVar89,4,1);
              auVar24._0_4_ = auVar52._0_4_ + auVar52._4_4_;
              auVar24._4_4_ = auVar52._8_4_ + auVar52._12_4_;
              auVar24._8_4_ = auVar52._0_4_ + auVar52._4_4_;
              auVar24._12_4_ = auVar52._8_4_ + auVar52._12_4_;
              auVar52 = NEON_frsqrte(auVar24,4);
              auVar66._0_4_ = auVar24._0_4_ * auVar52._0_4_;
              auVar66._4_4_ = auVar24._4_4_ * auVar52._4_4_;
              auVar66._8_4_ = auVar24._8_4_ * auVar52._8_4_;
              auVar66._12_4_ = auVar24._12_4_ * auVar52._12_4_;
              auVar67 = NEON_frsqrts(auVar52,auVar66,4);
              auVar60._0_4_ = auVar52._0_4_ * auVar67._0_4_;
              auVar60._4_4_ = auVar52._4_4_ * auVar67._4_4_;
              auVar60._8_4_ = auVar52._8_4_ * auVar67._8_4_;
              auVar60._12_4_ = auVar52._12_4_ * auVar67._12_4_;
              auVar68._0_4_ = auVar24._0_4_ * auVar60._0_4_;
              auVar68._4_4_ = auVar24._4_4_ * auVar60._4_4_;
              auVar68._8_4_ = auVar24._8_4_ * auVar60._8_4_;
              auVar68._12_4_ = auVar24._12_4_ * auVar60._12_4_;
              iVar15 = -(uint)(auVar24._0_4_ == 0.0);
              iVar55 = -(uint)(auVar24._4_4_ == 0.0);
              iVar56 = -(uint)(auVar24._8_4_ == 0.0);
              iVar57 = -(uint)(auVar24._12_4_ == 0.0);
              auVar52 = NEON_frsqrts(auVar60,auVar68,4);
              fVar30 = fVar30 * auVar60._0_4_ * auVar52._0_4_;
              fVar34 = fVar34 * auVar60._4_4_ * auVar52._4_4_;
              fVar36 = fVar36 * auVar60._8_4_ * auVar52._8_4_;
              fVar38 = fVar38 * auVar60._12_4_ * auVar52._12_4_;
              auVar25._0_4_ = fVar39 * fVar39 + fVar49 * fVar49;
              auVar25._4_4_ = fVar50 * fVar50 + fVar51 * fVar51;
              auVar25._8_4_ = fVar39 * fVar39 + fVar49 * fVar49;
              auVar25._12_4_ = fVar50 * fVar50 + fVar51 * fVar51;
              auVar52 = NEON_ext(auVar25,auVar25,4,1);
              auVar26._0_4_ = auVar52._0_4_ + auVar52._4_4_;
              auVar26._4_4_ = auVar52._8_4_ + auVar52._12_4_;
              auVar26._8_4_ = auVar52._0_4_ + auVar52._4_4_;
              auVar26._12_4_ = auVar52._8_4_ + auVar52._12_4_;
              auVar52 = NEON_frsqrte(auVar26,4);
              auVar71._0_4_ = auVar26._0_4_ * auVar52._0_4_;
              auVar71._4_4_ = auVar26._4_4_ * auVar52._4_4_;
              auVar71._8_4_ = auVar26._8_4_ * auVar52._8_4_;
              auVar71._12_4_ = auVar26._12_4_ * auVar52._12_4_;
              auVar67 = NEON_frsqrts(auVar52,auVar71,4);
              auVar69._0_4_ = auVar52._0_4_ * auVar67._0_4_;
              auVar69._4_4_ = auVar52._4_4_ * auVar67._4_4_;
              auVar69._8_4_ = auVar52._8_4_ * auVar67._8_4_;
              auVar69._12_4_ = auVar52._12_4_ * auVar67._12_4_;
              auVar72._0_4_ = auVar26._0_4_ * auVar69._0_4_;
              auVar72._4_4_ = auVar26._4_4_ * auVar69._4_4_;
              auVar72._8_4_ = auVar26._8_4_ * auVar69._8_4_;
              auVar72._12_4_ = auVar26._12_4_ * auVar69._12_4_;
              iVar58 = -(uint)(auVar26._0_4_ == 0.0);
              iVar63 = -(uint)(auVar26._4_4_ == 0.0);
              iVar64 = -(uint)(auVar26._8_4_ == 0.0);
              iVar65 = -(uint)(auVar26._12_4_ == 0.0);
              auVar52 = NEON_frsqrts(auVar69,auVar72,4);
              fVar39 = fVar39 * auVar69._0_4_ * auVar52._0_4_;
              fVar49 = fVar49 * auVar69._4_4_ * auVar52._4_4_;
              fVar50 = fVar50 * auVar69._8_4_ * auVar52._8_4_;
              fVar51 = fVar51 * auVar69._12_4_ * auVar52._12_4_;
              fVar31 = pfVar18[8];
              fVar35 = pfVar18[9];
              fVar37 = pfVar18[10];
              fVar75 = pfVar18[0xb] * pfVar18[0xb];
              auVar27._0_4_ = fVar31 * fVar31 + fVar35 * fVar35;
              auVar27._4_4_ = fVar37 * fVar37 + fVar75;
              auVar27._8_4_ = fVar31 * fVar31 + fVar35 * fVar35;
              auVar27._12_4_ = fVar37 * fVar37 + fVar75;
              auVar52 = NEON_ext(auVar27,auVar27,4,1);
              auVar28._0_4_ = auVar52._0_4_ + auVar52._4_4_;
              auVar28._4_4_ = auVar52._8_4_ + auVar52._12_4_;
              auVar28._8_4_ = auVar52._0_4_ + auVar52._4_4_;
              auVar28._12_4_ = auVar52._8_4_ + auVar52._12_4_;
              auVar52 = NEON_frsqrte(auVar28,4);
              auVar82._0_4_ = auVar28._0_4_ * auVar52._0_4_;
              auVar82._4_4_ = auVar28._4_4_ * auVar52._4_4_;
              auVar82._8_4_ = auVar28._8_4_ * auVar52._8_4_;
              auVar82._12_4_ = auVar28._12_4_ * auVar52._12_4_;
              auVar67 = NEON_frsqrts(auVar52,auVar82,4);
              auVar76._0_4_ = auVar52._0_4_ * auVar67._0_4_;
              auVar76._4_4_ = auVar52._4_4_ * auVar67._4_4_;
              auVar76._8_4_ = auVar52._8_4_ * auVar67._8_4_;
              auVar76._12_4_ = auVar52._12_4_ * auVar67._12_4_;
              auVar83._0_4_ = auVar28._0_4_ * auVar76._0_4_;
              auVar83._4_4_ = auVar28._4_4_ * auVar76._4_4_;
              auVar83._8_4_ = auVar28._8_4_ * auVar76._8_4_;
              auVar83._12_4_ = auVar28._12_4_ * auVar76._12_4_;
              auVar52 = NEON_frsqrts(auVar76,auVar83,4);
              fVar80 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                       CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                ~(byte)((uint)iVar15 >> 0x10),
                                                CONCAT11((byte)((uint)fVar30 >> 8) &
                                                         ~(byte)((uint)iVar15 >> 8),
                                                         SUB41(fVar30,0) & ~(byte)iVar15)));
              auVar81._0_8_ =
                   CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                            CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                                     CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar55 >> 8)
                                              ,CONCAT14(SUB41(fVar34,0) & ~(byte)iVar55,fVar80))));
              auVar81[8] = SUB41(fVar36,0) & ~(byte)iVar56;
              auVar81[9] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar56 >> 8);
              auVar81[10] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
              auVar81[0xb] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
              auVar84[0xc] = SUB41(fVar38,0) & ~(byte)iVar57;
              auVar84._0_12_ = auVar81;
              auVar84[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar57 >> 8);
              auVar84[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
              auVar84[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
              iVar15 = -(uint)(auVar28._0_4_ == 0.0);
              iVar55 = -(uint)(auVar28._4_4_ == 0.0);
              iVar56 = -(uint)(auVar28._8_4_ == 0.0);
              fVar75 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                                       CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                                ~(byte)((uint)iVar58 >> 0x10),
                                                CONCAT11((byte)((uint)fVar39 >> 8) &
                                                         ~(byte)((uint)iVar58 >> 8),
                                                         SUB41(fVar39,0) & ~(byte)iVar58)));
              auVar53._0_8_ =
                   CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                            CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                                     CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar63 >> 8)
                                              ,CONCAT14(SUB41(fVar49,0) & ~(byte)iVar63,fVar75))));
              auVar53[8] = SUB41(fVar50,0) & ~(byte)iVar64;
              auVar53[9] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar64 >> 8);
              auVar53[10] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
              auVar53[0xb] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
              auVar53[0xc] = SUB41(fVar51,0) & ~(byte)iVar65;
              auVar53[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar65 >> 8);
              auVar53[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
              auVar53[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
              fVar31 = fVar31 * auVar76._0_4_ * auVar52._0_4_;
              fVar35 = fVar35 * auVar76._4_4_ * auVar52._4_4_;
              fVar37 = fVar37 * auVar76._8_4_ * auVar52._8_4_;
              fVar49 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                       CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                                ~(byte)((uint)iVar15 >> 0x10),
                                                CONCAT11((byte)((uint)fVar31 >> 8) &
                                                         ~(byte)((uint)iVar15 >> 8),
                                                         SUB41(fVar31,0) & ~(byte)iVar15)));
              auVar59._0_8_ =
                   CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                            CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                                     CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar55 >> 8)
                                              ,CONCAT14(SUB41(fVar35,0) & ~(byte)iVar55,fVar49))));
              auVar59[8] = SUB41(fVar37,0) & ~(byte)iVar56;
              auVar59[9] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar56 >> 8);
              auVar59[10] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
              auVar59[0xb] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
              auVar52 = NEON_fmov(0x3f800000,4);
              fVar30 = (float)((ulong)auVar53._0_8_ >> 0x20);
              fVar39 = auVar59._8_4_;
              fVar34 = auVar52._0_4_ + (float)_DAT_03cab3a0 * fVar80 + (float)_DAT_03cac210 * fVar30
                       + (float)_DAT_03cabb00 * fVar39;
              fVar36 = auVar52._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar80 +
                       (float)((ulong)_DAT_03cac210 >> 0x20) * fVar30 +
                       (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar39;
              fVar38 = auVar52._8_4_ + (float)_UNK_03cab3a8 * fVar80 + (float)_UNK_03cac218 * fVar30
                       + (float)_UNK_03cabb08 * fVar39;
              fVar39 = auVar52._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar80 +
                       (float)((ulong)_UNK_03cac218 >> 0x20) * fVar30 +
                       (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar39;
              fVar50 = (float)((ulong)auVar59._0_8_ >> 0x20);
              auVar52 = NEON_fmov(0x40800000,4);
              auVar70._0_4_ = SQRT(fVar34) * 0.5 * auVar52._0_4_;
              auVar70._4_4_ = SQRT(fVar36) * 0.5 * auVar52._4_4_;
              auVar70._8_4_ = SQRT(fVar38) * 0.5 * auVar52._8_4_;
              auVar70._12_4_ = SQRT(fVar39) * 0.5 * auVar52._12_4_;
              auVar52 = NEON_frecpe(auVar70,4);
              auVar87 = NEON_ext(auVar53,auVar53,8,1);
              auVar89 = NEON_ext(auVar84,auVar84,8,1);
              auVar67 = NEON_frecps(auVar52,auVar70,4);
              auVar73._0_4_ = auVar52._0_4_ * auVar67._0_4_;
              auVar73._4_4_ = auVar52._4_4_ * auVar67._4_4_;
              auVar73._8_4_ = auVar52._8_4_ * auVar67._8_4_;
              auVar73._12_4_ = auVar52._12_4_ * auVar67._12_4_;
              fVar30 = auVar87._0_4_;
              auVar52 = NEON_frecps(auVar73,auVar70,4);
              fVar51 = auVar73._0_4_ * auVar52._0_4_;
              fVar31 = auVar73._4_4_ * auVar52._4_4_;
              fVar35 = auVar73._8_4_ * auVar52._8_4_;
              fVar37 = auVar73._12_4_ * auVar52._12_4_;
              fVar86 = (float)((ulong)auVar81._0_8_ >> 0x20);
              fVar80 = auVar89._0_4_ + fVar49;
              auVar6._8_4_ = fVar30 + -fVar50;
              auVar6._4_4_ = fVar80;
              auVar88._4_4_ = fVar34;
              auVar88._0_4_ = fVar34;
              auVar88._8_4_ = fVar34;
              auVar88._12_4_ = fVar34;
              auVar52._4_4_ = fVar36;
              auVar52._0_4_ = fVar36;
              auVar52._8_4_ = fVar36;
              auVar52._12_4_ = fVar36;
              auVar67._4_4_ = -(uint)(fVar34 <= fVar36);
              auVar67._0_4_ = -(uint)(fVar34 <= fVar36);
              auVar67._8_4_ = -(uint)(fVar34 <= fVar36);
              auVar67._12_4_ = -(uint)(fVar34 <= fVar36);
              auVar88 = auVar88 ^ (auVar88 ^ auVar52) & auVar67;
              auVar90._4_4_ = fVar38;
              auVar90._0_4_ = fVar38;
              auVar90._8_4_ = fVar38;
              auVar90._12_4_ = fVar38;
              auVar6._0_4_ = (fVar86 + fVar75) * fVar51;
              auVar77._0_8_ = auVar6._0_8_ << 0x20;
              auVar77._8_4_ = fVar80 * fVar51;
              auVar77._12_4_ = (fVar30 + -fVar50) * fVar51;
              auVar100._0_4_ = (fVar86 + fVar75) * fVar31;
              auVar100._4_4_ = fVar31 * 0.0;
              auVar100._8_4_ = (fVar30 + fVar50) * fVar31;
              auVar100._12_4_ = (fVar49 + -auVar81._8_4_) * fVar31;
              fVar104 = (float)_UNK_03cab648;
              fVar105 = (float)((ulong)_UNK_03cab648 >> 0x20);
              fVar80 = (float)_DAT_03cab640;
              fVar103 = (float)((ulong)_DAT_03cab640 >> 0x20);
              auVar78._4_12_ = auVar77._4_12_;
              auVar78._0_4_ = SQRT(fVar34) * 0.5;
              auVar61._0_4_ = (auVar89._0_4_ + fVar49) * fVar35;
              auVar61._4_4_ = (fVar30 + fVar50) * fVar35;
              auVar61._12_4_ = (fVar86 - fVar75) * fVar35;
              auVar101._8_8_ = auVar100._8_8_;
              auVar101._4_4_ = SQRT(fVar36) * 0.5;
              auVar101._0_4_ = auVar100._0_4_;
              auVar61._8_4_ = SQRT(fVar38) * 0.5;
              auVar54._0_4_ = (fVar30 - fVar50) * fVar37;
              auVar54._4_4_ = (fVar49 - auVar81._8_4_) * fVar37;
              auVar54._8_4_ = (fVar86 - fVar75) * fVar37;
              auVar87._4_4_ = -(uint)(fVar34 <= fVar36);
              auVar87._0_4_ = -(uint)(fVar34 <= fVar36);
              auVar87._8_4_ = -(uint)(fVar34 <= fVar36);
              auVar87._12_4_ = -(uint)(fVar34 <= fVar36);
              auVar102._0_4_ = -(uint)(auVar88._0_4_ <= fVar38);
              auVar102._4_4_ = -(uint)(auVar88._4_4_ <= fVar38);
              auVar102._8_4_ = -(uint)(auVar88._8_4_ <= fVar38);
              auVar102._12_4_ = -(uint)(auVar88._12_4_ <= fVar38);
              auVar88 = auVar88 ^ (auVar88 ^ auVar90) & auVar102;
              auVar54._12_4_ = SQRT(fVar39) * 0.5;
              auVar61 = auVar61 ^ (auVar61 ^ auVar78 ^ (auVar78 ^ auVar101) & auVar87) & ~auVar102;
              fVar30 = (float)CONCAT13(bStack_11d & ~bVar29,
                                       CONCAT12(bStack_11e & ~bVar29,
                                                CONCAT11(bStack_11f & ~bVar29,local_120 & ~bVar29)))
              ;
              fVar34 = (float)CONCAT13(bStack_119 & ~bVar29,
                                       CONCAT12(bStack_11a & ~bVar29,
                                                CONCAT11(bStack_11b & ~bVar29,bStack_11c & ~bVar29))
                                      );
              fVar36 = (float)CONCAT13(bStack_115 & ~bVar29,
                                       CONCAT12(bStack_116 & ~bVar29,
                                                (short)(CONCAT12(bStack_117 & ~bVar29,
                                                                 CONCAT11(bStack_118 & ~bVar29,
                                                                          bStack_119 & ~bVar29)) >>
                                                       8)));
              auVar32._0_4_ = -(uint)(auVar88._0_4_ <= fVar39);
              auVar32._4_4_ = -(uint)(auVar88._4_4_ <= fVar39);
              auVar32._8_4_ = -(uint)(auVar88._8_4_ <= fVar39);
              auVar32._12_4_ = -(uint)(auVar88._12_4_ <= fVar39);
              auVar61 = auVar61 ^ (auVar61 ^ auVar54) & auVar32;
              fVar39 = auVar61._0_4_;
              auVar41._0_4_ = -fVar39;
              fVar49 = auVar61._4_4_;
              fVar31 = -fVar49;
              fVar50 = auVar61._8_4_;
              auVar40._8_4_ = -fVar50;
              fVar51 = auVar61._12_4_;
              auVar79._4_4_ = fVar50;
              auVar79._0_4_ = fVar50;
              auVar79._8_4_ = fVar50;
              auVar79._12_4_ = fVar50;
              auVar91._4_4_ = fVar36;
              auVar91._0_4_ = fVar36;
              auVar91._8_4_ = fVar36;
              auVar91._12_4_ = fVar36;
              auVar52 = NEON_ext(auVar79,auVar61,0xc,1);
              auVar85._4_4_ = fVar49;
              auVar85._0_4_ = fVar49;
              auVar85._8_4_ = fVar49;
              auVar85._12_4_ = fVar49;
              auVar92._4_12_ = auVar91._4_12_;
              auVar92._0_4_ = fVar30;
              auVar94._0_8_ = auVar92._0_8_;
              auVar94._8_4_ = fVar34;
              auVar94._12_4_ = fVar36;
              auVar93._8_8_ = auVar94._8_8_;
              auVar93._4_4_ = fVar36;
              auVar93._0_4_ = fVar30;
              auVar95._0_12_ = auVar93._0_12_;
              auVar95._12_4_ = fVar36;
              auVar89 = NEON_ext(auVar95,auVar95,8,1);
              fVar38 = auVar89._0_4_;
              auVar96._4_12_ = auVar95._4_12_;
              auVar96._0_4_ = fVar38;
              auVar98._0_8_ = auVar96._0_8_;
              auVar98._8_4_ = auVar89._8_4_;
              auVar98._12_4_ = fVar36;
              auVar97._8_8_ = auVar98._8_8_;
              auVar97._4_4_ = fVar30;
              auVar97._0_4_ = fVar38;
              auVar99._0_12_ = auVar97._0_12_;
              auVar99._12_4_ = fVar34;
              auVar67 = NEON_ext(auVar85,auVar52,0xc,1);
              auVar87 = NEON_ext(auVar99,auVar89,8,1);
              auVar87 = NEON_ext(auVar87,auVar87,0xc,1);
              auVar74._0_4_ =
                   (fVar30 * fVar51 + fVar39 * fVar80 * 0.0 + auVar87._0_4_ * auVar67._0_4_ * fVar80
                   ) - auVar52._0_4_ * fVar38;
              auVar74._4_4_ =
                   (fVar34 * fVar51 + fVar49 * fVar103 * 0.0 +
                   auVar87._4_4_ * auVar67._4_4_ * fVar103) - auVar52._4_4_ * auVar89._4_4_;
              auVar74._8_4_ =
                   (fVar36 * fVar51 + fVar50 * fVar104 * 0.0 +
                   auVar87._8_4_ * auVar67._8_4_ * fVar104) - auVar52._8_4_ * auVar89._8_4_;
              auVar74._12_4_ =
                   (fVar51 * 0.0 + fVar30 * fVar39 * fVar105 +
                   auVar87._12_4_ * auVar67._12_4_ * fVar105) - auVar52._12_4_ * auVar89._12_4_;
              auVar33._4_4_ = auVar74._8_4_;
              auVar33._0_4_ = auVar74._8_4_;
              auVar33._8_4_ = auVar74._8_4_;
              auVar33._12_4_ = auVar74._8_4_;
              auVar40._4_4_ = auVar40._8_4_;
              auVar40._0_4_ = auVar40._8_4_;
              auVar40._12_4_ = auVar40._8_4_;
              auVar62._4_4_ = auVar74._4_4_;
              auVar62._0_4_ = auVar74._4_4_;
              auVar62._8_4_ = auVar74._4_4_;
              auVar62._12_4_ = auVar74._4_4_;
              auVar41._4_12_ = auVar40._4_12_;
              auVar43._0_8_ = auVar41._0_8_;
              auVar43._8_4_ = fVar31;
              auVar43._12_4_ = auVar40._8_4_;
              auVar42._8_8_ = auVar43._8_8_;
              auVar42._4_4_ = auVar40._8_4_;
              auVar42._0_4_ = auVar41._0_4_;
              auVar44._0_12_ = auVar42._0_12_;
              auVar44._12_4_ = auVar40._8_4_;
              auVar52 = NEON_ext(auVar33,auVar74,0xc,1);
              auVar87 = NEON_ext(auVar62,auVar52,0xc,1);
              auVar89 = NEON_ext(auVar44,auVar44,8,1);
              fVar30 = auVar89._0_4_;
              auVar45._4_12_ = auVar44._4_12_;
              auVar45._0_4_ = fVar30;
              auVar47._0_8_ = auVar45._0_8_;
              auVar47._8_4_ = auVar89._8_4_;
              auVar47._12_4_ = auVar40._8_4_;
              auVar46._8_8_ = auVar47._8_8_;
              auVar46._4_4_ = auVar41._0_4_;
              auVar46._0_4_ = fVar30;
              auVar48._0_12_ = auVar46._0_12_;
              auVar48._12_4_ = fVar31;
              auVar67 = NEON_ext(auVar48,auVar89,8,1);
              auVar67 = NEON_ext(auVar67,auVar67,0xc,1);
              fVar30 = (auVar41._0_4_ * auVar74._12_4_ + fVar51 * auVar74._0_4_ * fVar80 +
                       auVar67._0_4_ * auVar87._0_4_ * fVar80) - auVar52._0_4_ * fVar30;
              fVar34 = (fVar31 * auVar74._12_4_ + fVar51 * auVar74._4_4_ * fVar103 +
                       auVar67._4_4_ * auVar87._4_4_ * fVar103) - auVar52._4_4_ * auVar89._4_4_;
              fVar36 = (auVar40._8_4_ * auVar74._12_4_ + fVar51 * auVar74._8_4_ * fVar104 +
                       auVar67._8_4_ * auVar87._8_4_ * fVar104) - auVar52._8_4_ * auVar89._8_4_;
              bStack_118 = SUB41(fVar36,0);
              bStack_117 = (byte)((uint)fVar36 >> 8);
              bStack_116 = (byte)((uint)fVar36 >> 0x10);
              bStack_115 = (byte)((uint)fVar36 >> 0x18);
              bStack_11c = SUB41(fVar34,0);
              bStack_11b = (byte)((uint)fVar34 >> 8);
              bStack_11a = (byte)((uint)fVar34 >> 0x10);
              bStack_119 = (byte)((uint)fVar34 >> 0x18);
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
              uVar17 = CONCAT17(bStack_119,
                                CONCAT16(bStack_11a,CONCAT15(bStack_11b,CONCAT14(bStack_11c,fVar30))
                                        ));
              auVar9[8] = bStack_118;
              auVar9._0_8_ = uVar17;
              auVar9[9] = bStack_117;
              auVar9[10] = bStack_116;
              auVar9[0xb] = bStack_115;
              local_110 = CONCAT44(local_110._4_4_ + (float)((ulong)uVar17 >> 0x20),
                                   (float)local_110 + fVar30);
              uStack_108 = (ulong)(uint)(fVar7 + auVar9._8_4_);
              (**(code **)(*plVar20 + 0x60))(plVar20);
            }
            break;
          }
          sVar23 = sVar4;
        } while (sVar4 != 0);
      }
    }
    puVar16 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar23 = *psVar1;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar23 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar15 = *piVar2;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar19 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar19;
          local_e0 = (long *)*puVar16;
          FUN_00c44438(lVar19 + 0x8040,&local_e0);
        }
      }
      else if (sVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  local_e0 = (long *)0x59c600286cc89bce;
  puVar16 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_e0);
  *puVar16 = PTR_LAB_047dcdd0;
  puVar16[3] = uStack_108;
  puVar16[2] = local_110;
  return;
}


