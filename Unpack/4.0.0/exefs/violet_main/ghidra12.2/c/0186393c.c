/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186393c; name: FUN_0186393c
 */


void FUN_0186393c(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  void *__dest;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char local_138 [4];
  uint local_134;
  undefined **local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined **local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined1 local_a8;
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint *local_80;
  undefined **local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      local_134 = *param_2;
      local_138[0] = '\x01';
      (**(code **)(*plVar4 + 0x60))(plVar4,local_138);
      if (local_138[0] != '\0') {
        local_138[0] = '\0';
      }
    }
    goto LAB_01863f3c;
  }
  nn::os::LockMutex(pMVar1);
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar9 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar9) {
    puVar5 = *(uint **)(param_1 + 8);
    puVar8 = puVar3;
    do {
      puVar10 = puVar5 + (uVar9 / 0x60) * 0xc;
      if (*puVar10 == *param_2) goto LAB_018639e4;
      puVar2 = puVar10 + 0xc;
      if (*param_2 <= *puVar10) {
        puVar2 = puVar5;
        puVar8 = puVar10;
      }
      uVar9 = (long)puVar8 - (long)puVar2;
      puVar5 = puVar2;
    } while (0 < (long)uVar9);
  }
  puVar10 = puVar3;
LAB_018639e4:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar10 == (uint *)0x0) || (puVar3 == puVar10)) {
    nn::os::LockMutex(pMVar1);
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    }
    FUN_015d0cb8(&local_80,param_1,param_2,*param_4 + 5);
    if (local_80 != (uint *)0x0) {
      uVar11 = *(undefined8 *)(local_80 + 2);
      uVar9 = *(ulong *)(local_80 + 6);
      local_d8 = &PTR_LAB_04580c78;
      local_120._4_4_ = *local_80;
      local_130 = &PTR_LAB_04580c08;
      local_128 = (undefined **)0x0;
      if (local_120._4_4_ != 0) {
        uVar7 = (ulong)local_120._4_4_ - ((ulong)(local_120._4_4_ >> 1) & 0x5555555555555555);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
        uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
        uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar7 != 1) &&
           (local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd, uVar7 != 2)) {
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
          local_120._0_4_ = 0;
          if (uVar7 != 3) {
            FUN_00f83090(&local_130);
            for (lVar6 = uVar7 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
              (*(code *)local_130[2])(&local_130);
            }
          }
        }
      }
      local_120 = CONCAT44(local_120._4_4_,local_120._4_4_);
      local_c0 = &PTR_LAB_04580c30;
      local_a8 = 0;
      local_a0 = &PTR_LAB_04580c08;
      local_90 = local_120;
      uStack_88 = 0;
      local_d0 = &PTR_LAB_04580bc8;
      uStack_c8 = 0;
      uStack_b8 = uVar11;
      local_b0 = uVar9;
      ppuStack_98 = local_128;
      uVar9 = FUN_015d05bc(&local_d8,*param_3,*param_4);
      if ((uVar9 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),*(undefined8 *)(local_80 + 2),
                   *(undefined8 *)(local_80 + 4));
        lVar6 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar6 + -0x10) != '\0') {
          *(undefined1 *)(lVar6 + -0x10) = 0;
        }
        *(long *)(param_1 + 0x10) = lVar6 + -0x30;
      }
      else {
        uVar11 = *(undefined8 *)(local_80 + 2);
        uVar12 = *(undefined8 *)(local_80 + 6);
        local_130 = &PTR_LAB_04580b98;
        uStack_64 = *local_80;
        local_78 = &PTR_LAB_04580c08;
        local_70 = 0;
        local_68 = 0;
        if (uStack_64 != 0) {
          uVar9 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
          uStack_64 = uStack_64 ^ uStack_64 << 2;
          uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
          uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
          uStack_64 = uStack_64 ^ uStack_64 << 0xd;
          uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar9 != 1) &&
              (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
              uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar9 != 2)) &&
             (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
             uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar9 != 3)) {
            FUN_00f83090(&local_78);
            for (lVar6 = uVar9 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
              (*(code *)local_78[2])(&local_78);
            }
          }
        }
        local_e8 = CONCAT44(uStack_64,uStack_64);
        local_118 = &PTR_LAB_04580c30;
        local_100 = 0;
        local_f8 = &PTR_LAB_04580c08;
        uStack_e0 = 0;
        local_128 = &PTR_LAB_04580bc8;
        local_120 = 0;
        uStack_110 = uVar11;
        local_108 = uVar12;
        uStack_f0 = local_70;
        local_68 = uStack_64;
        uVar11 = FUN_015d1064(&local_130);
        if ((char)local_80[8] == '\0') {
          *(undefined8 *)(local_80 + 9) = uVar11;
          *(undefined1 *)(local_80 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_80 + 9) = uVar11;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_130);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar9 = FUN_015d0794(param_1,puVar10);
    if (((uVar9 & 1) == 0) && (plVar4 = *(long **)(param_1 + 0x60), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
    }
    nn::os::LockMutex(pMVar1);
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,puVar10);
    }
    uVar9 = *param_4 + 5;
    if (*(ulong *)(puVar10 + 4) < uVar9) {
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4,puVar10);
      }
      __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                 (*(long **)(param_1 + 0x40),uVar9);
      if (__dest == (void *)0x0) goto LAB_01863f34;
      memcpy(__dest,*(void **)(puVar10 + 2),*(size_t *)(puVar10 + 6));
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                (*(long **)(param_1 + 0x40),*(undefined8 *)(puVar10 + 2),
                 *(undefined8 *)(puVar10 + 4));
      *(void **)(puVar10 + 2) = __dest;
      *(ulong *)(puVar10 + 4) = uVar9;
      *(ulong *)(puVar10 + 6) = uVar9;
      uVar7 = uVar9;
    }
    else {
      uVar7 = *(ulong *)(puVar10 + 6);
      if (*(ulong *)(puVar10 + 4) != uVar9) {
        if (*(ulong *)(puVar10 + 6) != uVar9) {
          plVar4 = *(long **)(param_1 + 0x60);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x20))(plVar4,puVar10);
          }
          *(ulong *)(puVar10 + 6) = uVar9;
        }
        uVar7 = uVar9;
      }
    }
    uVar11 = *(undefined8 *)(puVar10 + 2);
    local_d8 = &PTR_LAB_04580c78;
    local_120._4_4_ = *puVar10;
    local_130 = &PTR_LAB_04580c08;
    local_128 = (undefined **)0x0;
    if (local_120._4_4_ != 0) {
      uVar9 = (ulong)local_120._4_4_ - ((ulong)(local_120._4_4_ >> 1) & 0x5555555555555555);
      local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
      local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar9 != 1) &&
         (local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2,
         local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf,
         local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd, uVar9 != 2)) {
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
        local_120._0_4_ = 0;
        if (uVar9 != 3) {
          FUN_00f83090(&local_130);
          for (lVar6 = uVar9 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
            (*(code *)local_130[2])(&local_130);
          }
        }
      }
    }
    local_120 = CONCAT44(local_120._4_4_,local_120._4_4_);
    local_c0 = &PTR_LAB_04580c30;
    local_a8 = 0;
    local_a0 = &PTR_LAB_04580c08;
    local_d0 = &PTR_LAB_04580bc8;
    uStack_c8 = 0;
    local_90 = local_120;
    uStack_88 = 0;
    uStack_b8 = uVar11;
    local_b0 = uVar7;
    ppuStack_98 = local_128;
    FUN_015d05bc(&local_d8,*param_3,*param_4);
    uVar9 = FUN_015d0a70(param_1,puVar10);
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
  }
LAB_01863f34:
  nn::os::UnlockMutex(pMVar1);
LAB_01863f3c:
  nn::os::UnlockMutex(pMVar1);
  return;
}


