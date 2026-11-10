/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0191983c; name: FUN_0191983c
 */


void FUN_0191983c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_2;
  *param_1 = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  plVar1 = (long *)param_2[4];
  param_1[4] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  lVar2 = *param_3;
  param_1[7] = 0;
  param_1[6] = lVar2;
  param_1[8] = 0;
  FUN_00dc7a68(param_1 + 7,param_3 + 1);
  return;
}


