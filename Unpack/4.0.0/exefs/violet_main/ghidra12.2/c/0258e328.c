/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0258e328; name: FUN_0258e328
 */


void FUN_0258e328(long *param_1,undefined1 *param_2,code *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_b0 [128];
  long in_stack_ffffffffffffffe8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
      plVar2 = (long *)(*param_3)();
      plVar2 = (long *)*plVar2;
      *param_1 = (long)plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0258e3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return;
      }
    }
    return;
  case 1:
    break;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(lVar3 + lVar1 + -0x28));
      }
      plVar2 = (long *)(*param_3)();
      plVar2 = (long *)*plVar2;
      *param_1 = (long)plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0258e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return;
      }
    }
    return;
  case 3:
    FUN_0258e510(auStack_b0 + 0x98,param_2 + 8);
    if (in_stack_ffffffffffffffe8 == 0) {
      FUN_0258e108(auStack_b0 + 0x98);
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(in_stack_ffffffffffffffe8 + lVar1));
      }
      plVar2 = (long *)(*param_3)();
      plVar2 = (long *)*plVar2;
      *param_1 = (long)plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      FUN_0258e108(auStack_b0 + 0x98);
    }
    return;
  default:
    *param_1 = 0;
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
    plVar2 = (long *)(*param_3)();
    plVar2 = (long *)*plVar2;
    *param_1 = (long)plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0258e414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}


