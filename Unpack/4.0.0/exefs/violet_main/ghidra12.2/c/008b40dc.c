/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b40dc; name: FUN_008b40dc
 */


void FUN_008b40dc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


