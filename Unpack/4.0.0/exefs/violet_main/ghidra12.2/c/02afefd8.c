/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02afefd8; name: FUN_02afefd8
 */


undefined8 FUN_02afefd8(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  FUN_015d0cb8(&local_88,param_1,param_2,*param_4 + 5);
  puVar3 = PTR_DAT_047dcc70;
  if (local_88 != (uint *)0x0) {
    uVar9 = *(undefined8 *)(local_88 + 2);
    uVar10 = *(undefined8 *)(local_88 + 6);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    local_128._4_4_ = *local_88;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    local_138 = puVar2;
    if (local_128._4_4_ != 0) {
      uVar8 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar8 != 1) &&
         (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar8 != 2)) {
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        local_128._0_4_ = 0;
        if (uVar8 != 3) {
          (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
          for (lVar7 = uVar8 - 4; lVar7 != 0; lVar7 = lVar7 + -1) {
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
    uStack_c0 = uVar9;
    local_b8 = uVar10;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    uVar8 = FUN_015d05bc(&local_e0,*param_3,*param_4);
    if ((uVar8 & 1) != 0) {
      puVar2 = puVar3 + 0x10;
      uVar9 = *(undefined8 *)(local_88 + 2);
      uVar10 = *(undefined8 *)(local_88 + 6);
      local_138 = PTR_DAT_047dcc88 + 0x10;
      uStack_6c = *local_88;
      local_78 = 0;
      local_70 = 0;
      local_80 = puVar2;
      if (uStack_6c != 0) {
        uVar8 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
        uStack_6c = uStack_6c ^ uStack_6c << 2;
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
        uStack_6c = uStack_6c ^ uStack_6c << 0xd;
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar8 != 1) &&
            (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
            uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar8 != 2)) &&
           (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
           uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar8 != 3)) {
          (**(code **)(puVar3 + 0x20))(&local_80);
          for (lVar7 = uVar8 - 4; lVar7 != 0; lVar7 = lVar7 + -1) {
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
      local_118 = uVar9;
      uStack_110 = uVar10;
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
      FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_138);
      nn::os::UnlockMutex(pMVar1);
      uVar9 = 1;
      goto LAB_02aff308;
    }
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(local_88 + 2),
               *(undefined8 *)(local_88 + 4));
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar7 + -0x10) != '\0') {
      *(undefined1 *)(lVar7 + -0x10) = 0;
    }
    *(long *)(param_1 + 0x10) = lVar7 + -0x30;
  }
  uVar9 = 0;
LAB_02aff308:
  nn::os::UnlockMutex(pMVar1);
  return uVar9;
}


