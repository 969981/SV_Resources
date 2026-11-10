/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f3c14; name: FUN_020f3c14
 */


void FUN_020f3c14(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  byte *pbVar20;
  undefined1 auStack_f0 [24];
  long *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
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
  
  pbVar20 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar7 = PTR_DAT_047d4ca0;
  uVar16 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar16;
  FUN_00d8fb98(auStack_f0,PTR_DAT_047dcc90);
  lVar11 = FUN_00f844f4(uVar16,auStack_f0);
  pMVar1 = (MutexType *)(lVar11 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar12 = *(long **)(lVar11 + 0x60);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,&DAT_03d60c18);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar11 + 0x10);
  uVar15 = (long)puVar5 - (long)*(uint **)(lVar11 + 8);
  if (0 < (long)uVar15) {
    puVar13 = *(uint **)(lVar11 + 8);
    puVar14 = puVar5;
    do {
      puVar19 = puVar13 + (uVar15 / 0x60) * 0xc;
      if (*puVar19 == 0x549b6033) goto LAB_020f3d0c;
      puVar4 = puVar19 + 0xc;
      if (0x549b6032 < *puVar19) {
        puVar4 = puVar13;
        puVar14 = puVar19;
      }
      uVar15 = (long)puVar14 - (long)puVar4;
      puVar13 = puVar4;
    } while (0 < (long)uVar15);
  }
  puVar19 = puVar5;
LAB_020f3d0c:
  nn::os::UnlockMutex(pMVar1);
  puVar8 = PTR_DAT_047dcc88;
  puVar3 = PTR_DAT_047dcc70;
  if ((puVar19 == (uint *)0x0) || (puVar5 == puVar19)) {
    nn::os::UnlockMutex(pMVar1);
LAB_020f3e80:
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x50))(plVar12,&DAT_03d60c18);
    }
  }
  else {
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uVar16 = *(undefined8 *)(puVar19 + 2);
    uVar17 = *(undefined8 *)(puVar19 + 6);
    uStack_64 = *puVar19;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 == 0) {
      uStack_64 = 0;
    }
    else {
      uVar15 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      if (((uVar15 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar15 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
      pbVar20 = PTR_DAT_047d4c98;
    }
    local_b8 = PTR_DAT_047dcc78 + 0x10;
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    uStack_c0 = 0;
    local_b0 = uVar16;
    uStack_a8 = uVar17;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar9 = FUN_00f88478(&local_d0,param_1 + 0x40,0x3000);
    nn::os::UnlockMutex(pMVar1);
    puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
    if (cVar9 == '\0') goto LAB_020f3e80;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar16 = *(undefined8 *)puVar7;
  *puVar18 = uVar16;
  FUN_00d8fb98(auStack_f0,PTR_DAT_047dcc90);
  lVar11 = FUN_00f844f4(uVar16,auStack_f0);
  pMVar1 = (MutexType *)(lVar11 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar12 = *(long **)(lVar11 + 0x60);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,&DAT_03d60c1c);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar11 + 0x10);
  uVar15 = (long)puVar5 - (long)*(uint **)(lVar11 + 8);
  if (0 < (long)uVar15) {
    puVar13 = *(uint **)(lVar11 + 8);
    puVar14 = puVar5;
    do {
      puVar19 = puVar13 + (uVar15 / 0x60) * 0xc;
      if (*puVar19 == 0xc4c6417f) goto LAB_020f3f60;
      puVar4 = puVar19 + 0xc;
      if (0xc4c6417e < *puVar19) {
        puVar4 = puVar13;
        puVar14 = puVar19;
      }
      uVar15 = (long)puVar14 - (long)puVar4;
      puVar13 = puVar4;
    } while (0 < (long)uVar15);
  }
  puVar19 = puVar5;
LAB_020f3f60:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar19 == (uint *)0x0) || (puVar5 == puVar19)) {
    nn::os::UnlockMutex(pMVar1);
LAB_020f40d0:
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x50))(plVar12,&DAT_03d60c1c);
    }
  }
  else {
    local_d0 = puVar8 + 0x10;
    uVar17 = *(undefined8 *)(puVar19 + 2);
    uVar16 = *(undefined8 *)(puVar19 + 6);
    uStack_64 = *puVar19;
    puVar2 = puVar3 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 == 0) {
      uStack_64 = 0;
    }
    else {
      uVar15 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      if (((uVar15 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar15 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
      pbVar20 = PTR_DAT_047d4c98;
    }
    local_b8 = PTR_DAT_047dcc78 + 0x10;
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    uStack_c0 = 0;
    local_b0 = uVar17;
    uStack_a8 = uVar16;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar9 = FUN_00f88478(&local_d0,param_1 + 0x3040,0x180);
    nn::os::UnlockMutex(pMVar1);
    puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
    if (cVar9 == '\0') goto LAB_020f40d0;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar16 = *(undefined8 *)puVar7;
  *puVar18 = uVar16;
  FUN_00d8fb98(auStack_f0,PTR_DAT_047dcc90);
  lVar11 = FUN_00f844f4(uVar16,auStack_f0);
  pMVar1 = (MutexType *)(lVar11 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar12 = *(long **)(lVar11 + 0x60);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,&DAT_03d60c20);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar11 + 0x10);
  uVar15 = (long)puVar5 - (long)*(uint **)(lVar11 + 8);
  if (0 < (long)uVar15) {
    puVar13 = *(uint **)(lVar11 + 8);
    puVar14 = puVar5;
    do {
      puVar19 = puVar13 + (uVar15 / 0x60) * 0xc;
      if (*puVar19 == 0x7b8ccb0b) goto LAB_020f41b0;
      puVar4 = puVar19 + 0xc;
      if (0x7b8ccb0a < *puVar19) {
        puVar4 = puVar13;
        puVar14 = puVar19;
      }
      uVar15 = (long)puVar14 - (long)puVar4;
      puVar13 = puVar4;
    } while (0 < (long)uVar15);
  }
  puVar19 = puVar5;
LAB_020f41b0:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar19 == (uint *)0x0) || (puVar5 == puVar19)) {
    nn::os::UnlockMutex(pMVar1);
LAB_020f4320:
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x50))(plVar12,&DAT_03d60c20);
    }
  }
  else {
    local_d0 = puVar8 + 0x10;
    uVar17 = *(undefined8 *)(puVar19 + 2);
    uVar16 = *(undefined8 *)(puVar19 + 6);
    uStack_64 = *puVar19;
    puVar2 = puVar3 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 == 0) {
      uStack_64 = 0;
    }
    else {
      uVar15 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      if (((uVar15 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar15 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
      pbVar20 = PTR_DAT_047d4c98;
    }
    local_b8 = PTR_DAT_047dcc78 + 0x10;
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    uStack_c0 = 0;
    local_b0 = uVar17;
    uStack_a8 = uVar16;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar9 = FUN_00f88478(&local_d0,param_1 + 0x31c0,0x900);
    nn::os::UnlockMutex(pMVar1);
    puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
    if (cVar9 == '\0') goto LAB_020f4320;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar16 = *(undefined8 *)puVar7;
  *puVar18 = uVar16;
  FUN_00d8fb98(auStack_f0,PTR_DAT_047dcc90);
  lVar11 = FUN_00f844f4(uVar16,auStack_f0);
  pMVar1 = (MutexType *)(lVar11 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar12 = *(long **)(lVar11 + 0x60);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,&DAT_03d60c24);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar11 + 0x10);
  uVar15 = (long)puVar5 - (long)*(uint **)(lVar11 + 8);
  if (0 < (long)uVar15) {
    puVar13 = *(uint **)(lVar11 + 8);
    puVar14 = puVar5;
    do {
      puVar19 = puVar13 + (uVar15 / 0x60) * 0xc;
      if (*puVar19 == 0xb7a3eabb) goto LAB_020f4400;
      puVar4 = puVar19 + 0xc;
      if (0xb7a3eaba < *puVar19) {
        puVar4 = puVar13;
        puVar14 = puVar19;
      }
      uVar15 = (long)puVar14 - (long)puVar4;
      puVar13 = puVar4;
    } while (0 < (long)uVar15);
  }
  puVar19 = puVar5;
LAB_020f4400:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar19 == (uint *)0x0) || (puVar5 == puVar19)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    local_d0 = puVar8 + 0x10;
    uVar16 = *(undefined8 *)(puVar19 + 2);
    uVar17 = *(undefined8 *)(puVar19 + 6);
    uStack_64 = *puVar19;
    puVar3 = puVar3 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar3;
    if (uStack_64 != 0) {
      uVar15 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar15 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar15 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar15 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
    }
    local_b8 = PTR_DAT_047dcc78 + 0x10;
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    uStack_c0 = 0;
    local_b0 = uVar16;
    uStack_a8 = uVar17;
    local_98 = puVar3;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar9 = FUN_00f88478(&local_d0,param_1 + 0x3ac0,0xc00);
    nn::os::UnlockMutex(pMVar1);
    if (cVar9 != '\0') goto LAB_020f4564;
  }
  plVar12 = *(long **)(lVar11 + 0x60);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x50))(plVar12,&DAT_03d60c24);
  }
LAB_020f4564:
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  return;
}


