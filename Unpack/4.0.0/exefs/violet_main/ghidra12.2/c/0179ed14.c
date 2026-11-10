/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0179ed14; name: FUN_0179ed14
 */


void FUN_0179ed14(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  void *__dest;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  uint local_140 [2];
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
  
  memset((void *)(param_1 + 0x40),0,0xc0e0);
  pbVar19 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar21 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar6 = PTR_DAT_047d4ca0;
  uVar9 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar9;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_140[0] = 0x21c9bd44;
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar10 + 0xa0) & 1) != 0) {
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      local_e0 = (undefined1 *)CONCAT44(local_140[0],(undefined4)local_e0);
      local_e0 = (undefined1 *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined1 *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_0179f09c;
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar10 + 0x10);
  uVar15 = (long)puVar4 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar15) {
    puVar13 = *(uint **)(lVar10 + 8);
    puVar14 = puVar4;
    do {
      puVar16 = puVar13 + (uVar15 / 0x60) * 0xc;
      if (*puVar16 == local_140[0]) goto LAB_0179ee54;
      puVar3 = puVar16 + 0xc;
      if (local_140[0] <= *puVar16) {
        puVar3 = puVar13;
        puVar14 = puVar16;
      }
      uVar15 = (long)puVar14 - (long)puVar3;
      puVar13 = puVar3;
    } while (0 < (long)uVar15);
  }
  puVar16 = puVar4;
LAB_0179ee54:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar16 == (uint *)0x0) || (puVar4 == puVar16)) {
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11,local_140);
    }
    FUN_015d0cb8(&local_88,lVar10,local_140,0xbb85);
    if (local_88 != (uint *)0x0) {
      uVar9 = *(undefined8 *)(local_88 + 2);
      lVar20 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      uVar12 = *local_88;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (uVar12 == 0) {
        uVar12 = 0;
        local_128._4_4_ = 0;
      }
      else {
        uVar15 = (ulong)uVar12 - ((ulong)(uVar12 >> 1) & 0x5555555555555555);
        uVar12 = uVar12 ^ uVar12 << 2;
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar12 = uVar12 ^ uVar12 >> 0xf;
        uVar12 = uVar12 ^ uVar12 << 0xd;
        local_128 = (ulong)uVar12 << 0x20;
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 != 1) {
          uVar12 = uVar12 ^ uVar12 << 2;
          uVar12 = uVar12 ^ uVar12 >> 0xf;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          local_128 = (ulong)uVar12 << 0x20;
          if (uVar15 != 2) {
            uVar12 = uVar12 ^ uVar12 << 2;
            uVar12 = uVar12 ^ uVar12 >> 0xf;
            uVar12 = uVar12 ^ uVar12 << 0xd;
            local_128 = (ulong)uVar12 << 0x20;
            if (uVar15 != 3) {
              uVar12 = uVar12 ^ uVar12 << 2;
              uVar12 = uVar12 ^ uVar12 >> 0xf;
              uVar12 = uVar12 ^ uVar12 << 0xd;
              local_128 = (ulong)uVar12 << 0x20;
              if (uVar15 != 4) {
                (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
                for (lVar5 = uVar15 - 5; lVar5 != 0; lVar5 = lVar5 + -1) {
                  (**(code **)(local_138 + 0x10))(&local_138);
                }
                local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
                uVar12 = local_128._4_4_;
              }
            }
          }
        }
        puVar21 = (undefined8 *)PTR_DAT_047d4ca8;
      }
      puVar18 = PTR_DAT_047dcc80;
      local_128 = CONCAT44(local_128._4_4_,uVar12);
      local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      local_d0 = 0;
      local_c0 = uVar9;
      lStack_b8 = lVar20;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      uVar15 = FUN_015d05bc(&local_e0,param_1 + 0x40,48000);
      if ((uVar15 & 1) == 0) {
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                  (*(long **)(lVar10 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar20 = *(long *)(lVar10 + 0x10);
        if (*(char *)(lVar20 + -0x10) != '\0') {
          *(undefined1 *)(lVar20 + -0x10) = 0;
        }
        *(long *)(lVar10 + 0x10) = lVar20 + -0x30;
      }
      else {
        uVar17 = *(undefined8 *)(local_88 + 2);
        uVar9 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        puVar2 = PTR_DAT_047dcc70 + 0x10;
        local_70 = 0;
        local_78 = 0;
        local_80 = puVar2;
        if (uStack_6c != 0) {
          uVar15 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          if ((((uVar15 == 1) ||
               (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
               uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar15 == 2)) ||
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar15 == 3)) ||
             (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
             uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar15 == 4)) {
            puVar18 = PTR_DAT_047dcc80;
          }
          else {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_80);
            puVar18 = PTR_DAT_047dcc80;
            for (lVar20 = uVar15 - 5; PTR_DAT_047dcc80 = puVar18, lVar20 != 0; lVar20 = lVar20 + -1)
            {
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
        local_118 = uVar17;
        uStack_110 = uVar9;
        local_100 = puVar2;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar9 = FUN_015d1064(&local_138);
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar9;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar9;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
      goto LAB_0179f08c;
    }
  }
  else {
    uVar15 = FUN_015d0794(lVar10,puVar16);
    if (((uVar15 & 1) == 0) && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x58))(plVar11,local_140);
    }
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,puVar16);
    }
    if (*(ulong *)(puVar16 + 4) < 0xbb85) {
      plVar11 = *(long **)(lVar10 + 0x60);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar16);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar10 + 0x40) + 0x10))
                                 (*(long **)(lVar10 + 0x40),0xbb85);
      if (__dest == (void *)0x0) goto LAB_0179f094;
      memcpy(__dest,*(void **)(puVar16 + 2),*(size_t *)(puVar16 + 6));
      (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                (*(long **)(lVar10 + 0x40),*(undefined8 *)(puVar16 + 2),*(undefined8 *)(puVar16 + 4)
                );
      *(void **)(puVar16 + 2) = __dest;
      puVar16[4] = 0xbb85;
      puVar16[5] = 0;
LAB_0179ef1c:
      lVar20 = 0xbb85;
      puVar16[6] = 0xbb85;
      puVar16[7] = 0;
    }
    else {
      lVar20 = *(long *)(puVar16 + 6);
      if ((*(ulong *)(puVar16 + 4) != 0xbb85) && (bVar7 = lVar20 != 0xbb85, lVar20 = 0xbb85, bVar7))
      {
        plVar11 = *(long **)(lVar10 + 0x60);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11,puVar16);
        }
        goto LAB_0179ef1c;
      }
    }
    uVar9 = *(undefined8 *)(puVar16 + 2);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    local_128._4_4_ = *puVar16;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    uVar12 = 0;
    local_138 = puVar2;
    if (local_128._4_4_ != 0) {
      uVar15 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      uVar12 = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      local_128 = (ulong)uVar12 << 0x20;
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 != 1) {
        uVar12 = uVar12 ^ uVar12 << 2;
        uVar12 = uVar12 ^ uVar12 >> 0xf;
        uVar12 = uVar12 ^ uVar12 << 0xd;
        local_128 = (ulong)uVar12 << 0x20;
        if (uVar15 != 2) {
          uVar12 = uVar12 ^ uVar12 << 2;
          uVar12 = uVar12 ^ uVar12 >> 0xf;
          uVar12 = uVar12 ^ uVar12 << 0xd;
          local_128 = (ulong)uVar12 << 0x20;
          if (uVar15 != 3) {
            uVar12 = uVar12 ^ uVar12 << 2;
            uVar12 = uVar12 ^ uVar12 >> 0xf;
            uVar12 = uVar12 ^ uVar12 << 0xd;
            local_128 = (ulong)uVar12 << 0x20;
            if (uVar15 != 4) {
              (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
              puVar21 = (undefined8 *)PTR_DAT_047d4ca8;
              for (lVar5 = uVar15 - 5; PTR_DAT_047d4ca8 = (undefined *)puVar21, lVar5 != 0;
                  lVar5 = lVar5 + -1) {
                (**(code **)(local_138 + 0x10))(&local_138);
                puVar21 = (undefined8 *)PTR_DAT_047d4ca8;
              }
              local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
              uVar12 = local_128._4_4_;
              goto LAB_0179f034;
            }
          }
        }
      }
      puVar21 = (undefined8 *)PTR_DAT_047d4ca8;
    }
LAB_0179f034:
    local_128 = CONCAT44(local_128._4_4_,uVar12);
    local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    local_d0 = 0;
    local_c0 = uVar9;
    lStack_b8 = lVar20;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    FUN_015d05bc(&local_e0,param_1 + 0x40,48000);
    uVar15 = FUN_015d0a70(lVar10,puVar16);
    if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
LAB_0179f08c:
    pbVar19 = PTR_DAT_047d4c98;
  }
LAB_0179f094:
  nn::os::UnlockMutex(pMVar1);
LAB_0179f09c:
  nn::os::UnlockMutex(pMVar1);
  if (((*pbVar19 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar21 = uVar9;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar9 = FUN_00f844f4(uVar9,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x916bca9e);
  local_e0 = (undefined1 *)(param_1 + 0xbbc0);
  local_138 = (undefined *)0x158;
  FUN_0179f7e0(uVar9,&local_80,&local_e0,&local_138);
  if (((*pbVar19 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar21 = uVar9;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar9 = FUN_00f844f4(uVar9,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x7e0adf89);
  local_e0 = (undefined1 *)(param_1 + 0xbd18);
  local_138 = (undefined *)0x158;
  FUN_0179f7e0(uVar9,&local_80,&local_e0,&local_138);
  if (((*pbVar19 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar21 = uVar9;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar9 = FUN_00f844f4(uVar9,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x203ff693);
  local_e0 = (undefined1 *)(param_1 + 0xbe70);
  local_138 = (undefined *)0x158;
  FUN_0179f7e0(uVar9,&local_80,&local_e0,&local_138);
  if (((*pbVar19 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)puVar6;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar21 = uVar9;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar9 = FUN_00f844f4(uVar9,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x5369fc39);
  local_e0 = (undefined1 *)(param_1 + 0xbfc8);
  local_138 = (undefined *)0x158;
  FUN_0179f7e0(uVar9,&local_80,&local_e0,&local_138);
  return;
}


