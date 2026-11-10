/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c1f10; name: FUN_016c1f10
 */


void FUN_016c1f10(long param_1,uint *param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  void *__dest;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  char local_138 [4];
  uint local_134;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined1 local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint *local_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 != (long *)0x0) {
      local_134 = *param_2;
      local_138[0] = '\x01';
      (**(code **)(*plVar9 + 0x60))(plVar9,local_138);
      if (local_138[0] != '\0') {
        local_138[0] = '\0';
      }
    }
    goto LAB_016c2538;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(param_1 + 0x10);
  uVar12 = (long)puVar5 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar12) {
    puVar10 = *(uint **)(param_1 + 8);
    puVar11 = puVar5;
    do {
      puVar13 = puVar10 + (uVar12 / 0x60) * 0xc;
      if (*puVar13 == *param_2) goto LAB_016c1fb4;
      puVar4 = puVar13 + 0xc;
      if (*param_2 <= *puVar13) {
        puVar4 = puVar10;
        puVar11 = puVar13;
      }
      uVar12 = (long)puVar11 - (long)puVar4;
      puVar10 = puVar4;
    } while (0 < (long)uVar12);
  }
  puVar13 = puVar5;
LAB_016c1fb4:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar13 == (uint *)0x0) || (puVar5 == puVar13)) {
    nn::os::LockMutex(pMVar1);
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9,param_2);
    }
    FUN_015d0cb8(&local_80,param_1,param_2,5);
    puVar3 = PTR_DAT_047dcc70;
    if (local_80 != (uint *)0x0) {
      uVar14 = *(undefined8 *)(local_80 + 2);
      lVar15 = *(long *)(local_80 + 6);
      local_d8 = PTR_DAT_047dcc68 + 0x10;
      local_120._4_4_ = *local_80;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_128 = (undefined *)0x0;
      local_130 = puVar2;
      if (local_120._4_4_ != 0) {
        uVar12 = (ulong)local_120._4_4_ - ((ulong)(local_120._4_4_ >> 1) & 0x5555555555555555);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar12 != 1) &&
           (local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd, uVar12 != 2)) {
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
          local_120._0_4_ = 0;
          if (uVar12 != 3) {
            FUN_00f83090(&local_130);
            for (lVar6 = uVar12 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_130 + 0x10))(&local_130);
            }
          }
        }
      }
      puVar8 = PTR_DAT_047dcc80;
      puVar7 = PTR_DAT_047dcc78;
      local_120 = CONCAT44(local_120._4_4_,local_120._4_4_);
      local_c0 = PTR_DAT_047dcc78 + 0x10;
      local_a8 = 0;
      local_90 = local_120;
      uStack_88 = 0;
      local_d0 = PTR_DAT_047dcc80 + 0x10;
      uStack_c8 = 0;
      local_130 = (undefined *)CONCAT44(local_130._4_4_,*param_3);
      uStack_b8 = uVar14;
      local_b0 = lVar15;
      local_a0 = puVar2;
      puStack_98 = local_128;
      uVar12 = FUN_018fc51c(&local_d8,&local_130);
      if ((uVar12 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),*(undefined8 *)(local_80 + 2),
                   *(undefined8 *)(local_80 + 4));
        lVar15 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar15 + -0x10) != '\0') {
          *(undefined1 *)(lVar15 + -0x10) = 0;
        }
        *(long *)(param_1 + 0x10) = lVar15 + -0x30;
      }
      else {
        puVar3 = puVar3 + 0x10;
        uVar14 = *(undefined8 *)(local_80 + 2);
        uVar16 = *(undefined8 *)(local_80 + 6);
        local_130 = PTR_DAT_047dcc88 + 0x10;
        uStack_64 = *local_80;
        local_70 = 0;
        local_68 = 0;
        local_78 = puVar3;
        if (uStack_64 != 0) {
          uVar12 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
          uStack_64 = uStack_64 ^ uStack_64 << 2;
          uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
          uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
          uStack_64 = uStack_64 ^ uStack_64 << 0xd;
          uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar12 != 1) &&
              (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
              uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar12 != 2)) &&
             (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
             uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar12 != 3)) {
            FUN_00f83090(&local_78);
            for (lVar15 = uVar12 - 4; lVar15 != 0; lVar15 = lVar15 + -1) {
              (**(code **)(local_78 + 0x10))(&local_78);
            }
          }
        }
        puStack_118 = puVar7 + 0x10;
        local_120 = 0;
        local_e8 = CONCAT44(uStack_64,uStack_64);
        local_100 = 0;
        uStack_e0 = 0;
        local_128 = puVar8 + 0x10;
        local_110 = uVar14;
        uStack_108 = uVar16;
        local_f8 = puVar3;
        uStack_f0 = local_70;
        local_68 = uStack_64;
        uVar14 = FUN_015d1064(&local_130);
        if ((char)local_80[8] == '\0') {
          *(undefined8 *)(local_80 + 9) = uVar14;
          *(undefined1 *)(local_80 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_80 + 9) = uVar14;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_130);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar12 = FUN_018fc674(param_1,puVar13);
    if (((uVar12 & 1) == 0) && (plVar9 = *(long **)(param_1 + 0x60), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x58))(plVar9,param_2);
    }
    nn::os::LockMutex(pMVar1);
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,puVar13);
    }
    if (*(ulong *)(puVar13 + 4) < 5) {
      plVar9 = *(long **)(param_1 + 0x60);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar13);
      }
      __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                 (*(long **)(param_1 + 0x40),5);
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(puVar13 + 2),*(size_t *)(puVar13 + 6));
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),*(undefined8 *)(puVar13 + 2),
                   *(undefined8 *)(puVar13 + 4));
        *(void **)(puVar13 + 2) = __dest;
        puVar13[4] = 5;
        puVar13[5] = 0;
        goto LAB_016c2200;
      }
    }
    else {
      lVar15 = *(long *)(puVar13 + 6);
      if ((*(ulong *)(puVar13 + 4) != 5) && (lVar15 != 5)) {
        plVar9 = *(long **)(param_1 + 0x60);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9,puVar13);
        }
LAB_016c2200:
        lVar15 = 5;
        puVar13[6] = 5;
        puVar13[7] = 0;
      }
      uVar14 = *(undefined8 *)(puVar13 + 2);
      local_d8 = PTR_DAT_047dcc68 + 0x10;
      local_120._4_4_ = *puVar13;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_128 = (undefined *)0x0;
      local_130 = puVar3;
      if (local_120._4_4_ != 0) {
        uVar12 = (ulong)local_120._4_4_ - ((ulong)(local_120._4_4_ >> 1) & 0x5555555555555555);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar12 != 1) &&
           (local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd, uVar12 != 2)) {
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
          local_120._0_4_ = 0;
          if (uVar12 != 3) {
            FUN_00f83090(&local_130);
            for (lVar6 = uVar12 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_130 + 0x10))(&local_130);
            }
          }
        }
      }
      local_120 = CONCAT44(local_120._4_4_,local_120._4_4_);
      local_c0 = PTR_DAT_047dcc78 + 0x10;
      local_a8 = 0;
      local_90 = local_120;
      uStack_88 = 0;
      local_d0 = PTR_DAT_047dcc80 + 0x10;
      uStack_c8 = 0;
      local_130 = (undefined *)CONCAT44(local_130._4_4_,*param_3);
      uStack_b8 = uVar14;
      local_b0 = lVar15;
      local_a0 = puVar3;
      puStack_98 = local_128;
      FUN_018fc51c(&local_d8,&local_130);
      uVar12 = FUN_015d0a70(param_1,puVar13);
      if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                   ,0x246);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_016c2538:
  nn::os::UnlockMutex(pMVar1);
  return;
}


