/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02233b1c; name: FUN_02233b1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02233b1c(long param_1)

{
  short *psVar1;
  int *piVar2;
  char **ppcVar3;
  ulong *puVar4;
  long **pplVar5;
  short sVar6;
  char cVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  bool bVar33;
  int iVar34;
  undefined8 uVar35;
  long lVar36;
  long *plVar37;
  short sVar38;
  long *plVar39;
  char *pcVar40;
  long *plVar41;
  long *plVar42;
  ulong uVar43;
  char *pcVar44;
  ulong uVar45;
  byte bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar54;
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar57;
  undefined1 auVar52 [16];
  float fVar56;
  undefined1 auVar53 [16];
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  ulong local_140;
  undefined8 uStack_138;
  ulong local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  ulong local_110;
  char *pcStack_108;
  ulong local_100;
  long *plStack_f8;
  long *local_f0 [2];
  undefined8 local_e0 [2];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  local_90 = *(undefined8 *)(param_1 + 0x110);
  uStack_88 = *(undefined8 *)(param_1 + 0x118);
  local_80 = *(undefined8 *)(param_1 + 0x120);
  plVar37 = *(long **)(param_1 + 0x128);
  local_78 = plVar37;
  if (plVar37 != (long *)0x0) {
    (**(code **)(*plVar37 + 0x18))(plVar37);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_70,param_1 + 0x30,&local_90);
    plVar37 = local_78;
  }
  if (plVar37 != (long *)0x0) {
    (**(code **)(*plVar37 + 0x20))(plVar37);
  }
  if (local_70 != (undefined8 *)0x0) {
    if (*(short *)((long)local_70 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_70 + 0x1a);
      sVar38 = *(short *)((long)local_70 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar38) {
          cVar7 = '\x01';
          bVar33 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar33) {
            *psVar1 = sVar38 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_02233c08;
          bVar33 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02233c08:
          bVar33 = false;
        }
        if (bVar33) {
          lVar36 = local_70[2];
          plVar37 = (long *)(lVar36 + -0x28);
          if (lVar36 != 0) {
            local_98 = 0;
            local_130 = 0xac4cb12c21222496;
            pcStack_128 = "ShapeType";
            local_120 = 9;
            local_118 = (long *)0x0;
            FUN_01315eac(&local_110,param_1,&local_130);
            puVar30 = PTR_DAT_047d3e28;
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar34 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar34 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar31 = PTR_DAT_047d3e30;
            bVar33 = (char)local_110 != '\0';
            ppcVar3 = (char **)PTR_DAT_047d3e30;
            if (bVar33) {
              ppcVar3 = &pcStack_108;
            }
            pcVar40 = *ppcVar3;
            puVar4 = (ulong *)(PTR_DAT_047d3e30 + 8);
            if (bVar33) {
              puVar4 = &local_100;
            }
            pcVar44 = (char *)*puVar4;
            pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x18);
            if (bVar33) {
              pplVar5 = local_f0;
            }
            plVar39 = *pplVar5;
            if (plVar39 != (long *)0x0) {
              (**(code **)(*plVar39 + 0x18))(plVar39);
            }
            if ((char)local_110 != '\0') {
              if (local_f0[0] != (long *)0x0) {
                (**(code **)(*local_f0[0] + 0x20))();
              }
              local_110 = local_110 & 0xffffffffffffff00;
            }
            if (local_118 != (long *)0x0) {
              (**(code **)(*local_118 + 0x20))();
            }
            if (*pcVar44 != '\0') {
              if (pcVar40 == (char *)0x50a88afc9294e918) {
                local_e0[0] = CONCAT44(local_e0[0]._4_4_,1);
                local_110 = 0xfc2ec7a17cdb1ae4;
                pcStack_108 = "ShapeRadius";
                local_100 = 0xb;
                plStack_f8 = (long *)0x0;
                uVar45 = FUN_01180d38(param_1,&local_110);
                local_a0 = 0x3f800000;
                plVar41 = plStack_f8;
                if ((uVar45 & 0xff) != 0) {
                  local_a0 = (undefined4)(uVar45 >> 0x20);
                }
              }
              else if (pcVar40 == (char *)0x176a278e44c6c62c) {
                local_e0[0] = CONCAT44(local_e0[0]._4_4_,3);
                local_110 = 0xfc2ec7a17cdb1ae4;
                pcStack_108 = "ShapeRadius";
                local_100 = 0xb;
                plStack_f8 = (long *)0x0;
                uVar45 = FUN_01180d38(param_1,&local_110);
                local_a0 = 0x3f800000;
                if ((uVar45 & 0xff) != 0) {
                  local_a0 = (undefined4)(uVar45 >> 0x20);
                }
                if (plStack_f8 != (long *)0x0) {
                  (**(code **)(*plStack_f8 + 0x20))();
                }
                local_110 = 0x81af3a90e6dd262d;
                pcStack_108 = "ShapeHeight";
                local_100 = 0xb;
                plStack_f8 = (long *)0x0;
                uVar45 = FUN_01180d38(param_1,&local_110);
                local_9c = 0x3f800000;
                plVar41 = plStack_f8;
                if ((uVar45 & 0xff) != 0) {
                  local_9c = (undefined4)(uVar45 >> 0x20);
                }
              }
              else {
                if (pcVar40 != (char *)0xd118ce26903068b2) goto LAB_02234364;
                local_e0[0] = CONCAT44(local_e0[0]._4_4_,2);
                local_130 = 0x3c9d3f38bcdde66a;
                pcStack_128 = "ShapeExtend";
                local_120 = 0xb;
                local_118 = (long *)0x0;
                FUN_015eea10(&local_110,param_1,&local_130);
                uStack_138 = _UNK_03caa988;
                local_140 = _DAT_03caa980;
                puVar4 = &local_140;
                if ((char)local_110 != '\0') {
                  puVar4 = &local_100;
                }
                local_c0 = *puVar4;
                uStack_b8 = puVar4[1];
                plVar41 = local_118;
                if ((char)local_110 != '\0') {
                  local_110 = local_110 & 0xffffffffffffff00;
                }
              }
              if (plVar41 != (long *)0x0) {
                (**(code **)(*plVar41 + 0x20))();
              }
              local_130 = 0x1dfe618568987691;
              pcStack_128 = "ShapePosition";
              local_120 = 0xd;
              local_118 = (long *)0x0;
              FUN_015eea10(&local_110,param_1,&local_130);
              local_140 = 0;
              uStack_138 = 0;
              puVar4 = &local_140;
              if ((char)local_110 != '\0') {
                puVar4 = &local_100;
              }
              local_d0 = *puVar4;
              uStack_c8 = puVar4[1];
              if ((char)local_110 != '\0') {
                local_110 = local_110 & 0xffffffffffffff00;
              }
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x20))();
              }
              local_130 = 0x60d8a5e129fa74ac;
              pcStack_128 = "ShapeRotation";
              local_120 = 0xd;
              local_118 = (long *)0x0;
              FUN_015eea10(&local_110,param_1,&local_130);
              bVar46 = -((char)local_110 == '\0');
              if ((char)local_110 != '\0') {
                local_110 = local_110 & 0xffffffffffffff00;
              }
              fVar47 = (float)CONCAT13((byte)(local_100 >> 0x18) & ~bVar46,
                                       CONCAT12((byte)(local_100 >> 0x10) & ~bVar46,
                                                CONCAT11((byte)(local_100 >> 8) & ~bVar46,
                                                         (byte)local_100 & ~bVar46)));
              auVar50._0_8_ =
                   CONCAT17((byte)(local_100 >> 0x38) & ~bVar46,
                            CONCAT16((byte)(local_100 >> 0x30) & ~bVar46,
                                     CONCAT15((byte)(local_100 >> 0x28) & ~bVar46,
                                              CONCAT14((byte)(local_100 >> 0x20) & ~bVar46,fVar47)))
                           );
              auVar50[8] = (byte)plStack_f8 & ~bVar46;
              auVar50[9] = (byte)((ulong)plStack_f8 >> 8) & ~bVar46;
              auVar50[10] = (byte)((ulong)plStack_f8 >> 0x10) & ~bVar46;
              auVar50[0xb] = (byte)((ulong)plStack_f8 >> 0x18) & ~bVar46;
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x20))();
              }
              fVar48 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
              auVar58._8_4_ = 0x3f000000;
              auVar58._0_8_ = 0x3f0000003f000000;
              auVar58._12_4_ = 0x3f000000;
              fVar8 = fVar48 * auVar50._8_4_ * 0.5;
              fVar47 = fVar48 * fVar47 * 0.5;
              fVar48 = fVar48 * (float)((ulong)auVar50._0_8_ >> 0x20) * 0.5;
              fVar56 = fVar8 + 1.5707964;
              fVar63 = fVar47 + 1.5707964;
              fVar13 = fVar48 + 1.5707964;
              auVar76._0_4_ = -(uint)(0.0 <= fVar8);
              auVar76._4_4_ = -(uint)(0.0 <= fVar47);
              auVar76._8_4_ = -(uint)(0.0 <= fVar48);
              auVar76._12_4_ = 0xffffffff;
              iVar34 = -(uint)(0.0 <= fVar63);
              iVar19 = -(uint)(0.0 <= fVar13);
              auVar22[0xb] = 0xbf;
              auVar22._0_11_ = ZEXT811(0xbf000000bf000000);
              auVar22._12_3_ = 0;
              auVar22[0xf] = 0xbf;
              auVar77[0xb] = 0xbf;
              auVar77._0_11_ = ZEXT811(0xbf000000bf000000);
              auVar77._12_3_ = 0;
              auVar77[0xf] = 0xbf;
              auVar77 = auVar77 ^ (auVar22 ^ auVar58) & auVar76;
              auVar23[0xb] = 0xbf;
              auVar23._0_11_ = ZEXT811(0xbf000000bf000000);
              auVar23._12_3_ = 0;
              auVar23[0xf] = 0xbf;
              auVar14[4] = (char)iVar34;
              auVar14._0_4_ = -(uint)(0.0 <= fVar56);
              auVar14[5] = (char)((uint)iVar34 >> 8);
              auVar14[6] = (char)((uint)iVar34 >> 0x10);
              auVar14[7] = (char)((uint)iVar34 >> 0x18);
              auVar14[8] = (char)iVar19;
              auVar14[9] = (char)((uint)iVar19 >> 8);
              auVar14[10] = (char)((uint)iVar19 >> 0x10);
              auVar14[0xb] = (char)((uint)iVar19 >> 0x18);
              auVar14[0xc] = 0xff;
              auVar14[0xd] = 0xff;
              auVar14[0xe] = 0xff;
              auVar14[0xf] = 0xff;
              auVar58 = auVar58 ^ (auVar58 ^ auVar23) & ~auVar14;
              auVar78._0_4_ = (int)(auVar77._0_4_ + fVar8 * 0.15915494);
              auVar78._4_4_ = (int)(auVar77._4_4_ + fVar47 * 0.15915494);
              auVar78._8_4_ = (int)(auVar77._8_4_ + fVar48 * 0.15915494);
              auVar78._12_4_ = (int)(auVar77._12_4_ + 0.0);
              auVar59._0_4_ = (int)(auVar58._0_4_ + fVar56 * 0.15915494);
              auVar59._4_4_ = (int)(auVar58._4_4_ + fVar63 * 0.15915494);
              auVar59._8_4_ = (int)(auVar58._8_4_ + fVar13 * 0.15915494);
              auVar59._12_4_ = (int)(auVar58._12_4_ + 0.25);
              auVar72 = NEON_scvtf(auVar78,4);
              auVar60 = NEON_scvtf(auVar59,4);
              fVar84 = fVar8 - auVar72._0_4_ * 6.2831855;
              fVar86 = (float)(CONCAT17((char)((uint)fVar47 >> 0x18),
                                        CONCAT16((char)((uint)fVar47 >> 0x10),
                                                 CONCAT15((char)((uint)fVar47 >> 8),
                                                          CONCAT14(SUB41(fVar47,0),fVar8)))) >> 0x20
                              ) - auVar72._4_4_ * 6.2831855;
              fVar88 = fVar48 - auVar72._8_4_ * 6.2831855;
              fVar90 = 0.0 - auVar72._12_4_ * 6.2831855;
              fVar49 = fVar56 - auVar60._0_4_ * 6.2831855;
              fVar54 = fVar63 - auVar60._4_4_ * 6.2831855;
              fVar55 = fVar13 - auVar60._8_4_ * 6.2831855;
              fVar57 = 1.5707964 - auVar60._12_4_ * 6.2831855;
              iVar24 = -(uint)(fVar8 == 0.0);
              iVar25 = -(uint)(fVar47 == 0.0);
              iVar26 = -(uint)(fVar48 == 0.0);
              auVar73._0_4_ = -(uint)(fVar84 < -1.5707964);
              auVar73._4_4_ = -(uint)(fVar86 < -1.5707964);
              auVar73._8_4_ = -(uint)(fVar88 < -1.5707964);
              auVar73._12_4_ = -(uint)(fVar90 < -1.5707964);
              auVar61._0_4_ = -3.1415927 - fVar49;
              auVar61._4_4_ = -3.1415927 - fVar54;
              auVar61._8_4_ = -3.1415927 - fVar55;
              auVar61._12_4_ = -3.1415927 - fVar57;
              iVar34 = -(uint)(fVar54 < -1.5707964);
              iVar19 = -(uint)(fVar55 < -1.5707964);
              iVar21 = -(uint)(fVar57 < -1.5707964);
              auVar27._4_4_ = fVar86;
              auVar27._0_4_ = fVar84;
              auVar27._8_4_ = fVar88;
              auVar27._12_4_ = fVar90;
              auVar28._4_4_ = -3.1415927 - fVar86;
              auVar28._0_4_ = -3.1415927 - fVar84;
              auVar28._8_4_ = -3.1415927 - fVar88;
              auVar28._12_4_ = -3.1415927 - fVar90;
              auVar74._4_4_ = fVar86;
              auVar74._0_4_ = fVar84;
              auVar74._8_4_ = fVar88;
              auVar74._12_4_ = fVar90;
              auVar74 = auVar74 ^ (auVar27 ^ auVar28) & auVar73;
              auVar9[4] = SUB41(fVar54,0);
              auVar9._0_4_ = fVar49;
              auVar9[5] = (char)((uint)fVar54 >> 8);
              auVar9[6] = (char)((uint)fVar54 >> 0x10);
              auVar9[7] = (char)((uint)fVar54 >> 0x18);
              auVar9[8] = SUB41(fVar55,0);
              auVar9[9] = (char)((uint)fVar55 >> 8);
              auVar9[10] = (char)((uint)fVar55 >> 0x10);
              auVar9[0xb] = (char)((uint)fVar55 >> 0x18);
              auVar9[0xc] = SUB41(fVar57,0);
              auVar9[0xd] = (char)((uint)fVar57 >> 8);
              auVar9[0xe] = (char)((uint)fVar57 >> 0x10);
              auVar9[0xf] = (char)((uint)fVar57 >> 0x18);
              auVar15[4] = (char)iVar34;
              auVar15._0_4_ = -(uint)(fVar49 < -1.5707964);
              auVar15[5] = (char)((uint)iVar34 >> 8);
              auVar15[6] = (char)((uint)iVar34 >> 0x10);
              auVar15[7] = (char)((uint)iVar34 >> 0x18);
              auVar15[8] = (char)iVar19;
              auVar15[9] = (char)((uint)iVar19 >> 8);
              auVar15[10] = (char)((uint)iVar19 >> 0x10);
              auVar15[0xb] = (char)((uint)iVar19 >> 0x18);
              auVar15[0xc] = (char)iVar21;
              auVar15[0xd] = (char)((uint)iVar21 >> 8);
              auVar15[0xe] = (char)((uint)iVar21 >> 0x10);
              auVar15[0xf] = (char)((uint)iVar21 >> 0x18);
              auVar61 = auVar61 ^ (auVar61 ^ auVar9) & ~auVar15;
              fVar49 = 3.1415927 - auVar74._4_4_;
              fVar54 = 3.1415927 - auVar74._8_4_;
              fVar55 = 3.1415927 - auVar74._12_4_;
              iVar34 = -(uint)(1.5707964 < auVar61._4_4_);
              iVar19 = -(uint)(1.5707964 < auVar61._8_4_);
              iVar21 = -(uint)(1.5707964 < auVar61._12_4_);
              auVar79._0_4_ = 3.1415927 - auVar61._0_4_;
              auVar79._4_4_ = 3.1415927 - auVar61._4_4_;
              auVar79._8_4_ = 3.1415927 - auVar61._8_4_;
              auVar79._12_4_ = 3.1415927 - auVar61._12_4_;
              auVar51._0_4_ = -(uint)(1.5707964 < auVar74._0_4_);
              auVar51._4_4_ = -(uint)(1.5707964 < auVar74._4_4_);
              auVar51._8_4_ = -(uint)(1.5707964 < auVar74._8_4_);
              auVar51._12_4_ = -(uint)(1.5707964 < auVar74._12_4_);
              auVar16[4] = (char)iVar34;
              auVar16._0_4_ = -(uint)(1.5707964 < auVar61._0_4_);
              auVar16[5] = (char)((uint)iVar34 >> 8);
              auVar16[6] = (char)((uint)iVar34 >> 0x10);
              auVar16[7] = (char)((uint)iVar34 >> 0x18);
              auVar16[8] = (char)iVar19;
              auVar16[9] = (char)((uint)iVar19 >> 8);
              auVar16[10] = (char)((uint)iVar19 >> 0x10);
              auVar16[0xb] = (char)((uint)iVar19 >> 0x18);
              auVar16[0xc] = (char)iVar21;
              auVar16[0xd] = (char)((uint)iVar21 >> 8);
              auVar16[0xe] = (char)((uint)iVar21 >> 0x10);
              auVar16[0xf] = (char)((uint)iVar21 >> 0x18);
              auVar61 = auVar61 ^ (auVar61 ^ auVar79) & auVar16;
              auVar10[4] = SUB41(fVar49,0);
              auVar10._0_4_ = 3.1415927 - auVar74._0_4_;
              auVar10[5] = (char)((uint)fVar49 >> 8);
              auVar10[6] = (char)((uint)fVar49 >> 0x10);
              auVar10[7] = (char)((uint)fVar49 >> 0x18);
              auVar10[8] = SUB41(fVar54,0);
              auVar10[9] = (char)((uint)fVar54 >> 8);
              auVar10[10] = (char)((uint)fVar54 >> 0x10);
              auVar10[0xb] = (char)((uint)fVar54 >> 0x18);
              auVar10[0xc] = SUB41(fVar55,0);
              auVar10[0xd] = (char)((uint)fVar55 >> 8);
              auVar10[0xe] = (char)((uint)fVar55 >> 0x10);
              auVar10[0xf] = (char)((uint)fVar55 >> 0x18);
              auVar74 = auVar74 ^ (auVar74 ^ auVar10) & auVar51;
              auVar72 = NEON_fmov(0x3f800000,4);
              fVar84 = auVar61._0_4_;
              fVar85 = fVar84 * fVar84;
              fVar86 = auVar61._4_4_;
              fVar87 = fVar86 * fVar86;
              fVar88 = auVar61._8_4_;
              fVar89 = fVar88 * fVar88;
              fVar90 = auVar61._12_4_;
              fVar91 = fVar90 * fVar90;
              fVar49 = auVar74._0_4_;
              fVar80 = fVar49 * fVar49;
              fVar54 = auVar74._4_4_;
              fVar81 = fVar54 * fVar54;
              fVar55 = auVar74._8_4_;
              fVar82 = fVar55 * fVar55;
              fVar57 = auVar74._12_4_;
              fVar83 = fVar57 * fVar57;
              auVar75._8_4_ = 0x7fc00000;
              auVar75._0_8_ = 0x7fc000007fc00000;
              auVar75._12_4_ = 0x7fc00000;
              iVar17 = -(uint)(ABS(fVar56) == INFINITY);
              iVar18 = -(uint)(ABS(fVar63) == INFINITY);
              iVar20 = -(uint)(ABS(fVar13) == INFINITY);
              iVar34 = -(uint)(ABS(fVar8) == INFINITY);
              iVar19 = -(uint)(ABS(fVar47) == INFINITY);
              iVar21 = -(uint)(ABS(fVar48) == INFINITY);
              bVar46 = ~(byte)((uint)iVar34 >> 8);
              bVar64 = ~(byte)((uint)iVar34 >> 0x10);
              bVar65 = ~(byte)((uint)iVar34 >> 0x18);
              bVar66 = ~(byte)((uint)iVar19 >> 8);
              bVar67 = ~(byte)((uint)iVar19 >> 0x10);
              bVar68 = ~(byte)((uint)iVar19 >> 0x18);
              bVar69 = ~(byte)((uint)iVar21 >> 8);
              bVar70 = ~(byte)((uint)iVar21 >> 0x10);
              bVar71 = ~(byte)((uint)iVar21 >> 0x18);
              auVar62._0_4_ =
                   fVar84 * (auVar72._0_4_ +
                            fVar85 * (fVar85 * (fVar85 * (fVar85 * (fVar85 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              auVar62._4_4_ =
                   fVar86 * (auVar72._4_4_ +
                            fVar87 * (fVar87 * (fVar87 * (fVar87 * (fVar87 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              auVar62._8_4_ =
                   fVar88 * (auVar72._8_4_ +
                            fVar89 * (fVar89 * (fVar89 * (fVar89 * (fVar89 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              auVar62._12_4_ =
                   fVar90 * (auVar72._12_4_ +
                            fVar91 * (fVar91 * (fVar91 * (fVar91 * (fVar91 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              auVar11[1] = ~(byte)((uint)iVar17 >> 8);
              auVar11[0] = ~(byte)iVar17;
              auVar11[2] = ~(byte)((uint)iVar17 >> 0x10);
              auVar11[3] = ~(byte)((uint)iVar17 >> 0x18);
              auVar11[4] = ~(byte)iVar18;
              auVar11[5] = ~(byte)((uint)iVar18 >> 8);
              auVar11[6] = ~(byte)((uint)iVar18 >> 0x10);
              auVar11[7] = ~(byte)((uint)iVar18 >> 0x18);
              auVar11[8] = ~(byte)iVar20;
              auVar11[9] = ~(byte)((uint)iVar20 >> 8);
              auVar11[10] = ~(byte)((uint)iVar20 >> 0x10);
              auVar11[0xb] = ~(byte)((uint)iVar20 >> 0x18);
              auVar11[0xc] = 0xff;
              auVar11[0xd] = 0xff;
              auVar11[0xe] = 0xff;
              auVar11[0xf] = 0xff;
              auVar62 = auVar62 ^ (auVar62 ^ auVar75) & ~auVar11;
              local_130 = 0xa5d87c9ff14c683c;
              pcStack_128 = "EventName";
              local_120 = 9;
              local_118 = (long *)0x0;
              auVar12[1] = ~(byte)((uint)iVar24 >> 8);
              auVar12[0] = ~(byte)iVar24;
              auVar12[2] = ~(byte)((uint)iVar24 >> 0x10);
              auVar12[3] = ~(byte)((uint)iVar24 >> 0x18);
              auVar12[4] = ~(byte)iVar25;
              auVar12[5] = ~(byte)((uint)iVar25 >> 8);
              auVar12[6] = ~(byte)((uint)iVar25 >> 0x10);
              auVar12[7] = ~(byte)((uint)iVar25 >> 0x18);
              auVar12[8] = ~(byte)iVar26;
              auVar12[9] = ~(byte)((uint)iVar26 >> 8);
              auVar12[10] = ~(byte)((uint)iVar26 >> 0x10);
              auVar12[0xb] = ~(byte)((uint)iVar26 >> 0x18);
              auVar12._12_4_ = 0;
              auVar62 = auVar62 ^ (auVar62 ^ auVar72) & ~auVar12;
              auVar60[1] = bVar46;
              auVar60[0] = ~(byte)iVar34;
              auVar60[2] = bVar64;
              auVar60[3] = bVar65;
              auVar60[4] = ~(byte)iVar19;
              auVar60[5] = bVar66;
              auVar60[6] = bVar67;
              auVar60[7] = bVar68;
              auVar60[8] = ~(byte)iVar21;
              auVar60[9] = bVar69;
              auVar60[10] = bVar70;
              auVar60[0xb] = bVar71;
              auVar60[0xc] = 0xff;
              auVar60[0xd] = 0xff;
              auVar60[0xe] = 0xff;
              auVar60[0xf] = 0xff;
              auVar62 = auVar62 ^ (auVar62 ^ auVar75) & ~auVar60;
              auVar52._0_4_ =
                   fVar49 * (auVar72._0_4_ +
                            fVar80 * (fVar80 * (fVar80 * (fVar80 * (fVar80 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              auVar52._4_4_ =
                   fVar54 * (auVar72._4_4_ +
                            fVar81 * (fVar81 * (fVar81 * (fVar81 * (fVar81 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              auVar52._8_4_ =
                   fVar55 * (auVar72._8_4_ +
                            fVar82 * (fVar82 * (fVar82 * (fVar82 * (fVar82 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              auVar52._12_4_ =
                   fVar57 * (auVar72._12_4_ +
                            fVar83 * (fVar83 * (fVar83 * (fVar83 * (fVar83 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
              fVar63 = auVar62._8_4_;
              auVar72[1] = bVar46;
              auVar72[0] = ~(byte)iVar34;
              auVar72[2] = bVar64;
              auVar72[3] = bVar65;
              auVar72[4] = ~(byte)iVar19;
              auVar72[5] = bVar66;
              auVar72[6] = bVar67;
              auVar72[7] = bVar68;
              auVar72[8] = ~(byte)iVar21;
              auVar72[9] = bVar69;
              auVar72[10] = bVar70;
              auVar72[0xb] = bVar71;
              auVar72[0xc] = 0xff;
              auVar72[0xd] = 0xff;
              auVar72[0xe] = 0xff;
              auVar72[0xf] = 0xff;
              auVar52 = auVar52 ^ (auVar52 ^ auVar75) & ~auVar72;
              fVar49 = auVar62._4_4_;
              fVar56 = auVar52._8_4_;
              fVar48 = auVar52._4_4_;
              fVar47 = auVar52._0_4_;
              fVar8 = auVar62._0_4_;
              auVar53._0_8_ =
                   CONCAT44(fVar56 * fVar8 * fVar49 +
                            fVar63 * fVar48 * fVar47 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                            fVar63 * fVar8 * fVar48 +
                            fVar56 * fVar49 * fVar47 * (float)_DAT_03cab3a0);
              auVar53._8_4_ =
                   fVar63 * fVar47 * fVar49 + fVar56 * fVar48 * fVar8 * (float)_UNK_03cab3a8;
              auVar53._12_4_ =
                   fVar63 * fVar8 * fVar49 +
                   fVar56 * fVar48 * fVar47 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
              uStack_a8 = auVar53._8_8_;
              local_b0 = auVar53._0_8_;
              FUN_01315eac(&local_110,param_1,&local_130);
              if (((*puVar30 & 1) == 0) &&
                 (iVar34 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar34 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar4 = (ulong *)(puVar31 + 8);
              if ((char)local_110 != '\0') {
                puVar4 = &local_100;
              }
              uVar45 = *puVar4;
              pplVar5 = (long **)(puVar31 + 0x18);
              if ((char)local_110 != '\0') {
                pplVar5 = local_f0;
              }
              plVar41 = *pplVar5;
              if (plVar41 != (long *)0x0) {
                (**(code **)(*plVar41 + 0x18))(plVar41);
              }
              if ((char)local_110 != '\0') {
                if (local_f0[0] != (long *)0x0) {
                  (**(code **)(*local_f0[0] + 0x20))();
                }
                local_110 = local_110 & 0xffffffffffffff00;
              }
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x20))();
              }
              local_130 = 0x999b0a7bcbf06bfc;
              pcStack_128 = "StopEventName";
              local_120 = 0xd;
              local_118 = (long *)0x0;
              FUN_01315eac(&local_110,param_1,&local_130);
              if (((*puVar30 & 1) == 0) &&
                 (iVar34 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar34 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar4 = (ulong *)(puVar31 + 8);
              if ((char)local_110 != '\0') {
                puVar4 = &local_100;
              }
              uVar43 = *puVar4;
              pplVar5 = (long **)(puVar31 + 0x18);
              if ((char)local_110 != '\0') {
                pplVar5 = local_f0;
              }
              plVar42 = *pplVar5;
              if (plVar42 != (long *)0x0) {
                (**(code **)(*plVar42 + 0x18))(plVar42);
              }
              if ((char)local_110 != '\0') {
                if (local_f0[0] != (long *)0x0) {
                  (**(code **)(*local_f0[0] + 0x20))();
                }
                local_110 = local_110 & 0xffffffffffffff00;
              }
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x20))();
              }
              local_140 = CONCAT44(local_140._4_4_,1);
              local_144[0] = 1;
              local_148[0] = 1;
              local_130 = uVar43;
              local_110 = uVar45;
              uVar35 = FUN_02234600(plVar37,*(undefined8 *)(lVar36 + -0x20),&local_110,&local_130,
                                    &local_140,local_144,local_148);
              local_110 = 0xeb5fdc2027ba1f3e;
              pcStack_108 = "DistanceCulling";
              local_100 = 0xf;
              plStack_f8 = (long *)0x0;
              uVar45 = FUN_01180d38(param_1,&local_110);
              uVar29 = 0x41200000;
              if ((uVar45 & 0xff) != 0) {
                uVar29 = (int)(uVar45 >> 0x20);
              }
              if (plStack_f8 != (long *)0x0) {
                (**(code **)(*plStack_f8 + 0x20))();
              }
              FUN_02234804(uVar29,uVar35,local_e0,1);
              if (plVar42 != (long *)0x0) {
                (**(code **)(*plVar42 + 0x20))(plVar42);
              }
              if (plVar41 != (long *)0x0) {
                (**(code **)(*plVar41 + 0x20))(plVar41);
              }
            }
LAB_02234364:
            if (plVar39 != (long *)0x0) {
              (**(code **)(*plVar39 + 0x20))(plVar39);
            }
            if (local_98 != 0) {
              FUN_012c4338();
            }
            (**(code **)(*plVar37 + 0x60))(plVar37);
          }
          break;
        }
        sVar38 = sVar6;
      } while (sVar6 != 0);
    }
    puVar32 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar38 = *psVar1;
        cVar7 = '\x01';
        bVar33 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar33) {
          *psVar1 = sVar38 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar38 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar34 = *piVar2;
          cVar7 = '\x01';
          bVar33 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar33) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar34 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar34 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar34 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar36 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar36;
          local_e0[0] = *puVar32;
          FUN_00c44438(lVar36 + 0x8040,local_e0);
        }
      }
      else if (sVar38 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


