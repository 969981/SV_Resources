/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031a00; name: _INIT_560
 */


void _INIT_560(void)

{
  if ((DAT_048707f0 & 1) == 0) {
    DAT_048707e0 = 0;
    DAT_048707e8 = 0;
    DAT_048707d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048707d0;
    DAT_048707d8 = &DAT_0463bc30;
    DAT_048707f0 = 1;
  }
  return;
}


