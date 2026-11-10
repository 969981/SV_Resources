/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ef184; name: FUN_028ef184
 */


void FUN_028ef184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[6] = 0;
  param_1[4] = uVar1;
  param_1[5] = 0;
  FUN_00d0a71c(param_1 + 5,param_2 + 1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 3);
  *param_1 = &LAB_028ef558;
  param_1[1] = &LAB_028ef68c;
  param_1[2] = &LAB_028ef79c;
  param_1[3] = &LAB_028ef7e0;
  return;
}


