/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ff95e4; name: FUN_02ff95e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ff95e4(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6,long param_7)

{
  bool bVar1;
  float *pfVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  char cVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  int iVar63;
  float fVar64;
  int iVar69;
  float fVar70;
  int iVar71;
  undefined1 auVar65 [16];
  int iVar72;
  int iVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar77;
  float fVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
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
  float fStack_53c;
  float local_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  ulong local_480;
  undefined8 uStack_478;
  undefined1 local_470 [16];
  float local_460;
  long local_458;
  long local_448;
  undefined8 local_440;
  long local_438;
  long local_430;
  ulong local_428;
  double local_420;
  double dStack_418;
  undefined8 local_410;
  double dStack_408;
  undefined8 local_400;
  double dStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  long lStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined **local_360;
  undefined1 local_358;
  undefined4 local_354;
  undefined8 local_350;
  undefined1 local_348;
  undefined1 *local_340;
  undefined4 local_338;
  uint local_334;
  undefined1 auStack_330 [256];
  long *local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined **local_210;
  undefined1 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  undefined1 auStack_1e0 [256];
  long *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  
  lVar19 = tpidr_el0;
  lVar14 = *(long *)(lVar19 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar14;
  }
  plVar25 = *(long **)(lVar14 + 0x3e0);
  if (plVar25 == (long *)0x0) {
    uVar15 = _DAT_00000010;
    uVar24 = _DAT_00000020;
  }
  else {
    lVar14 = *plVar25;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("CharacterProxyIntegrate",0x17,*(undefined8 *)(lVar14 + 0x28));
      if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
        (**(code **)(lVar14 + 0x18))("Cast",4,*(undefined8 *)(lVar14 + 0x28));
      }
    }
    puVar18 = (undefined8 *)plVar25[2];
    uVar15 = (long)puVar18 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "LtCharacterProxyIntegrate";
      puVar18[2] = "StCast";
      uVar9 = nn::os::GetSystemTick();
      puVar18[1] = uVar9;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar25[6] != 0)) {
      puVar18 = (undefined8 *)plVar25[2];
      uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar25[6] + 8);
      }
    }
    uVar15 = plVar25[2];
    uVar24 = plVar25[4];
  }
  if ((uVar15 < uVar24) && (*(int *)(param_1 + 0x100) != 0)) {
    lVar14 = (long)*(int *)(param_1 + 0x100) << 3;
    puVar18 = *(undefined8 **)(param_1 + 0xf8);
    do {
      (**(code **)(*(long *)*puVar18 + 0x60))((long *)*puVar18,param_1);
      lVar14 = lVar14 + -8;
      puVar18 = puVar18 + 1;
    } while (lVar14 != 0);
  }
  local_c0 = 0;
  local_b8 = 0x8000000000000000;
  lVar14 = *(long *)(lVar19 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar14;
  }
  local_b0 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
  if (*(long *)(local_b0 + 8) == 0) {
    local_a0 = 0x180;
    local_360 = (undefined **)0x180;
    if (local_b0 == 0) goto LAB_02ff982c;
    local_210 = (undefined **)0x180;
    if (*(ulong *)(local_b0 + 0x28) < 0x180) {
LAB_02ff97c8:
      local_a8 = FUN_031cf3b4(local_b0,&local_210);
    }
    else {
      local_a8 = *(long *)(local_b0 + 0x38);
      if (*(ulong *)(local_b0 + 0x40) < local_a8 + 0x180U) goto LAB_02ff97c8;
      *(ulong *)(local_b0 + 0x38) = local_a8 + 0x180U;
    }
  }
  else {
    local_b0 = 0;
LAB_02ff982c:
    local_a0 = 0x180;
    local_360 = (undefined **)0x180;
    local_a8 = (**(code **)PTR_DAT_047d1a08)(1,&local_360,0x40);
  }
  local_b8 = CONCAT44(0x80000008,(int)local_b8);
  fVar90 = *(float *)(param_2 + 0xc) * 0.001;
  fVar26 = *(float *)(param_1 + 0xc0);
  fVar79 = *(float *)(param_1 + 0xc4);
  fVar81 = *(float *)(param_1 + 200);
  fVar83 = *(float *)(param_1 + 0xcc);
  iVar63 = -(uint)(ABS(fVar26 - *(float *)(param_1 + 0xe0)) <= fVar90);
  iVar69 = -(uint)(ABS(fVar79 - *(float *)(param_1 + 0xe4)) <= fVar90);
  iVar71 = -(uint)(ABS(fVar81 - *(float *)(param_1 + 0xe8)) <= fVar90);
  fVar90 = *(float *)(param_2 + 8);
  if (CONCAT13((byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar63 >> 0x18) &
               (byte)((uint)iVar71 >> 0x18),
               CONCAT12((byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                        (byte)((uint)iVar71 >> 0x10),
                        CONCAT11((byte)((uint)iVar69 >> 8) & (byte)((uint)iVar63 >> 8) &
                                 (byte)((uint)iVar71 >> 8),
                                 (byte)iVar69 & (byte)iVar63 & (byte)iVar71))) == 0) {
    fVar64 = fVar81;
    fVar70 = fVar83;
    fVar88 = fVar26;
    fVar89 = fVar79;
    if (*(char *)(param_3 + 1) == '\x02') {
      fVar82 = (float)*(undefined8 *)(param_3 + 0x18);
      fVar28 = (float)*(undefined8 *)(param_3 + 0x10);
      fVar80 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
      auVar31 = *(undefined1 (*) [16])(param_3 + 0x20);
      fVar29 = fVar26 - auVar31._0_4_;
      fVar77 = fVar79 - auVar31._4_4_;
      fVar78 = fVar81 - auVar31._8_4_;
      fVar84 = fVar28 * fVar29;
      fVar86 = fVar80 * fVar77;
      fVar87 = fVar82 * fVar78;
      fVar85 = fVar84 + fVar86 + fVar87;
      fVar87 = fVar84 + fVar86 + fVar87;
      if (fVar85 < 0.0) {
        fVar88 = auVar31._0_4_ + (fVar29 - fVar28 * fVar85);
        fVar89 = auVar31._4_4_ + (fVar77 - fVar80 * fVar87);
        fVar64 = auVar31._8_4_ + (fVar78 - fVar82 * fVar85);
        fVar70 = auVar31._12_4_ +
                 ((fVar83 - auVar31._12_4_) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) * fVar87);
      }
    }
    fVar88 = fVar88 * fVar90;
    uVar33 = SUB41(fVar88,0);
    uVar35 = (undefined1)((uint)fVar88 >> 8);
    uVar37 = (undefined1)((uint)fVar88 >> 0x10);
    uVar39 = (undefined1)((uint)fVar88 >> 0x18);
    fVar89 = fVar89 * fVar90;
    uVar42 = SUB41(fVar89,0);
    uVar44 = (undefined1)((uint)fVar89 >> 8);
    uVar46 = (undefined1)((uint)fVar89 >> 0x10);
    uVar48 = (undefined1)((uint)fVar89 >> 0x18);
    fVar64 = fVar64 * fVar90;
    uVar49 = SUB41(fVar64,0);
    uVar51 = (undefined1)((uint)fVar64 >> 8);
    uVar53 = (undefined1)((uint)fVar64 >> 0x10);
    uVar55 = (undefined1)((uint)fVar64 >> 0x18);
    fVar70 = fVar70 * fVar90;
    uVar57 = SUB41(fVar70,0);
    uVar58 = (undefined1)((uint)fVar70 >> 8);
    uVar59 = (undefined1)((uint)fVar70 >> 0x10);
    uVar61 = (undefined1)((uint)fVar70 >> 0x18);
  }
  else {
    fVar88 = *(float *)(param_1 + 0xf0) * fVar90;
    auVar31 = *(undefined1 (*) [16])(param_1 + 0xd0);
    fVar89 = auVar31._0_4_ * fVar88;
    uVar33 = SUB41(fVar89,0);
    uVar35 = (undefined1)((uint)fVar89 >> 8);
    uVar37 = (undefined1)((uint)fVar89 >> 0x10);
    uVar39 = (undefined1)((uint)fVar89 >> 0x18);
    fVar89 = auVar31._4_4_ * fVar88;
    uVar42 = SUB41(fVar89,0);
    uVar44 = (undefined1)((uint)fVar89 >> 8);
    uVar46 = (undefined1)((uint)fVar89 >> 0x10);
    uVar48 = (undefined1)((uint)fVar89 >> 0x18);
    fVar89 = auVar31._8_4_ * fVar88;
    uVar49 = SUB41(fVar89,0);
    uVar51 = (undefined1)((uint)fVar89 >> 8);
    uVar53 = (undefined1)((uint)fVar89 >> 0x10);
    uVar55 = (undefined1)((uint)fVar89 >> 0x18);
    fVar88 = auVar31._12_4_ * fVar88;
    uVar57 = SUB41(fVar88,0);
    uVar58 = (undefined1)((uint)fVar88 >> 8);
    uVar59 = (undefined1)((uint)fVar88 >> 0x10);
    uVar61 = (undefined1)((uint)fVar88 >> 0x18);
  }
  *(ulong *)(param_1 + 0xd8) =
       CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,CONCAT13(uVar55,CONCAT12(
                                                  uVar53,CONCAT11(uVar51,uVar49)))))));
  *(ulong *)(param_1 + 0xd0) =
       CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(uVar42,CONCAT13(uVar39,CONCAT12(
                                                  uVar37,CONCAT11(uVar35,uVar33)))))));
  *(float *)(param_1 + 0xe8) = fVar81;
  *(float *)(param_1 + 0xec) = fVar83;
  *(float *)(param_1 + 0xe0) = fVar26;
  *(float *)(param_1 + 0xe4) = fVar79;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xc);
  uVar15 = (ulong)*(uint *)(param_1 + 0x20);
  local_c0 = local_a8;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    do {
      uVar24 = uVar15 - 1;
      iVar63 = (**(code **)(**(long **)(param_1 + 0x48) + 0x78))
                         (*(long **)(param_1 + 0x48),
                          *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar24 * 0x40 + 0x28));
      if (iVar63 == 0) {
        lVar14 = *(long *)(param_1 + 0x18);
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          uVar7 = (ulong)*(uint *)(param_1 + 0x100);
          do {
            plVar10 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar7 - 1) * 8);
            (**(code **)(*plVar10 + 0x30))(plVar10,param_1,lVar14 + uVar24 * 0x40);
            bVar1 = 1 < (long)uVar7;
            uVar7 = uVar7 - 1;
          } while (bVar1);
          lVar14 = *(long *)(param_1 + 0x18);
        }
        iVar63 = *(int *)(param_1 + 0x20);
        lVar17 = (long)iVar63 + -1;
        *(int *)(param_1 + 0x20) = (int)lVar17;
        if (iVar63 != (int)uVar15) {
          memcpy((void *)(lVar14 + uVar24 * 0x40),(void *)(lVar14 + lVar17 * 0x40),0x38);
        }
      }
      bVar1 = 1 < (long)uVar15;
      uVar15 = uVar24;
    } while (bVar1);
  }
  local_228 = (**(code **)(**(long **)(param_1 + 0x48) + 0x30))();
  local_204 = 0;
  local_1f0 = auStack_1e0;
  local_d0 = 1;
  local_200 = 0x5f7ffff05f7ffff0;
  local_1f8 = 0;
  local_210 = &PTR_LAB_04612a48;
  local_1e8 = 0;
  local_1e4 = 0x80000004;
  local_208 = (undefined1)param_5[1];
  local_340 = auStack_330;
  local_354 = 0;
  local_350 = 0x5f7ffff05f7ffff0;
  local_348 = 0;
  local_360 = &PTR_LAB_04612a48;
  local_338 = 0;
  local_334 = 0x80000004;
  local_220 = 1;
  local_358 = (undefined1)param_6[1];
  local_230 = param_6;
  local_e0 = param_5;
  local_d8 = local_228;
  if (*(long *)(param_1 + 0x38) == -1) {
    local_4c8 = 0;
  }
  else {
    local_4c8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))();
  }
  uStack_4b8 = 0;
  local_4c0 = 0;
  if ((1.1920929e-07 < fVar90) && (0 < *(int *)(param_1 + 0x160))) {
    pfVar2 = (float *)(param_1 + 0xd0);
    auVar31 = NEON_fmov(0x3f800000,4);
    iVar63 = 0;
    plVar10 = (long *)(param_1 + 0x18);
    do {
      if (plVar25 != (long *)0x0) {
        lVar14 = *plVar25;
        if (((*(byte *)(lVar14 + 0x38) & 1) == 0) || (plVar25[6] == 0)) {
LAB_02ff9b60:
          puVar23 = (undefined8 *)plVar25[2];
        }
        else {
          puVar18 = (undefined8 *)plVar25[2];
          puVar23 = (undefined8 *)((long)puVar18 + 0x17U & 0xfffffffffffffff8);
          if ((undefined8 *)plVar25[3] < puVar23) goto LAB_02ff9b60;
          plVar25[2] = (long)puVar23;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar25[6] + 8);
            goto LAB_02ff9b60;
          }
        }
        uVar15 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar23 != (undefined8 *)0x0)) {
          *puVar23 = "StInitialCast";
          uVar9 = nn::os::GetSystemTick();
          puVar23[1] = uVar9;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("InitialCast",0xb,*(undefined8 *)(lVar14 + 0x28));
        }
      }
      (**(code **)(*local_e0 + 0x18))();
      local_1e8 = 0;
      (**(code **)(*local_230 + 0x18))();
      local_338 = 0;
      auVar6 = *(undefined1 (*) [16])(param_1 + 0x90);
      auVar65 = ZEXT816(0x3f800000);
      local_500 = auVar31._0_4_;
      fStack_4fc = auVar31._4_4_;
      fStack_4f8 = auVar31._8_4_;
      fStack_4f4 = auVar31._12_4_;
      auVar66._8_4_ = 0x7f7fffee;
      auVar66._0_8_ = 0x7f7fffee7f7fffee;
      auVar76._8_4_ = 0x7f7fffee;
      auVar76._0_8_ = 0x7f7fffee7f7fffee;
      fVar26 = (auVar6._0_4_ + (float)*(undefined8 *)(param_1 + 0xd0)) - auVar6._0_4_;
      fVar79 = (auVar6._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20)) -
               auVar6._4_4_;
      fVar81 = (auVar6._8_4_ + (float)*(undefined8 *)(param_1 + 0xd8)) - auVar6._8_4_;
      local_3e8 = *(undefined8 *)(param_1 + 0x28);
      local_420 = 0.0;
      dStack_418 = 0.0;
      local_3b0 = 0x3a83126f;
      iVar69 = -(uint)(fVar26 == 0.0);
      iVar71 = -(uint)(fVar79 == 0.0);
      iVar72 = -(uint)(fVar81 == 0.0);
      iVar73 = -(uint)(auVar65._0_4_ == 0.0);
      bVar34 = SUB41(fVar26,0) & ~(byte)iVar69;
      bVar36 = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar69 >> 8);
      bVar38 = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
      bVar40 = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
      bVar41 = SUB41(fVar79,0) & ~(byte)iVar71;
      bVar43 = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar71 >> 8);
      bVar45 = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
      bVar47 = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
      bVar50 = SUB41(fVar81,0) & ~(byte)iVar72;
      bVar52 = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar72 >> 8);
      bVar54 = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
      bVar56 = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
      bVar60 = auVar65[2] & ~(byte)((uint)iVar73 >> 0x10);
      bVar62 = auVar65[3] & ~(byte)((uint)iVar73 >> 0x18);
      local_3a8 = 0x10000000000;
      local_3a0 = 0;
      auVar74._0_4_ = local_500 / (float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)));
      auVar74._4_4_ = fStack_4fc / (float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41)));
      auVar74._8_4_ = fStack_4f8 / (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
      auVar74._12_4_ = fStack_4f4 / (float)((uint)CONCAT11(bVar62,bVar60) << 0x10);
      iVar69 = -(uint)((float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34))) == 0.0);
      iVar71 = -(uint)((float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41))) == 0.0);
      iVar72 = -(uint)((float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) == 0.0);
      iVar73 = -(uint)((float)((uint)CONCAT11(bVar62,bVar60) << 0x10) == 0.0);
      auVar65[0] = ~(byte)iVar69;
      auVar65[1] = ~(byte)((uint)iVar69 >> 8);
      auVar65[2] = ~(byte)((uint)iVar69 >> 0x10);
      auVar65[3] = ~(byte)((uint)iVar69 >> 0x18);
      auVar65[4] = ~(byte)iVar71;
      auVar65[5] = ~(byte)((uint)iVar71 >> 8);
      auVar65[6] = ~(byte)((uint)iVar71 >> 0x10);
      auVar65[7] = ~(byte)((uint)iVar71 >> 0x18);
      auVar65[8] = ~(byte)iVar72;
      auVar65[9] = ~(byte)((uint)iVar72 >> 8);
      auVar65[10] = ~(byte)((uint)iVar72 >> 0x10);
      auVar65[0xb] = ~(byte)((uint)iVar72 >> 0x18);
      auVar65[0xc] = ~(byte)iVar73;
      auVar65[0xd] = ~(byte)((uint)iVar73 >> 8);
      auVar65[0xe] = ~(byte)((uint)iVar73 >> 0x10);
      auVar65[0xf] = ~(byte)((uint)iVar73 >> 0x18);
      auVar76._12_4_ = 0x7f7fffee;
      auVar66._12_4_ = 0x7f7fffee;
      auVar66 = auVar66 ^ (auVar76 ^ auVar74) & auVar65;
      local_410 = (double)CONCAT62(local_410._2_6_,0xffff);
      local_410 = (double)((ulong)local_410 & 0xffffffff);
      dStack_408 = 0.0;
      local_400 = CONCAT44(local_400._4_4_,0xfb0001);
      local_390 = 0;
      uStack_388 = 0;
      local_380 = 0;
      uStack_378 = 0;
      local_398 = 0x7f7fffee;
      lStack_3d8 = auVar6._8_8_;
      local_3e0 = auVar6._0_8_;
      uStack_3c8 = CONCAT17(bVar62,CONCAT16(bVar60,(uint6)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(
                                                  bVar52,bVar50)))));
      local_3d0 = CONCAT17(bVar47,CONCAT16(bVar45,CONCAT15(bVar43,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar36,bVar34)))))));
      uStack_3b8 = auVar66._8_8_;
      uStack_3c0 = auVar66._0_8_;
      dStack_418 = (double)(**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      local_420 = (double)(**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
      local_410 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x40),(undefined4)local_410);
      local_3a0 = local_4c8;
      local_3a8 = CONCAT44(local_3a8._4_4_,*(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x144)
                          );
      local_400 = CONCAT71(local_400._1_7_,*(undefined1 *)(param_1 + 0x11c));
      (**(code **)(**(long **)(param_1 + 0x48) + 0x1e8))
                (*(long **)(param_1 + 0x48),&local_420,param_1 + 0x60,&local_210,&local_360);
      if (plVar25 != (long *)0x0) {
        lVar14 = *plVar25;
        if (((*(byte *)(lVar14 + 0x38) & 1) == 0) || (plVar25[6] == 0)) {
LAB_02ff9d34:
          puVar23 = (undefined8 *)plVar25[2];
        }
        else {
          puVar18 = (undefined8 *)plVar25[2];
          puVar23 = (undefined8 *)((long)puVar18 + 0x17U & 0xfffffffffffffff8);
          if ((undefined8 *)plVar25[3] < puVar23) goto LAB_02ff9d34;
          plVar25[2] = (long)puVar23;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar25[6] + 8);
            goto LAB_02ff9d34;
          }
        }
        uVar15 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar23 != (undefined8 *)0x0)) {
          *puVar23 = "StUpdateManifold";
          uVar9 = nn::os::GetSystemTick();
          puVar23[1] = uVar9;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("UpdateManifold",0xe,*(undefined8 *)(lVar14 + 0x28));
        }
      }
      if ((*(int *)((long)param_5 + 0xc) != 0) && (1 < (int)param_5[5])) {
        FUN_00daa150(param_5[4],0,(int)param_5[5] + -1);
      }
      FUN_02ffcefc(param_1,param_6,param_5,pfVar2);
      iVar69 = *(int *)(param_1 + 0x20);
      iVar71 = *(int *)(param_1 + 0x14c);
      local_448 = 0;
      local_440 = 0x8000000000000000;
      lVar14 = *(long *)(lVar19 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar19 + 0x1000b8) = lVar14;
      }
      iVar69 = iVar69 + iVar71 + 10;
      local_438 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
      if (*(long *)(local_438 + 8) != 0) {
        local_438 = 0;
      }
      local_480 = (long)iVar69 * 0x50;
      local_428 = local_480;
      if (local_438 == 0) {
        lVar14 = (**(code **)PTR_DAT_047d1a08)(1,&local_480,0x40);
      }
      else {
        local_420 = (double)(local_480 + 0x3f & 0xffffffffffffffc0);
        if ((ulong)local_420 <= (ulong)*(double *)(local_438 + 0x28)) {
          lVar14 = *(long *)(local_438 + 0x38);
          if ((ulong)((long)local_420 + lVar14) <= *(ulong *)(local_438 + 0x40)) {
            *(long *)(local_438 + 0x38) = (long)local_420 + lVar14;
            goto LAB_02ff9e78;
          }
        }
        lVar14 = FUN_031cf3b4(local_438,&local_420);
      }
LAB_02ff9e78:
      local_440 = CONCAT44(iVar69,(uint)local_440) | 0x8000000000000000;
      local_448 = lVar14;
      local_430 = lVar14;
      FUN_02ffdb84(param_1,param_2,&local_448);
      if (*(int *)((long)param_5 + 0xc) != 0) {
        (**(code **)(*param_5 + 0x20))(param_5);
      }
      FUN_02ff920c(&local_210,&local_360,&local_c0);
      if (plVar25 != (long *)0x0) {
        lVar14 = *plVar25;
        if (((*(byte *)(lVar14 + 0x38) & 1) == 0) || (plVar25[6] == 0)) {
LAB_02ff9f28:
          puVar23 = (undefined8 *)plVar25[2];
        }
        else {
          puVar18 = (undefined8 *)plVar25[2];
          puVar23 = (undefined8 *)((long)puVar18 + 0x17U & 0xfffffffffffffff8);
          if ((undefined8 *)plVar25[3] < puVar23) goto LAB_02ff9f28;
          plVar25[2] = (long)puVar23;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar25[6] + 8);
            goto LAB_02ff9f28;
          }
        }
        uVar15 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar23 != (undefined8 *)0x0)) {
          *puVar23 = "StSlexMove";
          uVar9 = nn::os::GetSystemTick();
          puVar23[1] = uVar9;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("SlexMove",8,*(undefined8 *)(lVar14 + 0x28));
        }
      }
      lStack_3d8 = local_448;
      local_3d0 = CONCAT44(local_3d0._4_4_,(uint)local_440);
      fVar26 = *(float *)(param_1 + 0xc0);
      local_410 = *(double *)(param_1 + 0xc0);
      fVar79 = *(float *)(param_1 + 200);
      dStack_408 = *(double *)(param_1 + 200);
      fVar26 = fVar79 * fVar79 +
               fVar26 * fVar26 + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4);
      uVar33 = 0;
      uVar35 = 0;
      uVar37 = 0;
      uVar39 = 0;
      if (fVar26 != 0.0) {
        fVar26 = (1.0 / SQRT(fVar26)) * *(float *)(param_1 + 0x140) * 0.5;
        uVar33 = SUB41(fVar26,0);
        uVar35 = (undefined1)((uint)fVar26 >> 8);
        uVar37 = (undefined1)((uint)fVar26 >> 0x10);
        uVar39 = (undefined1)((uint)fVar26 >> 0x18);
      }
      local_3e0 = CONCAT44(CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))),fVar90);
      local_420 = 0.0;
      dStack_418 = 0.0;
      uVar27 = *(uint *)(param_1 + 0x150);
      local_3f0 = *(undefined8 *)(param_1 + 0x130);
      local_3e8 = *(undefined8 *)(param_1 + 0x138);
      dStack_3f8 = (double)CONCAT17(0x34,(uint7)uVar27);
      local_400 = CONCAT17((char)(uVar27 >> 0x18),
                           CONCAT16((char)(uVar27 >> 0x10),
                                    CONCAT15((char)(uVar27 >> 8),CONCAT14((char)uVar27,uVar27))));
      uVar15 = (ulong)*(uint *)(param_1 + 0x100);
      uVar27 = (uint)local_440;
      if (0 < (int)*(uint *)(param_1 + 0x100)) {
        do {
          plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar15 - 1) * 8);
          (**(code **)(*plVar11 + 0x20))(plVar11,param_1,plVar10,&local_420);
          bVar1 = 1 < (long)uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
        uVar27 = (uint)local_3d0;
      }
      lVar14 = *(long *)(lVar19 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar19 + 0x1000b8) = lVar14;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
      if (*(long *)(lVar14 + 8) == 0) {
        uVar15 = -(ulong)(uVar27 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar27 << 4;
        local_98 = uVar15;
        if (lVar14 == 0) goto LAB_02ffa124;
        local_480 = uVar15 + 0x3f & 0xffffffffffffffc0;
        if (*(ulong *)(lVar14 + 0x28) < local_480) {
LAB_02ffa0ac:
          lVar17 = FUN_031cf3b4(lVar14,&local_480);
        }
        else {
          lVar17 = *(long *)(lVar14 + 0x38);
          if (*(ulong *)(lVar14 + 0x40) < local_480 + lVar17) goto LAB_02ffa0ac;
          *(ulong *)(lVar14 + 0x38) = local_480 + lVar17;
        }
      }
      else {
        local_98 = -(ulong)(uVar27 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar27 << 4;
LAB_02ffa124:
        uVar15 = local_98;
        lVar17 = (**(code **)PTR_DAT_047d1a08)(1,&local_98,0x40);
        lVar14 = 0;
      }
      local_458 = lVar17;
      FUN_0325c9d0(&local_420,&local_480);
      fVar26 = local_460;
      uVar9 = uStack_478;
      uVar24 = local_480;
      uStack_4b8 = local_470._8_8_;
      local_4c0 = local_470._0_8_;
      fVar79 = (float)local_480;
      fVar81 = (float)(local_480 >> 0x20);
      fVar83 = (float)uStack_478;
      fVar88 = (float)((ulong)uStack_478 >> 0x20);
      if (lVar14 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar17,uVar15);
joined_r0x02ffa1f4:
        if (plVar25 == (long *)0x0) goto LAB_02ffa3b4;
LAB_02ffa234:
        lVar14 = *plVar25;
        if (((*(byte *)(lVar14 + 0x38) & 1) == 0) || (plVar25[6] == 0)) {
LAB_02ffa27c:
          puVar23 = (undefined8 *)plVar25[2];
        }
        else {
          puVar18 = (undefined8 *)plVar25[2];
          puVar23 = (undefined8 *)((long)puVar18 + 0x17U & 0xfffffffffffffff8);
          if ((undefined8 *)plVar25[3] < puVar23) goto LAB_02ffa27c;
          plVar25[2] = (long)puVar23;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar25[6] + 8);
            goto LAB_02ffa27c;
          }
        }
        uVar15 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar23 != (undefined8 *)0x0)) {
          *puVar23 = "StApplySurf";
          uVar30 = nn::os::GetSystemTick();
          puVar23[1] = uVar30;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("ApplySurf",9,*(undefined8 *)(lVar14 + 0x28));
        }
        FUN_02ffae90(param_1,param_2,param_4,param_7);
        lVar14 = *plVar25;
        if (((*(byte *)(lVar14 + 0x38) & 1) == 0) || (plVar25[6] == 0)) {
LAB_02ffa33c:
          puVar23 = (undefined8 *)plVar25[2];
          puVar16 = (undefined8 *)plVar25[3];
        }
        else {
          puVar18 = (undefined8 *)plVar25[2];
          puVar16 = (undefined8 *)plVar25[3];
          puVar23 = (undefined8 *)((long)puVar18 + 0x17U & 0xfffffffffffffff8);
          if (puVar16 < puVar23) goto LAB_02ffa33c;
          plVar25[2] = (long)puVar23;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar25[6] + 8);
            goto LAB_02ffa33c;
          }
        }
        puVar18 = (undefined8 *)((long)puVar23 + 0x17U & 0xfffffffffffffff8);
        if ((puVar18 <= puVar16) && (plVar25[2] = (long)puVar18, puVar23 != (undefined8 *)0x0)) {
          *puVar23 = "StCastMove";
          uVar30 = nn::os::GetSystemTick();
          puVar23[1] = uVar30;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("CastMove",8,*(undefined8 *)(lVar14 + 0x28));
        }
      }
      else {
        uVar15 = uVar15 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(lVar14 + 0x28) < uVar15) || (*(long *)(lVar14 + 0x38) != uVar15 + lVar17)) {
          if (lVar17 != 0) {
            if (*(ulong *)(lVar14 + 0x28) < uVar15 + 0x40) {
              *(int *)(*(long *)(lVar14 + 0x30) + 0x20) =
                   *(int *)(*(long *)(lVar14 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(lVar14 + 0x10) + 0x18))
                        (*(long **)(lVar14 + 0x10),lVar17 - *(int *)(lVar17 + -4),uVar15 + 0x44);
            }
            else {
              if (*(long *)(lVar14 + 0x38) == uVar15 + lVar17) {
                *(long *)(lVar14 + 0x38) = lVar17;
                goto LAB_02ffa3a8;
              }
              FUN_031cf778(lVar14,lVar17);
            }
            goto joined_r0x02ffa1f4;
          }
        }
        else {
          *(long *)(lVar14 + 0x38) = lVar17;
          if (*(long *)(lVar14 + 0x48) == lVar17) {
LAB_02ffa3a8:
            FUN_031cf578(lVar14);
            goto joined_r0x02ffa1f4;
          }
        }
        if (plVar25 != (long *)0x0) goto LAB_02ffa234;
LAB_02ffa3b4:
        FUN_02ffae90(param_1,param_2,param_4,param_7);
      }
      fVar89 = fVar83 * fVar83 + fVar79 * fVar79 + fVar81 * fVar81;
      fVar64 = fVar83 * fVar83 + fVar79 * fVar79 + fVar81 * fVar81;
      if (1.4210855e-14 < fVar89) {
        iVar69 = -(uint)(ABS(*pfVar2 - fVar79) <= 0.001);
        iVar71 = -(uint)(ABS(*(float *)(param_1 + 0xd4) - fVar81) <= 0.001);
        iVar72 = -(uint)(ABS(*(float *)(param_1 + 0xd8) - fVar83) <= 0.001);
        if (CONCAT13((byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                     (byte)((uint)iVar72 >> 0x18),
                     CONCAT12((byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                              (byte)((uint)iVar72 >> 0x10),
                              CONCAT11((byte)((uint)iVar71 >> 8) & (byte)((uint)iVar69 >> 8) &
                                       (byte)((uint)iVar72 >> 8),
                                       (byte)iVar71 & (byte)iVar69 & (byte)iVar72))) == 0) {
          (**(code **)(*local_e0 + 0x18))();
          local_1e8 = 0;
          (**(code **)(*local_230 + 0x18))();
          local_338 = 0;
          auVar66 = ZEXT816(0x3f800000);
          auVar76 = *(undefined1 (*) [16])(param_1 + 0x90);
          local_3e8 = *(undefined8 *)(param_1 + 0x28);
          auVar68._8_4_ = 0x7f7fffee;
          auVar68._0_8_ = 0x7f7fffee7f7fffee;
          auVar6._8_4_ = 0x7f7fffee;
          auVar6._0_8_ = 0x7f7fffee7f7fffee;
          local_420 = 0.0;
          dStack_418 = 0.0;
          local_3b0 = 0x3a83126f;
          local_3a8 = 0x10000000000;
          local_3a0 = 0;
          fVar70 = (fVar79 + auVar76._0_4_) - auVar76._0_4_;
          fVar29 = (fVar81 + auVar76._4_4_) - auVar76._4_4_;
          fVar77 = (fVar83 + auVar76._8_4_) - auVar76._8_4_;
          local_410 = (double)CONCAT62(local_410._2_6_,0xffff);
          local_400 = CONCAT44(local_400._4_4_,0xfb0001);
          local_410 = (double)((ulong)local_410 & 0xffffffff);
          iVar69 = -(uint)(fVar70 == 0.0);
          iVar71 = -(uint)(fVar29 == 0.0);
          iVar72 = -(uint)(fVar77 == 0.0);
          iVar73 = -(uint)(auVar66._0_4_ == 0.0);
          bVar34 = SUB41(fVar70,0) & ~(byte)iVar69;
          bVar36 = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar69 >> 8);
          bVar38 = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          bVar40 = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          bVar41 = SUB41(fVar29,0) & ~(byte)iVar71;
          bVar43 = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar71 >> 8);
          bVar45 = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
          bVar47 = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
          bVar50 = SUB41(fVar77,0) & ~(byte)iVar72;
          bVar52 = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar72 >> 8);
          bVar54 = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
          bVar56 = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
          bVar60 = auVar66[2] & ~(byte)((uint)iVar73 >> 0x10);
          bVar62 = auVar66[3] & ~(byte)((uint)iVar73 >> 0x18);
          auVar75._0_4_ =
               local_500 / (float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)));
          auVar75._4_4_ =
               fStack_4fc / (float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41)));
          auVar75._8_4_ =
               fStack_4f8 / (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
          auVar75._12_4_ = fStack_4f4 / (float)((uint)CONCAT11(bVar62,bVar60) << 0x10);
          dStack_408 = 0.0;
          iVar69 = -(uint)((float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34))) == 0.0);
          iVar71 = -(uint)((float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41))) == 0.0);
          iVar72 = -(uint)((float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) == 0.0);
          iVar73 = -(uint)((float)((uint)CONCAT11(bVar62,bVar60) << 0x10) == 0.0);
          auVar67[0] = ~(byte)iVar69;
          auVar67[1] = ~(byte)((uint)iVar69 >> 8);
          auVar67[2] = ~(byte)((uint)iVar69 >> 0x10);
          auVar67[3] = ~(byte)((uint)iVar69 >> 0x18);
          auVar67[4] = ~(byte)iVar71;
          auVar67[5] = ~(byte)((uint)iVar71 >> 8);
          auVar67[6] = ~(byte)((uint)iVar71 >> 0x10);
          auVar67[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar67[8] = ~(byte)iVar72;
          auVar67[9] = ~(byte)((uint)iVar72 >> 8);
          auVar67[10] = ~(byte)((uint)iVar72 >> 0x10);
          auVar67[0xb] = ~(byte)((uint)iVar72 >> 0x18);
          auVar67[0xc] = ~(byte)iVar73;
          auVar67[0xd] = ~(byte)((uint)iVar73 >> 8);
          auVar67[0xe] = ~(byte)((uint)iVar73 >> 0x10);
          auVar67[0xf] = ~(byte)((uint)iVar73 >> 0x18);
          local_390 = 0;
          uStack_388 = 0;
          local_380 = 0;
          uStack_378 = 0;
          local_398 = 0x7f7fffee;
          auVar6._12_4_ = 0x7f7fffee;
          auVar68._12_4_ = 0x7f7fffee;
          auVar68 = auVar68 ^ (auVar6 ^ auVar75) & auVar67;
          lStack_3d8 = auVar76._8_8_;
          local_3e0 = auVar76._0_8_;
          uStack_3c8 = CONCAT17(bVar62,CONCAT16(bVar60,(uint6)CONCAT13(bVar56,CONCAT12(bVar54,
                                                  CONCAT11(bVar52,bVar50)))));
          local_3d0 = CONCAT17(bVar47,CONCAT16(bVar45,CONCAT15(bVar43,CONCAT14(bVar41,CONCAT13(
                                                  bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)))))
                                              ));
          uStack_3b8 = auVar68._8_8_;
          uStack_3c0 = auVar68._0_8_;
          dStack_418 = (double)(**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
          local_420 = (double)(**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
          local_410 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x40),(undefined4)local_410);
          local_3a0 = local_4c8;
          local_400 = CONCAT71(local_400._1_7_,*(undefined1 *)(param_1 + 0x11c));
          (**(code **)(**(long **)(param_1 + 0x48) + 0x1e8))
                    (*(long **)(param_1 + 0x48),&local_420,param_1 + 0x60,&local_210,&local_360);
          uVar27 = *(uint *)((long)param_5 + 0xc);
          if (0 < (int)uVar27) {
            if (1 < (int)param_5[5]) {
              FUN_00daa150(param_5[4],0,(int)param_5[5] + -1);
            }
            lVar14 = (**(code **)(*param_5 + 0x20))(param_5);
            uVar15 = 0;
            do {
              pdVar3 = (double *)(lVar14 + uVar15 * 0x80);
              dStack_418 = pdVar3[1];
              local_420 = *pdVar3;
              fVar28 = *(float *)(param_1 + 0x140);
              dStack_408 = pdVar3[3];
              local_410 = pdVar3[2];
              dStack_3f8 = pdVar3[10];
              fVar70 = fVar79 * SUB84(local_410,0);
              fVar29 = fVar81 * (float)((ulong)local_410 >> 0x20);
              uVar33 = (undefined1)((uint)fVar29 >> 8);
              uVar35 = (undefined1)((uint)fVar29 >> 0x10);
              uVar37 = (undefined1)((uint)fVar29 >> 0x18);
              fVar77 = fVar83 * SUB84(dStack_408,0);
              uVar39 = (undefined1)((uint)fVar77 >> 8);
              uVar42 = (undefined1)((uint)fVar77 >> 0x10);
              uVar44 = (undefined1)((uint)fVar77 >> 0x18);
              fVar78 = fVar88 * (float)((ulong)dStack_408 >> 0x20);
              uVar46 = (undefined1)((uint)fVar78 >> 8);
              uVar48 = (undefined1)((uint)fVar78 >> 0x10);
              uVar49 = (undefined1)((uint)fVar78 >> 0x18);
              auVar4[4] = SUB41(fVar29,0);
              auVar4._0_4_ = fVar70;
              auVar4[5] = uVar33;
              auVar4[6] = uVar35;
              auVar4[7] = uVar37;
              auVar4[8] = SUB41(fVar77,0);
              auVar4[9] = uVar39;
              auVar4[10] = uVar42;
              auVar4[0xb] = uVar44;
              auVar4[0xc] = SUB41(fVar78,0);
              auVar4[0xd] = uVar46;
              auVar4[0xe] = uVar48;
              auVar4[0xf] = uVar49;
              auVar5[4] = SUB41(fVar29,0);
              auVar5._0_4_ = fVar70;
              auVar5[5] = uVar33;
              auVar5[6] = uVar35;
              auVar5[7] = uVar37;
              auVar5[8] = SUB41(fVar77,0);
              auVar5[9] = uVar39;
              auVar5[10] = uVar42;
              auVar5[0xb] = uVar44;
              auVar5[0xc] = SUB41(fVar78,0);
              auVar5[0xd] = uVar46;
              auVar5[0xe] = uVar48;
              auVar5[0xf] = uVar49;
              auVar76 = NEON_ext(auVar4,auVar5,8,1);
              fVar70 = -*(float *)(pdVar3 + 4) * (auVar76._0_4_ + fVar70 + fVar29);
              fVar29 = fVar28 - fVar70;
              if (fVar29 <= fVar28) {
                fVar28 = fVar29;
              }
              fVar77 = 0.0;
              if (0.0 <= fVar29) {
                fVar77 = fVar28;
              }
              local_400 = CONCAT44(*(float *)(pdVar3 + 4),fVar70);
              local_3f0 = CONCAT44(fVar77,*(undefined4 *)(pdVar3 + 0xc));
              if ((dStack_3f8 == -NAN) || (*(int *)(param_1 + 0x20) < 1)) {
LAB_02ffa75c:
                uVar15 = (ulong)*(uint *)(param_1 + 0x100);
                if (0 < (int)*(uint *)(param_1 + 0x100)) {
                  do {
                    plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar15 - 1) * 8);
                    (**(code **)(*plVar11 + 0x28))(plVar11,param_1,&local_420);
                    bVar1 = 1 < (long)uVar15;
                    uVar15 = uVar15 - 1;
                  } while (bVar1);
                }
                uVar27 = *(uint *)(param_1 + 0x20);
                uVar13 = uVar27;
                if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= (int)uVar27) {
                  FUN_02ffc0e4(plVar10,PTR_PTR_047d1a50,(long)(int)uVar27 + 1);
                  uVar13 = *(uint *)(param_1 + 0x20);
                }
                memcpy((void *)(*(long *)(param_1 + 0x18) + (long)(int)uVar13 * 0x40),&local_420,
                       0x38);
                *(int *)(param_1 + 0x20) = (int)((long)(int)uVar27 + 1);
                FUN_02ff920c(&local_210,&local_360,&local_c0);
                if ((int)uVar27 < 0) break;
                fStack_53c = (float)(CONCAT17((char)((uint)fVar64 >> 0x18),
                                              CONCAT16((char)((uint)fVar64 >> 0x10),
                                                       CONCAT15((char)((uint)fVar64 >> 8),
                                                                CONCAT14(SUB41(fVar64,0),fVar89))))
                                    >> 0x20);
                uVar30 = NEON_fmov(0x3f800000,4);
                uVar33 = 0;
                uVar35 = 0;
                uVar37 = 0;
                uVar39 = 0;
                uVar42 = 0;
                uVar44 = 0;
                uVar46 = 0;
                uVar48 = 0;
                if (fVar89 != 0.0) {
                  fVar89 = (float)uVar30 / SQRT(fVar89);
                  uVar33 = SUB41(fVar89,0);
                  uVar35 = (undefined1)((uint)fVar89 >> 8);
                  uVar37 = (undefined1)((uint)fVar89 >> 0x10);
                  uVar39 = (undefined1)((uint)fVar89 >> 0x18);
                  fVar89 = (float)((ulong)uVar30 >> 0x20) / SQRT(fStack_53c);
                  uVar42 = SUB41(fVar89,0);
                  uVar44 = (undefined1)((uint)fVar89 >> 8);
                  uVar46 = (undefined1)((uint)fVar89 >> 0x10);
                  uVar48 = (undefined1)((uint)fVar89 >> 0x18);
                }
                lVar14 = *plVar10 + (ulong)uVar27 * 0x40;
                fVar64 = fVar79 * *(float *)(lVar14 + 0x10);
                fVar70 = fVar81 * *(float *)(lVar14 + 0x14);
                fVar29 = fVar83 * *(float *)(lVar14 + 0x18);
                fVar89 = *(float *)(lVar14 + 0x24) +
                         (float)CONCAT13(uVar48,CONCAT12(uVar46,CONCAT11(uVar44,uVar42))) *
                         (*(float *)(param_1 + 0x140) /
                         ((float)CONCAT13(uVar48,CONCAT12(uVar46,CONCAT11(uVar44,uVar42))) *
                         (fVar64 + fVar70 + fVar29)));
                uVar30 = NEON_fminnm(CONCAT17((char)((uint)fVar89 >> 0x18),
                                              CONCAT16((char)((uint)fVar89 >> 0x10),
                                                       CONCAT15((char)((uint)fVar89 >> 8),
                                                                CONCAT14(SUB41(fVar89,0),
                                                                         *(float *)(lVar14 + 0x24) +
                                                                         (float)CONCAT13(uVar39,
                                                  CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) *
                                                  (*(float *)(param_1 + 0x140) /
                                                  ((float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(
                                                  uVar35,uVar33))) * (fVar64 + fVar70 + fVar29))))))
                                             ),uVar30,4);
                uVar30 = NEON_fmax(uVar30,0,4);
                fVar64 = (float)uVar30;
                fVar26 = fVar26 * fVar64;
                fVar89 = (float)((ulong)uVar30 >> 0x20);
                auVar32._0_4_ = (float)*(undefined8 *)(param_1 + 0x90) + fVar79 * fVar64;
                auVar32._4_4_ =
                     (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) + fVar81 * fVar89;
                auVar32._8_4_ = (float)*(undefined8 *)(param_1 + 0x98) + fVar83 * fVar64;
                auVar32._12_4_ =
                     (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) + fVar88 * fVar89;
                goto LAB_02ffa424;
              }
              fVar70 = 0.1;
              lVar20 = 0;
              lVar17 = 0;
              iVar69 = -1;
              do {
                fVar29 = (float)FUN_02ffd8cc(param_1,&local_420,*(long *)(param_1 + 0x18) + lVar20);
                iVar71 = (int)lVar17;
                if (fVar70 <= fVar29) {
                  iVar71 = iVar69;
                  fVar29 = fVar70;
                }
                fVar70 = fVar29;
                lVar17 = lVar17 + 1;
                lVar20 = lVar20 + 0x40;
                iVar69 = iVar71;
              } while (lVar17 < *(int *)(param_1 + 0x20));
              if (iVar71 == -1) goto LAB_02ffa75c;
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar27);
          }
        }
      }
      auVar32._0_4_ = fVar79 + *(float *)(param_1 + 0x90);
      auVar32._4_4_ = fVar81 + *(float *)(param_1 + 0x94);
      auVar32._8_4_ = fVar83 + *(float *)(param_1 + 0x98);
      auVar32._12_4_ = fVar88 + *(float *)(param_1 + 0x9c);
LAB_02ffa424:
      *(long *)(param_1 + 0x98) = auVar32._8_8_;
      *(long *)(param_1 + 0x90) = auVar32._0_8_;
      *(undefined8 *)(param_1 + 0xd8) = uVar9;
      *(ulong *)pfVar2 = uVar24;
      if (local_430 == local_448) {
        local_440 = local_440 & 0xffffffff00000000;
      }
      if (local_438 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar15 = local_428 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(local_438 + 0x28) < uVar15) ||
           (*(long *)(local_438 + 0x38) != uVar15 + local_430)) {
          if (local_430 != 0) {
            if (*(ulong *)(local_438 + 0x28) < uVar15 + 0x40) {
              *(int *)(*(long *)(local_438 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_438 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_438 + 0x10) + 0x18))
                        (*(long **)(local_438 + 0x10),local_430 - *(int *)(local_430 + -4),
                         uVar15 + 0x44);
            }
            else {
              if (*(long *)(local_438 + 0x38) == uVar15 + local_430) {
                *(long *)(local_438 + 0x38) = local_430;
                goto LAB_02ffa888;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(long *)(local_438 + 0x38) = local_430;
          if (*(long *)(local_438 + 0x48) == local_430) {
LAB_02ffa888:
            FUN_031cf578();
          }
        }
      }
      uVar15 = local_440;
      fVar90 = fVar90 - fVar26;
      uVar24 = (ulong)local_440._4_4_;
      local_440 = (ulong)local_440._4_4_ << 0x20;
      if ((-1 < (long)uVar15) && (local_448 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_448,uVar24 * 0x50);
      }
    } while ((1.1920929e-07 < fVar90) && (iVar63 = iVar63 + 1, iVar63 < *(int *)(param_1 + 0x160)));
  }
  *(undefined8 *)(param_1 + 200) = uStack_4b8;
  *(undefined8 *)(param_1 + 0xc0) = local_4c0;
  if ((param_7 == 0) && (*(long *)(param_1 + 0x38) != -1)) {
    local_420 = (double)*(float *)(param_1 + 0x90);
    dStack_418 = (double)*(float *)(param_1 + 0x94);
    local_410 = (double)*(float *)(param_1 + 0x98);
    dStack_408 = (double)*(float *)(param_1 + 0x9c);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x88))
              (*(long **)(param_1 + 0x50),*(long *)(param_1 + 0x38),param_1 + 0x60,&local_420,0);
  }
  uVar15 = (ulong)*(uint *)(param_1 + 0x110);
  if (0 < (int)*(uint *)(param_1 + 0x110)) {
    lVar19 = 0;
    lVar14 = 0xc;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x108) + lVar14) = 0;
      uVar15 = (ulong)*(int *)(param_1 + 0x110);
      lVar19 = lVar19 + 1;
      lVar14 = lVar14 + 0x30;
    } while (lVar19 < (long)uVar15);
  }
  puVar8 = PTR_PTR_047d1a50;
  uVar27 = (uint)uVar15;
  plVar10 = (long *)(param_1 + 0x108);
  if (0 < (int)local_b8) {
    lVar19 = 0;
    do {
      plVar11 = (long *)(local_c0 + lVar19 * 0x30);
      iVar63 = (int)uVar15;
      if (0 < iVar63) {
        lVar17 = *plVar10;
        lVar20 = 0;
        lVar14 = 0;
        piVar21 = (int *)(lVar17 + 8);
        do {
          if ((*(long *)(piVar21 + -2) == *plVar11) &&
             (*piVar21 == *(int *)(local_c0 + lVar19 * 0x30 + 8))) {
            cVar22 = *(char *)(local_c0 + lVar19 * 0x30 + 0xc);
            if ((int)lVar20 == 1) {
              uVar15 = (ulong)*(uint *)(param_1 + 0x100);
              if (0 < (int)*(uint *)(param_1 + 0x100)) {
                do {
                  plVar12 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar15 - 1) * 8);
                  (**(code **)(*plVar12 + 0x58))(plVar12,param_1,plVar11,0);
                  bVar1 = 1 < (long)uVar15;
                  uVar15 = uVar15 - 1;
                } while (bVar1);
              }
              goto LAB_02ffaa48;
            }
            if (cVar22 == '\0') {
              *(int *)(param_1 + 0x110) = iVar63 + -1;
              if (iVar63 + (int)lVar20 != 1) {
                memcpy((void *)(lVar17 + (lVar14 >> 0x20) * 0x30),
                       (void *)(lVar17 + (long)(iVar63 + -1) * 0x30),0x30);
              }
              uVar15 = (ulong)*(uint *)(param_1 + 0x100);
              if (0 < (int)*(uint *)(param_1 + 0x100)) {
                do {
                  plVar12 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar15 - 1) * 8);
                  (**(code **)(*plVar12 + 0x58))(plVar12,param_1,plVar11,1);
                  bVar1 = 1 < (long)uVar15;
                  uVar15 = uVar15 - 1;
                } while (bVar1);
              }
            }
            else {
              *(undefined1 *)(lVar17 + (lVar14 >> 0x20) * 0x30 + 0xc) = 1;
            }
            goto LAB_02ffaba8;
          }
          lVar20 = lVar20 + -1;
          lVar14 = lVar14 + 0x100000000;
          piVar21 = piVar21 + 0xc;
        } while ((uVar15 & 0xffffffff) + lVar20 != 0);
      }
      cVar22 = *(char *)(local_c0 + lVar19 * 0x30 + 0xc);
      uVar15 = (ulong)*(uint *)(param_1 + 0x100);
      if (0 < (int)*(uint *)(param_1 + 0x100)) {
        do {
          plVar12 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar15 - 1) * 8);
          (**(code **)(*plVar12 + 0x58))(plVar12,param_1,plVar11,0);
          bVar1 = 1 < (long)uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
LAB_02ffaa48:
      if (cVar22 == '\0') {
        uVar15 = (ulong)*(uint *)(param_1 + 0x100);
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          do {
            plVar12 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar15 - 1) * 8);
            (**(code **)(*plVar12 + 0x58))(plVar12,param_1,plVar11,1);
            bVar1 = 1 < (long)uVar15;
            uVar15 = uVar15 - 1;
          } while (bVar1);
        }
      }
      else {
        iVar63 = *(int *)(param_1 + 0x110);
        lVar14 = (long)iVar63;
        if ((int)(*(uint *)(param_1 + 0x114) & 0x7fffffff) <= iVar63) {
          FUN_0155a380(plVar10,puVar8,lVar14 + 1);
          iVar63 = *(int *)(param_1 + 0x110);
        }
        memcpy((void *)(*(long *)(param_1 + 0x108) + (long)iVar63 * 0x30),plVar11,0x30);
        *(int *)(param_1 + 0x110) = (int)(lVar14 + 1);
      }
LAB_02ffaba8:
      lVar19 = lVar19 + 1;
      uVar27 = *(uint *)(param_1 + 0x110);
      uVar15 = (ulong)uVar27;
    } while (lVar19 < (int)local_b8);
  }
  if (0 < (int)uVar27) {
    uVar15 = (ulong)uVar27;
    do {
      lVar19 = *plVar10;
      uVar24 = uVar15 - 1;
      if (*(char *)(lVar19 + uVar24 * 0x30 + 0xc) == '\0') {
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          uVar7 = (ulong)*(uint *)(param_1 + 0x100);
          do {
            plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar7 - 1) * 8);
            (**(code **)(*plVar11 + 0x58))(plVar11,param_1,lVar19 + uVar24 * 0x30,1);
            bVar1 = 1 < (long)uVar7;
            uVar7 = uVar7 - 1;
          } while (bVar1);
        }
        iVar63 = *(int *)(param_1 + 0x110);
        iVar69 = iVar63 + -1;
        *(int *)(param_1 + 0x110) = iVar69;
        if (iVar63 != (int)uVar15) {
          memcpy((void *)(*plVar10 + uVar24 * 0x30),(void *)(*plVar10 + (long)iVar69 * 0x30),0x30);
        }
      }
      bVar1 = 1 < (long)uVar15;
      uVar15 = uVar24;
    } while (bVar1);
  }
  if (plVar25 != (long *)0x0) {
    lVar19 = *plVar25;
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar25[6] != 0)) {
      puVar18 = (undefined8 *)plVar25[2];
      uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar25[6] + 8);
      }
    }
    puVar18 = (undefined8 *)plVar25[2];
    uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar25[3]) && (plVar25[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = &DAT_03c3697b;
      uVar9 = nn::os::GetSystemTick();
      puVar18[1] = uVar9;
    }
    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
      if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
        (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  local_360 = &PTR_LAB_04612a48;
  local_338 = 0;
  if ((-1 < (int)local_334) && (local_340 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_340,(ulong)local_334 << 6);
  }
  local_210 = &PTR_LAB_04612a48;
  local_1e8 = 0;
  if ((-1 < (int)local_1e4) && (local_1f0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_1f0,(ulong)local_1e4 << 6);
  }
  if (local_a8 == local_c0) {
    local_b8 = local_b8 & 0xffffffff00000000;
  }
  if (local_b0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02ffae28;
  }
  uVar15 = local_a0 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_b0 + 0x28) < uVar15) || (*(long *)(local_b0 + 0x38) != uVar15 + local_a8)) {
    if (local_a8 == 0) goto LAB_02ffae28;
    if (*(ulong *)(local_b0 + 0x28) < uVar15 + 0x40) {
      *(int *)(*(long *)(local_b0 + 0x30) + 0x20) = *(int *)(*(long *)(local_b0 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_b0 + 0x10) + 0x18))
                (*(long **)(local_b0 + 0x10),local_a8 - *(int *)(local_a8 + -4),uVar15 + 0x44);
      goto LAB_02ffae28;
    }
    if (*(long *)(local_b0 + 0x38) != uVar15 + local_a8) {
      FUN_031cf778();
      goto LAB_02ffae28;
    }
    *(long *)(local_b0 + 0x38) = local_a8;
  }
  else {
    *(long *)(local_b0 + 0x38) = local_a8;
    if (*(long *)(local_b0 + 0x48) != local_a8) goto LAB_02ffae28;
  }
  FUN_031cf578();
LAB_02ffae28:
  uVar15 = local_b8;
  uVar24 = (ulong)local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < (long)uVar15) && (local_c0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_c0,uVar24 * 0x30);
  }
  return;
}


