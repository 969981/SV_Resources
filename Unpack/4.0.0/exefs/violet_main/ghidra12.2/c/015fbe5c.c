/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015fbe5c; name: FUN_015fbe5c
 */


void FUN_015fbe5c(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  local_68 = param_1[2];
  lVar6 = param_1[1];
  lVar4 = local_68 - lVar6;
  if ((ulong)(lVar4 >> 3) < (ulong)(param_1[3] - *param_1 >> 3)) {
    plVar1 = param_1 + 4;
    local_60 = 0;
    plStack_58 = plVar1;
    if (lVar4 == 0) {
      lVar5 = 0;
      lVar3 = 0;
      bVar2 = true;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
      lVar6 = param_1[1];
      local_68 = param_1[2];
      bVar2 = local_68 - lVar6 == 0;
      lVar5 = local_68 - lVar6 >> 3;
    }
    lVar4 = lVar3 + (lVar4 >> 3) * 8;
    if (!bVar2) {
      lVar5 = lVar5 << 3;
      lVar7 = lVar3;
      local_78 = lVar3;
      lStack_70 = lVar3;
      local_68 = lVar3;
      local_60 = lVar4;
      do {
        FUN_015f90f0(plVar1,lVar7,lVar6);
        lVar7 = lVar7 + 8;
        lVar6 = lVar6 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
      lVar6 = param_1[1];
      local_68 = param_1[2];
      lVar5 = local_68 - lVar6 >> 3;
    }
    local_78 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar3;
    local_60 = param_1[3];
    param_1[2] = lVar3 + lVar5 * 8;
    param_1[3] = lVar4;
    lStack_70 = lVar6;
    FUN_015f9934(&local_78);
  }
  return;
}


