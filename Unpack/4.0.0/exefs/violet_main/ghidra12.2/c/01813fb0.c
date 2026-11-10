/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01813fb0; name: FUN_01813fb0
 */


void FUN_01813fb0(long param_1,int param_2)

{
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3))
  {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x2a0) + (long)param_2 * 8) + 0x1e4) = 1;
    return;
  }
  return;
}


