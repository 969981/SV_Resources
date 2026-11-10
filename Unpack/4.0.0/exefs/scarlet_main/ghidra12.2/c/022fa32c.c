/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022fa32c; name: FUN_022fa32c
 */


void FUN_022fa32c(undefined8 *param_1,char *param_2,code *param_3,ulong param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar1);
      }
      puVar2 = (undefined8 *)(*param_3)(plVar1,*param_5);
      uVar3 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar3;
      plVar1 = (long *)puVar2[3];
      param_1[2] = puVar2[2];
      param_1[3] = plVar1;
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022fa454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x18))();
        return;
      }
    }
    return;
  }
  if (*param_2 != '\0') {
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
    plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    puVar2 = (undefined8 *)(*param_3)(plVar1,*param_5);
    uVar3 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar3;
    plVar1 = (long *)puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = plVar1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022fa3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


