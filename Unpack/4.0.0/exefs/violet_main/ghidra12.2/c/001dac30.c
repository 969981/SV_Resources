/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001dac30; name: FUN_001dac30
 */


void FUN_001dac30(long param_1)

{
  *(undefined8 *)(param_1 + 0xf80) = 0;
  *(undefined8 *)(param_1 + 0xf88) = 0;
  *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xffffff9f;
  return;
}


