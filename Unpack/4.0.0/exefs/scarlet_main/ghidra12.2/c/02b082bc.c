/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b082bc; name: FUN_02b082bc
 */


void FUN_02b082bc(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  byte *pbVar18;
  uint local_f8 [2];
  undefined1 *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  pbVar18 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar3 = PTR_DAT_047d4ca0;
  uVar9 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_f0 = &DAT_e4d07a996e5ef5e8;
  puStack_e8 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar9;
  local_e0 = 4;
  local_d8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_f0);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_f8[0] = 0xcaac8800;
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,local_f8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar15 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar15 == local_f8[0]) goto LAB_02b083c8;
      puVar4 = puVar15 + 0xc;
      if (local_f8[0] <= *puVar15) {
        puVar4 = puVar12;
        puVar13 = puVar15;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar15 = puVar5;
LAB_02b083c8:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar5 == puVar15)) {
    nn::os::UnlockMutex(pMVar1);
LAB_02b08554:
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x50))(plVar11,local_f8);
    }
  }
  else {
    uVar17 = *(undefined8 *)(puVar15 + 2);
    uVar9 = *(undefined8 *)(puVar15 + 6);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uStack_64 = *puVar15;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_68 = 0;
    local_70 = 0;
    local_78 = puVar2;
    if (uStack_64 != 0) {
      uVar14 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar14 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 3)) {
        FUN_00f83090(&local_78);
        puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
        for (lVar6 = uVar14 - 4; PTR_DAT_047d4ca8 = (undefined *)puVar16, lVar6 != 0;
            lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
          puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
        }
      }
    }
    local_b8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    local_c0 = 0;
    local_b0 = uVar17;
    uStack_a8 = uVar9;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar7 = FUN_00f88478(&local_d0,param_1 + 0x40,0xc98);
    nn::os::UnlockMutex(pMVar1);
    pbVar18 = PTR_DAT_047d4c98;
    if (cVar7 == '\0') goto LAB_02b08554;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_f0 = &DAT_e4d07a996e5ef5e8;
  puStack_e8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_e0 = 4;
  local_d8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_f0);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_f8[0] = 0x8b14392f;
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,local_f8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar15 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar15 == local_f8[0]) goto LAB_02b0862c;
      puVar4 = puVar15 + 0xc;
      if (local_f8[0] <= *puVar15) {
        puVar4 = puVar12;
        puVar13 = puVar15;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar15 = puVar5;
LAB_02b0862c:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar5 == puVar15)) {
    nn::os::UnlockMutex(pMVar1);
LAB_02b087c8:
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x50))(plVar11,local_f8);
    }
  }
  else {
    uVar17 = *(undefined8 *)(puVar15 + 2);
    uVar9 = *(undefined8 *)(puVar15 + 6);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uStack_64 = *puVar15;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 != 0) {
      uVar14 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar14 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 3)) {
        FUN_00f83090(&local_78);
        puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
        for (lVar6 = uVar14 - 4; PTR_DAT_047d4ca8 = (undefined *)puVar16, lVar6 != 0;
            lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
          puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
        }
      }
    }
    local_b8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    local_c0 = 0;
    local_b0 = uVar17;
    uStack_a8 = uVar9;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar7 = FUN_00f88478(&local_d0,param_1 + 0x25e8,24000);
    nn::os::UnlockMutex(pMVar1);
    pbVar18 = PTR_DAT_047d4c98;
    if (cVar7 == '\0') goto LAB_02b087c8;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_f0 = &DAT_e4d07a996e5ef5e8;
  puStack_e8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_e0 = 4;
  local_d8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_f0);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_f8[0] = 0x292b0e45;
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,local_f8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar15 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar15 == local_f8[0]) goto LAB_02b088a0;
      puVar4 = puVar15 + 0xc;
      if (local_f8[0] <= *puVar15) {
        puVar4 = puVar12;
        puVar13 = puVar15;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar15 = puVar5;
LAB_02b088a0:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar5 == puVar15)) {
    nn::os::UnlockMutex(pMVar1);
LAB_02b08a3c:
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x50))(plVar11,local_f8);
    }
  }
  else {
    uVar17 = *(undefined8 *)(puVar15 + 2);
    uVar9 = *(undefined8 *)(puVar15 + 6);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uStack_64 = *puVar15;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 != 0) {
      uVar14 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar14 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 3)) {
        FUN_00f83090(&local_78);
        puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
        for (lVar6 = uVar14 - 4; PTR_DAT_047d4ca8 = (undefined *)puVar16, lVar6 != 0;
            lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
          puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
        }
      }
    }
    local_b8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    local_c0 = 0;
    local_b0 = uVar17;
    uStack_a8 = uVar9;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar7 = FUN_00f88478(&local_d0,param_1 + 0x83a8,400);
    nn::os::UnlockMutex(pMVar1);
    pbVar18 = PTR_DAT_047d4c98;
    if (cVar7 == '\0') goto LAB_02b08a3c;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_f0 = &DAT_e4d07a996e5ef5e8;
  puStack_e8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_e0 = 4;
  local_d8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_f0);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_f8[0] = 0x37b99b4d;
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,local_f8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar15 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar15 == local_f8[0]) goto LAB_02b08b18;
      puVar4 = puVar15 + 0xc;
      if (local_f8[0] <= *puVar15) {
        puVar4 = puVar12;
        puVar13 = puVar15;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar15 = puVar5;
LAB_02b08b18:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar5 == puVar15)) {
    nn::os::UnlockMutex(pMVar1);
LAB_02b08c8c:
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x50))(plVar11,local_f8);
    }
  }
  else {
    uVar9 = *(undefined8 *)(puVar15 + 2);
    uVar17 = *(undefined8 *)(puVar15 + 6);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uStack_64 = *puVar15;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 == 0) {
      uStack_64 = 0;
    }
    else {
      uVar14 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar14 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar14 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
      puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
    }
    local_b8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    local_c0 = 0;
    local_b0 = uVar9;
    uStack_a8 = uVar17;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar7 = FUN_00f88478(&local_d0,param_1 + 0xe300,4);
    nn::os::UnlockMutex(pMVar1);
    pbVar18 = PTR_DAT_047d4c98;
    if (cVar7 == '\0') goto LAB_02b08c8c;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x520a1b0);
  local_f0 = *(undefined1 **)(param_1 + 0xe308);
  cVar7 = FUN_02afeb0c(lVar10,&local_78,&local_f0,&DAT_03d60c68);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,&local_78);
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x7d6c2b82);
  local_f0 = *(undefined1 **)(param_1 + 0xe340);
  cVar7 = FUN_02afeb0c(lVar10,&local_78,&local_f0,&DAT_03d60c70);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,&local_78);
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0xa52b4811);
  local_f0 = *(undefined1 **)(param_1 + 0xe378);
  cVar7 = FUN_02afeb0c(lVar10,&local_78,&local_f0,&DAT_03d60c78);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,&local_78);
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x95451e4);
  local_f0 = *(undefined1 **)(param_1 + 0xe3b0);
  cVar7 = FUN_02afeb0c(lVar10,&local_78,&local_f0,&DAT_03d60c80);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,&local_78);
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_f0 = &DAT_e4d07a996e5ef5e8;
  puStack_e8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_e0 = 4;
  local_d8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_f0);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_f8[0] = 0x100b93da;
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,local_f8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar15 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar15 == local_f8[0]) goto LAB_02b08f58;
      puVar4 = puVar15 + 0xc;
      if (local_f8[0] <= *puVar15) {
        puVar4 = puVar12;
        puVar13 = puVar15;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar15 = puVar5;
LAB_02b08f58:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar5 == puVar15)) {
    nn::os::UnlockMutex(pMVar1);
LAB_02b090b4:
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x50))(plVar11,local_f8);
    }
  }
  else {
    uVar9 = *(undefined8 *)(puVar15 + 2);
    uVar17 = *(undefined8 *)(puVar15 + 6);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uStack_64 = *puVar15;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 == 0) {
      uStack_64 = 0;
    }
    else {
      uVar14 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar14 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar14 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
      puVar16 = (undefined8 *)PTR_DAT_047d4ca8;
    }
    local_b8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    local_c0 = 0;
    local_b0 = uVar9;
    uStack_a8 = uVar17;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar7 = FUN_00f88478(&local_d0,param_1 + 0xcd8,0x1910);
    nn::os::UnlockMutex(pMVar1);
    if (cVar7 == '\0') goto LAB_02b090b4;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar3;
  local_f0 = &DAT_e4d07a996e5ef5e8;
  puStack_e8 = &DAT_03c60f6f;
  *puVar16 = uVar9;
  local_e0 = 4;
  local_d8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_f0);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_f8[0] = 0xa4ba4848;
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,local_f8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar15 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar15 == local_f8[0]) goto LAB_02b0919c;
      puVar4 = puVar15 + 0xc;
      if (local_f8[0] <= *puVar15) {
        puVar4 = puVar12;
        puVar13 = puVar15;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar15 = puVar5;
LAB_02b0919c:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar5 == puVar15)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar9 = *(undefined8 *)(puVar15 + 2);
    uVar17 = *(undefined8 *)(puVar15 + 6);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uStack_64 = *puVar15;
    puVar3 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar3;
    if (uStack_64 != 0) {
      uVar14 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar14 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar14 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar14 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
    }
    local_b8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    local_c0 = 0;
    local_b0 = uVar9;
    uStack_a8 = uVar17;
    local_98 = puVar3;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar7 = FUN_00f88478(&local_d0,param_1 + 0x8538,0x5dc4);
    nn::os::UnlockMutex(pMVar1);
    if (cVar7 != '\0') goto LAB_02b09314;
  }
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x50))(plVar11,local_f8);
  }
LAB_02b09314:
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  return;
}


