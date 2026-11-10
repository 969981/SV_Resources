/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c6e08; name: FUN_029c6e08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029c6e08(long param_1,int *param_2)

{
  uint *puVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  ushort *puVar13;
  ulong uVar14;
  byte *pbVar15;
  char *pcVar16;
  long *plVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    bVar9 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    bVar9 = false;
    if (uVar14 != 0) {
      bVar9 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x25e0) = bVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
    bVar9 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    bVar9 = false;
    if (uVar14 != 0) {
      bVar9 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x25e1) = bVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    bVar9 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    bVar9 = false;
    if (uVar14 != 0) {
      bVar9 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x25e2) = bVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    bVar9 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    bVar9 = false;
    if (uVar14 != 0) {
      bVar9 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x25e3) = bVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x27) {
    bVar9 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x13];
    bVar9 = false;
    if (uVar14 != 0) {
      bVar9 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x25e4) = bVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    bVar9 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    bVar9 = false;
    if (uVar14 != 0) {
      bVar9 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x25e5) = bVar9;
  puVar18 = &DAT_cbf29ce484222645;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x13) ||
     (uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9], uVar14 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar20 = *(undefined1 **)PTR_DAT_047d3e30;
    pcVar16 = *(char **)(PTR_DAT_047d3e30 + 8);
    sVar11 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar17 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar14);
    uVar19 = (ulong)*puVar1;
    pcVar16 = (char *)((long)puVar1 + uVar19 + 4);
    sVar11 = strlen(pcVar16);
    bVar3 = *(byte *)((long)puVar1 + uVar19 + 4);
    if (bVar3 == 0) {
      plVar17 = (long *)0x0;
      puVar20 = &DAT_cbf29ce484222645;
    }
    else {
      puVar20 = &DAT_cbf29ce484222645;
      pbVar15 = (byte *)((long)param_2 + uVar19 + uVar14 + 5);
      do {
        puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar3 != 0);
      plVar17 = (long *)0x0;
    }
  }
  *(undefined1 **)(param_1 + 0x78) = puVar20;
  *(char **)(param_1 + 0x80) = pcVar16;
  *(size_t *)(param_1 + 0x88) = sVar11;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar12 = *(long **)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar17;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x15) ||
     (uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10], uVar14 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar18 = *(undefined1 **)PTR_DAT_047d3e30;
    pcVar16 = *(char **)(PTR_DAT_047d3e30 + 8);
    sVar11 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar17 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar14);
    uVar19 = (ulong)*puVar1;
    pcVar16 = (char *)((long)puVar1 + uVar19 + 4);
    sVar11 = strlen(pcVar16);
    bVar3 = *(byte *)((long)puVar1 + uVar19 + 4);
    if (bVar3 != 0) {
      pbVar15 = (byte *)((long)param_2 + uVar19 + uVar14 + 5);
      do {
        puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar3 != 0);
    }
    plVar17 = (long *)0x0;
  }
  *(undefined1 **)(param_1 + 0x98) = puVar18;
  *(char **)(param_1 + 0xa0) = pcVar16;
  *(size_t *)(param_1 + 0xa8) = sVar11;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar12 = *(long **)(param_1 + 0xb0);
  *(long **)(param_1 + 0xb0) = plVar17;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  uVar21 = 0;
  uVar23 = 0;
  if (0x16 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
    uVar23 = 0;
    if (uVar14 != 0) {
      uVar23 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x25e8) = uVar23;
  uVar23 = 0;
  if (0x18 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    uVar23 = 0;
    if (uVar14 != 0) {
      uVar23 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x25ec) = uVar23;
  uVar23 = 0;
  if (0x1a < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    uVar23 = 0;
    if (uVar14 != 0) {
      uVar23 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x25f0) = uVar23;
  uVar23 = 0;
  if (0x1c < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe];
    uVar23 = 0;
    if (uVar14 != 0) {
      uVar23 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x25f4) = uVar23;
  uVar23 = 0;
  if (0x1e < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf];
    uVar23 = 0;
    if (uVar14 != 0) {
      uVar23 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x25f8) = uVar23;
  uVar23 = 0;
  if (0x20 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10];
    uVar23 = 0;
    if (uVar14 != 0) {
      uVar23 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x25fc) = uVar23;
  if ((0x28 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x14], uVar14 != 0)) {
    uVar21 = *(undefined4 *)((long)param_2 + uVar14);
  }
  *(undefined4 *)(param_1 + 0x2600) = uVar21;
  puVar13 = (ushort *)((long)param_2 - (long)*param_2);
  if (((0x22 < *puVar13) && ((ulong)puVar13[0x11] != 0)) &&
     (*(char *)((long)param_2 + (ulong)puVar13[0x11]) != '\0')) {
    fVar46 = _DAT_03cabe50;
    fVar48 = _UNK_03cabe54;
    fVar50 = _UNK_03cabe58;
    fVar51 = _UNK_03cabe5c;
    if ((0x24 < *puVar13) && ((ulong)puVar13[0x12] != 0)) {
      pfVar2 = (float *)((long)param_2 + (ulong)puVar13[0x12]);
      fVar27 = ((pfVar2[2] * 3.1415927) / 180.0) * 0.5;
      fVar29 = ((pfVar2[1] * 3.1415927) / 180.0) * 0.5;
      fVar30 = ((*pfVar2 * 3.1415927) / 180.0) * 0.5;
      fVar45 = fVar27 + 1.5707964;
      fVar47 = fVar29 + 1.5707964;
      fVar49 = fVar30 + 1.5707964;
      iVar42 = -(uint)(fVar27 == 0.0);
      iVar43 = -(uint)(fVar29 == 0.0);
      iVar44 = -(uint)(fVar30 == 0.0);
      auVar35._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar27) & 0x80000000 ^ 0xbf000000) + fVar27 * 0.15915494);
      auVar35._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar29) & 0x80000000 ^ 0xbf000000) + fVar29 * 0.15915494);
      auVar35._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000) + fVar30 * 0.15915494);
      auVar35._12_4_ = 0;
      iVar32 = -(uint)(ABS(fVar27) == INFINITY);
      iVar33 = -(uint)(ABS(fVar29) == INFINITY);
      iVar34 = -(uint)(ABS(fVar30) == INFINITY);
      auVar36 = NEON_scvtf(auVar35,4);
      fVar27 = fVar27 - auVar36._0_4_ * 6.2831855;
      fVar29 = fVar29 - auVar36._4_4_ * 6.2831855;
      fVar30 = fVar30 - auVar36._8_4_ * 6.2831855;
      fVar31 = 0.0 - auVar36._12_4_ * 6.2831855;
      auVar24._0_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar45) & 0x80000000 ^ 0x3f000000) + fVar45 * 0.15915494);
      auVar24._4_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar47) & 0x80000000 ^ 0x3f000000) + fVar47 * 0.15915494);
      auVar24._8_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar49) & 0x80000000 ^ 0x3f000000) + fVar49 * 0.15915494);
      auVar24._12_4_ = 0;
      auVar36 = NEON_scvtf(auVar24,4);
      fVar46 = fVar45 - auVar36._0_4_ * 6.2831855;
      fVar48 = fVar47 - auVar36._4_4_ * 6.2831855;
      fVar50 = fVar49 - auVar36._8_4_ * 6.2831855;
      fVar51 = 1.5707964 - auVar36._12_4_ * 6.2831855;
      iVar10 = -(uint)(ABS(fVar45) == INFINITY);
      iVar4 = -(uint)(ABS(fVar47) == INFINITY);
      iVar5 = -(uint)(ABS(fVar49) == INFINITY);
      fVar27 = (float)((uint)fVar27 ^
                      ((uint)fVar27 ^ (uint)(-3.1415927 - fVar27)) & -(uint)(fVar27 < -1.5707964));
      fVar29 = (float)((uint)fVar29 ^
                      ((uint)fVar29 ^ (uint)(-3.1415927 - fVar29)) & -(uint)(fVar29 < -1.5707964));
      fVar30 = (float)((uint)fVar30 ^
                      ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964));
      fVar31 = (float)((uint)fVar31 ^
                      ((uint)fVar31 ^ (uint)(-3.1415927 - fVar31)) & -(uint)(fVar31 < -1.5707964));
      fVar46 = (float)((uint)fVar46 ^
                      ((uint)fVar46 ^ (uint)(-3.1415927 - fVar46)) & -(uint)(fVar46 < -1.5707964));
      fVar48 = (float)((uint)fVar48 ^
                      ((uint)fVar48 ^ (uint)(-3.1415927 - fVar48)) & -(uint)(fVar48 < -1.5707964));
      fVar50 = (float)((uint)fVar50 ^
                      ((uint)fVar50 ^ (uint)(-3.1415927 - fVar50)) & -(uint)(fVar50 < -1.5707964));
      fVar51 = (float)((uint)fVar51 ^
                      ((uint)fVar51 ^ (uint)(-3.1415927 - fVar51)) & -(uint)(fVar51 < -1.5707964));
      fVar27 = (float)((uint)fVar27 ^
                      ((uint)fVar27 ^ (uint)(3.1415927 - fVar27)) & -(uint)(1.5707964 < fVar27));
      fVar29 = (float)((uint)fVar29 ^
                      ((uint)fVar29 ^ (uint)(3.1415927 - fVar29)) & -(uint)(1.5707964 < fVar29));
      fVar30 = (float)((uint)fVar30 ^
                      ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
      fVar31 = (float)((uint)fVar31 ^
                      ((uint)fVar31 ^ (uint)(3.1415927 - fVar31)) & -(uint)(1.5707964 < fVar31));
      fVar45 = fVar27 * fVar27;
      fVar47 = fVar29 * fVar29;
      fVar49 = fVar30 * fVar30;
      fVar37 = fVar31 * fVar31;
      fVar46 = (float)((uint)(3.1415927 - fVar46) ^
                      ((uint)(3.1415927 - fVar46) ^ (uint)fVar46) & ~-(uint)(1.5707964 < fVar46));
      fVar48 = (float)((uint)(3.1415927 - fVar48) ^
                      ((uint)(3.1415927 - fVar48) ^ (uint)fVar48) & ~-(uint)(1.5707964 < fVar48));
      fVar50 = (float)((uint)(3.1415927 - fVar50) ^
                      ((uint)(3.1415927 - fVar50) ^ (uint)fVar50) & ~-(uint)(1.5707964 < fVar50));
      fVar51 = (float)((uint)(3.1415927 - fVar51) ^
                      ((uint)(3.1415927 - fVar51) ^ (uint)fVar51) & ~-(uint)(1.5707964 < fVar51));
      auVar25 = NEON_fmov(0x3f800000,4);
      fVar38 = fVar46 * fVar46;
      fVar39 = fVar48 * fVar48;
      fVar40 = fVar50 * fVar50;
      fVar41 = fVar51 * fVar51;
      auVar22._0_4_ =
           fVar46 * (auVar25._0_4_ +
                    fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar22._4_4_ =
           fVar48 * (auVar25._4_4_ +
                    fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar22._8_4_ =
           fVar50 * (auVar25._8_4_ +
                    fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar22._12_4_ =
           fVar51 * (auVar25._12_4_ +
                    fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar6._8_4_ = 0x7fc00000;
      auVar6._0_8_ = 0x7fc000007fc00000;
      auVar6._12_4_ = 0x7fc00000;
      auVar36[1] = ~(byte)((uint)iVar10 >> 8);
      auVar36[0] = ~(byte)iVar10;
      auVar36[2] = ~(byte)((uint)iVar10 >> 0x10);
      auVar36[3] = ~(byte)((uint)iVar10 >> 0x18);
      auVar36[4] = ~(byte)iVar4;
      auVar36[5] = ~(byte)((uint)iVar4 >> 8);
      auVar36[6] = ~(byte)((uint)iVar4 >> 0x10);
      auVar36[7] = ~(byte)((uint)iVar4 >> 0x18);
      auVar36[8] = ~(byte)iVar5;
      auVar36[9] = ~(byte)((uint)iVar5 >> 8);
      auVar36[10] = ~(byte)((uint)iVar5 >> 0x10);
      auVar36[0xb] = ~(byte)((uint)iVar5 >> 0x18);
      auVar36[0xc] = 0xff;
      auVar36[0xd] = 0xff;
      auVar36[0xe] = 0xff;
      auVar36[0xf] = 0xff;
      auVar22 = auVar22 ^ (auVar22 ^ auVar6) & ~auVar36;
      auVar8[1] = ~(byte)((uint)iVar42 >> 8);
      auVar8[0] = ~(byte)iVar42;
      auVar8[2] = ~(byte)((uint)iVar42 >> 0x10);
      auVar8[3] = ~(byte)((uint)iVar42 >> 0x18);
      auVar8[4] = ~(byte)iVar43;
      auVar8[5] = ~(byte)((uint)iVar43 >> 8);
      auVar8[6] = ~(byte)((uint)iVar43 >> 0x10);
      auVar8[7] = ~(byte)((uint)iVar43 >> 0x18);
      auVar8[8] = ~(byte)iVar44;
      auVar8[9] = ~(byte)((uint)iVar44 >> 8);
      auVar8[10] = ~(byte)((uint)iVar44 >> 0x10);
      auVar8[0xb] = ~(byte)((uint)iVar44 >> 0x18);
      auVar8._12_4_ = 0;
      auVar22 = auVar22 ^ (auVar22 ^ auVar25) & ~auVar8;
      auVar26._0_4_ =
           fVar27 * (auVar25._0_4_ +
                    fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar26._4_4_ =
           fVar29 * (auVar25._4_4_ +
                    fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar26._8_4_ =
           fVar30 * (auVar25._8_4_ +
                    fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar26._12_4_ =
           fVar31 * (auVar25._12_4_ +
                    fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar28[0] = ~(byte)iVar32;
      auVar28[1] = ~(byte)((uint)iVar32 >> 8);
      auVar28[2] = ~(byte)((uint)iVar32 >> 0x10);
      auVar28[3] = ~(byte)((uint)iVar32 >> 0x18);
      auVar28[4] = ~(byte)iVar33;
      auVar28[5] = ~(byte)((uint)iVar33 >> 8);
      auVar28[6] = ~(byte)((uint)iVar33 >> 0x10);
      auVar28[7] = ~(byte)((uint)iVar33 >> 0x18);
      auVar28[8] = ~(byte)iVar34;
      auVar28[9] = ~(byte)((uint)iVar34 >> 8);
      auVar28[10] = ~(byte)((uint)iVar34 >> 0x10);
      auVar28[0xb] = ~(byte)((uint)iVar34 >> 0x18);
      auVar28[0xc] = 0xff;
      auVar28[0xd] = 0xff;
      auVar28[0xe] = 0xff;
      auVar28[0xf] = 0xff;
      auVar25._8_4_ = 0x7fc00000;
      auVar25._0_8_ = 0x7fc000007fc00000;
      auVar25._12_4_ = 0x7fc00000;
      auVar22 = auVar22 ^ (auVar22 ^ auVar25) & ~auVar28;
      fVar27 = auVar22._4_4_;
      auVar7._8_4_ = 0x7fc00000;
      auVar7._0_8_ = 0x7fc000007fc00000;
      auVar7._12_4_ = 0x7fc00000;
      auVar26 = auVar26 ^ (auVar26 ^ auVar7) & ~auVar28;
      fVar51 = auVar22._0_4_;
      fVar30 = auVar26._0_4_;
      fVar29 = auVar22._8_4_;
      fVar31 = auVar26._4_4_;
      fVar45 = auVar26._8_4_;
      fVar46 = fVar29 * fVar51 * fVar31 + fVar45 * fVar27 * fVar30 * (float)_DAT_03cab3a0;
      fVar48 = fVar45 * fVar51 * fVar27 +
               fVar29 * fVar31 * fVar30 * (float)((ulong)_DAT_03cab3a0 >> 0x20);
      fVar50 = fVar29 * fVar30 * fVar27 + fVar45 * fVar31 * fVar51 * (float)_UNK_03cab3a8;
      fVar51 = fVar29 * fVar51 * fVar27 +
               fVar45 * fVar31 * fVar30 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(float *)(param_1 + 0x118) = fVar50;
    *(float *)(param_1 + 0x11c) = fVar51;
    *(float *)(param_1 + 0x110) = fVar46;
    *(float *)(param_1 + 0x114) = fVar48;
  }
  *(undefined1 *)(param_1 + 0x65) = 1;
  return;
}


