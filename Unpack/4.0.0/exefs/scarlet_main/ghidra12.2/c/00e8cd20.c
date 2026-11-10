/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8cd20; name: FUN_00e8cd20
 */


void FUN_00e8cd20(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  uVar3 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar3) {
    if (uVar3 != param_2) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    return;
  }
  param_2 = param_2 - uVar3;
  lVar4 = param_1[1];
  if ((ulong)(param_1[2] - lVar4 >> 4) < param_2) {
    plVar1 = param_1 + 3;
    lVar2 = FUN_00e8ceb4(param_1,param_2 + (lVar4 - *param_1 >> 4));
    lVar4 = *param_1;
    lVar5 = param_1[1];
    local_50 = 0;
    plStack_48 = plVar1;
    if (lVar2 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar2 << 4,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    lVar4 = local_68 + (lVar5 - lVar4 >> 4) * 0x10;
    local_50 = local_68 + lVar2 * 0x10;
    lStack_60 = lVar4;
    local_58 = lVar4;
    FUN_00e8cf04(plVar1,lVar4);
    if ((param_2 != 1) && (FUN_00e8cf04(plVar1,lVar4 + 0x10), param_2 != 2)) {
      lVar5 = lVar4 + 0x20;
      lVar2 = param_2 * 0x10 + -0x20;
      do {
        FUN_00e8cf04(plVar1,lVar5);
        lVar5 = lVar5 + 0x10;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    local_58 = lVar4 + param_2 * 0x10;
    FUN_00e8cfe4(param_1,&local_68);
    FUN_00e8d08c(&local_68);
  }
  else {
    lVar5 = lVar4;
    if (param_2 != 0) {
      lVar5 = lVar4 + param_2 * 0x10;
      lVar2 = param_2 * 0x10;
      do {
        FUN_00e8cf04(param_1 + 3,lVar4);
        lVar4 = lVar4 + 0x10;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    param_1[1] = lVar5;
  }
  return;
}


