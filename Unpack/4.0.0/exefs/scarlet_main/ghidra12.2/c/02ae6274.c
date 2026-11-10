/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae6274; name: FUN_02ae6274
 */


void FUN_02ae6274(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  void *__dest;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  undefined8 uVar18;
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
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_158 = &DAT_e4d07a996e5ef5e8;
  puStack_150 = &DAT_03c60f6f;
  local_148 = 4;
  local_140 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar10;
  lVar11 = FUN_00f844f4(uVar10,&local_158);
  pMVar1 = (MutexType *)(lVar11 + 0x80);
  local_160[0] = 0x8290f0f;
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar11 + 0xa0) & 1) != 0) {
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_160[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar12 + 0x60))(plVar12,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_02ae6948;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar11 + 0x10);
  uVar15 = (long)puVar5 - (long)*(uint **)(lVar11 + 8);
  if (0 < (long)uVar15) {
    puVar13 = *(uint **)(lVar11 + 8);
    puVar14 = puVar5;
    do {
      puVar16 = puVar13 + (uVar15 / 0x60) * 0xc;
      if (*puVar16 == local_160[0]) goto LAB_02ae6378;
      puVar4 = puVar16 + 0xc;
      if (local_160[0] <= *puVar16) {
        puVar4 = puVar13;
        puVar14 = puVar16;
      }
      uVar15 = (long)puVar14 - (long)puVar4;
      puVar13 = puVar4;
    } while (0 < (long)uVar15);
  }
  puVar16 = puVar5;
LAB_02ae6378:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar16 == (uint *)0x0) || (puVar5 == puVar16)) {
    nn::os::LockMutex(pMVar1);
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x38))(plVar12,local_160);
    }
    FUN_015d0cb8(&local_88,lVar11,local_160,0xebd);
    puVar3 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar10 = *(undefined8 *)(local_88 + 2);
      lVar17 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (local_128._4_4_ != 0) {
        uVar15 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar15 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar15 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar6 = uVar15 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar8 = PTR_DAT_047dcc80;
      puVar7 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = PTR_DAT_047dcc78 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar10;
      lStack_b8 = lVar17;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      uVar15 = FUN_015d05bc(&local_e0,param_1 + 0x40,0xeb8);
      if ((uVar15 & 1) == 0) {
        (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))
                  (*(long **)(lVar11 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar17 = *(long *)(lVar11 + 0x10);
        if (*(char *)(lVar17 + -0x10) != '\0') {
          *(undefined1 *)(lVar17 + -0x10) = 0;
        }
        *(long *)(lVar11 + 0x10) = lVar17 + -0x30;
      }
      else {
        puVar2 = puVar3 + 0x10;
        uVar10 = *(undefined8 *)(local_88 + 2);
        uVar18 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar2;
        if (uStack_6c != 0) {
          uVar15 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar15 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar15 != 2)) &&
             ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar15 != 3 &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar15 != 4)))) {
            (**(code **)(puVar3 + 0x20))(&local_80);
            for (lVar17 = uVar15 - 5; lVar17 != 0; lVar17 = lVar17 + -1) {
              (**(code **)(local_80 + 0x10))(&local_80);
            }
          }
        }
        puStack_120 = puVar7 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar8 + 0x10;
        local_118 = uVar10;
        uStack_110 = uVar18;
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
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar15 = FUN_015d0794(lVar11,puVar16);
    if (((uVar15 & 1) == 0) && (plVar12 = *(long **)(lVar11 + 0x60), plVar12 != (long *)0x0)) {
      (**(code **)(*plVar12 + 0x58))(plVar12,local_160);
    }
    nn::os::LockMutex(pMVar1);
    plVar12 = *(long **)(lVar11 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x30))(plVar12,puVar16);
    }
    if (*(ulong *)(puVar16 + 4) < 0xebd) {
      plVar12 = *(long **)(lVar11 + 0x60);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar16);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar11 + 0x40) + 0x10))
                                 (*(long **)(lVar11 + 0x40),0xebd);
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(puVar16 + 2),*(size_t *)(puVar16 + 6));
        (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))
                  (*(long **)(lVar11 + 0x40),*(undefined8 *)(puVar16 + 2),
                   *(undefined8 *)(puVar16 + 4));
        *(void **)(puVar16 + 2) = __dest;
        puVar16[4] = 0xebd;
        puVar16[5] = 0;
        goto LAB_02ae65e0;
      }
    }
    else {
      lVar17 = *(long *)(puVar16 + 6);
      if ((*(ulong *)(puVar16 + 4) != 0xebd) && (lVar17 != 0xebd)) {
        plVar12 = *(long **)(lVar11 + 0x60);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))(plVar12,puVar16);
        }
LAB_02ae65e0:
        lVar17 = 0xebd;
        puVar16[6] = 0xebd;
        puVar16[7] = 0;
      }
      uVar10 = *(undefined8 *)(puVar16 + 2);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *puVar16;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (local_128._4_4_ != 0) {
        uVar15 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar15 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar15 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar6 = uVar15 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = PTR_DAT_047dcc78 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar10;
      lStack_b8 = lVar17;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      FUN_015d05bc(&local_e0,param_1 + 0x40,0xeb8);
      uVar15 = FUN_015d0a70(lVar11,puVar16);
      if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                   ,0x246);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_02ae6948:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  return;
}


