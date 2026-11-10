/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087c130; name: FUN_0087c130
 */


undefined8
FUN_0087c130(long param_1,long param_2,int *param_3,long param_4,long param_5,uint param_6,
            uint param_7,undefined4 param_8,undefined4 param_9,byte param_10,uint param_11,
            undefined8 param_12)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_d0 [2];
  int *local_c8;
  undefined4 local_c0;
  int *local_b8;
  undefined4 local_b0;
  int *local_a8;
  undefined4 local_a0;
  int *local_98;
  undefined4 local_90 [2];
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  
  if (((param_6 != 0) && (((param_1 == 0 || (param_2 == 0)) || (param_5 == 0)))) ||
     (((param_4 == 0 || (0x100 < param_6)) || (0xc < param_7)))) {
    return 0x80260201;
  }
  if ((param_11 & 1) == 0) {
    if (*(uint *)(param_4 + 0x34) != param_7) {
      return 0x80260201;
    }
  }
  else {
    uVar3 = FUN_0087c520(param_4,param_12,param_7,param_8,param_9,param_10 & 1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    local_68 = param_10 & 1;
    local_80 = 0xbb8000000100;
    uStack_6c = param_9;
    local_78 = 0xc;
    uStack_74 = param_7;
    local_70 = param_8;
    uVar3 = FUN_0087d080(param_4 + 0x28,&local_80,param_11 >> 0x10,param_12);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  if ((param_11 >> 1 & 1) != 0) {
    if (param_3 == (int *)0x0) {
      return 0x80260201;
    }
    iVar2 = *param_3;
    if (2 < iVar2 - 1U) {
      return 0x80800007;
    }
    if (iVar2 == 2) {
      if ((param_11 >> 2 & 1) != 0) {
        param_3[0x19] = 1;
        iVar2 = param_3[0x35];
        param_3[0x36] = iVar2;
        param_3[0x37] = iVar2;
        param_3[0x38] = iVar2;
        param_3[0x39] = iVar2;
        param_3[0x3a] = iVar2;
        param_3[0x3b] = iVar2;
        param_3[0x3c] = iVar2;
        param_3[0x3d] = iVar2;
        param_3[0x3e] = iVar2;
        param_3[0x3f] = iVar2;
        param_3[0x40] = iVar2;
      }
      local_c8 = param_3 + 2;
      local_d0[0] = 0;
      lVar1 = param_4 + 0x28;
      uVar3 = FUN_0087dd60(lVar1,0,param_3[1] & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_b8 = param_3 + 0x16;
      local_c0 = 1;
      uVar3 = FUN_0087dd60(lVar1,1,(uint)param_3[1] >> 1 & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_a8 = param_3 + 0x33;
      local_b0 = 2;
      uVar3 = FUN_0087dd60(lVar1,2,(uint)param_3[1] >> 2 & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_98 = param_3 + 0x43;
    }
    else if (iVar2 == 1) {
      if ((param_11 >> 2 & 1) != 0) {
        param_3[0x19] = 1;
      }
      local_c8 = param_3 + 2;
      local_d0[0] = 0;
      lVar1 = param_4 + 0x28;
      uVar3 = FUN_0087dd60(lVar1,0,param_3[1] & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_b8 = param_3 + 0x16;
      local_c0 = 1;
      uVar3 = FUN_0087dd60(lVar1,1,(uint)param_3[1] >> 1 & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_a8 = param_3 + 0x33;
      local_b0 = 2;
      uVar3 = FUN_0087dd60(lVar1,2,(uint)param_3[1] >> 2 & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_98 = param_3 + 0x37;
    }
    else {
      if ((param_11 >> 2 & 1) != 0) {
        iVar2 = param_3[0x44];
        param_3[0x21] = 1;
        param_3[0x59] = 1;
        param_3[0x45] = iVar2;
        param_3[0x46] = iVar2;
        param_3[0x47] = iVar2;
        param_3[0x48] = iVar2;
        param_3[0x49] = iVar2;
        param_3[0x4a] = iVar2;
        param_3[0x4b] = iVar2;
        param_3[0x4c] = iVar2;
        param_3[0x4d] = iVar2;
        param_3[0x4e] = iVar2;
        param_3[0x4f] = iVar2;
      }
      local_c8 = param_3 + 2;
      local_d0[0] = 0;
      lVar1 = param_4 + 0x28;
      uVar3 = FUN_0087dd60(lVar1,0,param_3[1] & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_b8 = param_3 + 0x1e;
      local_c0 = 1;
      uVar3 = FUN_0087dd60(lVar1,1,(uint)param_3[1] >> 1 & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_a8 = param_3 + 0x42;
      local_b0 = 2;
      uVar3 = FUN_0087dd60(lVar1,2,(uint)param_3[1] >> 2 & 1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      local_98 = param_3 + 0x52;
    }
    local_a0 = 3;
    uVar3 = FUN_0087dd60(param_4 + 0x28,3,(uint)param_3[1] >> 3 & 1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    local_88 = local_d0;
    local_90[0] = 4;
    uVar3 = FUN_0087d7e0(param_4 + 0x28,local_90,0xffff,param_11 >> 0x10,param_12);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  if (param_6 != 0) {
    uVar3 = FUN_0087de10(param_4 + 0x28,param_1,param_2,param_4,param_6);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_0087e030(param_4 + 0x28,param_5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}


