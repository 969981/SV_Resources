/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6f7c8; name: FUN_00d6f7c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6f7c8(undefined1 param_1 [16],long param_2,float *param_3,float *param_4,
                 undefined8 *param_5,undefined8 *param_6,long *param_7)

{
  short *psVar1;
  long *plVar2;
  char cVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  short sVar21;
  long lVar22;
  int iVar23;
  undefined1 auVar24 [12];
  int iVar32;
  undefined1 auVar25 [16];
  uint uVar33;
  uint uVar35;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar34;
  int iVar36;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  float local_420;
  float fStack_41c;
  float fStack_418;
  undefined1 auStack_3f0 [4];
  float local_3ec;
  undefined1 local_3e0 [16];
  ulong local_3b8;
  uint local_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  ulong local_378;
  undefined4 local_370;
  uint uStack_36c;
  undefined8 uStack_368;
  undefined1 local_360 [16];
  ulong local_338;
  undefined *local_330;
  char **local_328;
  undefined2 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  char *local_2b0 [3];
  long *local_298;
  undefined4 local_290;
  undefined1 auStack_288 [8];
  ulong local_280 [66];
  
  lVar20 = *(long *)(param_2 + 0x80);
  auVar27._0_4_ = param_1._0_4_ + 0.0;
  auVar27._4_4_ = param_1._4_4_ + *(float *)(param_2 + 0xe4) * 0.5;
  auVar27._8_4_ = param_1._8_4_ + 0.0;
  auVar27._12_4_ = param_1._12_4_ + 0.0;
  fVar44 = (float)_DAT_04837ba0;
  fVar45 = (float)((ulong)_DAT_04837ba0 >> 0x20);
  fVar43 = auVar27._4_4_ - fVar45;
  auVar39._0_8_ = CONCAT44(fVar43,auVar27._0_4_ - fVar44);
  fVar46 = (float)uRam0000000004837ba8;
  auVar39._8_4_ = auVar27._8_4_ - fVar46;
  fVar47 = (float)((ulong)uRam0000000004837ba8 >> 0x20);
  auVar39._12_4_ = auVar27._12_4_ - fVar47;
  if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar20 + 0x1a);
    sVar21 = *(short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d6fc18;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6fc18:
        bVar6 = false;
      }
      if (bVar6) {
        lVar20 = *(long *)(lVar20 + 0x10);
        if (lVar20 != 0) {
          cVar5 = *(char *)(lVar20 + 0x148);
          cVar3 = *(char *)(lVar20 + 0x1f8);
          if (cVar5 != '\0') {
            fVar43 = (float)((ulong)*(undefined8 *)(lVar20 + 0xf8) >> 0x20);
          }
          *param_3 = fVar43;
          if (cVar3 == '\0') {
            fVar43 = fVar43 + -1.0;
          }
          else {
            fVar43 = *(float *)(lVar20 + 0x1ac);
          }
          *param_4 = fVar43;
          if (param_5 != (undefined8 *)0x0) {
            if (cVar5 == '\0') {
              auVar48._8_8_ = _UNK_03cabe68;
              auVar48._0_8_ = _DAT_03cabe60;
            }
            else {
              auVar48 = *(undefined1 (*) [16])(lVar20 + 0x108);
            }
            param_5[1] = auVar48._8_8_;
            *param_5 = auVar48._0_8_;
          }
          if (param_6 != (undefined8 *)0x0) {
            if (cVar3 == '\0') {
              auVar31._8_8_ = _UNK_03cabe68;
              auVar31._0_8_ = _DAT_03cabe60;
            }
            else {
              auVar31 = *(undefined1 (*) [16])(lVar20 + 0x1b8);
            }
            param_6[1] = auVar31._8_8_;
            *param_6 = auVar31._0_8_;
          }
          if (param_7 == (long *)0x0) goto LAB_00d6fd5c;
          fVar44 = *param_3;
          plVar2 = (long *)(lVar20 + 0x228);
          fVar43 = *param_4;
          lVar22 = nn::os::GetCurrentThread();
          goto LAB_00d6fcac;
        }
        break;
      }
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
  puVar15 = PTR_DAT_047d8c00;
  fVar44 = fVar44 + auVar27._0_4_;
  fVar45 = fVar45 + auVar27._4_4_;
  fVar46 = fVar46 + auVar27._8_4_;
  fVar47 = fVar47 + auVar27._12_4_;
  local_338 = 0;
  local_378 = 0;
  local_3b8 = 0;
  auVar25 = auVar27;
  auVar37 = auVar39;
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar23 = __cxa_guard_acquire(PTR_DAT_047d8c00);
    auVar25._4_4_ = auVar27._4_4_;
    auVar25._0_4_ = auVar27._0_4_;
    auVar25._8_4_ = auVar27._8_4_;
    auVar25._12_4_ = auVar27._12_4_;
    auVar37._8_4_ = auVar39._8_4_;
    auVar37._0_8_ = auVar39._0_8_;
    auVar37._12_4_ = auVar39._12_4_;
    if (iVar23 != 0) {
      FUN_00100190(auVar25,auVar37,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  puVar17 = PTR_DAT_047d8c10;
  puVar16 = PTR_DAT_047d8c08;
  lVar20 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar20;
  local_2b0[0] = (char *)((ulong)local_2b0[0] & 0xffffffffff000000);
  uVar18 = FUN_00d6fedc(auVar25,auVar37,*(undefined8 *)(lVar20 + 0x70),0x60042,&local_370,1,
                        local_2b0);
  if (((*puVar15 & 1) == 0) && (iVar23 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar23 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar20 = *(long *)puVar16;
  *(long *)puVar17 = lVar20;
  auVar13._4_4_ = auVar27._4_4_;
  auVar13._0_4_ = auVar27._0_4_;
  auVar13._8_4_ = auVar27._8_4_;
  auVar13._12_4_ = auVar27._12_4_;
  auVar14._4_4_ = fVar45;
  auVar14._0_4_ = fVar44;
  auVar14._8_4_ = fVar46;
  auVar14._12_4_ = fVar47;
  local_2b0[0] = (char *)((ulong)local_2b0[0] & 0xffffffffff000000);
  uVar19 = FUN_00d6fedc(auVar13,auVar14,*(undefined8 *)(lVar20 + 0x70),0x60042,&local_3b0,1,
                        local_2b0);
  uVar35 = -(uint)((uVar19 & 1) != 0);
  iVar23 = -(uint)((uVar18 & 1) != 0);
  fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ local_3b0) & uVar35);
  fVar45 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ uStack_3ac) & uVar35);
  uVar33 = (uint)fVar46 ^ ((uint)fVar46 ^ uStack_3a8) & uVar35;
  uVar35 = (uint)fVar47 ^ ((uint)fVar47 ^ uStack_3a4) & uVar35;
  auVar7._8_4_ = auVar39._8_4_;
  auVar7._0_8_ = auVar39._0_8_;
  auVar38._4_4_ = iVar23;
  auVar38._0_4_ = iVar23;
  auVar38._8_4_ = iVar23;
  auVar38._12_4_ = iVar23;
  auVar26._4_4_ = uStack_36c;
  auVar26._0_4_ = local_370;
  auVar26._8_8_ = uStack_368;
  auVar7._12_4_ = auVar39._12_4_;
  auVar26 = auVar26 ^ (auVar26 ^ auVar7) & ~auVar38;
  fStack_418 = auVar26._8_4_;
  local_420 = auVar26._0_4_;
  fStack_41c = auVar26._4_4_;
  if (((*puVar15 & 1) == 0) && (iVar23 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar23 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar20 = *(long *)puVar16;
  *(long *)puVar17 = lVar20;
  lVar22 = *(long *)(lVar20 + 0x70);
  local_290 = 0;
  local_2b0[1] = (char *)0xffffffff;
  local_2b0[2] = (char *)0x1;
  memset(auStack_288,0xff,0x200);
  local_2f0 = CONCAT44(fVar45,fVar44);
  auVar12._4_4_ = fVar45;
  auVar12._0_4_ = fVar44;
  auVar12._8_4_ = uVar33;
  auVar11._4_4_ = fVar45;
  auVar11._0_4_ = fVar44;
  auVar11._8_4_ = uVar33;
  auVar48 = NEON_fmov(0x3f800000,4);
  local_298 = (long *)CONCAT71(local_298._1_7_,2);
  local_31c = 0;
  local_318 = 0;
  local_330 = (undefined *)0x0;
  local_328 = (char **)0x0;
  auVar11._12_4_ = uVar35;
  auVar12._12_4_ = uVar35;
  auVar39 = NEON_ext(auVar11,auVar12,8,1);
  auVar27 = ZEXT816(0x3f800000);
  local_420 = local_420 - fVar44;
  fStack_41c = fStack_41c - fVar45;
  fStack_418 = fStack_418 - auVar39._0_4_;
  local_320 = 0xffff;
  iVar23 = -(uint)(local_420 == 0.0);
  iVar32 = -(uint)(fStack_41c == 0.0);
  iVar34 = -(uint)(fStack_418 == 0.0);
  iVar36 = -(uint)(auVar27._0_4_ == 0.0);
  fVar44 = (float)CONCAT13((byte)((uint)local_420 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                           CONCAT12((byte)((uint)local_420 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                    CONCAT11((byte)((uint)local_420 >> 8) &
                                             ~(byte)((uint)iVar23 >> 8),
                                             SUB41(local_420,0) & ~(byte)iVar23)));
  auVar24._0_8_ =
       CONCAT17((byte)((uint)fStack_41c >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                CONCAT16((byte)((uint)fStack_41c >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                         CONCAT15((byte)((uint)fStack_41c >> 8) & ~(byte)((uint)iVar32 >> 8),
                                  CONCAT14(SUB41(fStack_41c,0) & ~(byte)iVar32,fVar44))));
  auVar24[8] = SUB41(fStack_418,0) & ~(byte)iVar34;
  auVar24[9] = (byte)((uint)fStack_418 >> 8) & ~(byte)((uint)iVar34 >> 8);
  auVar24[10] = (byte)((uint)fStack_418 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
  auVar24[0xb] = (byte)((uint)fStack_418 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
  auVar28._12_2_ = 0;
  auVar28._0_12_ = auVar24;
  auVar28[0xe] = auVar27[2] & ~(byte)((uint)iVar36 >> 0x10);
  auVar28[0xf] = auVar27[3] & ~(byte)((uint)iVar36 >> 0x18);
  auVar40._0_4_ = auVar48._0_4_ / fVar44;
  fVar45 = (float)((ulong)auVar24._0_8_ >> 0x20);
  auVar40._4_4_ = auVar48._4_4_ / fVar45;
  auVar40._8_4_ = auVar48._8_4_ / auVar24._8_4_;
  auVar40._12_4_ = auVar48._12_4_ / auVar28._12_4_;
  iVar23 = -(uint)(fVar44 == 0.0);
  iVar32 = -(uint)(fVar45 == 0.0);
  iVar34 = -(uint)(auVar24._8_4_ == 0.0);
  iVar36 = -(uint)(auVar28._12_4_ == 0.0);
  uStack_2e8 = (ulong)(uint)auVar39._0_4_;
  uStack_2d8 = auVar28._8_8_;
  auVar29[0] = ~(byte)iVar23;
  auVar29[1] = ~(byte)((uint)iVar23 >> 8);
  auVar29[2] = ~(byte)((uint)iVar23 >> 0x10);
  auVar29[3] = ~(byte)((uint)iVar23 >> 0x18);
  auVar29[4] = ~(byte)iVar32;
  auVar29[5] = ~(byte)((uint)iVar32 >> 8);
  auVar29[6] = ~(byte)((uint)iVar32 >> 0x10);
  auVar29[7] = ~(byte)((uint)iVar32 >> 0x18);
  auVar29[8] = ~(byte)iVar34;
  auVar29[9] = ~(byte)((uint)iVar34 >> 8);
  auVar29[10] = ~(byte)((uint)iVar34 >> 0x10);
  auVar29[0xb] = ~(byte)((uint)iVar34 >> 0x18);
  auVar29[0xc] = ~(byte)iVar36;
  auVar29[0xd] = ~(byte)((uint)iVar36 >> 8);
  auVar29[0xe] = ~(byte)((uint)iVar36 >> 0x10);
  auVar29[0xf] = ~(byte)((uint)iVar36 >> 0x18);
  auVar8._8_4_ = 0x7f7fffee;
  auVar8._0_8_ = 0x7f7fffee7f7fffee;
  auVar8._12_4_ = 0x7f7fffee;
  auVar30._8_4_ = 0x7f7fffee;
  auVar30._0_8_ = 0x7f7fffee7f7fffee;
  auVar30._12_4_ = 0x7f7fffee;
  auVar30 = auVar30 ^ (auVar8 ^ auVar40) & auVar29;
  uStack_2c8 = auVar30._8_8_;
  local_2d0 = auVar30._0_8_;
  local_2c0 = 0;
  local_2b0[0] = PTR_DAT_047d9310 + 0x10;
  local_310 = 0xfb0001;
  uStack_2e0 = auVar24._0_8_;
  nn::os::LockMutex((MutexType *)(lVar22 + 0x120));
  local_330 = (undefined *)(**(code **)(**(long **)(lVar22 + 8) + 0x68))();
  lVar20 = 0x30;
  do {
    *(ulong *)((long)local_2b0 + lVar20) = *(ulong *)((long)local_2b0 + lVar20) & 1;
    lVar20 = lVar20 + 8;
  } while (lVar20 != 0x228);
  local_280[0] = local_280[0] | 4;
  local_280[1] = local_280[1] | 2;
  local_330 = (undefined *)(**(code **)(**(long **)(lVar22 + 8) + 0x68))();
  local_31c = 1;
  local_328 = local_2b0;
  uVar19 = FUN_00c7a2b0(lVar22,&local_330,auStack_3f0,1);
  nn::os::UnlockMutex((MutexType *)(lVar22 + 0x120));
  fVar44 = (float)(uStack_36c ^ (uStack_36c ^ (uint)fVar43) & ~-(uint)((uVar18 & 1) != 0));
  *param_3 = fVar44;
  if ((uVar19 & 1) == 0) {
    local_3ec = fVar44 + -1.0;
  }
  *param_4 = local_3ec;
  if (param_5 != (undefined8 *)0x0) {
    iVar23 = -(uint)((uVar18 & 1) != 0);
    auVar41._4_4_ = iVar23;
    auVar41._0_4_ = iVar23;
    auVar41._8_4_ = iVar23;
    auVar41._12_4_ = iVar23;
    auVar10._8_4_ = (int)_UNK_03cabe68;
    auVar10._0_8_ = _DAT_03cabe60;
    auVar10._12_4_ = (int)((ulong)_UNK_03cabe68 >> 0x20);
    local_360 = local_360 ^ (local_360 ^ auVar10) & ~auVar41;
    param_5[1] = local_360._8_8_;
    *param_5 = local_360._0_8_;
  }
  if (param_6 != (undefined8 *)0x0) {
    iVar23 = -(uint)((uVar19 & 1) != 0);
    auVar42._4_4_ = iVar23;
    auVar42._0_4_ = iVar23;
    auVar42._8_4_ = iVar23;
    auVar42._12_4_ = iVar23;
    auVar9._8_4_ = (int)_UNK_03cabe68;
    auVar9._0_8_ = _DAT_03cabe60;
    auVar9._12_4_ = (int)((ulong)_UNK_03cabe68 >> 0x20);
    local_3e0 = local_3e0 ^ (local_3e0 ^ auVar9) & ~auVar42;
    param_6[1] = local_3e0._8_8_;
    *param_6 = local_3e0._0_8_;
  }
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  puVar15 = PTR_DAT_047d1a08;
  if ((local_3b8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_3b8 - 1,0);
  }
  if ((local_378 & 1) != 0) {
    (**(code **)(puVar15 + 8))(0,local_378 - 1,0);
  }
  if ((local_338 & 1) == 0) {
    return;
  }
  (**(code **)(puVar15 + 8))(0,local_338 - 1,0);
  return;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_00d6fcac:
    if (*plVar2 != 0) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00d6fccc;
    }
  }
  bVar6 = true;
LAB_00d6fccc:
  if (fVar43 <= fVar44) {
    if (!bVar6) {
      nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x230));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x230));
            while (*plVar2 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar22;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00d6fe74;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar22;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
LAB_00d6fe74:
    if (*(char *)(lVar20 + 0x148) != '\0') {
      local_328 = *(char ***)(lVar20 + 0x140);
      goto LAB_00d6fce8;
    }
  }
  else {
    if (!bVar6) {
      nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x230));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x230));
            while (*plVar2 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar22;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00d6fcd8;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar22;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
LAB_00d6fcd8:
    if (*(char *)(lVar20 + 0x1f8) != '\0') {
      local_328 = *(char ***)(lVar20 + 0x1f0);
      goto LAB_00d6fce8;
    }
  }
  local_328 = (char **)0x0;
LAB_00d6fce8:
  local_330 = PTR_DAT_047d9318 + 0x10;
  *(undefined8 *)(lVar20 + 0x228) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x230));
  local_2b0[0] = (char *)0xff8f4b5e6204ca59;
  local_2b0[1] = "AttrKey";
  local_2b0[2] = (char *)0x7;
  local_298 = (long *)0x0;
  uVar18 = FUN_01e1f6e8(&local_330,local_2b0);
  if (local_298 != (long *)0x0) {
    (**(code **)(*local_298 + 0x20))();
  }
  lVar22 = 1L << (uVar18 & 0x3f);
  if ((int)uVar18 < 0) {
    lVar22 = 0;
  }
  *param_7 = lVar22;
LAB_00d6fd5c:
  lVar22 = *(long *)(lVar20 + 0x70);
  psVar1 = (short *)(lVar22 + 0x1a);
  do {
    sVar21 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar21 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar21 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*(long *)(lVar20 + -0x28) + 0x50))((long *)(lVar20 + -0x28));
  }
  else if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


