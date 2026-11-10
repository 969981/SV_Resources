/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01819bd4; name: FUN_01819bd4
 */


void FUN_01819bd4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_88 [2];
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  if ((ulong)param_1[8] < 0x33) {
    plVar1 = param_1 + 10;
    uVar6 = param_1[2] - param_1[1] >> 3;
    lVar5 = param_1[3] - *param_1;
    if ((ulong)(lVar5 >> 3) <= uVar6) {
      local_50 = 0;
      lVar2 = lVar5 >> 2;
      if (lVar5 == 0) {
        lVar2 = 1;
      }
      plStack_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar2 << 3,0x10);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xe8))();
      }
      local_60 = local_68 + uVar6 * 8;
      local_50 = local_68 + lVar2 * 8;
      local_58 = local_60;
      local_88[0] = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0xff0,0x10);
      if (local_88[0] == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
      uStack_70 = 0x33;
      local_78 = plVar1;
      FUN_01819f48(&local_68,local_88);
      local_88[1] = 0;
      lVar5 = param_1[2];
      lVar2 = lVar5;
      if (lVar5 != param_1[1]) {
        do {
          lVar2 = lVar2 + -8;
          FUN_0181a34c(&local_68,lVar2);
        } while (lVar2 != param_1[1]);
        lVar5 = param_1[2];
      }
      lVar4 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      param_1[2] = local_58;
      lVar3 = param_1[3];
      param_1[3] = local_50;
      local_68 = lVar4;
      local_60 = lVar2;
      local_58 = lVar5;
      local_50 = lVar3;
      FUN_01819e0c(local_88 + 1);
      FUN_01819e9c(&local_68);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0xff0,0x10);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
      FUN_02761eb8(param_1,&local_68);
      return;
    }
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0xff0,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
    FUN_0276204c(param_1,&local_68);
  }
  else {
    param_1[8] = param_1[8] - 0x33;
  }
  local_68 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_0181a1b8(param_1,&local_68);
  return;
}


