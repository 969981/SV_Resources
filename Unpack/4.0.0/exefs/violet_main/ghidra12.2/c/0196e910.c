/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196e910; name: FUN_0196e910
 */


void FUN_0196e910(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint *puVar18;
  undefined1 *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    plVar9 = (long *)(param_1 + 0x78);
    FUN_0196ec9c(plVar9,*(undefined8 *)(param_1 + 0xa8));
    uVar14 = *(ulong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (uVar14 != 0) {
      uVar10 = uVar14 & 3;
      if (uVar14 - 1 < 3) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          *(undefined8 *)(*plVar9 + uVar12 * 8) = 0;
          *(undefined8 *)(*plVar9 + uVar12 * 8 + 8) = 0;
          *(undefined8 *)(*plVar9 + uVar12 * 8 + 0x10) = 0;
          lVar13 = uVar12 * 8;
          uVar12 = uVar12 + 4;
          *(undefined8 *)(*plVar9 + lVar13 + 0x18) = 0;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar12);
      }
      if (uVar10 != 0) {
        lVar13 = uVar12 << 3;
        do {
          *(undefined8 *)(*plVar9 + lVar13) = 0;
          uVar10 = uVar10 - 1;
          lVar13 = lVar13 + 8;
        } while (uVar10 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  puStack_d8 = &DAT_03c60f6f;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar8;
  lVar13 = FUN_00f844f4(uVar8,&local_e0);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  pMVar1 = (MutexType *)(lVar13 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar9 = *(long **)(lVar13 + 0x60);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,&DAT_03d60bf0);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar13 + 0x10);
  uVar14 = (long)puVar4 - (long)*(uint **)(lVar13 + 8);
  if (0 < (long)uVar14) {
    puVar11 = *(uint **)(lVar13 + 8);
    puVar15 = puVar4;
    do {
      puVar18 = puVar11 + (uVar14 / 0x60) * 0xc;
      if (*puVar18 == 0x1fd031f) goto LAB_0196eab4;
      puVar3 = puVar18 + 0xc;
      if (0x1fd031e < *puVar18) {
        puVar3 = puVar11;
        puVar15 = puVar18;
      }
      uVar14 = (long)puVar15 - (long)puVar3;
      puVar11 = puVar3;
    } while (0 < (long)uVar14);
  }
  puVar18 = puVar4;
LAB_0196eab4:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar18 == (uint *)0x0) || (puVar4 == puVar18)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar16 = *(undefined8 *)(puVar18 + 2);
    uVar17 = *(undefined8 *)(puVar18 + 6);
    local_c0 = PTR_DAT_047dcc88 + 0x10;
    uStack_54 = *puVar18;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_60 = 0;
    local_58 = 0;
    local_68 = puVar2;
    if (uStack_54 != 0) {
      uVar14 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar14 != 1) &&
          (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
          uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar14 != 2)) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar14 != 3)) {
        FUN_00f83090(&local_68);
        for (lVar5 = uVar14 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
          (**(code **)(local_68 + 0x10))(&local_68);
        }
      }
    }
    local_78 = CONCAT44(uStack_54,uStack_54);
    local_a8 = PTR_DAT_047dcc78 + 0x10;
    local_90 = 0;
    uStack_70 = 0;
    local_b8 = PTR_DAT_047dcc80 + 0x10;
    uStack_b0 = 0;
    local_a0 = uVar16;
    uStack_98 = uVar17;
    local_88 = puVar2;
    uStack_80 = local_60;
    local_58 = uStack_54;
    cVar6 = FUN_00f88478(&local_c0,uVar8,0x40000);
    nn::os::UnlockMutex(pMVar1);
    if (cVar6 != '\0') goto LAB_0196ec24;
  }
  plVar9 = *(long **)(lVar13 + 0x60);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x50))(plVar9,&DAT_03d60bf0);
  }
LAB_0196ec24:
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


