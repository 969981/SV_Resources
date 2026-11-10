/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec4f8; name: FUN_007ec4f8
 */


void FUN_007ec4f8(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a) != param_2) {
    *(char *)(param_1 + 0x4a) = param_2;
  }
  return;
}


