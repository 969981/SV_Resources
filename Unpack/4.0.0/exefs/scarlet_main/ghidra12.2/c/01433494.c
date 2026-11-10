/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01433494; name: FUN_01433494
 */


void FUN_01433494(long param_1,int param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint local_e8 [2];
  undefined1 *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  puStack_d8 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar8;
  uVar18 = 0x811c9dc5;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  lVar9 = FUN_00f844f4(uVar8,&local_e0);
  bVar5 = *(byte *)(param_1 + (long)param_2 * 0x420 + 8);
  uVar13 = (uint)bVar5;
  if (bVar5 != 0) {
    pbVar15 = (byte *)(param_1 + (long)param_2 * 0x420 + 9);
    do {
      uVar18 = (uVar18 ^ uVar13) * 0x1000193;
      uVar13 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar13 != 0);
  }
  pMVar1 = (MutexType *)(lVar9 + 0x80);
  local_e8[0] = uVar18;
  nn::os::LockMutex(pMVar1);
  plVar10 = *(long **)(lVar9 + 0x60);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,local_e8);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar9 + 0x10);
  uVar17 = (long)puVar4 - (long)*(uint **)(lVar9 + 8);
  if (0 < (long)uVar17) {
    puVar14 = *(uint **)(lVar9 + 8);
    puVar16 = puVar4;
    do {
      puVar20 = puVar14 + (uVar17 / 0x60) * 0xc;
      if (*puVar20 == local_e8[0]) goto LAB_014335dc;
      puVar3 = puVar20 + 0xc;
      if (local_e8[0] <= *puVar20) {
        puVar3 = puVar14;
        puVar16 = puVar20;
      }
      uVar17 = (long)puVar16 - (long)puVar3;
      puVar14 = puVar3;
    } while (0 < (long)uVar17);
  }
  puVar20 = puVar4;
LAB_014335dc:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar20 == (uint *)0x0) || (puVar4 == puVar20)) {
LAB_01433840:
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar8 = *(undefined8 *)(puVar20 + 2);
    uVar19 = *(undefined8 *)(puVar20 + 6);
    local_c0 = PTR_DAT_047dcc88 + 0x10;
    uStack_54 = *puVar20;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_60 = 0;
    local_58 = 0;
    local_68 = puVar2;
    if (uStack_54 != 0) {
      uVar17 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar17 != 1) &&
          (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
          uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar17 != 2)) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar17 != 3)) {
        FUN_00f83090(&local_68);
        for (lVar12 = uVar17 - 4; lVar12 != 0; lVar12 = lVar12 + -1) {
          (**(code **)(local_68 + 0x10))(&local_68);
        }
      }
    }
    local_a8 = PTR_DAT_047dcc78 + 0x10;
    local_90 = 0;
    local_78 = CONCAT44(uStack_54,uStack_54);
    uStack_70 = 0;
    local_b8 = PTR_DAT_047dcc80 + 0x10;
    uStack_b0 = 0;
    uStack_a0 = uVar8;
    local_98 = uVar19;
    local_88 = puVar2;
    uStack_80 = local_60;
    local_58 = uStack_54;
    plVar10 = (long *)(**(code **)(local_c0 + 0x18))(&local_c0);
    plVar11 = (long *)(**(code **)(*plVar10 + 0x28))();
    uVar17 = (**(code **)(*plVar11 + 0x10))(plVar11,1,plVar10[1]);
    if ((uVar17 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_68,1,0);
      uVar17 = uVar17 & 0xffffffff;
    }
    lVar12 = (**(code **)(local_c0 + 0x10))(&local_c0);
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
    if (((uVar17 & 1) == 0) || ((char)local_68 != '\x05')) goto LAB_01433840;
    plVar10 = (long *)(**(code **)(local_c0 + 0x18))(&local_c0);
    plVar11 = (long *)(**(code **)(*plVar10 + 0x28))();
    uVar17 = (**(code **)(*plVar11 + 0x10))(plVar11,4,plVar10[1]);
    if ((uVar17 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_68,4,0);
      uVar17 = uVar17 & 0xffffffff;
    }
    lVar12 = (**(code **)(local_c0 + 0x10))(&local_c0);
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 4;
    if (((uVar17 & 1) == 0) || ((int)local_68 != 0x400)) goto LAB_01433840;
    cVar6 = FUN_014338e8(&local_c0,0x400,param_1 + (long)param_2 * 0x420 + 0x28,0x400);
    nn::os::UnlockMutex(pMVar1);
    if (cVar6 != '\0') goto LAB_01433860;
  }
  plVar10 = *(long **)(lVar9 + 0x60);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x50))(plVar10,local_e8);
  }
LAB_01433860:
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


