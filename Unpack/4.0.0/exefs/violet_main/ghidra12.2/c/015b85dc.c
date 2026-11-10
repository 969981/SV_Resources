/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b85dc; name: FUN_015b85dc
 */


void FUN_015b85dc(long param_1,int param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  void *__dest;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  byte *pbVar18;
  uint *puVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  undefined8 uVar23;
  uint local_160 [2];
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
  undefined8 uStack_d0;
  undefined *local_c8;
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
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_158 = &DAT_e4d07a996e5ef5e8;
  puStack_150 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar11;
  uVar15 = 0x811c9dc5;
  local_148 = 4;
  local_140 = (long *)0x0;
  lVar12 = FUN_00f844f4(uVar11,&local_158);
  bVar5 = *(byte *)(param_1 + (long)param_2 * 0xa0 + 8);
  uVar14 = (uint)bVar5;
  if (bVar5 != 0) {
    pbVar18 = (byte *)(param_1 + (long)param_2 * 0xa0 + 9);
    do {
      uVar15 = (uVar15 ^ uVar14) * 0x1000193;
      uVar14 = (uint)*pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (uVar14 != 0);
  }
  pMVar1 = (MutexType *)(lVar12 + 0x80);
  local_160[0] = uVar15;
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar12 + 0xa0) & 1) != 0) {
    plVar13 = *(long **)(lVar12 + 0x60);
    if (plVar13 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_160[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar13 + 0x60))(plVar13,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_015b8e5c;
  }
  lVar17 = param_1 + (long)param_2 * 0xa0 + 0x28;
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(lVar12 + 0x10);
  uVar20 = (long)puVar4 - (long)*(uint **)(lVar12 + 8);
  if (0 < (long)uVar20) {
    puVar16 = *(uint **)(lVar12 + 8);
    puVar19 = puVar4;
    do {
      puVar21 = puVar16 + (uVar20 / 0x60) * 0xc;
      if (*puVar21 == local_160[0]) goto LAB_015b8728;
      puVar3 = puVar21 + 0xc;
      if (local_160[0] <= *puVar21) {
        puVar3 = puVar16;
        puVar19 = puVar21;
      }
      uVar20 = (long)puVar19 - (long)puVar3;
      puVar16 = puVar3;
    } while (0 < (long)uVar20);
  }
  puVar21 = puVar4;
LAB_015b8728:
  nn::os::UnlockMutex(pMVar1);
  puVar7 = PTR_DAT_047dcc70;
  if ((puVar21 == (uint *)0x0) || (puVar4 == puVar21)) {
    nn::os::LockMutex(pMVar1);
    plVar13 = *(long **)(lVar12 + 0x60);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x38))(plVar13,local_160);
    }
    FUN_015d0cb8(&local_88,lVar12,local_160,0x86);
    puVar7 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar11 = *(undefined8 *)(local_88 + 2);
      lVar22 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (local_128._4_4_ != 0) {
        uVar20 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar20 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar20 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar6 = uVar20 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar9 = PTR_DAT_047dcc80;
      puVar8 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = PTR_DAT_047dcc78 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar11;
      lStack_b8 = lVar22;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      uVar20 = FUN_02afba2c(&local_e0,lVar17,0x80);
      if ((uVar20 & 1) == 0) {
        (**(code **)(**(long **)(lVar12 + 0x40) + 0x18))
                  (*(long **)(lVar12 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar17 = *(long *)(lVar12 + 0x10);
        if (*(char *)(lVar17 + -0x10) != '\0') {
          *(undefined1 *)(lVar17 + -0x10) = 0;
        }
        *(long *)(lVar12 + 0x10) = lVar17 + -0x30;
      }
      else {
        puVar2 = puVar7 + 0x10;
        uVar11 = *(undefined8 *)(local_88 + 2);
        uVar23 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar2;
        if (uStack_6c != 0) {
          uVar20 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar20 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 2)) &&
             ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 3 &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 4)))) {
            (**(code **)(puVar7 + 0x20))(&local_80);
            for (lVar17 = uVar20 - 5; lVar17 != 0; lVar17 = lVar17 + -1) {
              (**(code **)(local_80 + 0x10))(&local_80);
            }
          }
        }
        puStack_120 = puVar8 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar9 + 0x10;
        local_118 = uVar11;
        uStack_110 = uVar23;
        local_100 = puVar2;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar11 = FUN_015d1064(&local_138);
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar11;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar11;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar11 = *(undefined8 *)(puVar21 + 2);
    lVar22 = *(long *)(puVar21 + 6);
    local_e0 = PTR_DAT_047dcc88 + 0x10;
    local_128._4_4_ = *puVar21;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    local_138 = puVar2;
    if (local_128._4_4_ != 0) {
      uVar20 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar20 != 1) &&
          (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 2)) &&
         (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 3)) {
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        local_128._0_4_ = 0;
        if (uVar20 != 4) {
          (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
          for (lVar6 = uVar20 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
            (**(code **)(local_138 + 0x10))(&local_138);
          }
        }
      }
    }
    puVar8 = PTR_DAT_047dcc78;
    local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
    local_c8 = PTR_DAT_047dcc78 + 0x10;
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    uStack_d0 = 0;
    local_c0 = uVar11;
    lStack_b8 = lVar22;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    uVar20 = FUN_015d1064(&local_e0);
    if (((((((uint)uVar20 & 0xff) != 5) || (uVar20 >> 0x20 != 0x80)) ||
         (uVar15 = (uint)(uVar20 >> 8), (uVar15 & 0xff) != 0xc)) || (9 < (uVar15 - 8 & 0xff))) &&
       (plVar13 = *(long **)(lVar12 + 0x60), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x58))(plVar13,local_160);
    }
    nn::os::LockMutex(pMVar1);
    plVar13 = *(long **)(lVar12 + 0x60);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x30))(plVar13,puVar21);
    }
    if (*(ulong *)(puVar21 + 4) < 0x86) {
      plVar13 = *(long **)(lVar12 + 0x60);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar21);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar12 + 0x40) + 0x10))
                                 (*(long **)(lVar12 + 0x40),0x86);
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(puVar21 + 2),*(size_t *)(puVar21 + 6));
        (**(code **)(**(long **)(lVar12 + 0x40) + 0x18))
                  (*(long **)(lVar12 + 0x40),*(undefined8 *)(puVar21 + 2),
                   *(undefined8 *)(puVar21 + 4));
        *(void **)(puVar21 + 2) = __dest;
        puVar21[4] = 0x86;
        puVar21[5] = 0;
        goto LAB_015b8b04;
      }
    }
    else {
      lVar22 = *(long *)(puVar21 + 6);
      if ((*(ulong *)(puVar21 + 4) != 0x86) && (lVar22 != 0x86)) {
        plVar13 = *(long **)(lVar12 + 0x60);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13,puVar21);
        }
LAB_015b8b04:
        lVar22 = 0x86;
        puVar21[6] = 0x86;
        puVar21[7] = 0;
      }
      uVar11 = *(undefined8 *)(puVar21 + 2);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *puVar21;
      puVar2 = puVar7 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (local_128._4_4_ != 0) {
        uVar20 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar20 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar20 != 4) {
            (**(code **)(puVar7 + 0x20))(&local_138);
            for (lVar6 = uVar20 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = puVar8 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar11;
      lStack_b8 = lVar22;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      FUN_02afba2c(&local_e0,lVar17,0x80);
      uVar20 = FUN_015d0a70(lVar12,puVar21);
      if ((uVar20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                   ,0x246);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_015b8e5c:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  return;
}


