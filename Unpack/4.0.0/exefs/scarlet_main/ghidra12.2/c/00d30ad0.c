/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d30ad0; name: FUN_00d30ad0
 */


void FUN_00d30ad0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *local_18;
  
  if (param_3 == 0) {
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    plVar1 = (long *)param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = plVar1;
joined_r0x00d30b38:
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d30b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  else {
    if (param_3 == 1) {
      pcVar2 = "--SubView1";
    }
    else if (param_3 == 2) {
      pcVar2 = "--SubView2";
    }
    else {
      if (param_3 != 3) {
        uVar3 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar3;
        plVar1 = (long *)param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = plVar1;
        goto joined_r0x00d30b38;
      }
      pcVar2 = "--SubView3";
    }
    FUN_00d3c214(&local_18,param_2,pcVar2);
    FUN_0135d26c(param_1,&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


