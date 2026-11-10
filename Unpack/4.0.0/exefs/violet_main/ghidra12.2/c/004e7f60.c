/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e7f60; name: FUN_004e7f60
 */


void FUN_004e7f60(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047cba48;
  if (*param_1 == 0) {
    return;
  }
  param_1[1] = *param_1;
  FUN_0049e790(puVar1);
  return;
}


