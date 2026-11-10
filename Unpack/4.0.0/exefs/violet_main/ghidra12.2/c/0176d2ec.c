/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0176d2ec; name: FUN_0176d2ec
 */


void FUN_0176d2ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = *param_3;
  param_1[7] = &LAB_02b2d8e4;
  param_1[8] = uVar2;
  param_1[6] = &LAB_02b2d8d8;
  param_1[4] = FUN_0152cb9c;
  param_1[5] = &LAB_02b2d8b8;
  return;
}


