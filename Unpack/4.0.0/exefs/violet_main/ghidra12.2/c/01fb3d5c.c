/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb3d5c; name: FUN_01fb3d5c
 */


void FUN_01fb3d5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00ca1ea4(param_1 + 4,param_3);
  return;
}


