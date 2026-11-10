/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c18a4; name: FUN_016c18a4
 */


uint FUN_016c18a4(long param_1,uint *param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long *plVar10;
  void *__dest;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
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
    plVar10 = *(long **)(param_1 + 0x60);
    if (plVar10 != (long *)0x0) {
      local_134 = *param_2;
      local_138[0] = '\x01';
      (**(code **)(*plVar10 + 0x60))(plVar10,local_138);
      if (local_138[0] != '\0') {
        uVar9 = 0;
        local_138[0] = '\0';
        goto LAB_016c1ee4;
      }
    }
    uVar9 = 0;
    goto LAB_016c1ee4;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(param_1 + 0x10);
  uVar13 = (long)puVar5 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar13) {
    puVar11 = *(uint **)(param_1 + 8);
    puVar12 = puVar5;
    do {
      puVar14 = puVar11 + (uVar13 / 0x60) * 0xc;
      if (*puVar14 == *param_2) goto LAB_016c1948;
      puVar4 = puVar14 + 0xc;
      if (*param_2 <= *puVar14) {
        puVar4 = puVar11;
        puVar12 = puVar14;
      }
      uVar13 = (long)puVar12 - (long)puVar4;
      puVar11 = puVar4;
    } while (0 < (long)uVar13);
  }
  puVar14 = puVar5;
LAB_016c1948:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar14 == (uint *)0x0) || (puVar5 == puVar14)) {
    nn::os::LockMutex(pMVar1);
    plVar10 = *(long **)(param_1 + 0x60);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x38))(plVar10,param_2);
    }
    FUN_015d0cb8(&local_80,param_1,param_2,3);
    puVar3 = PTR_DAT_047dcc70;
    if (local_80 == (uint *)0x0) {
LAB_016c1e64:
      uVar9 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(local_80 + 2);
      lVar16 = *(long *)(local_80 + 6);
      local_d8 = PTR_DAT_047dcc68 + 0x10;
      local_120._4_4_ = *local_80;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_128 = (undefined *)0x0;
      local_130 = puVar2;
      if (local_120._4_4_ != 0) {
        uVar13 = (ulong)local_120._4_4_ - ((ulong)(local_120._4_4_ >> 1) & 0x5555555555555555);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar13 != 1) &&
           (local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd, uVar13 != 2)) {
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
          local_120._0_4_ = 0;
          if (uVar13 != 3) {
            FUN_00f83090(&local_130);
            for (lVar6 = uVar13 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
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
      local_130 = (undefined *)CONCAT62(local_130._2_6_,(short)*param_3);
      uStack_b8 = uVar15;
      local_b0 = lVar16;
      local_a0 = puVar2;
      puStack_98 = local_128;
      uVar13 = FUN_02ad78e4(&local_d8,&local_130);
      if ((uVar13 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),*(undefined8 *)(local_80 + 2),
                   *(undefined8 *)(local_80 + 4));
        lVar16 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar16 + -0x10) != '\0') {
          *(undefined1 *)(lVar16 + -0x10) = 0;
        }
        *(long *)(param_1 + 0x10) = lVar16 + -0x30;
        goto LAB_016c1e64;
      }
      puVar3 = puVar3 + 0x10;
      uVar15 = *(undefined8 *)(local_80 + 2);
      uVar17 = *(undefined8 *)(local_80 + 6);
      local_130 = PTR_DAT_047dcc88 + 0x10;
      uStack_64 = *local_80;
      local_70 = 0;
      local_68 = 0;
      local_78 = puVar3;
      if (uStack_64 != 0) {
        uVar13 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
        uStack_64 = uStack_64 ^ uStack_64 << 2;
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
        uStack_64 = uStack_64 ^ uStack_64 << 0xd;
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar13 != 1) &&
            (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
            uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar13 != 2)) &&
           (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
           uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar13 != 3)) {
          FUN_00f83090(&local_78);
          for (lVar16 = uVar13 - 4; lVar16 != 0; lVar16 = lVar16 + -1) {
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
      local_110 = uVar15;
      uStack_108 = uVar17;
      local_f8 = puVar3;
      uStack_f0 = local_70;
      local_68 = uStack_64;
      uVar15 = FUN_015d1064(&local_130);
      if ((char)local_80[8] == '\0') {
        *(undefined8 *)(local_80 + 9) = uVar15;
        *(undefined1 *)(local_80 + 8) = 1;
      }
      else {
        *(undefined8 *)(local_80 + 9) = uVar15;
      }
      nn::os::LockMutex(pMVar1);
      FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_130);
      nn::os::UnlockMutex(pMVar1);
      uVar9 = 1;
    }
  }
  else {
    uVar13 = FUN_02ad71c0(param_1,puVar14);
    if (((uVar13 & 1) == 0) && (plVar10 = *(long **)(param_1 + 0x60), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x58))(plVar10,param_2);
    }
    nn::os::LockMutex(pMVar1);
    plVar10 = *(long **)(param_1 + 0x60);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,puVar14);
    }
    if (*(ulong *)(puVar14 + 4) < 3) {
      plVar10 = *(long **)(param_1 + 0x60);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10,puVar14);
      }
      __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                 (*(long **)(param_1 + 0x40),3);
      if (__dest == (void *)0x0) goto LAB_016c1e64;
      memcpy(__dest,*(void **)(puVar14 + 2),*(size_t *)(puVar14 + 6));
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                (*(long **)(param_1 + 0x40),*(undefined8 *)(puVar14 + 2),
                 *(undefined8 *)(puVar14 + 4));
      *(void **)(puVar14 + 2) = __dest;
      puVar14[4] = 3;
      puVar14[5] = 0;
LAB_016c1ba0:
      lVar16 = 3;
      puVar14[6] = 3;
      puVar14[7] = 0;
    }
    else {
      lVar16 = *(long *)(puVar14 + 6);
      if ((*(ulong *)(puVar14 + 4) != 3) && (lVar16 != 3)) {
        plVar10 = *(long **)(param_1 + 0x60);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))(plVar10,puVar14);
        }
        goto LAB_016c1ba0;
      }
    }
    uVar15 = *(undefined8 *)(puVar14 + 2);
    local_d8 = PTR_DAT_047dcc68 + 0x10;
    local_120._4_4_ = *puVar14;
    puVar3 = PTR_DAT_047dcc70 + 0x10;
    local_128 = (undefined *)0x0;
    local_130 = puVar3;
    if (local_120._4_4_ != 0) {
      uVar13 = (ulong)local_120._4_4_ - ((ulong)(local_120._4_4_ >> 1) & 0x5555555555555555);
      local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
      local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar13 != 1) &&
         (local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2,
         local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf,
         local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd, uVar13 != 2)) {
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
        local_120._0_4_ = 0;
        if (uVar13 != 3) {
          FUN_00f83090(&local_130);
          for (lVar6 = uVar13 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
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
    local_130 = (undefined *)CONCAT62(local_130._2_6_,(short)*param_3);
    uStack_b8 = uVar15;
    local_b0 = lVar16;
    local_a0 = puVar3;
    puStack_98 = local_128;
    uVar9 = FUN_02ad78e4(&local_d8,&local_130);
    uVar13 = FUN_015d0a70(param_1,puVar14);
    if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_016c1ee4:
  nn::os::UnlockMutex(pMVar1);
  return uVar9 & 1;
}


