/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c79dc; name: FUN_008c79dc
 */


void FUN_008c79dc(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x150) != param_1) {
    *(float *)(param_2 + 0x150) = param_1;
    *(byte *)(param_2 + 0x158) = *(byte *)(param_2 + 0x158) | 1;
  }
  return;
}


