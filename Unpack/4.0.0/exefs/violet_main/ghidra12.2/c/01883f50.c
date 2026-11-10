/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01883f50; name: FUN_01883f50
 */


void FUN_01883f50(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined *puVar6;
  long *plVar7;
  void *__dest;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  char local_140 [4];
  uint local_13c;
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
  undefined *local_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  ulong local_b8;
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
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 != (long *)0x0) {
      local_13c = *param_2;
      local_140[0] = '\x01';
      (**(code **)(*plVar7 + 0x60))(plVar7,local_140);
      if (local_140[0] != '\0') {
        local_140[0] = '\0';
      }
    }
    goto LAB_018846dc;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(param_1 + 0x10);
  uVar13 = (long)puVar5 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar13) {
    puVar9 = *(uint **)(param_1 + 8);
    puVar12 = puVar5;
    do {
      puVar14 = puVar9 + (uVar13 / 0x60) * 0xc;
      if (*puVar14 == *param_2) goto LAB_01883ff8;
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
LAB_01883ff8:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar14 == (uint *)0x0) || (puVar5 == puVar14)) {
    nn::os::LockMutex(pMVar1);
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7,param_2);
    }
    FUN_015d0cb8(&local_88,param_1,param_2,*param_4 * 2 + 6);
    puVar2 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar15 = *(undefined8 *)(local_88 + 2);
      uVar13 = *(ulong *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (local_128._4_4_ != 0) {
        uVar11 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar11 != 1) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar11 != 2)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar11 != 3) {
            FUN_00f83090(&local_138);
            for (lVar10 = uVar11 - 4; lVar10 != 0; lVar10 = lVar10 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar6 = PTR_DAT_047dcc80;
      puVar17 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = PTR_DAT_047dcc78 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar15;
      local_b8 = uVar13;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      uVar13 = FUN_02ad66d4(&local_e0,*param_3,*param_4);
      if ((uVar13 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar10 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar10 + -0x10) != '\0') {
          *(undefined1 *)(lVar10 + -0x10) = 0;
        }
        *(long *)(param_1 + 0x10) = lVar10 + -0x30;
      }
      else {
        puVar2 = puVar2 + 0x10;
        uVar15 = *(undefined8 *)(local_88 + 2);
        uVar16 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar2;
        if (uStack_6c != 0) {
          uVar13 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar13 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar13 != 2)) &&
             (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
             uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar13 != 3)) {
            FUN_00f83090(&local_80);
            for (lVar10 = uVar13 - 4; lVar10 != 0; lVar10 = lVar10 + -1) {
              (**(code **)(local_80 + 0x10))(&local_80);
            }
          }
        }
        puStack_120 = puVar17 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar6 + 0x10;
        local_118 = uVar15;
        uStack_110 = uVar16;
        local_100 = puVar2;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar15 = FUN_015d1064(&local_138);
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar15;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar15;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar15 = *(undefined8 *)(puVar14 + 2);
    uVar13 = *(ulong *)(puVar14 + 6);
    local_e0 = PTR_DAT_047dcc88 + 0x10;
    local_128._4_4_ = *puVar14;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    local_138 = puVar2;
    if (local_128._4_4_ != 0) {
      uVar11 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar11 != 1) &&
         (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar11 != 2)) {
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        local_128._0_4_ = 0;
        if (uVar11 != 3) {
          FUN_00f83090(&local_138);
          for (lVar10 = uVar11 - 4; lVar10 != 0; lVar10 = lVar10 + -1) {
            (**(code **)(local_138 + 0x10))(&local_138);
          }
        }
      }
    }
    puVar17 = PTR_DAT_047dcc80;
    puVar3 = PTR_DAT_047dcc78;
    local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
    local_c8 = PTR_DAT_047dcc78 + 0x10;
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    uStack_d0 = 0;
    local_c0 = uVar15;
    local_b8 = uVar13;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    uVar13 = FUN_015d1064(&local_e0);
    if ((((((uint)uVar13 & 0xff) != 5) || (uVar8 = (uint)(uVar13 >> 8), (uVar8 & 0xff) != 9)) ||
        ((9 < (uVar8 - 8 & 0xff) || ((uVar13 >> 0x20 != 0 && ((uVar13 & 0xff0000) != 0)))))) &&
       (plVar7 = *(long **)(param_1 + 0x60), plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2);
    }
    nn::os::LockMutex(pMVar1);
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,puVar14);
    }
    uVar13 = *param_4 * 2 + 6;
    if (*(ulong *)(puVar14 + 4) < uVar13) {
      plVar7 = *(long **)(param_1 + 0x60);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar14);
      }
      __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                 (*(long **)(param_1 + 0x40),uVar13);
      if (__dest == (void *)0x0) goto LAB_018846d4;
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
          plVar7 = *(long **)(param_1 + 0x60);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))(plVar7,puVar14);
          }
          *(ulong *)(puVar14 + 6) = uVar13;
        }
        uVar11 = uVar13;
      }
    }
    uVar15 = *(undefined8 *)(puVar14 + 2);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    uVar8 = *puVar14;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    local_138 = puVar2;
    if (uVar8 == 0) {
      uVar8 = 0;
      local_128._4_4_ = 0;
    }
    else {
      uVar13 = (ulong)uVar8 - ((ulong)(uVar8 >> 1) & 0x5555555555555555);
      uVar8 = uVar8 ^ uVar8 << 2;
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar8 = uVar8 ^ uVar8 >> 0xf;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      uVar8 = uVar8 ^ uVar8 << 0xd;
      local_128 = (ulong)uVar8 << 0x20;
      if (uVar13 != 1) {
        uVar8 = uVar8 ^ uVar8 << 2;
        uVar8 = uVar8 ^ uVar8 >> 0xf;
        uVar8 = uVar8 ^ uVar8 << 0xd;
        local_128 = (ulong)uVar8 << 0x20;
        if (uVar13 != 2) {
          uVar8 = uVar8 ^ uVar8 << 2;
          uVar8 = uVar8 ^ uVar8 >> 0xf;
          uVar8 = uVar8 ^ uVar8 << 0xd;
          local_128 = (ulong)uVar8 << 0x20;
          if (uVar13 != 3) {
            FUN_00f83090(&local_138);
            for (lVar10 = uVar13 - 4; lVar10 != 0; lVar10 = lVar10 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
            local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
            uVar8 = local_128._4_4_;
          }
        }
      }
      puVar17 = PTR_DAT_047dcc80;
    }
    local_128 = CONCAT44(local_128._4_4_,uVar8);
    local_c8 = puVar3 + 0x10;
    local_b0 = 0;
    local_d8 = puVar17 + 0x10;
    local_98 = local_128;
    uStack_90 = 0;
    uStack_d0 = 0;
    local_c0 = uVar15;
    local_b8 = uVar11;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    FUN_02ad66d4(&local_e0,*param_3,*param_4);
    uVar13 = FUN_015d0a70(param_1,puVar14);
    if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
  }
LAB_018846d4:
  nn::os::UnlockMutex(pMVar1);
LAB_018846dc:
  nn::os::UnlockMutex(pMVar1);
  return;
}


