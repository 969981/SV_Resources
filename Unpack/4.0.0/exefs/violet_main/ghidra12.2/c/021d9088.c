/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d9088; name: FUN_021d9088
 */


void FUN_021d9088(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  while ((undefined8 *)(param_1 + 0xa8) != puVar1) {
    puVar2 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_021d9cec(param_1 + 0x78);
  FUN_014de598(param_1);
  return;
}


