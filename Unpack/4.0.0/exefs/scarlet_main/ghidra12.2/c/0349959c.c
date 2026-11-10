/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349959c; name: FUN_0349959c
 */


undefined8 FUN_0349959c(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)0x0;
    do {
      plVar3 = plVar4 + 1;
      plVar4 = (long *)*plVar4;
      if (*plVar3 != param_2) {
        plVar3 = plVar2;
      }
      plVar2 = plVar3;
    } while (plVar4 != (long *)0x0);
    if (plVar3 != (long *)0x0) goto LAB_03499674;
  }
  plVar2 = param_1 + 2;
  plVar4 = (long *)*plVar2;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
    if (plVar4 == (long *)0x0) {
      return 2;
    }
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = *plVar2;
    *plVar2 = (long)plVar4;
  }
  if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
    *param_1 = (long)plVar4;
  }
  else {
    *(undefined8 *)param_1[1] = plVar4;
    plVar4 = (long *)*plVar2;
  }
  param_1[1] = (long)plVar4;
  param_1[2] = *plVar4;
  *plVar4 = 0;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  plVar3 = (long *)(param_1[1] + 8);
  *plVar3 = param_2;
  *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
  *(int *)(*plVar3 + 0x84) = *(int *)(*plVar3 + 0x84) + 1;
LAB_03499674:
  lVar1 = *param_4;
  if (lVar1 != 0) {
    if ((int)param_4[2] - 4U < 2) {
      FUN_034875d8(lVar1,plVar3 + 1,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10),*param_3);
    }
    else if ((int)param_4[2] == 2) {
      FUN_034abc18(lVar1 + -0x38,plVar3 + 1,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10),
                   *param_3,1);
      return 1;
    }
  }
  return 1;
}


