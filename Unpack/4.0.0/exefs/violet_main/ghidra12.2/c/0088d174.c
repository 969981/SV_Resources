/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088d174; name: FUN_0088d174
 */


void FUN_0088d174(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00896e98();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00896e98();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


