/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a9ad4; name: FUN_011a9ad4
 */


undefined1  [16] FUN_011a9ad4(ulong *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint *puVar20;
  undefined1 auVar21 [16];
  undefined1 *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  uint local_b8 [2];
  undefined *local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined *local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  ulong local_50;
  uint local_48;
  uint uStack_44;
  
  if (((DAT_04840858 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04840858), iVar7 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  local_b8[0] = (uint)*param_1;
  uVar13 = *(ulong *)(DAT_04840848 + 0x618);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar18 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar14 = *param_1 & 0xffffffff;
    if (uVar18 < 2) {
      uVar15 = (int)uVar13 - 1 & uVar14;
    }
    else if (uVar14 < uVar13) {
      uVar15 = uVar14;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar14 / uVar13;
      }
      uVar15 = uVar14 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*(long *)(DAT_04840848 + 0x610) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar16[1] == uVar14) {
            if (*(uint *)(plVar16 + 2) == local_b8[0]) goto LAB_011a9fdc;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar16[1];
          if (uVar18 == uVar14) {
            if (*(uint *)(plVar16 + 2) == local_b8[0]) goto LAB_011a9fdc;
          }
          else {
            if (uVar13 <= uVar18) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar18 / uVar13;
              }
              uVar18 = uVar18 - uVar5 * uVar13;
            }
            if (uVar18 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_d8 = &DAT_e4d07a996e5ef5e8;
  puStack_d0 = &DAT_03c60f6f;
  local_c8 = 4;
  local_c0 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar8;
  lVar9 = FUN_00f844f4(uVar8,&local_d8);
  pMVar1 = (MutexType *)(lVar9 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar16 = *(long **)(lVar9 + 0x60);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x28))(plVar16,local_b8);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar9 + 0x10);
  uVar13 = (long)puVar4 - (long)*(uint **)(lVar9 + 8);
  if (0 < (long)uVar13) {
    puVar12 = *(uint **)(lVar9 + 8);
    puVar17 = puVar4;
    do {
      puVar20 = puVar12 + (uVar13 / 0x60) * 0xc;
      if (*puVar20 == local_b8[0]) goto LAB_011a9ca0;
      puVar3 = puVar20 + 0xc;
      if (local_b8[0] <= *puVar20) {
        puVar3 = puVar12;
        puVar17 = puVar20;
      }
      uVar13 = (long)puVar17 - (long)puVar3;
      puVar12 = puVar3;
    } while (0 < (long)uVar13);
  }
  puVar20 = puVar4;
LAB_011a9ca0:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar20 == (uint *)0x0) || (puVar4 == puVar20)) {
LAB_011a9f18:
    nn::os::UnlockMutex(pMVar1);
LAB_011a9f20:
    plVar16 = *(long **)(lVar9 + 0x60);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x50))(plVar16,local_b8);
    }
  }
  else {
    uVar8 = *(undefined8 *)(puVar20 + 2);
    uVar19 = *(undefined8 *)(puVar20 + 6);
    local_b0 = PTR_DAT_047dcc88 + 0x10;
    uStack_44 = *puVar20;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_50 = 0;
    local_48 = 0;
    local_58 = puVar2;
    if (uStack_44 != 0) {
      uVar13 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
      uStack_44 = uStack_44 ^ uStack_44 << 2;
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
      uStack_44 = uStack_44 ^ uStack_44 << 0xd;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((((uVar13 != 1) &&
           (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
           uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar13 != 2)) &&
          (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
          uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar13 != 3)) &&
         (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
         uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar13 != 4)) {
        (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_58);
        for (lVar11 = uVar13 - 5; lVar11 != 0; lVar11 = lVar11 + -1) {
          (**(code **)(local_58 + 0x10))(&local_58);
        }
      }
    }
    local_98 = PTR_DAT_047dcc78 + 0x10;
    local_80 = 0;
    local_68 = CONCAT44(uStack_44,uStack_44);
    uStack_60 = 0;
    local_a8 = PTR_DAT_047dcc80 + 0x10;
    uStack_a0 = 0;
    uStack_90 = uVar8;
    local_88 = uVar19;
    local_78 = puVar2;
    uStack_70 = local_50;
    local_48 = uStack_44;
    plVar16 = (long *)(**(code **)(local_b0 + 0x18))(&local_b0);
    plVar10 = (long *)(**(code **)(*plVar16 + 0x28))();
    uVar13 = (**(code **)(*plVar10 + 0x10))(plVar10,1,plVar16[1]);
    if ((uVar13 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (**(code **)(*plVar16 + 0x10))(plVar16,&local_58,1,0);
      uVar13 = uVar13 & 0xffffffff;
    }
    lVar11 = (**(code **)(local_b0 + 0x10))(&local_b0);
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
    if (((uVar13 & 1) == 0) || ((char)local_58 != '\x05')) goto LAB_011a9f18;
    plVar16 = (long *)(**(code **)(local_b0 + 0x18))(&local_b0);
    plVar10 = (long *)(**(code **)(*plVar16 + 0x28))();
    uVar13 = (**(code **)(*plVar10 + 0x10))(plVar10,4,plVar16[1]);
    if ((uVar13 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (**(code **)(*plVar16 + 0x10))(plVar16,&local_58,4,0);
      uVar13 = uVar13 & 0xffffffff;
    }
    lVar11 = (**(code **)(local_b0 + 0x10))(&local_b0);
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 4;
    if (((uVar13 & 1) == 0) || ((int)local_58 != 3)) goto LAB_011a9f18;
    cVar6 = FUN_011aa080(&local_b0,3,&local_58,3);
    nn::os::UnlockMutex(pMVar1);
    if (cVar6 == '\0') goto LAB_011a9f20;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
LAB_011a9f40:
  auVar21._4_4_ = *(undefined4 *)((ulong)&local_58 | 4);
  auVar21._0_4_ = (int)local_58;
  auVar21._8_4_ = (undefined4)local_50;
  auVar21._12_4_ = 0;
  return auVar21;
LAB_011a9fdc:
  local_58 = *(undefined **)((long)plVar16 + 0x14);
  local_50 = (ulong)*(uint *)((long)plVar16 + 0x1c);
  goto LAB_011a9f40;
}


