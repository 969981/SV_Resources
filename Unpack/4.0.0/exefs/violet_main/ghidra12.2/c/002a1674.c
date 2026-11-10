/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a1674; name: FUN_002a1674
 */


void FUN_002a1674(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[5];
  *param_1 = &PTR_FUN_0448e1f0;
  param_1[5] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[4]);
  return;
}


