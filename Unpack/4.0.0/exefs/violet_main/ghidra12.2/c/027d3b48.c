/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d3b48; name: FUN_027d3b48
 */


void FUN_027d3b48(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  plVar1 = (long *)param_1[3];
  param_2[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_027c9cd8(param_2 + 4,param_1 + 4);
  return;
}


