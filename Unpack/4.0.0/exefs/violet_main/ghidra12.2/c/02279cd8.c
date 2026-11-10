/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02279cd8; name: FUN_02279cd8
 */


void FUN_02279cd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*(long **)(param_1 + 0x20))[1];
  for (puVar2 = (undefined8 *)**(long **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_02279568(*(undefined8 *)(param_1 + 0x18),*puVar2);
  }
  FUN_01f56340(*(long *)(param_1 + 0x18) + 0x128,0);
  return;
}


