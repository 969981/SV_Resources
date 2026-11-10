/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b05e74; name: FUN_02b05e74
 */


void FUN_02b05e74(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint *puVar15;
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
  uint local_38 [2];
  
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
  lVar9 = FUN_00f844f4(uVar8,&local_e0);
  pMVar1 = (MutexType *)(lVar9 + 0x80);
  local_38[0] = 0x7ee0a576;
  nn::os::LockMutex(pMVar1);
  plVar10 = *(long **)(lVar9 + 0x60);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,local_38);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar9 + 0x10);
  uVar13 = (long)puVar4 - (long)*(uint **)(lVar9 + 8);
  if (0 < (long)uVar13) {
    puVar11 = *(uint **)(lVar9 + 8);
    puVar12 = puVar4;
    do {
      puVar15 = puVar11 + (uVar13 / 0x60) * 0xc;
      if (*puVar15 == local_38[0]) goto LAB_02b05f7c;
      puVar3 = puVar15 + 0xc;
      if (local_38[0] <= *puVar15) {
        puVar3 = puVar11;
        puVar12 = puVar15;
      }
      uVar13 = (long)puVar12 - (long)puVar3;
      puVar11 = puVar3;
    } while (0 < (long)uVar13);
  }
  puVar15 = puVar4;
LAB_02b05f7c:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar4 == puVar15)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar8 = *(undefined8 *)(puVar15 + 2);
    local_c0 = PTR_DAT_047dcc88 + 0x10;
    uVar14 = *(undefined8 *)(puVar15 + 6);
    uStack_54 = *puVar15;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_58 = 0;
    local_60 = 0;
    local_68 = puVar2;
    if (uStack_54 != 0) {
      uVar13 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar13 != 1) &&
          (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
          uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar13 != 2)) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar13 != 3)) {
        FUN_00f83090(&local_68);
        for (lVar5 = uVar13 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
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
    local_a0 = uVar8;
    uStack_98 = uVar14;
    local_88 = puVar2;
    uStack_80 = local_60;
    local_58 = uStack_54;
    cVar6 = FUN_00f88478(&local_c0,param_1 + 0x40,0xd48);
    nn::os::UnlockMutex(pMVar1);
    if (cVar6 != '\0') goto LAB_02b060f4;
  }
  plVar10 = *(long **)(lVar9 + 0x60);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x50))(plVar10,local_38);
  }
LAB_02b060f4:
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


