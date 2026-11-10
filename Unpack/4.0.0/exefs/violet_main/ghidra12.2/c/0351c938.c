/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351c938; name: FUN_0351c938
 */


void FUN_0351c938(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  plVar3 = (long *)param_1[6];
  while (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    plVar3 = (long *)plVar3[1];
    (**(code **)(lVar1 + 8))();
  }
  if ((*(byte *)((long)param_1 + 0x5a) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  iVar2 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_03518540(param_1);
  }
  else {
    FUN_0351c44c(param_1[2],param_1);
    param_1[2] = 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0351c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  return;
}


