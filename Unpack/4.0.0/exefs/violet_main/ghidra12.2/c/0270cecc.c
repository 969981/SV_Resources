/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270cecc; name: FUN_0270cecc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0270cecc(long param_1,int *param_2)

{
  uint *puVar1;
  undefined1 (*pauVar2) [12];
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar32;
  float fVar33;
  int iVar36;
  int iVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  float fVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar43;
  float fVar44;
  float fVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar48;
  float fVar51;
  float fVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  int iVar57;
  uint uVar58;
  int iVar60;
  uint uVar61;
  int iVar62;
  uint uVar63;
  undefined1 auVar59 [16];
  uint uVar64;
  float fVar65;
  float fVar67;
  undefined1 auVar66 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  
  puVar9 = PTR_DAT_047d4250;
  puVar8 = PTR_DAT_047d4248;
  puVar7 = PTR_DAT_047d4240;
  if ((4 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar16 != 0)) {
    puVar1 = (uint *)((long)param_2 + uVar16);
    local_78 = (long *)0x0;
    pcVar21 = (char *)((long)puVar1 + (ulong)*puVar1 + 4);
    if (*pcVar21 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      local_78 = plVar12;
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar32 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar32 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_98,uVar11,pcVar21);
      plVar12 = local_78;
      local_78 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      local_78 = local_98;
    }
    FUN_0135d26c(&local_98,&local_78);
    plVar12 = *(long **)(param_1 + 0x40);
    *(long **)(param_1 + 0x28) = local_98;
    *(undefined8 *)(param_1 + 0x30) = local_90;
    *(undefined8 *)(param_1 + 0x38) = local_88;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    plVar12 = local_80;
    local_80 = (long *)0x0;
    *(long **)(param_1 + 0x40) = plVar12;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar16 == 0)) {
      lVar17 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar16);
      lVar17 = (long)puVar1 + (ulong)*puVar1;
    }
    local_78 = (long *)0x0;
    if (*(char *)(lVar17 + 4) == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      if (local_78 != (long *)0x0) {
        lVar17 = *local_78;
        local_78 = plVar12;
        (**(code **)(lVar17 + 0x20))();
        plVar12 = local_78;
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar32 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar32 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_98,uVar11,(char *)(lVar17 + 4));
      plVar12 = local_78;
      local_78 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      local_78 = local_98;
      plVar12 = local_78;
    }
    local_78 = plVar12;
    FUN_0135d26c(&local_98,&local_78);
    plVar12 = *(long **)(param_1 + 0x60);
    *(long **)(param_1 + 0x48) = local_98;
    *(undefined8 *)(param_1 + 0x50) = local_90;
    *(undefined8 *)(param_1 + 0x58) = local_88;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    plVar12 = local_80;
    local_80 = (long *)0x0;
    *(long **)(param_1 + 0x60) = plVar12;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    lVar17 = (long)*param_2;
    uVar3 = *(ushort *)((long)param_2 - lVar17);
    if (8 < uVar3) {
      uVar16 = (ulong)((ushort *)((long)param_2 - lVar17))[4];
      if (uVar16 != 0) {
        puVar1 = (uint *)((long)param_2 + uVar16);
        piVar18 = (int *)((long)puVar1 + (ulong)*puVar1);
        auVar6 = *(undefined1 (*) [12])
                  ((long)piVar18 + (ulong)*(ushort *)((long)piVar18 + (4 - (long)*piVar18)));
        *(ulong *)(param_1 + 0x78) = (ulong)auVar6._8_4_;
        *(long *)(param_1 + 0x70) = auVar6._0_8_;
        if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
          piVar18 = (int *)0x0;
        }
        else {
          uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
          piVar18 = (int *)0x0;
          if (uVar16 != 0) {
            puVar1 = (uint *)((long)param_2 + uVar16);
            piVar18 = (int *)((long)puVar1 + (ulong)*puVar1);
          }
        }
        pauVar2 = (undefined1 (*) [12])
                  ((long)piVar18 + (ulong)*(ushort *)((long)piVar18 + (6 - (long)*piVar18)));
        fVar24 = *(float *)(*pauVar2 + 8);
        fVar25 = (float)*(undefined8 *)*pauVar2;
        fVar67 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
        iVar32 = -(uint)(ABS(fVar25) == INFINITY);
        iVar36 = -(uint)(ABS(fVar67) == INFINITY);
        iVar37 = -(uint)(ABS(fVar24) == INFINITY);
        iVar57 = -(uint)(fVar25 == 0.0);
        iVar60 = -(uint)(fVar67 == 0.0);
        iVar62 = -(uint)(fVar24 == 0.0);
        auVar26._0_4_ =
             (int)((float)(-(uint)(0.0 <= fVar25) & 0x80000000 ^ 0xbf000000) + fVar25 * 0.15915494);
        auVar26._4_4_ =
             (int)((float)(-(uint)(0.0 <= fVar67) & 0x80000000 ^ 0xbf000000) + fVar67 * 0.15915494);
        auVar26._8_4_ =
             (int)((float)(-(uint)(0.0 <= fVar24) & 0x80000000 ^ 0xbf000000) + fVar24 * 0.15915494);
        auVar26._12_4_ = 0;
        auVar49 = NEON_scvtf(auVar26,4);
        fVar65 = fVar25 + 1.5707964;
        fVar67 = fVar67 + 1.5707964;
        fVar24 = fVar24 + 1.5707964;
        fVar25 = fVar25 - auVar49._0_4_ * 6.2831855;
        fVar27 = SUB124(*pauVar2,4) - auVar49._4_4_ * 6.2831855;
        fVar28 = SUB124(*pauVar2,8) - auVar49._8_4_ * 6.2831855;
        fVar29 = 0.0 - auVar49._12_4_ * 6.2831855;
        fVar25 = (float)((uint)fVar25 ^
                        ((uint)fVar25 ^ (uint)(-3.1415927 - fVar25)) & -(uint)(fVar25 < -1.5707964))
        ;
        fVar27 = (float)((uint)fVar27 ^
                        ((uint)fVar27 ^ (uint)(-3.1415927 - fVar27)) & -(uint)(fVar27 < -1.5707964))
        ;
        fVar28 = (float)((uint)fVar28 ^
                        ((uint)fVar28 ^ (uint)(-3.1415927 - fVar28)) & -(uint)(fVar28 < -1.5707964))
        ;
        fVar29 = (float)((uint)fVar29 ^
                        ((uint)fVar29 ^ (uint)(-3.1415927 - fVar29)) & -(uint)(fVar29 < -1.5707964))
        ;
        fVar25 = (float)((uint)fVar25 ^
                        ((uint)fVar25 ^ (uint)(3.1415927 - fVar25)) & -(uint)(1.5707964 < fVar25));
        fVar27 = (float)((uint)fVar27 ^
                        ((uint)fVar27 ^ (uint)(3.1415927 - fVar27)) & -(uint)(1.5707964 < fVar27));
        fVar28 = (float)((uint)fVar28 ^
                        ((uint)fVar28 ^ (uint)(3.1415927 - fVar28)) & -(uint)(1.5707964 < fVar28));
        fVar29 = (float)((uint)fVar29 ^
                        ((uint)fVar29 ^ (uint)(3.1415927 - fVar29)) & -(uint)(1.5707964 < fVar29));
        fVar71 = fVar25 * fVar25;
        fVar72 = fVar27 * fVar27;
        fVar73 = fVar28 * fVar28;
        fVar74 = fVar29 * fVar29;
        auVar26 = NEON_fmov(0x3f800000,4);
        fVar43 = auVar26._0_4_;
        fVar47 = auVar26._4_4_;
        fVar55 = auVar26._8_4_;
        fVar75 = auVar26._12_4_;
        uVar11 = CONCAT17(~(byte)((uint)iVar36 >> 0x18),
                          CONCAT16(~(byte)((uint)iVar36 >> 0x10),
                                   CONCAT15(~(byte)((uint)iVar36 >> 8),
                                            CONCAT14(~(byte)iVar36,
                                                     CONCAT13(~(byte)((uint)iVar32 >> 0x18),
                                                              CONCAT12(~(byte)((uint)iVar32 >> 0x10)
                                                                       ,CONCAT11(~(byte)((uint)
                                                  iVar32 >> 8),~(byte)iVar32)))))));
        uVar23 = CONCAT17(0xff,CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,CONCAT13(~(byte)((uint)
                                                  iVar37 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar37 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar37 >> 8),
                                                                    ~(byte)iVar37)))))));
        auVar34._8_8_ = uVar23;
        auVar34._0_8_ = uVar11;
        auVar50._0_4_ =
             fVar25 * (fVar43 + fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar50._4_4_ =
             fVar27 * (fVar47 + fVar72 * (fVar72 * (fVar72 * (fVar72 * (fVar72 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar50._8_4_ =
             fVar28 * (fVar55 + fVar73 * (fVar73 * (fVar73 * (fVar73 * (fVar73 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar50._12_4_ =
             fVar29 * (fVar75 + fVar74 * (fVar74 * (fVar74 * (fVar74 * (fVar74 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar49._8_4_ = 0x7fc00000;
        auVar49._0_8_ = 0x7fc000007fc00000;
        auVar49._12_4_ = 0x7fc00000;
        auVar35._8_4_ = 0x7fc00000;
        auVar35._0_8_ = 0x7fc000007fc00000;
        auVar35._12_4_ = 0x7fc00000;
        auVar35 = auVar35 ^ (auVar49 ^ auVar50) & auVar34;
        iVar32 = -(uint)(ABS(fVar65) == INFINITY);
        iVar36 = -(uint)(ABS(fVar67) == INFINITY);
        iVar37 = -(uint)(ABS(fVar24) == INFINITY);
        auVar30[0] = ~(byte)iVar32;
        auVar30[1] = ~(byte)((uint)iVar32 >> 8);
        auVar30[2] = ~(byte)((uint)iVar32 >> 0x10);
        auVar30[3] = ~(byte)((uint)iVar32 >> 0x18);
        auVar30[4] = ~(byte)iVar36;
        auVar30[5] = ~(byte)((uint)iVar36 >> 8);
        auVar30[6] = ~(byte)((uint)iVar36 >> 0x10);
        auVar30[7] = ~(byte)((uint)iVar36 >> 0x18);
        auVar30[8] = ~(byte)iVar37;
        auVar30[9] = ~(byte)((uint)iVar37 >> 8);
        auVar30[10] = ~(byte)((uint)iVar37 >> 0x10);
        auVar30[0xb] = ~(byte)((uint)iVar37 >> 0x18);
        auVar30[0xc] = 0xff;
        auVar30[0xd] = 0xff;
        auVar30[0xe] = 0xff;
        auVar30[0xf] = 0xff;
        fVar42 = auVar35._8_4_;
        auVar39._0_4_ =
             (int)((float)(-(uint)(0.0 <= fVar65) & 0x80000000 ^ 0xbf000000) + fVar65 * 0.15915494);
        auVar39._4_4_ =
             (int)((float)(-(uint)(0.0 <= fVar67) & 0x80000000 ^ 0xbf000000) + fVar67 * 0.15915494);
        auVar39._8_4_ =
             (int)((float)(-(uint)(0.0 <= fVar24) & 0x80000000 ^ 0xbf000000) + fVar24 * 0.15915494);
        auVar39._12_4_ = 0;
        auVar49 = NEON_scvtf(auVar39,4);
        fVar65 = fVar65 - auVar49._0_4_ * 6.2831855;
        fVar67 = fVar67 - auVar49._4_4_ * 6.2831855;
        fVar24 = fVar24 - auVar49._8_4_ * 6.2831855;
        fVar27 = 1.5707964 - auVar49._12_4_ * 6.2831855;
        fVar25 = auVar35._0_4_;
        fVar65 = (float)((uint)fVar65 ^
                        ((uint)fVar65 ^ (uint)(-3.1415927 - fVar65)) & -(uint)(fVar65 < -1.5707964))
        ;
        fVar67 = (float)((uint)fVar67 ^
                        ((uint)fVar67 ^ (uint)(-3.1415927 - fVar67)) & -(uint)(fVar67 < -1.5707964))
        ;
        fVar24 = (float)((uint)fVar24 ^
                        ((uint)fVar24 ^ (uint)(-3.1415927 - fVar24)) & -(uint)(fVar24 < -1.5707964))
        ;
        fVar27 = (float)((uint)fVar27 ^
                        ((uint)fVar27 ^ (uint)(-3.1415927 - fVar27)) & -(uint)(fVar27 < -1.5707964))
        ;
        fVar38 = auVar35._4_4_;
        fVar65 = (float)((uint)fVar65 ^
                        ((uint)fVar65 ^ (uint)(3.1415927 - fVar65)) & -(uint)(1.5707964 < fVar65));
        fVar67 = (float)((uint)fVar67 ^
                        ((uint)fVar67 ^ (uint)(3.1415927 - fVar67)) & -(uint)(1.5707964 < fVar67));
        fVar24 = (float)((uint)fVar24 ^
                        ((uint)fVar24 ^ (uint)(3.1415927 - fVar24)) & -(uint)(1.5707964 < fVar24));
        fVar27 = (float)((uint)fVar27 ^
                        ((uint)fVar27 ^ (uint)(3.1415927 - fVar27)) & -(uint)(1.5707964 < fVar27));
        fVar28 = fVar65 * fVar65;
        fVar29 = fVar67 * fVar67;
        fVar71 = fVar24 * fVar24;
        fVar72 = fVar27 * fVar27;
        auVar45._8_8_ = uVar23;
        auVar45._0_8_ = uVar11;
        auVar40._0_4_ =
             fVar65 * (fVar43 + fVar28 * (fVar28 * (fVar28 * (fVar28 * (fVar28 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar40._4_4_ =
             fVar67 * (fVar47 + fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar40._8_4_ =
             fVar24 * (fVar55 + fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar40._12_4_ =
             fVar27 * (fVar75 + fVar72 * (fVar72 * (fVar72 * (fVar72 * (fVar72 * -2.5052108e-08 +
                                                                       2.7557319e-06) +
                                                             -0.0001984127) + 0.008333334) +
                                         -0.16666667));
        auVar4._8_4_ = 0x7fc00000;
        auVar4._0_8_ = 0x7fc000007fc00000;
        auVar4._12_4_ = 0x7fc00000;
        auVar31._8_4_ = 0x7fc00000;
        auVar31._0_8_ = 0x7fc000007fc00000;
        auVar31._12_4_ = 0x7fc00000;
        auVar31 = auVar31 ^ (auVar4 ^ auVar40) & auVar30;
        auVar41[0] = ~(byte)iVar57;
        auVar41[1] = ~(byte)((uint)iVar57 >> 8);
        auVar41[2] = ~(byte)((uint)iVar57 >> 0x10);
        auVar41[3] = ~(byte)((uint)iVar57 >> 0x18);
        auVar41[4] = ~(byte)iVar60;
        auVar41[5] = ~(byte)((uint)iVar60 >> 8);
        auVar41[6] = ~(byte)((uint)iVar60 >> 0x10);
        auVar41[7] = ~(byte)((uint)iVar60 >> 0x18);
        auVar41[8] = ~(byte)iVar62;
        auVar41[9] = ~(byte)((uint)iVar62 >> 8);
        auVar41[10] = ~(byte)((uint)iVar62 >> 0x10);
        auVar41[0xb] = ~(byte)((uint)iVar62 >> 0x18);
        auVar41._12_4_ = 0;
        auVar5._8_4_ = 0x7fc00000;
        auVar5._0_8_ = 0x7fc000007fc00000;
        auVar5._12_4_ = 0x7fc00000;
        auVar46._8_4_ = 0x7fc00000;
        auVar46._0_8_ = 0x7fc000007fc00000;
        auVar46._12_4_ = 0x7fc00000;
        auVar46 = auVar46 ^ (auVar5 ^ auVar31 ^ (auVar31 ^ auVar26) & ~auVar41) & auVar45;
        fVar44 = auVar46._4_4_;
        fVar33 = auVar46._8_4_;
        fVar67 = fVar44 * fVar33;
        fVar24 = auVar46._0_4_;
        fVar27 = fVar25 * fVar38 * fVar42 + fVar24 * fVar33;
        fVar28 = fVar24 * fVar44;
        fVar69 = fVar25 * fVar42 + fVar38 * fVar24 * fVar33;
        fVar65 = fVar43 + (float)_DAT_03cab3a0 * fVar67 + (float)_DAT_03cac210 * fVar27 +
                 (float)_DAT_03cabb00 * fVar28;
        fVar71 = fVar47 + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar67 +
                 (float)((ulong)_DAT_03cac210 >> 0x20) * fVar27 +
                 (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar28;
        fVar72 = fVar55 + (float)_UNK_03cab3a8 * fVar67 + (float)_UNK_03cac218 * fVar27 +
                 (float)_UNK_03cabb08 * fVar28;
        fVar73 = fVar75 + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar67 +
                 (float)((ulong)_UNK_03cac218 >> 0x20) * fVar27 +
                 (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar28;
        fVar27 = SQRT(fVar71) * 0.5;
        fVar28 = SQRT(fVar72) * 0.5;
        fVar29 = SQRT(fVar73) * 0.5;
        auVar49 = NEON_fmov(0x40800000,4);
        auVar59._0_4_ = SQRT(fVar65) * 0.5 * auVar49._0_4_;
        auVar59._4_4_ = fVar27 * auVar49._4_4_;
        auVar59._8_4_ = fVar28 * auVar49._8_4_;
        auVar59._12_4_ = fVar29 * auVar49._12_4_;
        fVar74 = fVar38 * fVar24 * fVar42 - fVar25 * fVar33;
        auVar49 = NEON_frecpe(auVar59,4);
        fVar68 = fVar25 * fVar44;
        auVar35 = NEON_frecps(auVar49,auVar59,4);
        auVar66._0_4_ = auVar49._0_4_ * auVar35._0_4_;
        auVar66._4_4_ = auVar49._4_4_ * auVar35._4_4_;
        auVar66._8_4_ = auVar49._8_4_ * auVar35._8_4_;
        auVar66._12_4_ = auVar49._12_4_ * auVar35._12_4_;
        fVar70 = -fVar38;
        auVar49 = NEON_frecps(auVar66,auVar59,4);
        fVar54 = auVar66._0_4_ * auVar49._0_4_;
        fVar55 = auVar66._4_4_ * auVar49._4_4_;
        fVar56 = auVar66._8_4_ * auVar49._8_4_;
        fVar67 = auVar66._12_4_ * auVar49._12_4_;
        fVar33 = fVar25 * fVar38 * fVar33 - fVar42 * fVar24;
        fVar43 = fVar42 * fVar44 + fVar33;
        fVar33 = fVar42 * fVar44 - fVar33;
        fVar75 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)fVar71) & -(uint)(fVar65 <= fVar71));
        fVar51 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)fVar71) & -(uint)(fVar65 <= fVar71));
        fVar52 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)fVar71) & -(uint)(fVar65 <= fVar71));
        fVar53 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)fVar71) & -(uint)(fVar65 <= fVar71));
        fVar44 = fVar43 * fVar55;
        fVar47 = (fVar74 + fVar68) * fVar55;
        fVar55 = (fVar38 + fVar69) * fVar55;
        fVar24 = (fVar68 - fVar74) * fVar67;
        fVar25 = (fVar69 - fVar70) * fVar67;
        fVar67 = fVar33 * fVar67;
        uVar58 = -(uint)(fVar75 <= fVar72);
        uVar61 = -(uint)(fVar51 <= fVar72);
        uVar63 = -(uint)(fVar52 <= fVar72);
        uVar64 = -(uint)(fVar53 <= fVar72);
        fVar38 = (fVar69 + fVar70) * fVar56;
        fVar42 = (fVar74 + fVar68) * fVar56;
        fVar33 = fVar33 * fVar56;
        *(uint *)(param_1 + 0x88) =
             (uint)fVar67 ^
             ((uint)fVar67 ^
             (uint)fVar28 ^
             ((uint)fVar28 ^
             (uint)fVar47 ^
             ((uint)fVar47 ^ (uint)((fVar69 + fVar70) * fVar54)) & ~-(uint)(fVar65 <= fVar71)) &
             ~uVar63) &
             ~-(uint)((float)((uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar52) & ~uVar63) <= fVar73);
        *(uint *)(param_1 + 0x8c) =
             (uint)fVar29 ^
             ((uint)fVar29 ^
             (uint)fVar33 ^
             ((uint)fVar33 ^
             (uint)fVar55 ^
             ((uint)fVar55 ^ (uint)((-fVar74 + fVar68) * fVar54)) & ~-(uint)(fVar65 <= fVar71)) &
             ~uVar64) &
             ~-(uint)((float)((uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar53) & ~uVar64) <= fVar73);
        *(uint *)(param_1 + 0x80) =
             (uint)fVar24 ^
             ((uint)fVar24 ^
             (uint)fVar38 ^
             ((uint)fVar38 ^
             (uint)fVar44 ^ ((uint)fVar44 ^ (uint)(SQRT(fVar65) * 0.5)) & ~-(uint)(fVar65 <= fVar71)
             ) & ~uVar58) &
             ~-(uint)((float)((uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar75) & ~uVar58) <= fVar73);
        *(uint *)(param_1 + 0x84) =
             (uint)fVar25 ^
             ((uint)fVar25 ^
             (uint)fVar42 ^
             ((uint)fVar42 ^
             (uint)fVar27 ^ ((uint)fVar27 ^ (uint)(fVar43 * fVar54)) & ~-(uint)(fVar65 <= fVar71)) &
             ~uVar61) &
             ~-(uint)((float)((uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar51) & ~uVar61) <= fVar73);
        if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
          piVar18 = (int *)0x0;
        }
        else {
          uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
          piVar18 = (int *)0x0;
          if (uVar16 != 0) {
            puVar1 = (uint *)((long)param_2 + uVar16);
            piVar18 = (int *)((long)puVar1 + (ulong)*puVar1);
          }
        }
        puVar15 = (undefined8 *)
                  ((long)piVar18 + (ulong)*(ushort *)((long)piVar18 + (8 - (long)*piVar18)));
        uVar11 = *puVar15;
        *(ulong *)(param_1 + 0x98) = (ulong)*(uint *)(puVar15 + 1);
        *(undefined8 *)(param_1 + 0x90) = uVar11;
        lVar17 = (long)*param_2;
        uVar3 = *(ushort *)((long)param_2 - lVar17);
      }
      lVar19 = -lVar17;
      if (10 < uVar3) {
        uVar16 = (ulong)*(ushort *)((long)param_2 + lVar19 + 10);
        if (uVar16 != 0) {
          uVar20 = (ulong)*(uint *)((long)param_2 + uVar16);
          if (*(int *)((long)((long)param_2 + uVar16) + uVar20) == 0) {
            lVar19 = (long)(int)lVar17;
          }
          else {
            uVar22 = 0;
            piVar18 = param_2 + 2;
            do {
              lVar17 = uVar16 + uVar20 + (ulong)*(uint *)((long)piVar18 + uVar16 + uVar20 + -4);
              lVar19 = lVar17 - *(int *)((long)piVar18 + lVar17 + -4);
              uVar3 = *(ushort *)((long)piVar18 + lVar19 + -4);
              if (uVar3 < 7) {
                uVar48 = 0;
                if (4 < uVar3) goto LAB_0270d4b4;
                lVar17 = 0;
                uVar48 = 0;
              }
              else {
                uVar16 = (ulong)*(ushort *)((long)piVar18 + lVar19 + 2);
                uVar48 = 0;
                if (uVar16 != 0) {
                  uVar48 = *(undefined4 *)((long)piVar18 + lVar17 + uVar16 + -4);
                }
LAB_0270d4b4:
                if ((ulong)*(ushort *)((long)piVar18 + lVar19) == 0) {
                  lVar17 = 0;
                }
                else {
                  lVar17 = lVar17 + (ulong)*(ushort *)((long)piVar18 + lVar19);
                  lVar17 = (long)piVar18 +
                           lVar17 + (ulong)*(uint *)((long)piVar18 + lVar17 + -4) + -4;
                }
              }
              local_a0 = (long *)0x0;
              if (*(char *)(lVar17 + 4) == '\0') {
                plVar12 = (long *)FUN_00d44228();
                if (plVar12 != (long *)0x0) {
                  (**(code **)(*plVar12 + 0x18))(plVar12);
                }
                if (local_a0 != (long *)0x0) {
                  lVar17 = *local_a0;
                  local_a0 = plVar12;
                  (**(code **)(lVar17 + 0x20))();
                  plVar12 = local_a0;
                }
              }
              else {
                if (((*puVar7 & 1) == 0) && (iVar32 = __cxa_guard_acquire(puVar7), iVar32 != 0)) {
                  FUN_00100190(PTR_LAB_047d4510,puVar8,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar7);
                }
                uVar11 = *(undefined8 *)puVar8;
                *(undefined8 *)puVar9 = uVar11;
                FUN_00cf9884(&local_78,uVar11,(char *)(lVar17 + 4));
                plVar12 = local_a0;
                local_a0 = (long *)0x0;
                if (plVar12 != (long *)0x0) {
                  (**(code **)(*plVar12 + 0x20))();
                }
                local_a0 = local_78;
                plVar12 = local_a0;
              }
              local_a0 = plVar12;
              FUN_0135d26c(&local_98,&local_a0);
              puVar13 = (undefined4 *)FUN_0270dcd4(param_1 + 0xa0,&local_98);
              *puVar13 = uVar48;
              if (local_80 != (long *)0x0) {
                (**(code **)(*local_80 + 0x20))();
              }
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              lVar19 = (long)*param_2;
              if (*(ushort *)((long)param_2 - lVar19) < 0xb) {
                return;
              }
              uVar16 = (ulong)((ushort *)((long)param_2 - lVar19))[5];
              uVar20 = (ulong)*(uint *)((long)param_2 + uVar16);
              uVar22 = uVar22 + 1;
              piVar18 = piVar18 + 1;
            } while (uVar22 < *(uint *)((long)((long)param_2 + uVar16) + uVar20));
          }
          lVar19 = -lVar19;
          uVar3 = *(ushort *)((long)param_2 + lVar19);
        }
        puVar10 = PTR_LAB_047d4510;
        if (((0xc < uVar3) &&
            (uVar16 = (ulong)*(ushort *)((long)param_2 + lVar19 + 0xc), uVar16 != 0)) &&
           (uVar20 = (ulong)*(uint *)((long)param_2 + uVar16),
           *(int *)((long)((long)param_2 + uVar16) + uVar20) != 0)) {
          uVar22 = 0;
          piVar18 = param_2 + 4;
          do {
            lVar17 = uVar16 + uVar20 + (ulong)*(uint *)((long)piVar18 + uVar16 + uVar20 + -0xc);
            lVar19 = lVar17 - *(int *)((long)piVar18 + lVar17 + -0xc);
            uVar3 = *(ushort *)((long)piVar18 + lVar19 + -0xc);
            if (uVar3 < 7) {
              uVar11 = 0;
              uVar23 = 0;
              if (4 < uVar3) goto LAB_0270d680;
              lVar17 = 0;
              uVar11 = 0;
              uVar23 = 0;
            }
            else {
              uVar16 = (ulong)*(ushort *)((long)piVar18 + lVar19 + -6);
              if (uVar16 == 0) {
                uVar11 = 0;
                uVar23 = 0;
              }
              else {
                puVar13 = (undefined4 *)((long)piVar18 + lVar17 + uVar16);
                uVar11 = *(undefined8 *)(puVar13 + -3);
                uVar23 = CONCAT44(*puVar13,puVar13[-1]);
              }
LAB_0270d680:
              uVar16 = (ulong)*(ushort *)((long)piVar18 + lVar19 + -8);
              if (uVar16 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = lVar17 + uVar16;
                lVar17 = (long)piVar18 +
                         lVar17 + (ulong)*(uint *)((long)piVar18 + lVar17 + -0xc) + -0xc;
              }
            }
            local_a0 = (long *)0x0;
            if (*(char *)(lVar17 + 4) == '\0') {
              plVar12 = (long *)FUN_00d44228();
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
              if (local_a0 != (long *)0x0) {
                lVar17 = *local_a0;
                local_a0 = plVar12;
                (**(code **)(lVar17 + 0x20))();
                plVar12 = local_a0;
              }
            }
            else {
              if (((*puVar7 & 1) == 0) && (iVar32 = __cxa_guard_acquire(puVar7), iVar32 != 0)) {
                FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar7);
              }
              uVar14 = *(undefined8 *)puVar8;
              *(undefined8 *)puVar9 = uVar14;
              FUN_00cf9884(&local_78,uVar14,(char *)(lVar17 + 4));
              plVar12 = local_a0;
              local_a0 = (long *)0x0;
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x20))();
              }
              local_a0 = local_78;
              plVar12 = local_a0;
            }
            local_a0 = plVar12;
            FUN_0135d26c(&local_98,&local_a0);
            puVar15 = (undefined8 *)FUN_0270ded8(param_1 + 0x108,&local_98);
            puVar15[1] = uVar23;
            *puVar15 = uVar11;
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
              return;
            }
            uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
            uVar20 = (ulong)*(uint *)((long)param_2 + uVar16);
            uVar22 = uVar22 + 1;
            piVar18 = piVar18 + 1;
          } while (uVar22 < *(uint *)((long)((long)param_2 + uVar16) + uVar20));
        }
      }
    }
  }
  return;
}


