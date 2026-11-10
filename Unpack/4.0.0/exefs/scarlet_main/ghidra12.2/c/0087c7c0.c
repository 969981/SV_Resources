/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087c7c0; name: FUN_0087c7c0
 */


undefined4 FUN_0087c7c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  int *local_a8;
  int *local_98;
  int *local_88;
  int *local_78;
  undefined4 local_70 [2];
  int *local_68;
  undefined4 local_60;
  int *local_58;
  undefined4 local_50;
  int *local_48;
  undefined4 local_40;
  int *local_38;
  undefined4 local_30 [2];
  undefined1 *local_28;
  undefined4 local_20 [2];
  undefined4 *local_18;
  
  local_28 = auStack_b0;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  iVar1 = *param_1;
  if (2 < iVar1 - 1U) {
    return 0x80800007;
  }
  local_20[0] = 4;
  local_30[0] = 4;
  local_18 = local_70;
  local_60 = 1;
  local_70[0] = 0;
  local_50 = 2;
  local_40 = 3;
  if (iVar1 == 2) {
    if (param_1[0x4b] != 0) {
      return 0x80800008;
    }
    if (param_1[0x4c] != 0) {
      return 0x80800008;
    }
    lVar5 = 0x43;
  }
  else {
    if (iVar1 != 1) {
      if (param_1[0x5a] != 0) {
        return 0x80800008;
      }
      if (param_1[0x5b] != 0) {
        return 0x80800008;
      }
      lVar5 = 0x52;
      lVar6 = 0x42;
      lVar7 = 0x1e;
      goto LAB_0087c8b4;
    }
    if (param_1[0x3f] != 0) {
      return 0x80800008;
    }
    if (param_1[0x40] != 0) {
      return 0x80800008;
    }
    lVar5 = 0x37;
  }
  lVar6 = 0x33;
  lVar7 = 0x16;
LAB_0087c8b4:
  local_58 = param_1 + lVar7;
  local_68 = param_1 + 2;
  iVar2 = param_1[1];
  local_48 = param_1 + lVar6;
  local_38 = param_1 + lVar5;
  iVar4 = *param_2;
  if (2 < *param_2 - 1U) {
    *param_2 = iVar1;
    iVar4 = iVar1;
  }
  local_a8 = param_2 + 2;
  if (iVar4 == 2) {
    local_88 = param_2 + 0x33;
    local_98 = param_2 + 0x16;
    local_78 = param_2 + 0x43;
    lVar5 = 0x4b;
    lVar6 = 0x4c;
    param_2[0x33] = 0x1020002;
    param_2[0x34] = 0x40;
  }
  else if (iVar4 == 1) {
    local_98 = param_2 + 0x16;
    local_88 = param_2 + 0x33;
    local_78 = param_2 + 0x37;
    lVar5 = 0x3f;
    lVar6 = 0x40;
  }
  else {
    local_78 = param_2 + 0x52;
    local_98 = param_2 + 0x1e;
    local_88 = param_2 + 0x42;
    param_2[2] = 0x1020000;
    param_2[3] = 0x70;
    param_2[0x1e] = 0x1020001;
    param_2[0x1f] = 0x90;
    param_2[0x42] = 0x1020002;
    param_2[0x43] = 0x40;
    param_2[0x52] = 0x1020003;
    lVar5 = 0x5a;
    param_2[0x53] = 0x20;
    lVar6 = 0x5b;
  }
  param_2[1] = iVar2;
  param_2[lVar6] = 0;
  param_2[lVar5] = 0;
  uVar3 = FUN_0087e280(local_20,local_30);
  return uVar3;
}


