/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027fe810; name: FUN_027fe810
 */


void FUN_027fe810(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar6 = param_1 + 3;
  lVar2 = FUN_027fe9b0(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar1 = *param_1;
  lVar7 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar6;
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar2 << 3,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))();
    }
  }
  lVar7 = local_78 + (lVar7 - lVar1 >> 3) * 8;
  lVar2 = local_78 + lVar2 * 8;
  local_70 = lVar7;
  local_60 = lVar2;
  FUN_0174a240(plVar6,lVar7,param_2);
  lVar1 = lVar7 + 8;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  local_68 = lVar1;
  if (lVar5 == lVar4) {
    local_68 = lVar4;
  }
  else {
    do {
      lVar7 = lVar7 + -8;
      lVar5 = lVar5 + -8;
      FUN_0174aea4(plVar6,lVar7,lVar5);
    } while (lVar4 != lVar5);
    lVar4 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar7;
  param_1[1] = lVar1;
  local_60 = param_1[2];
  param_1[2] = lVar2;
  local_78 = lVar4;
  local_70 = lVar4;
  FUN_027fea00(&local_78);
  lVar1 = local_78;
  if (local_78 != 0) {
    lVar7 = local_60 - local_78;
    plVar6 = (long *)*plStack_58;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) != 0) && (lVar2 = FUN_00c4e600(), 0 < *(int *)(lVar2 + 0x12c8))) {
      FUN_00c48fe8(plVar6,lVar1,lVar7,8);
      return;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar1,lVar7,8);
  }
  return;
}


