/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01871494; name: FUN_01871494
 */


undefined1  [16] FUN_01871494(ulong *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint *puVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
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
  uint local_48 [2];
  
  if (((DAT_04840858 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04840858), iVar7 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  local_48[0] = (uint)*param_1;
  uVar10 = *(ulong *)(DAT_04840848 + 0x548);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar15 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar11 = *param_1 & 0xffffffff;
    if (uVar15 < 2) {
      uVar12 = (int)uVar10 - 1 & uVar11;
    }
    else if (uVar11 < uVar10) {
      uVar12 = uVar11;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar11 / uVar10;
      }
      uVar12 = uVar11 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(DAT_04840848 + 0x540) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar13[1] == uVar11) {
            if (*(uint *)(plVar13 + 2) == local_48[0]) goto LAB_01871874;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar13[1];
          if (uVar15 == uVar11) {
            if (*(uint *)(plVar13 + 2) == local_48[0]) goto LAB_01871874;
          }
          else {
            if (uVar10 <= uVar15) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar15 / uVar10;
              }
              uVar15 = uVar15 - uVar6 * uVar10;
            }
            if (uVar15 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar19 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  puStack_d8 = &DAT_03c60f6f;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar19;
  lVar8 = FUN_00f844f4(uVar19,&local_e0);
  pMVar1 = (MutexType *)(lVar8 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar13 = *(long **)(lVar8 + 0x60);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13,local_48);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar8 + 0x10);
  uVar10 = (long)puVar4 - (long)*(uint **)(lVar8 + 8);
  if (0 < (long)uVar10) {
    puVar9 = *(uint **)(lVar8 + 8);
    puVar14 = puVar4;
    do {
      puVar17 = puVar9 + (uVar10 / 0x60) * 0xc;
      if (*puVar17 == local_48[0]) goto LAB_01871664;
      puVar3 = puVar17 + 0xc;
      if (local_48[0] <= *puVar17) {
        puVar3 = puVar9;
        puVar14 = puVar17;
      }
      uVar10 = (long)puVar14 - (long)puVar3;
      puVar9 = puVar3;
    } while (0 < (long)uVar10);
  }
  puVar17 = puVar4;
LAB_01871664:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar17 == (uint *)0x0) || (puVar4 == puVar17)) {
    nn::os::UnlockMutex(pMVar1);
    uVar10 = 0;
    uVar19 = 0;
LAB_018717d8:
    plVar13 = *(long **)(lVar8 + 0x60);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x50))(plVar13,local_48);
    }
  }
  else {
    uVar19 = *(undefined8 *)(puVar17 + 2);
    uVar16 = *(undefined8 *)(puVar17 + 6);
    local_c0 = PTR_DAT_047dcc88 + 0x10;
    uStack_54 = *puVar17;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_60 = 0;
    local_58 = 0;
    local_68 = puVar2;
    if (uStack_54 != 0) {
      uVar10 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((((uVar10 != 1) &&
           (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
           uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar10 != 2)) &&
          (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
          uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar10 != 3)) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar10 != 4)) {
        (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_68);
        for (lVar5 = uVar10 - 5; lVar5 != 0; lVar5 = lVar5 + -1) {
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
    local_a0 = uVar19;
    uStack_98 = uVar16;
    local_88 = puVar2;
    uStack_80 = local_60;
    local_58 = uStack_54;
    uVar11 = FUN_018718fc(&local_c0);
    uVar10 = uVar11 >> 0x20;
    uVar19 = 0;
    nn::os::UnlockMutex(pMVar1);
    if ((uVar11 & 0xff) == 0) goto LAB_018717d8;
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
LAB_018717f8:
  auVar18._8_8_ = uVar19;
  auVar18._0_8_ = uVar10;
  return auVar18;
LAB_01871874:
  uVar10 = (ulong)*(uint *)((long)plVar13 + 0x14);
  uVar19 = 0;
  goto LAB_018717f8;
}


