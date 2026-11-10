/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01869988; name: FUN_01869988
 */


void FUN_01869988(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  byte *pbVar17;
  undefined8 uVar18;
  uint local_d8 [2];
  undefined1 *local_d0;
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
  
  pbVar17 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar15 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar6 = PTR_DAT_047d4ca0;
  uVar9 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_d8[0] = 0x21c9bd44;
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,local_d8);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar4 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar4;
    do {
      puVar16 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar16 == local_d8[0]) goto LAB_01869a9c;
      puVar3 = puVar16 + 0xc;
      if (local_d8[0] <= *puVar16) {
        puVar3 = puVar12;
        puVar13 = puVar16;
      }
      uVar14 = (long)puVar13 - (long)puVar3;
      puVar12 = puVar3;
    } while (0 < (long)uVar14);
  }
  puVar16 = puVar4;
LAB_01869a9c:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar16 == (uint *)0x0) || (puVar4 == puVar16)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar18 = *(undefined8 *)(puVar16 + 2);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uVar9 = *(undefined8 *)(puVar16 + 6);
    uStack_64 = *puVar16;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_68 = 0;
    local_70 = 0;
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
        for (lVar5 = uVar14 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
      pbVar17 = PTR_DAT_047d4c98;
    }
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_b8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    local_c0 = 0;
    local_b0 = uVar18;
    uStack_a8 = uVar9;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar7 = FUN_00f88478(&local_d0,param_1 + 0x40,48000);
    nn::os::UnlockMutex(pMVar1);
    puVar15 = (undefined8 *)PTR_DAT_047d4ca8;
    if (cVar7 != '\0') goto LAB_01869c2c;
  }
  plVar11 = *(long **)(lVar10 + 0x60);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x50))(plVar11,local_d8);
  }
LAB_01869c2c:
  if (((*pbVar17 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar15 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_d8[0] = 0x916bca9e;
  local_d0 = (undefined1 *)(param_1 + 0xbbc0);
  local_78 = (undefined *)0x158;
  cVar7 = FUN_01869ff8(lVar10,local_d8,&local_d0,&local_78);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,local_d8);
  }
  if (((*pbVar17 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar15 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_d8[0] = 0x7e0adf89;
  local_d0 = (undefined1 *)(param_1 + 0xbd18);
  local_78 = (undefined *)0x158;
  cVar7 = FUN_01869ff8(lVar10,local_d8,&local_d0,&local_78);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,local_d8);
  }
  if (((*pbVar17 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar15 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_d8[0] = 0x203ff693;
  local_d0 = (undefined1 *)(param_1 + 0xbe70);
  local_78 = (undefined *)0x158;
  cVar7 = FUN_01869ff8(lVar10,local_d8,&local_d0,&local_78);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,local_d8);
  }
  if (((*pbVar17 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_d0 = &DAT_e4d07a996e5ef5e8;
  local_c8 = &DAT_03c60f6f;
  *puVar15 = uVar9;
  local_c0 = 4;
  local_b8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_d8[0] = 0x5369fc39;
  local_d0 = (undefined1 *)(param_1 + 0xbfc8);
  local_78 = (undefined *)0x158;
  cVar7 = FUN_01869ff8(lVar10,local_d8,&local_d0,&local_78);
  if ((cVar7 == '\0') && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x50))(plVar11,local_d8);
  }
  return;
}


