/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c2560; name: FUN_016c2560
 */


void FUN_016c2560(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  void *__dest;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
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
  uint *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined1 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    plVar8 = *(long **)(param_1 + 0x60);
    if (plVar8 != (long *)0x0) {
      local_134 = *param_2;
      local_138[0] = '\x01';
      (**(code **)(*plVar8 + 0x60))(plVar8,local_138);
      if (local_138[0] != '\0') {
        local_138[0] = '\0';
      }
    }
    goto LAB_016c2b90;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(param_1 + 0x10);
  uVar13 = (long)puVar5 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar13) {
    puVar9 = *(uint **)(param_1 + 8);
    puVar12 = puVar5;
    do {
      puVar14 = puVar9 + (uVar13 / 0x60) * 0xc;
      if (*puVar14 == *param_2) goto LAB_016c2608;
      puVar4 = puVar14 + 0xc;
      if (*param_2 <= *puVar14) {
        puVar4 = puVar9;
        puVar12 = puVar14;
      }
      uVar13 = (long)puVar12 - (long)puVar4;
      puVar9 = puVar4;
    } while (0 < (long)uVar13);
  }
  puVar14 = puVar5;
LAB_016c2608:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar14 == (uint *)0x0) || (puVar5 == puVar14)) {
    nn::os::LockMutex(pMVar1);
    plVar8 = *(long **)(param_1 + 0x60);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8,param_2);
    }
    FUN_015d0cb8(&local_d8,param_1,param_2,*param_4 + 5);
    puVar3 = PTR_DAT_047dcc70;
    if (local_d8 != (uint *)0x0) {
      uVar15 = *(undefined8 *)(local_d8 + 2);
      uVar13 = *(ulong *)(local_d8 + 6);
      local_b8 = PTR_DAT_047dcc68 + 0x10;
      local_120._4_4_ = *local_d8;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_128 = (undefined *)0x0;
      local_130 = puVar2;
      if (local_120._4_4_ != 0) {
        uVar11 = (ulong)local_120._4_4_ - ((ulong)(local_120._4_4_ >> 1) & 0x5555555555555555);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
        local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar11 != 1) &&
           (local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf,
           local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd, uVar11 != 2)) {
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 2;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ >> 0xf;
          local_120._4_4_ = local_120._4_4_ ^ local_120._4_4_ << 0xd;
          local_120._0_4_ = 0;
          if (uVar11 != 3) {
            FUN_00f83090(&local_130);
            for (lVar10 = uVar11 - 4; lVar10 != 0; lVar10 = lVar10 + -1) {
              (**(code **)(local_130 + 0x10))(&local_130);
            }
          }
        }
      }
      puVar7 = PTR_DAT_047dcc80;
      puVar6 = PTR_DAT_047dcc78;
      local_120 = CONCAT44(local_120._4_4_,local_120._4_4_);
      local_a0 = PTR_DAT_047dcc78 + 0x10;
      local_88 = 0;
      local_70 = local_120;
      uStack_68 = 0;
      local_b0 = PTR_DAT_047dcc80 + 0x10;
      uStack_a8 = 0;
      uStack_98 = uVar15;
      local_90 = uVar13;
      local_80 = puVar2;
      puStack_78 = local_128;
      uVar13 = FUN_015d05bc(&local_b8,*param_3,*param_4);
      if ((uVar13 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),*(undefined8 *)(local_d8 + 2),
                   *(undefined8 *)(local_d8 + 4));
        lVar10 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar10 + -0x10) != '\0') {
          *(undefined1 *)(lVar10 + -0x10) = 0;
        }
        *(long *)(param_1 + 0x10) = lVar10 + -0x30;
      }
      else {
        puVar3 = puVar3 + 0x10;
        uVar15 = *(undefined8 *)(local_d8 + 2);
        uVar16 = *(undefined8 *)(local_d8 + 6);
        local_130 = PTR_DAT_047dcc88 + 0x10;
        uStack_bc = *local_d8;
        local_c8 = 0;
        local_c0 = 0;
        local_d0 = puVar3;
        if (uStack_bc != 0) {
          uVar13 = (ulong)uStack_bc - ((ulong)(uStack_bc >> 1) & 0x5555555555555555);
          uStack_bc = uStack_bc ^ uStack_bc << 2;
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uStack_bc = uStack_bc ^ uStack_bc >> 0xf;
          uStack_bc = uStack_bc ^ uStack_bc << 0xd;
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar13 != 1) &&
              (uStack_bc = uStack_bc ^ uStack_bc << 2, uStack_bc = uStack_bc ^ uStack_bc >> 0xf,
              uStack_bc = uStack_bc ^ uStack_bc << 0xd, uVar13 != 2)) &&
             (uStack_bc = uStack_bc ^ uStack_bc << 2, uStack_bc = uStack_bc ^ uStack_bc >> 0xf,
             uStack_bc = uStack_bc ^ uStack_bc << 0xd, uVar13 != 3)) {
            FUN_00f83090(&local_d0);
            for (lVar10 = uVar13 - 4; lVar10 != 0; lVar10 = lVar10 + -1) {
              (**(code **)(local_d0 + 0x10))(&local_d0);
            }
          }
        }
        puStack_118 = puVar6 + 0x10;
        local_120 = 0;
        local_e8 = CONCAT44(uStack_bc,uStack_bc);
        local_100 = 0;
        uStack_e0 = 0;
        local_128 = puVar7 + 0x10;
        local_110 = uVar15;
        uStack_108 = uVar16;
        local_f8 = puVar3;
        uStack_f0 = local_c8;
        local_c0 = uStack_bc;
        uVar15 = FUN_015d1064(&local_130);
        if ((char)local_d8[8] == '\0') {
          *(undefined8 *)(local_d8 + 9) = uVar15;
          *(undefined1 *)(local_d8 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_d8 + 9) = uVar15;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_130);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar13 = FUN_015d0794(param_1,puVar14);
    if (((uVar13 & 1) == 0) && (plVar8 = *(long **)(param_1 + 0x60), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x58))(plVar8,param_2);
    }
    nn::os::LockMutex(pMVar1);
    plVar8 = *(long **)(param_1 + 0x60);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,puVar14);
    }
    uVar13 = *param_4 + 5;
    if (*(ulong *)(puVar14 + 4) < uVar13) {
      plVar8 = *(long **)(param_1 + 0x60);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar14);
      }
      __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                 (*(long **)(param_1 + 0x40),uVar13);
      if (__dest == (void *)0x0) goto LAB_016c2b88;
      memcpy(__dest,*(void **)(puVar14 + 2),*(size_t *)(puVar14 + 6));
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                (*(long **)(param_1 + 0x40),*(undefined8 *)(puVar14 + 2),
                 *(undefined8 *)(puVar14 + 4));
      *(void **)(puVar14 + 2) = __dest;
      *(ulong *)(puVar14 + 4) = uVar13;
      *(ulong *)(puVar14 + 6) = uVar13;
      uVar11 = uVar13;
    }
    else {
      uVar11 = *(ulong *)(puVar14 + 6);
      if (*(ulong *)(puVar14 + 4) != uVar13) {
        if (*(ulong *)(puVar14 + 6) != uVar13) {
          plVar8 = *(long **)(param_1 + 0x60);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))(plVar8,puVar14);
          }
          *(ulong *)(puVar14 + 6) = uVar13;
        }
        uVar11 = uVar13;
      }
    }
    uVar15 = *(undefined8 *)(puVar14 + 2);
    local_b8 = PTR_DAT_047dcc68 + 0x10;
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
          for (lVar10 = uVar13 - 4; lVar10 != 0; lVar10 = lVar10 + -1) {
            (**(code **)(local_130 + 0x10))(&local_130);
          }
        }
      }
    }
    local_120 = CONCAT44(local_120._4_4_,local_120._4_4_);
    local_a0 = PTR_DAT_047dcc78 + 0x10;
    local_88 = 0;
    local_70 = local_120;
    uStack_68 = 0;
    local_b0 = PTR_DAT_047dcc80 + 0x10;
    uStack_a8 = 0;
    uStack_98 = uVar15;
    local_90 = uVar11;
    local_80 = puVar3;
    puStack_78 = local_128;
    FUN_015d05bc(&local_b8,*param_3,*param_4);
    uVar13 = FUN_015d0a70(param_1,puVar14);
    if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
  }
LAB_016c2b88:
  nn::os::UnlockMutex(pMVar1);
LAB_016c2b90:
  nn::os::UnlockMutex(pMVar1);
  return;
}


