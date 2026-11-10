/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d24f60; name: FUN_00d24f60
 */


void FUN_00d24f60(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  long local_38;
  
  plVar1 = param_1 + 3;
  lVar3 = FUN_029dbc0c(param_1,(param_1[1] - *param_1 >> 3) * -0xf0f0f0f0f0f0f0f + 1);
  lVar2 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar3 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 * 0x88,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar5 = local_78 + (lVar4 - lVar2 >> 3) * 8;
  lVar3 = local_78 + lVar3 * 0x88;
  local_70 = lVar5;
  local_60 = lVar3;
  FUN_00d248c8(plVar1,lVar5);
  lVar2 = lVar5 + 0x88;
  lVar4 = *param_1;
  local_38 = param_1[1];
  if (local_38 == lVar4) {
    local_68 = lVar4;
  }
  else {
    lVar5 = lVar5 + -0x88;
    local_68 = lVar2;
    FUN_00d250d4(plVar1,lVar5,local_38 + -0x88);
    if (local_38 + -0x88 != lVar4) {
      do {
        lVar5 = lVar5 + -0x88;
        FUN_00d250d4(plVar1,lVar5,local_38 + -0x110);
        local_38 = local_38 + -0x88;
      } while (lVar4 + 0x88 != local_38);
    }
    lVar4 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar5;
  param_1[1] = lVar2;
  local_60 = param_1[2];
  param_1[2] = lVar3;
  local_78 = lVar4;
  local_70 = lVar4;
  FUN_00d24d98(&local_78);
  return;
}


