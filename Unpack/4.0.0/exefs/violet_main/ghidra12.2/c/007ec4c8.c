/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec4c8; name: FUN_007ec4c8
 */


void FUN_007ec4c8(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x40) != param_2) {
    *(long *)(param_1 + 0x40) = param_2;
  }
  return;
}


