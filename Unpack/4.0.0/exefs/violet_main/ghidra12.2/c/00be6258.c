/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be6258; name: FUN_00be6258
 */


void FUN_00be6258(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_40;
  long *local_38;
  
  if (param_1 == param_2) {
    return;
  }
  plVar3 = (long *)param_1[1];
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)param_2[1];
    if (plVar4 != (long *)0x0) {
      lVar5 = 0;
      goto LAB_00be62b0;
    }
LAB_00be6338:
    param_1[1] = param_2[1];
    param_2[1] = plVar3;
    uVar1 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar1;
    uVar1 = *(undefined4 *)((long)param_1 + 4);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
    *(undefined4 *)((long)param_2 + 4) = uVar1;
  }
  else {
    lVar5 = *plVar3;
    plVar4 = (long *)param_2[1];
    if (plVar4 == (long *)0x0) {
      if (lVar5 == 0) goto LAB_00be6338;
      local_40 = 0;
      local_38 = (long *)0x0;
    }
    else {
LAB_00be62b0:
      lVar6 = *plVar4;
      if (lVar5 == lVar6) goto LAB_00be6338;
      local_40 = 0;
      local_38 = (long *)0x0;
      if (lVar6 != 0) {
        local_38 = (long *)FUN_00c0e238(lVar6,0,8);
        *local_38 = lVar6;
      }
    }
    FUN_00bf4c54(&local_40,param_1);
    *(undefined4 *)param_1 = 0;
    FUN_00bf4c54(param_1,param_2);
    if (&local_40 == param_2) {
      plVar3 = (long *)param_2[1];
    }
    else {
      plVar3 = (long *)param_2[1];
      param_2[1] = local_38;
      uVar2 = *param_2;
      *(undefined4 *)param_2 = (undefined4)local_40;
      *(undefined4 *)((long)param_2 + 4) = local_40._4_4_;
      local_40 = uVar2;
      local_38 = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (*plVar3 == 0)) {
      operator_delete__(plVar3);
    }
  }
  return;
}


