/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a65ea8; name: FUN_01a65ea8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a65ea8(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined8 *puVar12;
  undefined8 uVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  bool bVar23;
  short sVar24;
  ushort *puVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uVar30;
  char *pcVar31;
  undefined8 uVar32;
  int iVar33;
  float fVar34;
  int iVar40;
  float fVar41;
  int iVar42;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar58;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar75;
  float fVar76;
  undefined1 auVar73 [16];
  float fVar77;
  undefined1 auVar74 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  float fVar95;
  float fVar96;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  long *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  
  piVar18 = (int *)*param_1;
  puVar25 = (ushort *)((long)piVar18 - (long)*piVar18);
  if (*puVar25 < 0xb) {
    iVar21 = 0;
    iVar15 = 0;
    iVar7 = 0;
    if (8 < *puVar25) goto LAB_01a65ef0;
  }
  else {
    iVar7 = 0;
    if ((ulong)puVar25[5] != 0) {
      iVar7 = *(int *)((long)piVar18 + (ulong)puVar25[5]);
    }
LAB_01a65ef0:
    iVar21 = iVar7;
    if ((ulong)puVar25[4] == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)((long)piVar18 + (ulong)puVar25[4]);
    }
  }
  if (iVar21 - iVar15 == 1) {
    return;
  }
  local_90 = param_1[0x22];
  uStack_88 = param_1[0x23];
  local_80 = param_1[0x24];
  plVar29 = (long *)param_1[0x25];
  local_78 = plVar29;
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 0x18))(plVar29);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_70,param_1 + 6,&local_90);
    plVar29 = local_78;
  }
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
  if (local_70 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_70 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_70 + 0x1a);
    sVar24 = *(short *)((long)local_70 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar24) {
        cVar3 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar24 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a65fb4;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a65fb4:
        bVar23 = false;
      }
      if (bVar23) {
        lVar20 = local_70[2];
        if (lVar20 == 0) goto LAB_01a66874;
        lVar16 = FUN_00ded3a0(lVar20 + 0xe0,&local_c0);
        if (lVar16 == 0) goto LAB_01a6685c;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        uVar30 = *(undefined8 *)PTR_DAT_047d3e30;
        pcVar31 = *(char **)(PTR_DAT_047d3e30 + 8);
        uVar32 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
        plVar29 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar29 != (long *)0x0) {
          (**(code **)(*plVar29 + 0x18))(plVar29);
        }
        FUN_01340a44(&local_c0,param_1,1);
        plVar28 = local_a0;
        uVar13 = local_b8;
        if ((char)local_c0 != '\0') {
          pcVar31 = (char *)CONCAT44(fStack_ac,local_b0);
          uVar32 = CONCAT44(uStack_a4,fStack_a8);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x18))(local_a0);
          }
          if (plVar29 != (long *)0x0) {
            (**(code **)(*plVar29 + 0x20))(plVar29);
          }
          plVar29 = plVar28;
          uVar30 = uVar13;
          if ((char)local_c0 != '\0') {
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
          }
        }
        if (*pcVar31 == '\0') {
          FUN_02123748(&local_c0,param_1,0x100000001);
          if ((char)local_c0 == '\0') goto LAB_01a660e0;
          fVar72 = ((fStack_a8 * 3.1415927) / 180.0) * 0.5;
          fVar75 = ((local_b0 * 3.1415927) / 180.0) * 0.5;
          fVar76 = ((fStack_ac * 3.1415927) / 180.0) * 0.5;
          local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffffffffff00);
          fVar95 = fVar72 + 1.5707964;
          fVar34 = fVar75 + 1.5707964;
          fVar96 = fVar76 + 1.5707964;
          iVar15 = -(uint)(fVar72 == 0.0);
          iVar7 = -(uint)(fVar75 == 0.0);
          iVar21 = -(uint)(fVar76 == 0.0);
          iVar42 = -(uint)(ABS(fVar72) == INFINITY);
          iVar43 = -(uint)(ABS(fVar75) == INFINITY);
          iVar58 = -(uint)(ABS(fVar76) == INFINITY);
          auVar59._0_4_ =
               (int)((float)(-(uint)(0.0 <= fVar72) & 0x80000000 ^ 0xbf000000) + fVar72 * 0.15915494
                    );
          auVar59._4_4_ =
               (int)((float)(-(uint)(0.0 <= fVar75) & 0x80000000 ^ 0xbf000000) + fVar75 * 0.15915494
                    );
          auVar59._8_4_ =
               (int)((float)(-(uint)(0.0 <= fVar76) & 0x80000000 ^ 0xbf000000) + fVar76 * 0.15915494
                    );
          auVar59._12_4_ = 0;
          iVar54 = -(uint)(ABS(fVar95) == INFINITY);
          iVar33 = -(uint)(ABS(fVar34) == INFINITY);
          iVar40 = -(uint)(ABS(fVar96) == INFINITY);
          auVar55[0] = ~(byte)iVar54;
          auVar55[1] = ~(byte)((uint)iVar54 >> 8);
          auVar55[2] = ~(byte)((uint)iVar54 >> 0x10);
          auVar55[3] = ~(byte)((uint)iVar54 >> 0x18);
          auVar55[4] = ~(byte)iVar33;
          auVar55[5] = ~(byte)((uint)iVar33 >> 8);
          auVar55[6] = ~(byte)((uint)iVar33 >> 0x10);
          auVar55[7] = ~(byte)((uint)iVar33 >> 0x18);
          auVar55[8] = ~(byte)iVar40;
          auVar55[9] = ~(byte)((uint)iVar40 >> 8);
          auVar55[10] = ~(byte)((uint)iVar40 >> 0x10);
          auVar55[0xb] = ~(byte)((uint)iVar40 >> 0x18);
          auVar55[0xc] = 0xff;
          auVar55[0xd] = 0xff;
          auVar55[0xe] = 0xff;
          auVar55[0xf] = 0xff;
          auVar37 = NEON_scvtf(auVar59,4);
          fVar72 = fVar72 - auVar37._0_4_ * 6.2831855;
          fVar75 = fVar75 - auVar37._4_4_ * 6.2831855;
          fVar76 = fVar76 - auVar37._8_4_ * 6.2831855;
          fVar77 = 0.0 - auVar37._12_4_ * 6.2831855;
          auVar71._0_4_ =
               (int)((float)(~-(uint)(0.0 <= fVar95) & 0x80000000 ^ 0x3f000000) +
                    fVar95 * 0.15915494);
          auVar71._4_4_ =
               (int)((float)(~-(uint)(0.0 <= fVar34) & 0x80000000 ^ 0x3f000000) +
                    fVar34 * 0.15915494);
          auVar71._8_4_ =
               (int)((float)(~-(uint)(0.0 <= fVar96) & 0x80000000 ^ 0x3f000000) +
                    fVar96 * 0.15915494);
          auVar71._12_4_ = 0;
          auVar37 = NEON_scvtf(auVar71,4);
          fVar95 = fVar95 - auVar37._0_4_ * 6.2831855;
          fVar34 = fVar34 - auVar37._4_4_ * 6.2831855;
          fVar96 = fVar96 - auVar37._8_4_ * 6.2831855;
          fVar41 = 1.5707964 - auVar37._12_4_ * 6.2831855;
          fVar72 = (float)((uint)fVar72 ^
                          ((uint)fVar72 ^ (uint)(-3.1415927 - fVar72)) &
                          -(uint)(fVar72 < -1.5707964));
          fVar75 = (float)((uint)fVar75 ^
                          ((uint)fVar75 ^ (uint)(-3.1415927 - fVar75)) &
                          -(uint)(fVar75 < -1.5707964));
          fVar76 = (float)((uint)fVar76 ^
                          ((uint)fVar76 ^ (uint)(-3.1415927 - fVar76)) &
                          -(uint)(fVar76 < -1.5707964));
          fVar77 = (float)((uint)fVar77 ^
                          ((uint)fVar77 ^ (uint)(-3.1415927 - fVar77)) &
                          -(uint)(fVar77 < -1.5707964));
          fVar95 = (float)((uint)fVar95 ^
                          ((uint)fVar95 ^ (uint)(-3.1415927 - fVar95)) &
                          -(uint)(fVar95 < -1.5707964));
          fVar34 = (float)((uint)fVar34 ^
                          ((uint)fVar34 ^ (uint)(-3.1415927 - fVar34)) &
                          -(uint)(fVar34 < -1.5707964));
          fVar96 = (float)((uint)fVar96 ^
                          ((uint)fVar96 ^ (uint)(-3.1415927 - fVar96)) &
                          -(uint)(fVar96 < -1.5707964));
          fVar41 = (float)((uint)fVar41 ^
                          ((uint)fVar41 ^ (uint)(-3.1415927 - fVar41)) &
                          -(uint)(fVar41 < -1.5707964));
          fVar72 = (float)((uint)fVar72 ^
                          ((uint)fVar72 ^ (uint)(3.1415927 - fVar72)) & -(uint)(1.5707964 < fVar72))
          ;
          fVar75 = (float)((uint)fVar75 ^
                          ((uint)fVar75 ^ (uint)(3.1415927 - fVar75)) & -(uint)(1.5707964 < fVar75))
          ;
          fVar76 = (float)((uint)fVar76 ^
                          ((uint)fVar76 ^ (uint)(3.1415927 - fVar76)) & -(uint)(1.5707964 < fVar76))
          ;
          fVar77 = (float)((uint)fVar77 ^
                          ((uint)fVar77 ^ (uint)(3.1415927 - fVar77)) & -(uint)(1.5707964 < fVar77))
          ;
          fVar78 = fVar72 * fVar72;
          fVar79 = fVar75 * fVar75;
          fVar80 = fVar76 * fVar76;
          fVar81 = fVar77 * fVar77;
          fVar95 = (float)((uint)fVar95 ^
                          ((uint)fVar95 ^ (uint)(3.1415927 - fVar95)) & -(uint)(1.5707964 < fVar95))
          ;
          fVar34 = (float)((uint)fVar34 ^
                          ((uint)fVar34 ^ (uint)(3.1415927 - fVar34)) & -(uint)(1.5707964 < fVar34))
          ;
          fVar96 = (float)((uint)fVar96 ^
                          ((uint)fVar96 ^ (uint)(3.1415927 - fVar96)) & -(uint)(1.5707964 < fVar96))
          ;
          fVar41 = (float)((uint)fVar41 ^
                          ((uint)fVar41 ^ (uint)(3.1415927 - fVar41)) & -(uint)(1.5707964 < fVar41))
          ;
          auVar50 = NEON_fmov(0x3f800000,4);
          auVar73._8_4_ = 0x7fc00000;
          auVar73._0_8_ = 0x7fc000007fc00000;
          auVar73._12_4_ = 0x7fc00000;
          fVar82 = fVar95 * fVar95;
          fVar83 = fVar34 * fVar34;
          fVar84 = fVar96 * fVar96;
          fVar85 = fVar41 * fVar41;
          auVar74._0_4_ =
               fVar95 * (auVar50._0_4_ +
                        fVar82 * (fVar82 * (fVar82 * (fVar82 * (fVar82 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar74._4_4_ =
               fVar34 * (auVar50._4_4_ +
                        fVar83 * (fVar83 * (fVar83 * (fVar83 * (fVar83 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar74._8_4_ =
               fVar96 * (auVar50._8_4_ +
                        fVar84 * (fVar84 * (fVar84 * (fVar84 * (fVar84 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar74._12_4_ =
               fVar41 * (auVar50._12_4_ +
                        fVar85 * (fVar85 * (fVar85 * (fVar85 * (fVar85 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar74 = auVar74 ^ (auVar74 ^ auVar73) & ~auVar55;
          auVar37[1] = ~(byte)((uint)iVar15 >> 8);
          auVar37[0] = ~(byte)iVar15;
          auVar37[2] = ~(byte)((uint)iVar15 >> 0x10);
          auVar37[3] = ~(byte)((uint)iVar15 >> 0x18);
          auVar37[4] = ~(byte)iVar7;
          auVar37[5] = ~(byte)((uint)iVar7 >> 8);
          auVar37[6] = ~(byte)((uint)iVar7 >> 0x10);
          auVar37[7] = ~(byte)((uint)iVar7 >> 0x18);
          auVar37[8] = ~(byte)iVar21;
          auVar37[9] = ~(byte)((uint)iVar21 >> 8);
          auVar37[10] = ~(byte)((uint)iVar21 >> 0x10);
          auVar37[0xb] = ~(byte)((uint)iVar21 >> 0x18);
          auVar37._12_4_ = 0;
          auVar74 = auVar74 ^ (auVar74 ^ auVar50) & ~auVar37;
          auVar44._0_4_ =
               fVar72 * (auVar50._0_4_ +
                        fVar78 * (fVar78 * (fVar78 * (fVar78 * (fVar78 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar44._4_4_ =
               fVar75 * (auVar50._4_4_ +
                        fVar79 * (fVar79 * (fVar79 * (fVar79 * (fVar79 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar44._8_4_ =
               fVar76 * (auVar50._8_4_ +
                        fVar80 * (fVar80 * (fVar80 * (fVar80 * (fVar80 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar44._12_4_ =
               fVar77 * (auVar50._12_4_ +
                        fVar81 * (fVar81 * (fVar81 * (fVar81 * (fVar81 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar49[0] = ~(byte)iVar42;
          auVar49[1] = ~(byte)((uint)iVar42 >> 8);
          auVar49[2] = ~(byte)((uint)iVar42 >> 0x10);
          auVar49[3] = ~(byte)((uint)iVar42 >> 0x18);
          auVar49[4] = ~(byte)iVar43;
          auVar49[5] = ~(byte)((uint)iVar43 >> 8);
          auVar49[6] = ~(byte)((uint)iVar43 >> 0x10);
          auVar49[7] = ~(byte)((uint)iVar43 >> 0x18);
          auVar49[8] = ~(byte)iVar58;
          auVar49[9] = ~(byte)((uint)iVar58 >> 8);
          auVar49[10] = ~(byte)((uint)iVar58 >> 0x10);
          auVar49[0xb] = ~(byte)((uint)iVar58 >> 0x18);
          auVar49[0xc] = 0xff;
          auVar49[0xd] = 0xff;
          auVar49[0xe] = 0xff;
          auVar49[0xf] = 0xff;
          auVar74 = auVar74 ^ (auVar74 ^ auVar73) & ~auVar49;
          fVar34 = auVar74._4_4_;
          auVar44 = auVar44 ^ (auVar44 ^ auVar73) & ~auVar49;
          fVar95 = auVar74._0_4_;
          fVar41 = auVar44._0_4_;
          fVar96 = auVar74._8_4_;
          fVar72 = auVar44._4_4_;
          fVar75 = auVar44._8_4_;
          auVar50._0_4_ = fVar96 * fVar95 * fVar72 + fVar75 * fVar34 * fVar41 * (float)_DAT_03cab3a0
          ;
          auVar50._4_4_ =
               fVar75 * fVar95 * fVar34 +
               fVar96 * fVar72 * fVar41 * (float)((ulong)_DAT_03cab3a0 >> 0x20);
          auVar50._8_4_ = fVar96 * fVar41 * fVar34 + fVar75 * fVar72 * fVar95 * (float)_UNK_03cab3a8
          ;
          auVar50._12_4_ =
               fVar96 * fVar95 * fVar34 +
               fVar75 * fVar72 * fVar41 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
        }
        else {
          local_e0 = uVar30;
          pcStack_d8 = pcVar31;
          local_d0 = uVar32;
          local_c8 = plVar29;
          if (plVar29 != (long *)0x0) {
            (**(code **)(*plVar29 + 0x18))(plVar29);
          }
          if ((code *)param_1[2] == (code *)0x0) {
            local_c0 = (undefined8 *)0x0;
            local_b8 = 0;
          }
          else {
            (*(code *)param_1[2])(&local_c0,param_1 + 6,&local_e0);
          }
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
          if (local_c0 != (undefined8 *)0x0) {
            if (*(short *)((long)local_c0 + 0x1a) == 0) goto LAB_01a66558;
            psVar1 = (short *)((long)local_c0 + 0x1a);
            fStack_e8 = (float)_UNK_03cabe58;
            fStack_e4 = (float)((ulong)_UNK_03cabe58 >> 0x20);
            local_f0 = (float)_DAT_03cabe50;
            fStack_ec = (float)((ulong)_DAT_03cabe50 >> 0x20);
            sVar24 = *(short *)((long)local_c0 + 0x1a);
            goto LAB_01a664b8;
          }
LAB_01a660e0:
          auVar50._8_8_ = _UNK_03cabe58;
          auVar50._0_8_ = _DAT_03cabe50;
        }
        fStack_e8 = auVar50._8_4_;
        fStack_e4 = auVar50._12_4_;
        local_f0 = auVar50._0_4_;
        fStack_ec = auVar50._4_4_;
        goto LAB_01a660e8;
      }
      sVar24 = sVar2;
    } while (sVar2 != 0);
    goto LAB_01a66870;
  }
  goto LAB_01a66874;
LAB_01a66558:
  fStack_e8 = (float)_UNK_03cabe58;
  fStack_e4 = (float)((ulong)_UNK_03cabe58 >> 0x20);
  local_f0 = (float)_DAT_03cabe50;
  fStack_ec = (float)((ulong)_DAT_03cabe50 >> 0x20);
LAB_01a66534:
  puVar12 = local_c0;
  psVar1 = (short *)(local_c0 + 3);
  do {
    sVar24 = *psVar1;
    cVar3 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar24 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar24 == 1) {
    piVar18 = (int *)((long)local_c0 + 0x1c);
    do {
      iVar15 = *piVar18;
      cVar3 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar23) {
        *piVar18 = -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar19 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar19;
      local_48 = *puVar12;
      FUN_00c44438(lVar19 + 0x8040,&local_48);
    }
  }
  else if (sVar24 == 0) goto LAB_01a66894;
  goto LAB_01a660e8;
LAB_01a66604:
  auVar37 = *(undefined1 (*) [16])(plVar28 + 6);
  goto LAB_01a66608;
  while (sVar24 = sVar2, sVar2 != 0) {
LAB_01a664b8:
    sVar2 = *psVar1;
    if (sVar2 == sVar24) {
      cVar3 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01a664dc;
      bVar23 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a664dc:
      bVar23 = false;
    }
    if (bVar23) {
      lVar19 = local_c0[2];
      if (lVar19 == 0) goto LAB_01a66558;
      lVar17 = FUN_00ded3a0(lVar19 + 0xe0,&local_48);
      if (lVar17 == 0) {
        auVar35._8_8_ = _UNK_03cabe58;
        auVar35._0_8_ = _DAT_03cabe50;
      }
      else {
        auVar35 = *(undefined1 (*) [16])(lVar17 + 0x2a0);
      }
      fStack_e8 = auVar35._8_4_;
      fStack_e4 = auVar35._12_4_;
      local_f0 = auVar35._0_4_;
      fStack_ec = auVar35._4_4_;
      (**(code **)(*(long *)(lVar19 + -0x28) + 0x60))((long *)(lVar19 + -0x28));
      break;
    }
  }
  if (local_c0 != (undefined8 *)0x0) goto LAB_01a66534;
LAB_01a660e8:
  uVar14 = FUN_012595d8(param_1,0x200000001);
  if ((uVar14 & 0xff) != 0) {
    if (0xff < uVar14) {
      uVar22 = param_1[0x2c];
      auVar37 = ZEXT816(0);
      if (uVar22 != 0) {
        uVar26 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
        uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
        uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar26 < 2) {
          uVar27 = uVar22 - 1 & 0x55c0d7a581349f0f;
        }
        else {
          uVar27 = 0x55c0d7a581349f0f;
          if (uVar22 < 0x55c0d7a581349f10) {
            uVar27 = 0;
            if (uVar22 != 0) {
              uVar27 = 0x55c0d7a581349f0f / uVar22;
            }
            uVar27 = 0x55c0d7a581349f0f - uVar27 * uVar22;
          }
        }
        auVar37 = ZEXT816(0);
        plVar28 = *(long **)(param_1[0x2b] + uVar27 * 8);
        if (plVar28 != (long *)0x0) {
          plVar28 = (long *)*plVar28;
          auVar37 = ZEXT816(0);
          if (plVar28 != (long *)0x0) {
            if (uVar26 < 2) {
              do {
                if (plVar28[1] == 0x55c0d7a581349f0f) {
                  if (plVar28[2] == 0x55c0d7a581349f0f) goto LAB_01a66604;
                }
                else if ((plVar28[1] & uVar22 - 1) != uVar27) break;
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
            else {
              do {
                uVar26 = plVar28[1];
                if (uVar26 == 0x55c0d7a581349f0f) {
                  if (plVar28[2] == 0x55c0d7a581349f0f) goto LAB_01a66604;
                }
                else {
                  if (uVar22 <= uVar26) {
                    uVar4 = 0;
                    if (uVar22 != 0) {
                      uVar4 = uVar26 / uVar22;
                    }
                    uVar26 = uVar26 - uVar4 * uVar22;
                  }
                  if (uVar26 != uVar27) break;
                }
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
            auVar37 = ZEXT816(0);
          }
        }
      }
LAB_01a66608:
      auVar50 = NEON_ext(ZEXT816(0),auVar37,0xc,1);
      auVar11._4_8_ = 0;
      auVar11._0_4_ = auVar37._0_4_;
      auVar36._12_4_ = auVar37._8_4_;
      auVar36._0_12_ = auVar11 << 0x20;
      auVar37 = NEON_ext(auVar36,auVar37,8,1);
      auVar37 = NEON_ext(auVar37,auVar50,4,1);
      fVar72 = auVar37._0_4_ * 0.5;
      fVar75 = auVar37._4_4_ * 0.5;
      fVar76 = auVar37._8_4_ * 0.5;
      fVar77 = auVar37._12_4_ * 0.5;
      iVar15 = -(uint)(fVar72 == 0.0);
      iVar7 = -(uint)(fVar75 == 0.0);
      iVar21 = -(uint)(fVar76 == 0.0);
      iVar54 = -(uint)(fVar77 == 0.0);
      iVar33 = -(uint)(ABS(fVar72) == INFINITY);
      iVar40 = -(uint)(ABS(fVar75) == INFINITY);
      iVar42 = -(uint)(ABS(fVar76) == INFINITY);
      iVar43 = -(uint)(ABS(fVar77) == INFINITY);
      auVar60._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar72) & 0x80000000 ^ 0xbf000000) + fVar72 * 0.15915494);
      auVar60._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar75) & 0x80000000 ^ 0xbf000000) + fVar75 * 0.15915494);
      auVar60._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar76) & 0x80000000 ^ 0xbf000000) + fVar76 * 0.15915494);
      auVar60._12_4_ =
           (int)((float)(-(uint)(0.0 <= fVar77) & 0x80000000 ^ 0xbf000000) + fVar77 * 0.15915494);
      auVar37 = NEON_scvtf(auVar60,4);
      auVar38[0] = ~(byte)iVar33;
      auVar38[1] = ~(byte)((uint)iVar33 >> 8);
      auVar38[2] = ~(byte)((uint)iVar33 >> 0x10);
      auVar38[3] = ~(byte)((uint)iVar33 >> 0x18);
      auVar38[4] = ~(byte)iVar40;
      auVar38[5] = ~(byte)((uint)iVar40 >> 8);
      auVar38[6] = ~(byte)((uint)iVar40 >> 0x10);
      auVar38[7] = ~(byte)((uint)iVar40 >> 0x18);
      auVar38[8] = ~(byte)iVar42;
      auVar38[9] = ~(byte)((uint)iVar42 >> 8);
      auVar38[10] = ~(byte)((uint)iVar42 >> 0x10);
      auVar38[0xb] = ~(byte)((uint)iVar42 >> 0x18);
      auVar38[0xc] = ~(byte)iVar43;
      auVar38[0xd] = ~(byte)((uint)iVar43 >> 8);
      auVar38[0xe] = ~(byte)((uint)iVar43 >> 0x10);
      auVar38[0xf] = ~(byte)((uint)iVar43 >> 0x18);
      fVar95 = fVar72 + 1.5707964;
      fVar34 = fVar75 + 1.5707964;
      fVar96 = fVar76 + 1.5707964;
      fVar41 = fVar77 + 1.5707964;
      fVar72 = fVar72 - auVar37._0_4_ * 6.2831855;
      fVar75 = fVar75 - auVar37._4_4_ * 6.2831855;
      fVar76 = fVar76 - auVar37._8_4_ * 6.2831855;
      fVar77 = fVar77 - auVar37._12_4_ * 6.2831855;
      iVar33 = -(uint)(ABS(fVar95) == INFINITY);
      iVar40 = -(uint)(ABS(fVar34) == INFINITY);
      iVar42 = -(uint)(ABS(fVar96) == INFINITY);
      iVar43 = -(uint)(ABS(fVar41) == INFINITY);
      auVar51[0] = ~(byte)iVar33;
      auVar51[1] = ~(byte)((uint)iVar33 >> 8);
      auVar51[2] = ~(byte)((uint)iVar33 >> 0x10);
      auVar51[3] = ~(byte)((uint)iVar33 >> 0x18);
      auVar51[4] = ~(byte)iVar40;
      auVar51[5] = ~(byte)((uint)iVar40 >> 8);
      auVar51[6] = ~(byte)((uint)iVar40 >> 0x10);
      auVar51[7] = ~(byte)((uint)iVar40 >> 0x18);
      auVar51[8] = ~(byte)iVar42;
      auVar51[9] = ~(byte)((uint)iVar42 >> 8);
      auVar51[10] = ~(byte)((uint)iVar42 >> 0x10);
      auVar51[0xb] = ~(byte)((uint)iVar42 >> 0x18);
      auVar51[0xc] = ~(byte)iVar43;
      auVar51[0xd] = ~(byte)((uint)iVar43 >> 8);
      auVar51[0xe] = ~(byte)((uint)iVar43 >> 0x10);
      auVar51[0xf] = ~(byte)((uint)iVar43 >> 0x18);
      fVar72 = (float)((uint)fVar72 ^
                      ((uint)fVar72 ^ (uint)(-3.1415927 - fVar72)) & -(uint)(fVar72 < -1.5707964));
      fVar75 = (float)((uint)fVar75 ^
                      ((uint)fVar75 ^ (uint)(-3.1415927 - fVar75)) & -(uint)(fVar75 < -1.5707964));
      fVar76 = (float)((uint)fVar76 ^
                      ((uint)fVar76 ^ (uint)(-3.1415927 - fVar76)) & -(uint)(fVar76 < -1.5707964));
      fVar77 = (float)((uint)fVar77 ^
                      ((uint)fVar77 ^ (uint)(-3.1415927 - fVar77)) & -(uint)(fVar77 < -1.5707964));
      auVar45._0_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar95) & 0x80000000 ^ 0x3f000000) + fVar95 * 0.15915494);
      auVar45._4_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar34) & 0x80000000 ^ 0x3f000000) + fVar34 * 0.15915494);
      auVar45._8_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar96) & 0x80000000 ^ 0x3f000000) + fVar96 * 0.15915494);
      auVar45._12_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar41) & 0x80000000 ^ 0x3f000000) + fVar41 * 0.15915494);
      auVar37 = NEON_scvtf(auVar45,4);
      fVar95 = fVar95 - auVar37._0_4_ * 6.2831855;
      fVar34 = fVar34 - auVar37._4_4_ * 6.2831855;
      uVar86 = (undefined1)((uint)fVar34 >> 8);
      uVar87 = (undefined1)((uint)fVar34 >> 0x10);
      uVar88 = (undefined1)((uint)fVar34 >> 0x18);
      fVar96 = fVar96 - auVar37._8_4_ * 6.2831855;
      uVar89 = (undefined1)((uint)fVar96 >> 8);
      uVar90 = (undefined1)((uint)fVar96 >> 0x10);
      uVar91 = (undefined1)((uint)fVar96 >> 0x18);
      fVar41 = fVar41 - auVar37._12_4_ * 6.2831855;
      uVar92 = (undefined1)((uint)fVar41 >> 8);
      uVar93 = (undefined1)((uint)fVar41 >> 0x10);
      uVar94 = (undefined1)((uint)fVar41 >> 0x18);
      fVar72 = (float)((uint)fVar72 ^
                      ((uint)fVar72 ^ (uint)(3.1415927 - fVar72)) & -(uint)(1.5707964 < fVar72));
      fVar75 = (float)((uint)fVar75 ^
                      ((uint)fVar75 ^ (uint)(3.1415927 - fVar75)) & -(uint)(1.5707964 < fVar75));
      fVar76 = (float)((uint)fVar76 ^
                      ((uint)fVar76 ^ (uint)(3.1415927 - fVar76)) & -(uint)(1.5707964 < fVar76));
      fVar77 = (float)((uint)fVar77 ^
                      ((uint)fVar77 ^ (uint)(3.1415927 - fVar77)) & -(uint)(1.5707964 < fVar77));
      fVar78 = fVar72 * fVar72;
      fVar79 = fVar75 * fVar75;
      fVar80 = fVar76 * fVar76;
      fVar81 = fVar77 * fVar77;
      auVar46._0_4_ = -(uint)(fVar95 < -1.5707964);
      auVar46._4_4_ = -(uint)(fVar34 < -1.5707964);
      auVar46._8_4_ = -(uint)(fVar96 < -1.5707964);
      auVar46._12_4_ = -(uint)(fVar41 < -1.5707964);
      auVar61._0_4_ = -3.1415927 - fVar95;
      auVar61._4_4_ = -3.1415927 - fVar34;
      auVar61._8_4_ = -3.1415927 - fVar96;
      auVar61._12_4_ = -3.1415927 - fVar41;
      auVar8[4] = SUB41(fVar34,0);
      auVar8._0_4_ = fVar95;
      auVar8[5] = uVar86;
      auVar8[6] = uVar87;
      auVar8[7] = uVar88;
      auVar8[8] = SUB41(fVar96,0);
      auVar8[9] = uVar89;
      auVar8[10] = uVar90;
      auVar8[0xb] = uVar91;
      auVar8[0xc] = SUB41(fVar41,0);
      auVar8[0xd] = uVar92;
      auVar8[0xe] = uVar93;
      auVar8[0xf] = uVar94;
      auVar47[4] = SUB41(fVar34,0);
      auVar47._0_4_ = fVar95;
      auVar47[5] = uVar86;
      auVar47[6] = uVar87;
      auVar47[7] = uVar88;
      auVar47[8] = SUB41(fVar96,0);
      auVar47[9] = uVar89;
      auVar47[10] = uVar90;
      auVar47[0xb] = uVar91;
      auVar47[0xc] = SUB41(fVar41,0);
      auVar47[0xd] = uVar92;
      auVar47[0xe] = uVar93;
      auVar47[0xf] = uVar94;
      auVar47 = auVar47 ^ (auVar8 ^ auVar61) & auVar46;
      auVar39._8_4_ = 0x7fc00000;
      auVar39._0_8_ = 0x7fc000007fc00000;
      auVar39._12_4_ = 0x7fc00000;
      auVar57._0_4_ = -(uint)(1.5707964 < auVar47._0_4_);
      auVar57._4_4_ = -(uint)(1.5707964 < auVar47._4_4_);
      auVar57._8_4_ = -(uint)(1.5707964 < auVar47._8_4_);
      auVar57._12_4_ = -(uint)(1.5707964 < auVar47._12_4_);
      auVar5._4_4_ = 3.1415927 - auVar47._4_4_;
      auVar5._0_4_ = 3.1415927 - auVar47._0_4_;
      auVar5._8_4_ = 3.1415927 - auVar47._8_4_;
      auVar5._12_4_ = 3.1415927 - auVar47._12_4_;
      auVar47 = auVar47 ^ (auVar47 ^ auVar5) & auVar57;
      auVar37 = NEON_fmov(0x3f800000,4);
      fVar95 = auVar47._0_4_;
      fVar82 = fVar95 * fVar95;
      fVar34 = auVar47._4_4_;
      fVar83 = fVar34 * fVar34;
      fVar96 = auVar47._8_4_;
      fVar84 = fVar96 * fVar96;
      fVar41 = auVar47._12_4_;
      fVar85 = fVar41 * fVar41;
      auVar48._0_4_ =
           fVar95 * (auVar37._0_4_ +
                    fVar82 * (fVar82 * (fVar82 * (fVar82 * (fVar82 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar48._4_4_ =
           fVar34 * (auVar37._4_4_ +
                    fVar83 * (fVar83 * (fVar83 * (fVar83 * (fVar83 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar48._8_4_ =
           fVar96 * (auVar37._8_4_ +
                    fVar84 * (fVar84 * (fVar84 * (fVar84 * (fVar84 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar48._12_4_ =
           fVar41 * (auVar37._12_4_ +
                    fVar85 * (fVar85 * (fVar85 * (fVar85 * (fVar85 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar48 = auVar48 ^ (auVar48 ^ auVar39) & ~auVar51;
      auVar6[1] = ~(byte)((uint)iVar15 >> 8);
      auVar6[0] = ~(byte)iVar15;
      auVar6[2] = ~(byte)((uint)iVar15 >> 0x10);
      auVar6[3] = ~(byte)((uint)iVar15 >> 0x18);
      auVar6[4] = ~(byte)iVar7;
      auVar6[5] = ~(byte)((uint)iVar7 >> 8);
      auVar6[6] = ~(byte)((uint)iVar7 >> 0x10);
      auVar6[7] = ~(byte)((uint)iVar7 >> 0x18);
      auVar6[8] = ~(byte)iVar21;
      auVar6[9] = ~(byte)((uint)iVar21 >> 8);
      auVar6[10] = ~(byte)((uint)iVar21 >> 0x10);
      auVar6[0xb] = ~(byte)((uint)iVar21 >> 0x18);
      auVar6[0xc] = ~(byte)iVar54;
      auVar6[0xd] = ~(byte)((uint)iVar54 >> 8);
      auVar6[0xe] = ~(byte)((uint)iVar54 >> 0x10);
      auVar6[0xf] = ~(byte)((uint)iVar54 >> 0x18);
      auVar9._4_4_ = fStack_ec;
      auVar9._0_4_ = local_f0;
      auVar9._8_4_ = fStack_e8;
      auVar9._12_4_ = fStack_e4;
      auVar52._0_4_ =
           fVar72 * (auVar37._0_4_ +
                    fVar78 * (fVar78 * (fVar78 * (fVar78 * (fVar78 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar52._4_4_ =
           fVar75 * (auVar37._4_4_ +
                    fVar79 * (fVar79 * (fVar79 * (fVar79 * (fVar79 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar52._8_4_ =
           fVar76 * (auVar37._8_4_ +
                    fVar80 * (fVar80 * (fVar80 * (fVar80 * (fVar80 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar52._12_4_ =
           fVar77 * (auVar37._12_4_ +
                    fVar81 * (fVar81 * (fVar81 * (fVar81 * (fVar81 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar52 = auVar52 ^ (auVar52 ^ auVar39) & ~auVar38;
      fVar76 = auVar52._0_4_;
      auVar39 = auVar39 ^ (auVar39 ^ auVar48 ^ (auVar48 ^ auVar37) & ~auVar6) & auVar38;
      fVar95 = auVar39._0_4_;
      fVar96 = auVar39._4_4_;
      fVar77 = auVar52._4_4_;
      fVar72 = auVar39._8_4_;
      fVar78 = auVar52._8_4_;
      auVar56._4_4_ = fStack_ec;
      auVar56._0_4_ = fStack_ec;
      auVar56._8_4_ = fStack_ec;
      auVar56._12_4_ = fStack_ec;
      auVar53._4_4_ = fStack_e8;
      auVar53._0_4_ = fStack_e8;
      auVar53._8_4_ = fStack_e8;
      auVar53._12_4_ = fStack_e8;
      auVar37 = NEON_ext(auVar53,auVar9,0xc,1);
      fVar34 = fVar72 * fVar95 * fVar77 + fVar78 * fVar96 * fVar76 * (float)_DAT_03cab3a0;
      fVar41 = fVar78 * fVar95 * fVar96 +
               fVar72 * fVar77 * fVar76 * (float)((ulong)_DAT_03cab3a0 >> 0x20);
      fVar75 = fVar72 * fVar76 * fVar96 + fVar78 * fVar77 * fVar95 * (float)_UNK_03cab3a8;
      fVar72 = fVar72 * fVar95 * fVar96 +
               fVar78 * fVar77 * fVar76 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
      auVar50 = NEON_ext(auVar56,auVar37,0xc,1);
      auVar62._4_4_ = fVar75;
      auVar62._0_4_ = fVar75;
      auVar62._8_4_ = fVar75;
      auVar62._12_4_ = fVar75;
      auVar63._4_12_ = auVar62._4_12_;
      auVar63._0_4_ = fVar34;
      auVar65._0_8_ = auVar63._0_8_;
      auVar65._8_4_ = fVar41;
      auVar65._12_4_ = fVar75;
      auVar64._8_8_ = auVar65._8_8_;
      auVar64._4_4_ = fVar75;
      auVar64._0_4_ = fVar34;
      auVar66._0_12_ = auVar64._0_12_;
      auVar66._12_4_ = fVar75;
      auVar74 = NEON_ext(auVar66,auVar66,8,1);
      fVar96 = (float)((ulong)_DAT_03cab640 >> 0x20);
      fVar76 = (float)((ulong)_UNK_03cab648 >> 0x20);
      fVar77 = local_f0 * fVar76;
      fVar95 = auVar74._0_4_;
      auVar67._4_12_ = auVar66._4_12_;
      auVar67._0_4_ = fVar95;
      auVar69._0_8_ = auVar67._0_8_;
      auVar69._8_4_ = auVar74._8_4_;
      auVar69._12_4_ = fVar75;
      auVar68._8_8_ = auVar69._8_8_;
      auVar68._4_4_ = fVar34;
      auVar68._0_4_ = fVar95;
      auVar70._0_12_ = auVar68._0_12_;
      auVar70._12_4_ = fVar41;
      auVar71 = NEON_ext(auVar70,auVar74,8,1);
      auVar71 = NEON_ext(auVar71,auVar71,0xc,1);
      local_f0 = (fVar34 * fStack_e4 + fVar72 * local_f0 * (float)_DAT_03cab640 +
                 auVar71._0_4_ * auVar50._0_4_ * (float)_DAT_03cab640) - auVar37._0_4_ * fVar95;
      fStack_ec = (fVar41 * fStack_e4 + fVar72 * fStack_ec * fVar96 +
                  auVar71._4_4_ * auVar50._4_4_ * fVar96) - auVar37._4_4_ * auVar74._4_4_;
      fStack_e8 = (fVar75 * fStack_e4 + fVar72 * fStack_e8 * (float)_UNK_03cab648 +
                  auVar71._8_4_ * auVar50._8_4_ * (float)_UNK_03cab648) -
                  auVar37._8_4_ * auVar74._8_4_;
      fStack_e4 = (fVar72 * fStack_e4 + fVar34 * fVar77 + auVar71._12_4_ * auVar50._12_4_ * fVar76)
                  - auVar37._12_4_ * auVar74._12_4_;
    }
    auVar10._8_4_ = fStack_e8;
    auVar10._0_8_ = CONCAT44(fStack_ec,local_f0);
    auVar10._12_4_ = fStack_e4;
    *(long *)(lVar16 + 0x2a8) = auVar10._8_8_;
    *(ulong *)(lVar16 + 0x2a0) = CONCAT44(fStack_ec,local_f0);
  }
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
LAB_01a6685c:
  (**(code **)(*(long *)(lVar20 + -0x28) + 0x60))((long *)(lVar20 + -0x28));
LAB_01a66870:
  if (local_70 != (undefined8 *)0x0) {
LAB_01a66874:
    puVar12 = local_70;
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar24 = *psVar1;
      cVar3 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar24 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar24 == 1) {
      piVar18 = (int *)((long)local_70 + 0x1c);
      do {
        iVar15 = *piVar18;
        cVar3 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar23) {
          *piVar18 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar20;
        local_c0 = (undefined8 *)*puVar12;
        FUN_00c44438(lVar20 + 0x8040,&local_c0);
      }
    }
    else if (sVar24 == 0) {
LAB_01a66894:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


