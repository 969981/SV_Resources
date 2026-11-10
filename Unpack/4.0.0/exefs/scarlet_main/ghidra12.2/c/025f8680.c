/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025f8680; name: FUN_025f8680
 */


void FUN_025f8680(undefined8 *param_1,undefined1 *param_2,code *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [128];
  long in_stack_ffffffffffffffe8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
      puVar3 = (undefined8 *)(*param_3)();
      uVar5 = puVar3[1];
      *param_1 = *puVar3;
      param_1[1] = uVar5;
      plVar2 = (long *)puVar3[3];
      param_1[2] = puVar3[2];
      param_1[3] = plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x025f8738. Too many branches */
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
       (lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar4 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(lVar4 + lVar1 + -0x28));
      }
      puVar3 = (undefined8 *)(*param_3)();
      uVar5 = puVar3[1];
      *param_1 = *puVar3;
      param_1[1] = uVar5;
      plVar2 = (long *)puVar3[3];
      param_1[2] = puVar3[2];
      param_1[3] = plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x025f884c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return;
      }
    }
    return;
  case 3:
    FUN_025f85a0(auStack_b0 + 0x98,param_2 + 8);
    if (in_stack_ffffffffffffffe8 == 0) {
      FUN_025f6e14(auStack_b0 + 0x98);
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(in_stack_ffffffffffffffe8 + lVar1));
      }
      puVar3 = (undefined8 *)(*param_3)();
      uVar5 = puVar3[1];
      *param_1 = *puVar3;
      param_1[1] = uVar5;
      plVar2 = (long *)puVar3[3];
      param_1[2] = puVar3[2];
      param_1[3] = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      FUN_025f6e14(auStack_b0 + 0x98);
    }
    return;
  default:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
    puVar3 = (undefined8 *)(*param_3)();
    uVar5 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar5;
    plVar2 = (long *)puVar3[3];
    param_1[2] = puVar3[2];
    param_1[3] = plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x025f87bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}


