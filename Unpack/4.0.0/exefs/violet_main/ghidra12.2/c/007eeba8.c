/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eeba8; name: FUN_007eeba8
 */


void FUN_007eeba8(long param_1,uint param_2)

{
  if (0xffffffe < param_2) {
    param_2 = 0xfffffff;
  }
  *(uint *)(param_1 + 0x60) = param_2;
  return;
}


