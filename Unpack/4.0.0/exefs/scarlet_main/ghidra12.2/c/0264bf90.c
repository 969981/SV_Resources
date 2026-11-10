/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0264bf90; name: FUN_0264bf90
 */


void FUN_0264bf90(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar5 = param_1 + 3;
  lVar2 = FUN_0264a754(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  lVar1 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar5;
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar2 * 0x90,0x10);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))();
    }
  }
  lVar6 = local_78 + (lVar4 - lVar1 >> 4) * 0x10;
  lVar7 = local_78 + lVar2 * 0x90;
  local_70 = lVar6;
  local_60 = lVar7;
  FUN_0264bd80(plVar5,lVar6,param_2,param_3);
  lVar1 = lVar6 + 0x90;
  lVar4 = *param_1;
  lVar2 = param_1[1];
  local_68 = lVar1;
  if (lVar2 == lVar4) {
    local_68 = lVar4;
  }
  else {
    do {
      lVar6 = lVar6 + -0x90;
      lVar2 = lVar2 + -0x90;
      FUN_010b5fa4(plVar5,lVar6,lVar2);
    } while (lVar4 != lVar2);
    lVar4 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar6;
  param_1[1] = lVar1;
  local_60 = param_1[2];
  param_1[2] = lVar7;
  local_78 = lVar4;
  local_70 = lVar4;
  FUN_0264a7b8(&local_78);
  lVar1 = local_78;
  if (local_78 != 0) {
    lVar4 = local_60 - local_78;
    plVar5 = (long *)*plStack_58;
    uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar3 & 1) != 0) && (lVar2 = FUN_00c4e600(), 0 < *(int *)(lVar2 + 0x12c8))) {
      FUN_00c48fe8(plVar5,lVar1,lVar4,0x10);
      return;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar1,lVar4,0x10);
  }
  return;
}


