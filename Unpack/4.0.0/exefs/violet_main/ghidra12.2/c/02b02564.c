/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b02564; name: FUN_02b02564
 */


void FUN_02b02564(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  void *__dest;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  undefined *puVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined1 *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  long *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined1 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined *local_80;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  
  memset((void *)(param_1 + 0x40),0,0x8133);
  pbVar20 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar22 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar7 = PTR_DAT_047d4ca0;
  uVar10 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_158 = &DAT_e4d07a996e5ef5e8;
  puStack_150 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar10;
  local_148 = 4;
  local_140 = (long *)0x0;
  lVar11 = FUN_00f844f4(uVar10,&local_158);
  pMVar1 = (MutexType *)(lVar11 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar11 + 0xa0) & 1) != 0) {
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(0xf5d7c0e2,(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar12 + 0x60))(plVar12,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_02b02cf8;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar11 + 0x10);
  uVar16 = (long)puVar5 - (long)*(uint **)(lVar11 + 8);
  if (0 < (long)uVar16) {
    puVar14 = *(uint **)(lVar11 + 8);
    puVar15 = puVar5;
    do {
      puVar17 = puVar14 + (uVar16 / 0x60) * 0xc;
      if (*puVar17 == 0xf5d7c0e2) goto LAB_02b02694;
      puVar4 = puVar17 + 0xc;
      if (0xf5d7c0e1 < *puVar17) {
        puVar4 = puVar14;
        puVar15 = puVar17;
      }
      uVar16 = (long)puVar15 - (long)puVar4;
      puVar14 = puVar4;
    } while (0 < (long)uVar16);
  }
  puVar17 = puVar5;
LAB_02b02694:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar17 == (uint *)0x0) || (puVar5 == puVar17)) {
    nn::os::LockMutex(pMVar1);
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x38))(plVar12,&DAT_03d60c28);
    }
    FUN_015d0cb8(&local_88,lVar11,&DAT_03d60c28,0x8135);
    puVar3 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar10 = *(undefined8 *)(local_88 + 2);
      lVar19 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      uVar13 = *local_88;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (uVar13 == 0) {
        uVar13 = 0;
        local_128._4_4_ = 0;
      }
      else {
        uVar16 = (ulong)uVar13 - ((ulong)(uVar13 >> 1) & 0x5555555555555555);
        uVar13 = uVar13 ^ uVar13 << 2;
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar13 = uVar13 ^ uVar13 >> 0xf;
        uVar13 = uVar13 ^ uVar13 << 0xd;
        local_128 = (ulong)uVar13 << 0x20;
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar16 != 1) {
          uVar13 = uVar13 ^ uVar13 << 2;
          uVar13 = uVar13 ^ uVar13 >> 0xf;
          uVar13 = uVar13 ^ uVar13 << 0xd;
          local_128 = (ulong)uVar13 << 0x20;
          if (uVar16 != 2) {
            uVar13 = uVar13 ^ uVar13 << 2;
            uVar13 = uVar13 ^ uVar13 >> 0xf;
            uVar13 = uVar13 ^ uVar13 << 0xd;
            local_128 = (ulong)uVar13 << 0x20;
            if (uVar16 != 3) {
              uVar13 = uVar13 ^ uVar13 << 2;
              uVar13 = uVar13 ^ uVar13 >> 0xf;
              uVar13 = uVar13 ^ uVar13 << 0xd;
              local_128 = (ulong)uVar13 << 0x20;
              if (uVar16 != 4) {
                (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
                for (lVar6 = uVar16 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
                  (**(code **)(local_138 + 0x10))(&local_138);
                }
                local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
                uVar13 = local_128._4_4_;
              }
            }
          }
        }
      }
      puVar18 = PTR_DAT_047dcc80;
      local_128 = CONCAT44(local_128._4_4_,uVar13);
      local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      local_d0 = 0;
      local_c0 = uVar10;
      lStack_b8 = lVar19;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      uVar16 = FUN_015d05bc(&local_e0,param_1 + 0x40,0x8130);
      if ((uVar16 & 1) == 0) {
        (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))
                  (*(long **)(lVar11 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar19 = *(long *)(lVar11 + 0x10);
        if (*(char *)(lVar19 + -0x10) != '\0') {
          *(undefined1 *)(lVar19 + -0x10) = 0;
        }
        *(long *)(lVar11 + 0x10) = lVar19 + -0x30;
        goto LAB_02b02c4c;
      }
      puVar2 = puVar3 + 0x10;
      uVar21 = *(undefined8 *)(local_88 + 2);
      uVar10 = *(undefined8 *)(local_88 + 6);
      local_138 = PTR_DAT_047dcc88 + 0x10;
      uStack_6c = *local_88;
      local_78 = 0;
      local_70 = 0;
      local_80 = puVar2;
      if (uStack_6c != 0) {
        uVar16 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
        uStack_6c = uStack_6c ^ uStack_6c << 2;
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        uStack_6c = uStack_6c ^ uStack_6c << 0xd;
        if ((((uVar16 == 1) ||
             (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
             uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar16 == 2)) ||
            (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
            uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar16 == 3)) ||
           (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
           uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar16 == 4)) {
          puVar18 = PTR_DAT_047dcc80;
        }
        else {
          (**(code **)(puVar3 + 0x20))(&local_80);
          puVar18 = PTR_DAT_047dcc80;
          for (lVar19 = uVar16 - 5; PTR_DAT_047dcc80 = puVar18, lVar19 != 0; lVar19 = lVar19 + -1) {
            (**(code **)(local_80 + 0x10))(&local_80);
            puVar18 = PTR_DAT_047dcc80;
          }
        }
      }
      puStack_120 = PTR_DAT_047dcc78 + 0x10;
      local_128 = 0;
      local_f0 = CONCAT44(uStack_6c,uStack_6c);
      local_108 = 0;
      uStack_e8 = 0;
      local_130 = puVar18 + 0x10;
      local_118 = uVar21;
      uStack_110 = uVar10;
      local_100 = puVar2;
      uStack_f8 = local_78;
      local_70 = uStack_6c;
      uVar10 = FUN_015d1064(&local_138);
      if ((char)local_88[8] == '\0') {
        *(undefined8 *)(local_88 + 9) = uVar10;
        *(undefined1 *)(local_88 + 8) = 1;
      }
      else {
        *(undefined8 *)(local_88 + 9) = uVar10;
      }
      puVar22 = (undefined8 *)PTR_DAT_047d4ca8;
      nn::os::LockMutex(pMVar1);
      FUN_015d1340(*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10),&local_138);
      nn::os::UnlockMutex(pMVar1);
      pbVar20 = PTR_DAT_047d4c98;
    }
  }
  else {
    uVar16 = FUN_015d0794(lVar11,puVar17);
    if (((uVar16 & 1) == 0) && (plVar12 = *(long **)(lVar11 + 0x60), plVar12 != (long *)0x0)) {
      (**(code **)(*plVar12 + 0x58))(plVar12,&DAT_03d60c28);
    }
    nn::os::LockMutex(pMVar1);
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x30))(plVar12,puVar17);
    }
    if (*(ulong *)(puVar17 + 4) < 0x8135) {
      plVar12 = *(long **)(lVar11 + 0x60);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar17);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar11 + 0x40) + 0x10))
                                 (*(long **)(lVar11 + 0x40),0x8135);
      if (__dest == (void *)0x0) goto LAB_02b02cf0;
      memcpy(__dest,*(void **)(puVar17 + 2),*(size_t *)(puVar17 + 6));
      (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))
                (*(long **)(lVar11 + 0x40),*(undefined8 *)(puVar17 + 2),*(undefined8 *)(puVar17 + 4)
                );
      *(void **)(puVar17 + 2) = __dest;
      puVar17[4] = 0x8135;
      puVar17[5] = 0;
LAB_02b02920:
      lVar19 = 0x8135;
      puVar17[6] = 0x8135;
      puVar17[7] = 0;
    }
    else {
      lVar19 = *(long *)(puVar17 + 6);
      if ((*(ulong *)(puVar17 + 4) != 0x8135) && (bVar8 = lVar19 != 0x8135, lVar19 = 0x8135, bVar8))
      {
        plVar12 = *(long **)(lVar11 + 0x60);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))(plVar12,puVar17);
        }
        goto LAB_02b02920;
      }
    }
    uVar10 = *(undefined8 *)(puVar17 + 2);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    uVar13 = *puVar17;
    puVar3 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    local_138 = puVar3;
    if (uVar13 == 0) {
      uVar13 = 0;
      local_128._4_4_ = 0;
    }
    else {
      uVar16 = (ulong)uVar13 - ((ulong)(uVar13 >> 1) & 0x5555555555555555);
      uVar13 = uVar13 ^ uVar13 << 2;
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar13 = uVar13 ^ uVar13 >> 0xf;
      uVar13 = uVar13 ^ uVar13 << 0xd;
      local_128 = (ulong)uVar13 << 0x20;
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 != 1) {
        uVar13 = uVar13 ^ uVar13 << 2;
        uVar13 = uVar13 ^ uVar13 >> 0xf;
        uVar13 = uVar13 ^ uVar13 << 0xd;
        local_128 = (ulong)uVar13 << 0x20;
        if (uVar16 != 2) {
          uVar13 = uVar13 ^ uVar13 << 2;
          uVar13 = uVar13 ^ uVar13 >> 0xf;
          uVar13 = uVar13 ^ uVar13 << 0xd;
          local_128 = (ulong)uVar13 << 0x20;
          if (uVar16 != 3) {
            uVar13 = uVar13 ^ uVar13 << 2;
            uVar13 = uVar13 ^ uVar13 >> 0xf;
            uVar13 = uVar13 ^ uVar13 << 0xd;
            local_128 = (ulong)uVar13 << 0x20;
            if (uVar16 != 4) {
              (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
              for (lVar6 = uVar16 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
                (**(code **)(local_138 + 0x10))(&local_138);
              }
              local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
              uVar13 = local_128._4_4_;
            }
          }
        }
      }
    }
    local_128 = CONCAT44(local_128._4_4_,uVar13);
    local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    local_d0 = 0;
    local_c0 = uVar10;
    lStack_b8 = lVar19;
    local_a8 = puVar3;
    puStack_a0 = local_130;
    FUN_015d05bc(&local_e0,param_1 + 0x40,0x8130);
    uVar16 = FUN_015d0a70(lVar11,puVar17);
    if ((uVar16 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
LAB_02b02c4c:
    pbVar20 = PTR_DAT_047d4c98;
    puVar22 = (undefined8 *)PTR_DAT_047d4ca8;
  }
LAB_02b02cf0:
  nn::os::UnlockMutex(pMVar1);
LAB_02b02cf8:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar10 = *(undefined8 *)puVar7;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar22 = uVar10;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar10 = FUN_00f844f4(uVar10,&local_e0);
  FUN_018837a8(uVar10,&DAT_03d60c2c,param_1 + 0x8170);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar10 = *(undefined8 *)puVar7;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar22 = uVar10;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar10 = FUN_00f844f4(uVar10,&local_e0);
  FUN_018837a8(uVar10,&DAT_03d60c30,param_1 + 0x8171);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar10 = *(undefined8 *)puVar7;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar22 = uVar10;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar10 = FUN_00f844f4(uVar10,&local_e0);
  FUN_018837a8(uVar10,&DAT_03d60c34,param_1 + 0x8172);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


