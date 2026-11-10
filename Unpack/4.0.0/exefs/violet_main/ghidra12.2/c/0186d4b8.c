/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186d4b8; name: FUN_0186d4b8
 */


void FUN_0186d4b8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long local_88 [2];
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  if ((ulong)param_1[8] < 0x55) {
    plVar4 = param_1 + 10;
    uVar5 = param_1[2] - param_1[1] >> 3;
    lVar2 = param_1[3] - *param_1;
    if ((ulong)(lVar2 >> 3) <= uVar5) {
      local_50 = 0;
      lVar1 = lVar2 >> 2;
      if (lVar2 == 0) {
        lVar1 = 1;
      }
      local_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar1 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xe8))();
      }
      local_60 = local_68 + uVar5 * 8;
      local_50 = local_68 + lVar1 * 8;
      local_58 = local_60;
      local_88[0] = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0xff0,8);
      if (local_88[0] == 0) {
        (**(code **)(*(long *)*plVar4 + 0xe8))();
      }
      uStack_70 = 0x55;
      local_78 = plVar4;
      FUN_01436d80(&local_68,local_88);
      local_88[1] = 0;
      lVar2 = param_1[2];
      if (lVar2 == param_1[1]) {
        lVar1 = lVar2;
      }
      else {
        do {
          lVar2 = lVar2 + -8;
          FUN_014384c8(&local_68,lVar2);
        } while (lVar2 != param_1[1]);
        lVar1 = param_1[2];
      }
      lVar3 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      param_1[2] = local_58;
      lVar6 = param_1[3];
      param_1[3] = local_50;
      local_68 = lVar3;
      local_60 = lVar2;
      local_58 = lVar1;
      local_50 = lVar6;
      FUN_01e010b0(local_88 + 1);
      if (lVar2 != lVar1) {
        local_58 = lVar1 + ((lVar1 - lVar2) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (lVar3 == 0) {
        return;
      }
      lVar6 = lVar6 - lVar3;
      plVar4 = (long *)*local_48;
      uVar5 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar5 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar6,8);
        return;
      }
      FUN_00c48fe8(plVar4,lVar3,lVar6,8);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_68 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0xff0,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar4 + 0xe8))();
      }
      FUN_01437868(param_1,&local_68);
      return;
    }
    local_68 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0xff0,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar4 + 0xe8))();
    }
    FUN_01437340(param_1,&local_68);
  }
  else {
    param_1[8] = param_1[8] - 0x55;
  }
  local_68 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_014370c8(param_1,&local_68);
  return;
}


