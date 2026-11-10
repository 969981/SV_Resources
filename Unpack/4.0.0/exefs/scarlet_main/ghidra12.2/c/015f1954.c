/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f1954; name: FUN_015f1954
 */


void FUN_015f1954(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  undefined8 local_48;
  
  local_48 = param_2;
  FUN_015f20d0(&local_a8,param_2,&local_48);
  lVar3 = local_a8;
  local_a8 = 0;
  *param_1 = &PTR_FUN_045a7900;
  plVar5 = param_1 + 1;
  *plVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = param_2;
  param_1[5] = 0x555555555555555;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = lVar3;
  param_1[9] = uStack_a0;
  param_1[10] = local_98;
  param_1[0xb] = uStack_90;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x10),true,0);
  *(undefined1 *)(param_1 + 0x14) = 0;
  lVar3 = *plVar5;
  if ((ulong)((param_1[3] - lVar3 >> 4) * -0x5555555555555555) < param_3) {
    lVar4 = param_1[2];
    local_70 = 0;
    puStack_68 = param_1 + 4;
    local_88 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],param_3 * 0x30,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)param_1[4] + 0xe8))();
    }
    local_80 = local_88 + (lVar4 - lVar3 >> 4) * 0x10;
    local_70 = local_88 + param_3 * 0x30;
    local_78 = local_80;
    FUN_015f2470(plVar5,&local_88);
    lVar3 = local_88;
    lVar4 = local_78;
    while (local_78 = lVar4, local_78 != local_80) {
      lVar4 = local_78 + -0x30;
      if (*(char *)(local_78 + -0x10) != '\0') {
        *(undefined1 *)(local_78 + -0x10) = 0;
      }
    }
    if (local_88 != 0) {
      lVar4 = local_70 - local_88;
      plVar5 = (long *)*puStack_68;
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar3,lVar4,8);
      }
    }
    lVar3 = local_a8;
    local_a8 = 0;
    if (lVar3 != 0) {
      FUN_015f29a0(&uStack_a0);
    }
  }
  else {
    local_a8 = 0;
  }
  *param_1 = &PTR_FUN_045a78d8;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = local_48;
  param_1[0x1b] = 0xfffffffffffffff;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x39] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = local_48;
  param_1[0x22] = 0x1ffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = local_48;
  param_1[0x29] = 0x1ffffffffffffff;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = local_48;
  param_1[0x30] = 0x1ffffffffffffff;
  param_1[0x31] = 0;
  param_1[0x33] = local_48;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_015f1efc(param_1 + 0x17,param_4);
  FUN_015f1c18(param_1 + 0x1e,param_5);
  FUN_015f1c18(param_1 + 0x25,param_5);
  FUN_015f1c18(param_1 + 0x2c,param_5);
  param_1[0x34] = param_1;
  return;
}


