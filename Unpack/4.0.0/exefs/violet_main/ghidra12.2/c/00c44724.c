/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c44724; name: FUN_00c44724
 */


void FUN_00c44724(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  long local_28;
  
  if ((ulong)param_1[8] < 0x400) {
    uVar5 = param_1[2] - param_1[1] >> 3;
    lVar3 = param_1[3] - *param_1;
    if ((ulong)(lVar3 >> 3) <= uVar5) {
      local_50 = 0;
      lVar1 = lVar3 >> 2;
      if (lVar3 == 0) {
        lVar1 = 1;
      }
      local_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar1 << 3,4);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xe8))();
      }
      local_60 = local_68 + uVar5 * 8;
      local_50 = local_68 + lVar1 * 8;
      local_58 = local_60;
      local_28 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
      if (local_28 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xe8))();
      }
      FUN_00c44f54(&local_68,&local_28);
      lVar3 = param_1[2];
      if (lVar3 == param_1[1]) {
        lVar1 = lVar3;
      }
      else {
        lVar1 = lVar3 + -8;
        FUN_00c44cc0(&local_68,lVar1);
        if (lVar1 != param_1[1]) {
          lVar1 = lVar3 + -0x10;
          FUN_00c44cc0(&local_68,lVar1);
          if (lVar1 != param_1[1]) {
            lVar1 = lVar3 + -0x18;
            FUN_00c44cc0(&local_68,lVar1);
            if (lVar1 != param_1[1]) {
              lVar1 = lVar3 + -0x20;
              FUN_00c44cc0(&local_68,lVar1);
              if (lVar1 != param_1[1]) {
                lVar3 = lVar3 + -0x28;
                do {
                  lVar1 = lVar3;
                  FUN_00c44cc0(&local_68,lVar1);
                  lVar3 = lVar1 + -8;
                } while (lVar1 != param_1[1]);
              }
            }
          }
        }
        lVar3 = lVar1;
        lVar1 = param_1[2];
      }
      lVar6 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      param_1[2] = local_58;
      lVar2 = param_1[3];
      param_1[3] = local_50;
      local_58 = lVar1;
      if (lVar3 != lVar1) {
        local_58 = lVar1 + ((lVar1 - lVar3) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (lVar6 == 0) {
        return;
      }
      lVar1 = lVar2 - lVar6;
      plVar4 = (long *)*local_48;
      local_68 = lVar6;
      local_60 = lVar3;
      local_50 = lVar2;
      uVar5 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,lVar1,4);
        return;
      }
      FUN_00c48fe8(plVar4,lVar6,lVar1,4);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xe8))();
      }
      FUN_00c44a40(param_1,&local_68);
      return;
    }
    local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xe8))();
    }
    FUN_00c45458(param_1,&local_68);
  }
  else {
    param_1[8] = param_1[8] - 0x400;
  }
  local_68 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_00c451d8(param_1,&local_68);
  return;
}


