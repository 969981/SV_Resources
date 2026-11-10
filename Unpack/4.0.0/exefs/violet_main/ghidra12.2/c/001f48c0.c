/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f48c0; name: FUN_001f48c0
 */


void FUN_001f48c0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_001f45b0(param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  return;
}


