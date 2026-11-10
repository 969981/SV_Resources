/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01800c84; name: thunk_FUN_01800c88
 */


undefined1  [16] thunk_FUN_01800c88(ulong *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint *puVar19;
  undefined1 auVar20 [16];
  undefined1 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  uint auStack_b8 [2];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  uint uStack_44;
  
  if (((DAT_04840858 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04840858), iVar8 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  auStack_b8[0] = (uint)*param_1;
  uVar12 = *(ulong *)(DAT_04840848 + 0x680);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar17 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar13 = *param_1 & 0xffffffff;
    if (uVar17 < 2) {
      uVar14 = (int)uVar12 - 1 & uVar13;
    }
    else if (uVar13 < uVar12) {
      uVar14 = uVar13;
    }
    else {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar13 / uVar12;
      }
      uVar14 = uVar13 - uVar14 * uVar12;
    }
    plVar15 = *(long **)(*(long *)(DAT_04840848 + 0x678) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar15[1] == uVar13) {
            if (*(uint *)(plVar15 + 2) == auStack_b8[0]) goto LAB_01801074;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar15[1];
          if (uVar17 == uVar13) {
            if (*(uint *)(plVar15 + 2) == auStack_b8[0]) goto LAB_01801074;
          }
          else {
            if (uVar12 <= uVar17) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar17 / uVar12;
              }
              uVar17 = uVar17 - uVar6 * uVar12;
            }
            if (uVar17 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d4ca0;
  puStack_d8 = &DAT_e4d07a996e5ef5e8;
  puStack_d0 = &DAT_03c60f6f;
  uStack_c8 = 4;
  plStack_c0 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar9;
  lVar10 = FUN_00f844f4(uVar9,&puStack_d8);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar15 = *(long **)(lVar10 + 0x60);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x28))(plVar15,auStack_b8);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar10 + 0x10);
  uVar12 = (long)puVar4 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar12) {
    puVar11 = *(uint **)(lVar10 + 8);
    puVar16 = puVar4;
    do {
      puVar19 = puVar11 + (uVar12 / 0x60) * 0xc;
      if (*puVar19 == auStack_b8[0]) goto LAB_01800e54;
      puVar3 = puVar19 + 0xc;
      if (auStack_b8[0] <= *puVar19) {
        puVar3 = puVar11;
        puVar16 = puVar19;
      }
      uVar12 = (long)puVar16 - (long)puVar3;
      puVar11 = puVar3;
    } while (0 < (long)uVar12);
  }
  puVar19 = puVar4;
LAB_01800e54:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar19 == (uint *)0x0) || (puVar4 == puVar19)) {
    nn::os::UnlockMutex(pMVar1);
LAB_01800fc0:
    plVar15 = *(long **)(lVar10 + 0x60);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x50))(plVar15,auStack_b8);
    }
  }
  else {
    uVar9 = *(undefined8 *)(puVar19 + 2);
    uVar18 = *(undefined8 *)(puVar19 + 6);
    puStack_b0 = PTR_DAT_047dcc88 + 0x10;
    uStack_44 = *puVar19;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    uStack_50 = 0;
    uStack_48 = 0;
    puStack_58 = puVar2;
    if (uStack_44 != 0) {
      uVar12 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
      uStack_44 = uStack_44 ^ uStack_44 << 2;
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
      uStack_44 = uStack_44 ^ uStack_44 << 0xd;
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((((uVar12 != 1) &&
           (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
           uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar12 != 2)) &&
          (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
          uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar12 != 3)) &&
         (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
         uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar12 != 4)) {
        (**(code **)(PTR_DAT_047dcc70 + 0x20))(&puStack_58);
        for (lVar5 = uVar12 - 5; lVar5 != 0; lVar5 = lVar5 + -1) {
          (**(code **)(puStack_58 + 0x10))(&puStack_58);
        }
      }
    }
    uStack_68 = CONCAT44(uStack_44,uStack_44);
    puStack_98 = PTR_DAT_047dcc78 + 0x10;
    uStack_80 = 0;
    uStack_60 = 0;
    puStack_a8 = PTR_DAT_047dcc80 + 0x10;
    uStack_a0 = 0;
    uStack_90 = uVar9;
    uStack_88 = uVar18;
    puStack_78 = puVar2;
    uStack_70 = uStack_50;
    uStack_48 = uStack_44;
    cVar7 = FUN_01801104(&puStack_b0,&puStack_58);
    nn::os::UnlockMutex(pMVar1);
    if (cVar7 == '\0') goto LAB_01800fc0;
  }
  if (plStack_c0 != (long *)0x0) {
    (**(code **)(*plStack_c0 + 0x20))();
  }
LAB_01800fe0:
  auVar20._4_4_ = *(undefined4 *)((ulong)&puStack_58 | 4);
  auVar20._0_4_ = puStack_58._0_4_;
  auVar20._8_8_ = uStack_50;
  return auVar20;
LAB_01801074:
  puStack_58 = *(undefined **)((long)plVar15 + 0x14);
  uStack_50 = *(undefined8 *)((long)plVar15 + 0x1c);
  goto LAB_01800fe0;
}


