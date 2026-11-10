/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0122c734; name: FUN_0122c734
 */


void FUN_0122c734(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  long local_28;
  
  uVar1 = param_1[2] - param_1[1];
  lVar5 = 0;
  if (uVar1 != 0) {
    lVar5 = uVar1 * 0x40 + -1;
  }
  if ((ulong)(lVar5 - (param_1[9] + param_1[8])) < 0x200) {
    plVar6 = param_1 + 10;
    uVar8 = param_1[3] - *param_1;
    if (uVar1 < uVar8) {
      if (param_1[1] == *param_1) {
        local_68 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x1000,8);
        if (local_68 == 0) {
          (**(code **)(*(long *)*plVar6 + 0xe8))();
        }
        FUN_020e2eec(param_1,&local_68);
        local_68 = *(long *)(param_1[2] + -8);
        param_1[2] = param_1[2] + -8;
        FUN_020e3220(param_1,&local_68);
      }
      else {
        local_68 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x1000,8);
        if (local_68 == 0) {
          (**(code **)(*(long *)*plVar6 + 0xe8))();
        }
        FUN_020e3080(param_1,&local_68);
      }
      if (param_1[2] - param_1[1] == 8) {
        lVar5 = 0x100;
      }
      else {
        lVar5 = param_1[8] + 0x200;
      }
      param_1[8] = lVar5;
    }
    else {
      local_50 = 0;
      lVar5 = (long)uVar8 >> 2;
      if (uVar8 == 0) {
        lVar5 = 1;
      }
      plStack_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar5 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xe8))();
      }
      local_50 = local_68 + lVar5 * 8;
      local_60 = local_68;
      local_58 = local_68;
      local_28 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x1000,8);
      if (local_28 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xe8))();
      }
      uStack_70 = 0x200;
      local_78 = plVar6;
      FUN_01234014(&local_68,&local_28);
      local_80 = 0;
      lVar2 = param_1[1];
      lVar5 = lVar2;
      if (lVar2 != param_1[2]) {
        do {
          FUN_020e33c0(&local_68,lVar5);
          lVar5 = lVar5 + 8;
        } while (lVar5 != param_1[2]);
        lVar2 = param_1[1];
      }
      lVar7 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      lVar3 = param_1[3];
      param_1[2] = local_58;
      param_1[3] = local_50;
      if (local_58 - local_60 == 8) {
        lVar4 = 0x100;
      }
      else {
        lVar4 = param_1[8] + 0x200;
      }
      param_1[8] = lVar4;
      local_68 = lVar7;
      local_60 = lVar2;
      local_58 = lVar5;
      local_50 = lVar3;
      FUN_01233eac(&local_80);
      FUN_01233f50(&local_68);
    }
  }
  else {
    param_1[8] = param_1[8] + 0x200;
    plVar6 = (long *)(param_1[2] + -8);
    local_68 = *plVar6;
    param_1[2] = (long)plVar6;
    FUN_020e3220(param_1,&local_68);
  }
  return;
}


