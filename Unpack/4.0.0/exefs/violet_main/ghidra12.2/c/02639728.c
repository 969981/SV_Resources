/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02639728; name: FUN_02639728
 */


void FUN_02639728(undefined8 *param_1,byte *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  undefined8 local_28;
  
  if (3 < *param_2) {
    *param_1 = 0;
    return;
  }
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
    }
    else {
      plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar2);
      }
      local_28 = param_5[1];
      plVar4 = (long *)param_5[3];
      param_5[3] = 0;
      (*param_3)(plVar2,(long)register0x00000008 + -0x30);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
    }
    else {
      plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar2);
      }
      local_28 = param_5[1];
      plVar4 = (long *)param_5[3];
      param_5[3] = 0;
      (*param_3)(plVar2,(long)register0x00000008 + -0x30);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
      *param_1 = 0;
    }
    else {
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar2);
      }
      local_28 = param_5[1];
      plVar4 = (long *)param_5[3];
      param_5[3] = 0;
      (*param_3)(plVar2,(long)register0x00000008 + -0x30);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    return;
  case 3:
    FUN_02638c9c(&local_28,param_2 + 8);
    if (local_28 == 0) {
      FUN_02638788(&local_28);
      *param_1 = 0;
    }
    else {
      local_60 = *param_5;
      uStack_58 = param_5[1];
      local_50 = param_5[2];
      plVar2 = (long *)param_5[3];
      param_5[3] = 0;
      plStack_48 = plVar2;
      FUN_02639988(param_1,&local_28,param_3,param_4,&local_60);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      FUN_02638788(&local_28);
    }
    return;
  }
}


