/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025a441c; name: FUN_025a441c
 */


void FUN_025a441c(undefined8 *param_1,undefined1 *param_2,code *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  long in_stack_ffffffffffffffe8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
    uVar2 = (*param_3)();
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ca1a48(param_1,uVar2);
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
    uVar2 = (*param_3)();
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ca1a48(param_1,uVar2);
    return;
  case 2:
    break;
  case 3:
    if (*(long *)(param_2 + 8) == 0) {
      local_38 = 0;
    }
    else {
      FUN_025a4318((long)register0x00000008 + -0x18);
      local_38 = in_stack_ffffffffffffffe8;
      if (in_stack_ffffffffffffffe8 != 0) {
        if ((param_4 & 1) != 0) {
          param_3 = *(code **)(param_3 + *(long *)(in_stack_ffffffffffffffe8 + lVar1));
        }
        uVar2 = (*param_3)();
        *param_1 = 0;
        param_1[1] = 0;
        FUN_00ca1a48(param_1,uVar2);
        FUN_025a43a4(&local_38);
        return;
      }
    }
    FUN_025a43a4(&local_38);
    *param_1 = 0;
    param_1[1] = 0;
    return;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *(long *)(lVar3 + lVar1 + -0x28));
  }
  uVar2 = (*param_3)();
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ca1a48(param_1,uVar2);
  return;
}


