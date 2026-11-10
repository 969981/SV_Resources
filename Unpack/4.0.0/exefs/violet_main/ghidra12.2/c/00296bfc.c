/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00296bfc; name: FUN_00296bfc
 */


void FUN_00296bfc(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_0448d9e8;
  puVar1 = PTR_LAB_047cba48;
  if (param_1[2] == 0) {
    return;
  }
  param_1[3] = param_1[2];
  FUN_0049e790(puVar1);
  return;
}


