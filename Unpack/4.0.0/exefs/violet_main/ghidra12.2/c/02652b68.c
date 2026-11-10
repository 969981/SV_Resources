/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02652b68; name: FUN_02652b68
 */


void FUN_02652b68(undefined8 *param_1,byte *param_2,code *param_3,ulong param_4,undefined8 *param_5,
                 undefined1 *param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  
  if (3 < *param_2) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar2);
      }
      plVar4 = (long *)param_5[3];
      param_5[3] = 0;
      (*param_3)(plVar2,(long)register0x00000008 + -0x30,*param_6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar2);
      }
      plVar4 = (long *)param_5[3];
      param_5[3] = 0;
      (*param_3)(plVar2,(long)register0x00000008 + -0x30,*param_6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar2);
      }
      plVar4 = (long *)param_5[3];
      param_5[3] = 0;
      (*param_3)(plVar2,(long)register0x00000008 + -0x30,*param_6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    return;
  case 3:
    FUN_02652a88(&local_48,param_2 + 8);
    if (local_48 == 0) {
      FUN_02652898(&local_48);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      local_68 = *param_5;
      uStack_60 = param_5[1];
      local_58 = param_5[2];
      plVar2 = (long *)param_5[3];
      param_5[3] = 0;
      plStack_50 = plVar2;
      FUN_02652ddc(param_1,&local_48,param_3,param_4,&local_68,*param_6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      FUN_02652898(&local_48);
    }
    return;
  }
}


