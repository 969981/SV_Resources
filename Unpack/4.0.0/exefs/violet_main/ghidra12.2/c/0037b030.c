/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037b030; name: FUN_0037b030
 */


void FUN_0037b030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = 1;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined4 *)(param_1 + 6) = 3;
  param_1[4] = 0;
  param_1[5] = param_1;
  puVar1 = PTR_LAB_047ccf88;
  param_1[9] = param_1;
  param_1[7] = param_1 + 5;
  param_1[8] = puVar1;
  return;
}


