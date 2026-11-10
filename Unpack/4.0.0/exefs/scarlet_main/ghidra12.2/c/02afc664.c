/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02afc664; name: FUN_02afc664
 */


undefined8 FUN_02afc664(long param_1,undefined8 param_2,char *param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
  }
  FUN_015d0cb8(&local_88,param_1,param_2,1);
  puVar3 = PTR_DAT_047dcc70;
  if (local_88 != (uint *)0x0) {
    uVar11 = *(undefined8 *)(local_88 + 2);
    uVar12 = *(undefined8 *)(local_88 + 6);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    local_128._4_4_ = *local_88;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    local_138 = puVar2;
    if (local_128._4_4_ != 0) {
      uVar10 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar10 != 1) &&
         (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar10 != 2)) {
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        local_128._0_4_ = 0;
        if (uVar10 != 3) {
          (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
          for (lVar8 = uVar10 - 4; lVar8 != 0; lVar8 = lVar8 + -1) {
            (**(code **)(local_138 + 0x10))(&local_138);
          }
        }
      }
    }
    puVar5 = PTR_DAT_047dcc80;
    puVar4 = PTR_DAT_047dcc78;
    local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
    local_c8 = PTR_DAT_047dcc78 + 0x10;
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    uStack_d0 = 0;
    uVar9 = 1;
    if (*param_3 != '\0') {
      uVar9 = 2;
    }
    local_138 = (undefined *)CONCAT71(local_138._1_7_,uVar9);
    uStack_c0 = uVar11;
    local_b8 = uVar12;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    plVar6 = (long *)(**(code **)(local_e0 + 0x10))(&local_e0);
    plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
    uVar10 = (**(code **)(*plVar7 + 0x18))(plVar7,1,plVar6[1]);
    if ((uVar10 & 1) == 0) {
      lVar8 = (**(code **)(local_e0 + 0x10))(&local_e0);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
    }
    else {
      uVar10 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_138,1,0);
      lVar8 = (**(code **)(local_e0 + 0x10))(&local_e0);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
      if ((uVar10 & 1) != 0) {
        puVar2 = puVar3 + 0x10;
        uVar11 = *(undefined8 *)(local_88 + 2);
        uVar12 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar2;
        if (uStack_6c != 0) {
          uVar10 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar10 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar10 != 2)) &&
             (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
             uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar10 != 3)) {
            (**(code **)(puVar3 + 0x20))(&local_80);
            for (lVar8 = uVar10 - 4; lVar8 != 0; lVar8 = lVar8 + -1) {
              (**(code **)(local_80 + 0x10))(&local_80);
            }
          }
        }
        puStack_120 = puVar4 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar5 + 0x10;
        local_118 = uVar11;
        uStack_110 = uVar12;
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
        FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
        uVar11 = 1;
        goto LAB_02afca24;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(local_88 + 2),
               *(undefined8 *)(local_88 + 4));
    lVar8 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar8 + -0x10) != '\0') {
      *(undefined1 *)(lVar8 + -0x10) = 0;
    }
    *(long *)(param_1 + 0x10) = lVar8 + -0x30;
  }
  uVar11 = 0;
LAB_02afca24:
  nn::os::UnlockMutex(pMVar1);
  return uVar11;
}


