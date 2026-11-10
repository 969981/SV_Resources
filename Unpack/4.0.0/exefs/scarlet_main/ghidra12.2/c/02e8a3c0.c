/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e8a3c0; name: FUN_02e8a3c0
 */


void FUN_02e8a3c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined **local_220;
  long local_218;
  long local_210;
  undefined2 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  undefined8 local_1b0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined1 auStack_188 [240];
  int local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  local_90 = (long *)&local_220;
  local_80 = (undefined1 *)&local_220;
  bVar2 = *(char *)(param_1 + 0x100) != '\x02';
  local_210 = *(long *)(param_6 + 0x28);
  local_218 = param_1;
  local_1e0 = param_2;
  lStack_1d8 = param_3;
  local_1d0 = param_4;
  uStack_1c8 = param_5;
  local_1c0 = param_6;
  local_1b0 = param_7;
  if (local_210 == 0) {
    if (bVar2) {
      local_208 = 0;
      local_220 = &PTR_LAB_0460d8e0;
      uStack_1f8 = *(undefined8 *)(param_3 + 0x48);
      local_200 = *(undefined8 *)(param_3 + 0x40);
      uStack_1e8 = *(undefined8 *)(param_3 + 0x58);
      local_1f0 = *(undefined8 *)(param_3 + 0x50);
      local_70 = local_200;
      uStack_68 = uStack_1f8;
      local_60 = local_1f0;
      uStack_58 = uStack_1e8;
      if (param_8 == (undefined8 *)0x0) {
        local_198 = auStack_188;
        local_190 = -0x7fffff8000000000;
        FUN_02e97588(param_1 + 200,&local_198,&local_80);
        goto LAB_02e8a630;
      }
      uStack_48 = param_8[1];
      local_50 = *param_8;
      uStack_38 = param_8[3];
      local_40 = param_8[2];
      local_198 = auStack_188;
      local_190 = -0x7fffff8000000000;
      local_80 = (undefined1 *)&local_220;
      FUN_02e96bdc(param_1 + 200,&local_198,&local_80);
      goto LAB_02e8a534;
    }
    local_220 = &PTR_LAB_0460d8e0;
  }
  else {
    if (bVar2) {
      local_208 = 0;
      local_220 = &PTR_LAB_0460d9a0;
      uStack_1f8 = *(undefined8 *)(param_3 + 0x48);
      local_200 = *(undefined8 *)(param_3 + 0x40);
      uStack_1e8 = *(undefined8 *)(param_3 + 0x58);
      local_1f0 = *(undefined8 *)(param_3 + 0x50);
      local_70 = local_200;
      uStack_68 = uStack_1f8;
      local_60 = local_1f0;
      uStack_58 = uStack_1e8;
      if (param_8 == (undefined8 *)0x0) {
        local_198 = auStack_188;
        local_190 = -0x7fffff8000000000;
        local_80 = (undefined1 *)&local_220;
        FUN_02e99880(param_1 + 200,&local_198,&local_80);
LAB_02e8a630:
        lVar1 = local_190;
        uVar3 = (ulong)local_190._4_4_;
        local_190 = (ulong)local_190._4_4_ << 0x20;
        if (lVar1 < 0) {
          return;
        }
        if (local_198 == (undefined1 *)0x0) {
          return;
        }
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_198,uVar3 << 1);
        return;
      }
      uStack_48 = param_8[1];
      local_50 = *param_8;
      uStack_38 = param_8[3];
      local_40 = param_8[2];
      local_198 = auStack_188;
      local_190 = -0x7fffff8000000000;
      local_80 = (undefined1 *)&local_220;
      FUN_02e98e1c(param_1 + 200,&local_198,&local_80);
LAB_02e8a534:
      lVar1 = local_190;
      uVar3 = (ulong)local_190._4_4_;
      local_190 = (ulong)local_190._4_4_ << 0x20;
      if ((-1 < lVar1) && (local_198 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_198,uVar3 << 1);
      }
      param_8[1] = uStack_48;
      *param_8 = local_50;
      param_8[3] = uStack_38;
      param_8[2] = local_40;
      return;
    }
    local_220 = &PTR_LAB_0460d940;
  }
  local_208 = 0;
  uStack_1f8 = *(undefined8 *)(param_3 + 0x48);
  local_200 = *(undefined8 *)(param_3 + 0x40);
  uStack_1e8 = *(undefined8 *)(param_3 + 0x58);
  local_1f0 = *(undefined8 *)(param_3 + 0x50);
  if (param_8 == (undefined8 *)0x0) {
    uVar4 = (undefined4)local_200;
    local_80 = (undefined1 *)CONCAT44(uVar4,uVar4);
    uStack_78 = CONCAT44(uVar4,uVar4);
    uVar4 = (undefined4)((ulong)local_200 >> 0x20);
    uVar6 = (undefined4)local_1f0;
    uVar7 = (undefined4)((ulong)local_1f0 >> 0x20);
    uVar5 = (undefined4)uStack_1f8;
    local_40 = CONCAT44(uVar5,uVar5);
    uStack_38 = CONCAT44(uVar5,uVar5);
    uVar5 = (undefined4)uStack_1e8;
    uStack_30 = CONCAT44(uVar5,uVar5);
    uStack_28 = CONCAT44(uVar5,uVar5);
    uStack_68 = CONCAT44(uVar6,uVar6);
    local_70 = CONCAT44(uVar6,uVar6);
    local_98 = 0;
    uStack_58 = CONCAT44(uVar4,uVar4);
    local_60 = CONCAT44(uVar4,uVar4);
    uStack_48 = CONCAT44(uVar7,uVar7);
    local_50 = CONCAT44(uVar7,uVar7);
    uStack_88 = 0;
    FUN_0325c710(param_1 + 0xe8,&local_80,&local_198,1);
    if (0 < local_98) {
      (**(code **)(*local_90 + 0x10))(local_90,&local_198,local_98,uStack_88);
    }
  }
  else {
    FUN_0325b184(param_1 + 0xe8,&local_200,&local_220,param_8,1);
  }
  return;
}


