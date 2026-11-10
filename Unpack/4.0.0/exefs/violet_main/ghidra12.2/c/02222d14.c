/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02222d14; name: FUN_02222d14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02222d14(undefined8 *param_1)

{
  short *psVar1;
  ulong *puVar2;
  ulong *puVar3;
  long **pplVar4;
  short sVar5;
  char cVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  int *piVar20;
  long lVar21;
  int iVar22;
  short sVar23;
  ushort *puVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  byte bVar28;
  undefined1 auVar29 [12];
  float fVar31;
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  float fVar51;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  float fVar52;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 in_q3 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  float local_120;
  float fStack_11c;
  float fStack_118;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *local_e0 [2];
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  ulong *local_60;
  undefined8 uStack_58;
  
  local_80 = param_1[0x22];
  uStack_78 = param_1[0x23];
  local_70 = param_1[0x24];
  plVar25 = (long *)param_1[0x25];
  local_68 = plVar25;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_60 = (ulong *)0x0;
    uStack_58 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_60,param_1 + 6,&local_80);
    plVar25 = local_68;
  }
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  if (local_60 != (ulong *)0x0) {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar23 = *(short *)((long)local_60 + 0x1a);
LAB_02222dcc:
      sVar5 = *psVar1;
      if (sVar5 == sVar23) {
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar23 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_02222df0;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02222df0:
        bVar13 = false;
      }
      if (!bVar13) goto code_r0x02222df8;
      uVar18 = local_60[2];
      if (uVar18 == 0) goto LAB_022232a0;
      local_90 = 0.0;
      fStack_8c = 0.0;
      fStack_88 = 0.0;
      fStack_84 = 0.0;
      FUN_02123748(&local_100,param_1,1);
      cVar7 = (char)local_100;
      if ((char)local_100 != '\0') {
        local_100 = local_100 & 0xffffffffffffff00;
      }
      local_a0 = (ulong *)0x0;
      uStack_98 = 0;
      FUN_00d0a71c(&local_a0,&local_60);
      lVar21 = FUN_01180e7c(param_1,&local_a0);
      puVar2 = local_a0;
      if (local_a0 != (ulong *)0x0) {
        puVar3 = local_a0 + 3;
        do {
          sVar23 = (short)*puVar3;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *(short *)puVar3 = sVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar23 == 1) {
          piVar20 = (int *)((long)local_a0 + 0x1c);
          do {
            iVar15 = *piVar20;
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar13) {
              *piVar20 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar15 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_100 = *puVar2;
            FUN_00c44438(lVar16 + 0x8040,&local_100);
          }
        }
        else if (sVar23 == 0) goto LAB_022232c0;
      }
      if (lVar21 != 0) {
        bVar28 = -(cVar7 == '\0');
        fVar26 = (float)CONCAT13(local_f0._3_1_ & ~bVar28,
                                 CONCAT12(local_f0._2_1_ & ~bVar28,
                                          CONCAT11(local_f0._1_1_ & ~bVar28,(byte)local_f0 & ~bVar28
                                                  )));
        auVar29._0_8_ =
             CONCAT17(local_f0._7_1_ & ~bVar28,
                      CONCAT16(local_f0._6_1_ & ~bVar28,
                               CONCAT15(local_f0._5_1_ & ~bVar28,
                                        CONCAT14(local_f0._4_1_ & ~bVar28,fVar26))));
        auVar29[8] = local_f0._8_1_ & ~bVar28;
        auVar29[9] = local_f0._9_1_ & ~bVar28;
        auVar29[10] = local_f0._10_1_ & ~bVar28;
        auVar29[0xb] = local_f0._11_1_ & ~bVar28;
        auVar30[0xc] = local_f0._12_1_ & ~bVar28;
        auVar30._0_12_ = auVar29;
        auVar30[0xd] = local_f0._13_1_ & ~bVar28;
        auVar30[0xe] = local_f0._14_1_ & ~bVar28;
        auVar30[0xf] = local_f0._15_1_ & ~bVar28;
        uVar19 = *(undefined8 *)(lVar21 + 0xc0);
        local_90 = (float)uVar19;
        fStack_8c = (float)((ulong)uVar19 >> 0x20);
        fStack_88 = (float)*(undefined8 *)(lVar21 + 200);
        fStack_84 = (float)((ulong)*(undefined8 *)(lVar21 + 200) >> 0x20);
        uVar14 = FUN_012595d8(param_1,0x300000001);
        local_b0 = auVar29._0_8_;
        uStack_a8 = auVar30._8_8_;
        if (((uVar14 & 0xff) != 0) && (0xff < uVar14)) {
          auVar64._0_8_ =
               CONCAT44((float)((ulong)auVar29._0_8_ >> 0x20) + fStack_8c,fVar26 + local_90);
          auVar64._8_4_ = auVar29._8_4_ + fStack_88;
          auVar64._12_4_ = auVar30._12_4_ + fStack_84;
          uStack_a8 = auVar64._8_8_;
          local_b0 = auVar64._0_8_;
        }
        FUN_01340a44(&local_100,param_1,0x200000001);
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        bVar13 = (char)local_100 != '\0';
        puVar17 = (undefined8 *)PTR_DAT_047d3e30;
        if (bVar13) {
          puVar17 = &local_f8;
        }
        local_d0 = *puVar17;
        puVar17 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
        if (bVar13) {
          puVar17 = &local_f0;
        }
        local_c8 = (char *)*puVar17;
        puVar17 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
        if (bVar13) {
          puVar17 = &uStack_e8;
        }
        local_c0 = *puVar17;
        pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
        if (bVar13) {
          pplVar4 = local_e0;
        }
        local_b8 = *pplVar4;
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x18))();
        }
        if ((char)local_100 != '\0') {
          if (local_e0[0] != (long *)0x0) {
            (**(code **)(*local_e0[0] + 0x20))();
          }
          local_100 = local_100 & 0xffffffffffffff00;
        }
        puVar9 = PTR_LAB_047dcdd0;
        if (*local_c8 == '\0') {
          auVar83 = ZEXT816(0);
        }
        else {
          lVar16 = FUN_01104bd8(uVar18 + 0xe0,&local_100);
          plVar25 = (long *)(uVar18 + 0xd0);
          if (lVar16 != 0) {
            plVar25 = (long *)(lVar16 + 0x128);
          }
          (**(code **)(*plVar25 + 0x48))(plVar25,&local_d0);
          fStack_118 = in_q3._8_4_;
          local_120 = in_q3._0_4_;
          fStack_11c = in_q3._4_4_;
          local_100 = 0xc801830bf868d88f;
          puVar17 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_100);
          *puVar17 = puVar9;
          puVar17[3] = (ulong)(uint)fStack_118;
          puVar17[2] = in_q3._0_8_;
          auVar30 = FUN_0211fe50(&local_b0);
          fVar27 = auVar30._0_4_;
          auVar35._0_4_ = -fVar27;
          fVar73 = auVar30._4_4_;
          fVar51 = -fVar73;
          fVar69 = auVar30._8_4_;
          auVar34._8_4_ = -fVar69;
          fVar32 = auVar30._12_4_;
          auVar58._4_4_ = fVar69;
          auVar58._0_4_ = fVar69;
          auVar58._8_4_ = fVar69;
          auVar58._12_4_ = fVar69;
          auVar30 = NEON_ext(auVar58,auVar30,0xc,1);
          auVar74._4_4_ = fStack_118;
          auVar74._0_4_ = fStack_118;
          auVar74._8_4_ = fStack_118;
          auVar74._12_4_ = fStack_118;
          auVar63._4_4_ = fVar73;
          auVar63._0_4_ = fVar73;
          auVar63._8_4_ = fVar73;
          auVar63._12_4_ = fVar73;
          auVar75._4_12_ = auVar74._4_12_;
          auVar75._0_4_ = local_120;
          auVar77._0_8_ = auVar75._0_8_;
          auVar77._8_4_ = fStack_11c;
          auVar77._12_4_ = fStack_118;
          auVar76._8_8_ = auVar77._8_8_;
          auVar76._4_4_ = fStack_118;
          auVar76._0_4_ = local_120;
          auVar78._0_12_ = auVar76._0_12_;
          auVar78._12_4_ = fStack_118;
          fVar87 = (float)_UNK_03cab648;
          fVar88 = (float)((ulong)_UNK_03cab648 >> 0x20);
          fVar85 = (float)_DAT_03cab640;
          fVar86 = (float)((ulong)_DAT_03cab640 >> 0x20);
          auVar89 = NEON_ext(auVar78,auVar78,8,1);
          fVar26 = auVar89._0_4_;
          auVar79._4_12_ = auVar78._4_12_;
          auVar79._0_4_ = fVar26;
          fVar71 = auVar89._8_4_;
          auVar81._0_8_ = auVar79._0_8_;
          auVar81._8_4_ = fVar71;
          auVar81._12_4_ = fStack_118;
          auVar80._8_8_ = auVar81._8_8_;
          auVar80._4_4_ = local_120;
          auVar80._0_4_ = fVar26;
          auVar82._0_12_ = auVar80._0_12_;
          auVar82._12_4_ = fStack_11c;
          auVar64 = NEON_ext(auVar63,auVar30,0xc,1);
          auVar83 = NEON_ext(auVar82,auVar89,8,1);
          auVar84 = NEON_ext(auVar83,auVar83,0xc,1);
          fVar66 = (local_120 * fVar32 + fVar27 * fVar85 * 0.0 +
                   auVar84._0_4_ * auVar64._0_4_ * fVar85) - auVar30._0_4_ * fVar26;
          fVar68 = (fStack_11c * fVar32 + fVar73 * fVar86 * 0.0 +
                   auVar84._4_4_ * auVar64._4_4_ * fVar86) - auVar30._4_4_ * auVar89._4_4_;
          fVar70 = (fStack_118 * fVar32 + fVar69 * fVar87 * 0.0 +
                   auVar84._8_4_ * auVar64._8_4_ * fVar87) - auVar30._8_4_ * fVar71;
          fVar72 = (fVar32 * 0.0 + local_120 * fVar27 * fVar88 +
                   auVar84._12_4_ * auVar64._12_4_ * fVar88) - auVar30._12_4_ * auVar89._12_4_;
          auVar34._4_4_ = auVar34._8_4_;
          auVar34._0_4_ = auVar34._8_4_;
          auVar34._12_4_ = auVar34._8_4_;
          auVar57._4_4_ = fVar70;
          auVar57._0_4_ = fVar70;
          auVar57._8_4_ = fVar70;
          auVar57._12_4_ = fVar70;
          auVar40._4_4_ = fVar68;
          auVar40._0_4_ = fVar66;
          auVar40._8_4_ = fVar70;
          auVar40._12_4_ = fVar72;
          auVar30 = NEON_ext(auVar57,auVar40,0xc,1);
          auVar59._4_4_ = fVar68;
          auVar59._0_4_ = fVar68;
          auVar59._8_4_ = fVar68;
          auVar59._12_4_ = fVar68;
          auVar35._4_12_ = auVar34._4_12_;
          auVar54._0_8_ = auVar35._0_8_;
          auVar54._8_4_ = fVar51;
          auVar54._12_4_ = auVar34._8_4_;
          auVar53._8_8_ = auVar54._8_8_;
          auVar53._4_4_ = auVar34._8_4_;
          auVar53._0_4_ = auVar35._0_4_;
          auVar60._0_12_ = auVar53._0_12_;
          auVar60._12_4_ = auVar34._8_4_;
          auVar53 = NEON_ext(auVar60,auVar60,8,1);
          fVar27 = auVar53._0_4_;
          auVar36._4_12_ = auVar60._4_12_;
          auVar36._0_4_ = fVar27;
          auVar38._0_8_ = auVar36._0_8_;
          auVar38._8_4_ = auVar53._8_4_;
          auVar38._12_4_ = auVar34._8_4_;
          auVar37._8_8_ = auVar38._8_8_;
          auVar37._4_4_ = auVar35._0_4_;
          auVar37._0_4_ = fVar27;
          auVar39._0_12_ = auVar37._0_12_;
          auVar39._12_4_ = fVar51;
          auVar60 = NEON_ext(auVar59,auVar30,0xc,1);
          auVar64 = NEON_ext(auVar39,auVar53,8,1);
          auVar40 = NEON_ext(auVar64,auVar64,0xc,1);
          auVar64 = FUN_0211fe50(&local_90);
          fVar73 = auVar64._0_4_;
          auVar42._0_4_ = -fVar73;
          fVar69 = auVar64._4_4_;
          fVar52 = -fVar69;
          fVar31 = auVar64._8_4_;
          auVar41._8_4_ = -fVar31;
          fVar33 = auVar64._12_4_;
          auVar61._4_4_ = fVar31;
          auVar61._0_4_ = fVar31;
          auVar61._8_4_ = fVar31;
          auVar61._12_4_ = fVar31;
          auVar64 = NEON_ext(auVar61,auVar64,0xc,1);
          auVar65._4_4_ = fVar69;
          auVar65._0_4_ = fVar69;
          auVar65._8_4_ = fVar69;
          auVar65._12_4_ = fVar69;
          auVar83 = NEON_ext(auVar65,auVar64,0xc,1);
          auVar41._4_4_ = auVar41._8_4_;
          auVar41._0_4_ = auVar41._8_4_;
          auVar41._12_4_ = auVar41._8_4_;
          auVar42._4_12_ = auVar41._4_12_;
          auVar44._0_8_ = auVar42._0_8_;
          auVar44._8_4_ = fVar52;
          auVar44._12_4_ = auVar41._8_4_;
          auVar43._8_8_ = auVar44._8_8_;
          auVar43._4_4_ = auVar41._8_4_;
          auVar43._0_4_ = auVar42._0_4_;
          auVar45._0_12_ = auVar43._0_12_;
          auVar45._12_4_ = auVar41._8_4_;
          fVar67 = (local_120 * fVar33 + fVar73 * fVar85 * 0.0 +
                   auVar84._0_4_ * auVar83._0_4_ * fVar85) - auVar64._0_4_ * fVar26;
          fVar69 = (fStack_11c * fVar33 + fVar69 * fVar86 * 0.0 +
                   auVar84._4_4_ * auVar83._4_4_ * fVar86) - auVar64._4_4_ * auVar89._4_4_;
          fVar71 = (fStack_118 * fVar33 + fVar31 * fVar87 * 0.0 +
                   auVar84._8_4_ * auVar83._8_4_ * fVar87) - auVar64._8_4_ * fVar71;
          fVar73 = (fVar33 * 0.0 + local_120 * fVar73 * fVar88 +
                   auVar84._12_4_ * auVar83._12_4_ * fVar88) - auVar64._12_4_ * auVar89._12_4_;
          auVar89._4_4_ = fVar71;
          auVar89._0_4_ = fVar71;
          auVar89._8_4_ = fVar71;
          auVar89._12_4_ = fVar71;
          auVar62._4_4_ = fVar69;
          auVar62._0_4_ = fVar69;
          auVar62._8_4_ = fVar69;
          auVar62._12_4_ = fVar69;
          auVar54 = NEON_ext(auVar45,auVar45,8,1);
          auVar84._4_4_ = fVar69;
          auVar84._0_4_ = fVar67;
          auVar84._8_4_ = fVar71;
          auVar84._12_4_ = fVar73;
          auVar64 = NEON_ext(auVar89,auVar84,0xc,1);
          fVar26 = auVar54._0_4_;
          auVar46._4_12_ = auVar45._4_12_;
          auVar46._0_4_ = fVar26;
          auVar48._0_8_ = auVar46._0_8_;
          auVar48._8_4_ = auVar54._8_4_;
          auVar48._12_4_ = auVar41._8_4_;
          auVar47._8_8_ = auVar48._8_8_;
          auVar47._4_4_ = auVar42._0_4_;
          auVar47._0_4_ = fVar26;
          auVar49._0_12_ = auVar47._0_12_;
          auVar49._12_4_ = fVar52;
          auVar89 = NEON_ext(auVar62,auVar64,0xc,1);
          auVar83 = NEON_ext(auVar49,auVar54,8,1);
          auVar84 = NEON_ext(auVar83,auVar83,0xc,1);
          auVar50._0_8_ =
               CONCAT44(*(float *)(lVar21 + 0xa4) * *(float *)(lVar21 + 0xb4),
                        *(float *)(lVar21 + 0xa0) * *(float *)(lVar21 + 0xb0));
          auVar50._8_4_ = *(float *)(lVar21 + 0xa8) * *(float *)(lVar21 + 0xb8);
          auVar50._12_4_ = *(float *)(lVar21 + 0xac) * *(float *)(lVar21 + 0xbc);
          auVar55._8_8_ = auVar50._8_8_;
          auVar55._0_8_ = auVar50._0_8_;
          auVar56._0_12_ = auVar55._0_12_;
          auVar56._12_4_ = 0;
          auVar83 = NEON_ext(auVar56,auVar50,0xc,1);
          auVar57 = NEON_ext(auVar83,auVar56,4,1);
          auVar83 = NEON_ext(auVar83,auVar83,8,1);
          auVar57 = NEON_ext(auVar57,auVar83,0xc,1);
          auVar83._0_4_ =
               auVar57._0_4_ *
               (((auVar42._0_4_ * fVar73 + fVar33 * fVar67 * fVar85 +
                 auVar84._0_4_ * auVar89._0_4_ * fVar85) - auVar64._0_4_ * fVar26) -
               ((auVar35._0_4_ * fVar72 + fVar32 * fVar66 * fVar85 +
                auVar40._0_4_ * auVar60._0_4_ * fVar85) - auVar30._0_4_ * fVar27));
          auVar83._4_4_ =
               auVar57._4_4_ *
               (((fVar52 * fVar73 + fVar33 * fVar69 * fVar86 +
                 auVar84._4_4_ * auVar89._4_4_ * fVar86) - auVar64._4_4_ * auVar54._4_4_) -
               ((fVar51 * fVar72 + fVar32 * fVar68 * fVar86 + auVar40._4_4_ * auVar60._4_4_ * fVar86
                ) - auVar30._4_4_ * auVar53._4_4_));
          auVar83._8_4_ =
               auVar57._8_4_ *
               (((auVar41._8_4_ * fVar73 + fVar33 * fVar71 * fVar87 +
                 auVar84._8_4_ * auVar89._8_4_ * fVar87) - auVar64._8_4_ * auVar54._8_4_) -
               ((auVar34._8_4_ * fVar72 + fVar32 * fVar70 * fVar87 +
                auVar40._8_4_ * auVar60._8_4_ * fVar87) - auVar30._8_4_ * auVar53._8_4_));
          auVar83._12_4_ = auVar57._12_4_ * 0.0;
        }
        piVar20 = (int *)*param_1;
        puVar24 = (ushort *)((long)piVar20 - (long)*piVar20);
        if (*puVar24 < 0xb) {
          iVar22 = 0;
          iVar15 = 0;
          iVar12 = 0;
          if (8 < *puVar24) goto LAB_022231c4;
        }
        else {
          iVar12 = 0;
          if ((ulong)puVar24[5] != 0) {
            iVar12 = *(int *)((long)piVar20 + (ulong)puVar24[5]);
          }
LAB_022231c4:
          iVar22 = iVar12;
          if ((ulong)puVar24[4] == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = *(int *)((long)piVar20 + (ulong)puVar24[4]);
          }
        }
        if (iVar22 - iVar15 == 1) {
          if (*local_c8 != '\0') {
            *(undefined1 *)(lVar21 + 0xe0) = 1;
            *(long *)(lVar21 + 0x98) = auVar83._8_8_;
            *(long *)(lVar21 + 0x90) = auVar83._0_8_;
          }
          *(undefined8 *)(lVar21 + 0xc0) = local_b0;
          *(undefined8 *)(lVar21 + 200) = uStack_a8;
          *(undefined1 *)(lVar21 + 0xe0) = 1;
        }
        else {
          uVar19 = CONCAT44(fStack_8c,local_90);
          auVar8._8_4_ = fStack_88;
          auVar8._0_8_ = uVar19;
          auVar8._12_4_ = fStack_84;
          local_100 = 0x306313b8c647eda4;
          puVar17 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_100);
          uVar11 = uStack_a8;
          uVar10 = local_b0;
          *puVar17 = puVar9;
          puVar17[3] = auVar8._8_8_;
          puVar17[2] = uVar19;
          local_100 = 0x621830a3d0c277e;
          puVar17 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_100);
          *puVar17 = puVar9;
          puVar17[3] = uVar11;
          puVar17[2] = uVar10;
        }
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
      }
      (**(code **)(*(long *)(uVar18 - 0x28) + 0x60))((long *)(uVar18 - 0x28));
LAB_0222329c:
      if (local_60 == (ulong *)0x0) {
        return;
      }
    }
LAB_022232a0:
    puVar3 = local_60;
    puVar2 = local_60 + 3;
    do {
      sVar23 = (short)*puVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *(short *)puVar2 = sVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 1) {
      piVar20 = (int *)((long)local_60 + 0x1c);
      do {
        iVar15 = *piVar20;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar13) {
          *piVar20 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_100 = *puVar3;
        FUN_00c44438(lVar21 + 0x8040,&local_100);
      }
    }
    else if (sVar23 == 0) {
LAB_022232c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x02222df8:
  sVar23 = sVar5;
  if (sVar5 == 0) goto LAB_0222329c;
  goto LAB_02222dcc;
}


