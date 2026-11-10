/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309d4a0; name: FUN_0309d4a0
 */


undefined4
FUN_0309d4a0(long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 *param_10,long *param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_130;
  int local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined *puStack_f8;
  ulong local_f0;
  long local_e8;
  undefined4 local_e0;
  uint local_dc;
  long local_d8;
  undefined *local_c8;
  undefined1 local_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *plStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  local_70 = 0;
  local_68 = -0x8000000000000000;
  local_80 = 0;
  local_78 = -0x8000000000000000;
  local_118 = 0;
  local_110 = 0;
  local_120 = 0;
  local_130 = PTR_DAT_047e4fa0 + 0x10;
  local_128 = 1 << (ulong)(param_2 & 0x1f);
  puStack_f8 = (undefined *)param_11[1];
  local_100 = *param_11;
  local_e8 = param_11[3];
  local_f0 = param_11[2];
  plStack_90 = &local_80;
  local_c8 = &DAT_0464d078;
  local_98 = &local_70;
  local_c0 = 0;
  local_88 = *param_10;
  local_b8 = param_1;
  lStack_b0 = param_3;
  local_a8 = param_4;
  uStack_a0 = param_5;
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x48))(*(long **)(param_1 + 0xe0),&local_130,&local_c8)
  ;
  if ((int)local_68 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_3 == 0) {
      FUN_0309fd68(&local_130,param_1,param_7,param_8,local_70,local_70 + (long)(int)local_68 * 4);
      uVar4 = FUN_0309d8f0(param_1,&local_130,local_80,local_80 + (long)(int)local_78 * 4,param_6,
                           param_7,param_8,param_9,param_10,param_12,param_13);
      local_e0 = 0;
      local_130 = PTR_DAT_047e5018 + 0x10;
      if ((-1 < (int)local_dc) && (local_e8 != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_e8,(ulong)local_dc << 3);
      }
      local_e8 = 0;
      local_dc = 0x80000000;
      if ((puStack_f8 != (undefined *)0x0) && (*(int *)(puStack_f8 + 4) != -2)) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],puStack_f8,0);
        puStack_f8 = &DAT_03d7702c;
        local_f0 = local_f0 & 0xffffffff00000000;
      }
      lVar3 = local_108;
      puVar2 = PTR_PTR_047d1a50;
      if ((int)local_100 != 0) {
        lVar6 = (long)(int)local_100 * 0x30;
        do {
          lVar1 = lVar3 + lVar6;
          *(undefined4 *)(lVar1 + -0x20) = 0;
          if ((-1 < (int)*(uint *)(lVar1 + -0x1c)) && (*(long *)(lVar1 + -0x28) != 0)) {
            (**(code **)(*(long *)puVar2 + 0x20))
                      (puVar2,*(long *)(lVar1 + -0x28),(ulong)*(uint *)(lVar1 + -0x1c) * 0x14);
          }
          lVar6 = lVar6 + -0x30;
          *(undefined8 *)(lVar1 + -0x28) = 0;
          *(undefined4 *)(lVar1 + -0x1c) = 0x80000000;
        } while (lVar6 != 0);
      }
    }
    else {
      FUN_0309fd68(&local_130,param_1,param_7,param_8,local_70,local_70 + (long)(int)local_68 * 4);
      local_130 = PTR_DAT_047e5010 + 0x10;
      local_d8 = param_3;
      uVar4 = FUN_0309d8f0(param_1,&local_130,local_80,local_80 + (long)(int)local_78 * 4,param_6,
                           param_7,param_8,param_9,param_10,param_12,param_13);
      local_e0 = 0;
      local_130 = PTR_DAT_047e5018 + 0x10;
      if ((-1 < (int)local_dc) && (local_e8 != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_e8,(ulong)local_dc << 3);
      }
      local_e8 = 0;
      local_dc = 0x80000000;
      if ((puStack_f8 != (undefined *)0x0) && (*(int *)(puStack_f8 + 4) != -2)) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],puStack_f8,0);
        puStack_f8 = &DAT_03d7702c;
        local_f0 = local_f0 & 0xffffffff00000000;
      }
      lVar3 = local_108;
      puVar2 = PTR_PTR_047d1a50;
      if ((int)local_100 != 0) {
        lVar6 = (long)(int)local_100 * 0x30;
        do {
          lVar1 = lVar3 + lVar6;
          *(undefined4 *)(lVar1 + -0x20) = 0;
          if ((-1 < (int)*(uint *)(lVar1 + -0x1c)) && (*(long *)(lVar1 + -0x28) != 0)) {
            (**(code **)(*(long *)puVar2 + 0x20))
                      (puVar2,*(long *)(lVar1 + -0x28),(ulong)*(uint *)(lVar1 + -0x1c) * 0x14);
          }
          lVar6 = lVar6 + -0x30;
          *(undefined8 *)(lVar1 + -0x28) = 0;
          *(undefined4 *)(lVar1 + -0x1c) = 0x80000000;
        } while (lVar6 != 0);
      }
    }
    lVar3 = local_100;
    uVar5 = (ulong)local_100._4_4_;
    local_100 = (ulong)local_100._4_4_ << 0x20;
    if ((-1 < lVar3) && (local_108 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_108,uVar5 * 0x30);
    }
    lVar3 = local_110;
    local_100 = CONCAT44(0x80000000,(int)local_100);
    uVar5 = (ulong)local_110._4_4_;
    local_108 = 0;
    local_110 = (ulong)local_110._4_4_ << 0x20;
    if ((-1 < lVar3) && (local_118 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_118,uVar5 * 0xc);
    }
  }
  lVar3 = local_78;
  uVar5 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_80 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_80,uVar5 << 2);
  }
  lVar3 = local_68;
  uVar5 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_70 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_70,uVar5 << 2);
  }
  return uVar4;
}


