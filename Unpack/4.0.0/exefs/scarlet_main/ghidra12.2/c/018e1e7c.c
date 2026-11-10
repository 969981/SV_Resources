/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e1e7c; name: FUN_018e1e7c
 */


void FUN_018e1e7c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar2 = param_1[1];
  if (lVar2 != param_1[2]) {
    FUN_0186d1b0(param_1 + 3,lVar2,param_2);
    param_1[1] = lVar2 + 0x30;
    return;
  }
  plVar1 = param_1 + 3;
  lVar3 = FUN_01e009f0(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  lVar2 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar3 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 * 0x30,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar5 = local_78 + (lVar4 - lVar2 >> 4) * 0x10;
  lVar6 = local_78 + lVar3 * 0x30;
  local_70 = lVar5;
  local_60 = lVar6;
  FUN_0186d1b0(plVar1,lVar5,param_2);
  lVar2 = lVar5 + 0x30;
  lVar4 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar4) {
    local_68 = lVar4;
  }
  else {
    lVar5 = lVar5 + -0x30;
    local_68 = lVar2;
    FUN_01437c14(plVar1,lVar5,lVar3 + -0x30);
    if (lVar3 + -0x30 != lVar4) {
      do {
        lVar5 = lVar5 + -0x30;
        FUN_01437c14(plVar1,lVar5,lVar3 + -0x60);
        lVar3 = lVar3 + -0x30;
      } while (lVar4 + 0x30 != lVar3);
    }
    lVar4 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar5;
  param_1[1] = lVar2;
  local_60 = param_1[2];
  param_1[2] = lVar6;
  local_78 = lVar4;
  local_70 = lVar4;
  FUN_014358d4(&local_78);
  return;
}


