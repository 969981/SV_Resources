/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124bd20; name: FUN_0124bd20
 */


ulong FUN_0124bd20(long param_1)

{
  switch((uint)*(ulong *)(param_1 + 8) & 7) {
  case 1:
  case 2:
  case 3:
  case 4:
    return *(ulong *)(param_1 + 8) >> 0x19 & 1;
  default:
    return 0;
  }
}


