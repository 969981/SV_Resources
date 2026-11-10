/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027844c8; name: FUN_027844c8
 */


void FUN_027844c8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &DAT_045df630;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}


