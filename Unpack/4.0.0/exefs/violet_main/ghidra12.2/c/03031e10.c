/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031e10; name: _INIT_573
 */


void _INIT_573(void)

{
  if ((DAT_048709f8 & 1) == 0) {
    DAT_048709e8 = 0;
    DAT_048709f0 = 0;
    DAT_048709d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048709d8;
    DAT_048709e0 = &DAT_0463c8f8;
    DAT_048709f8 = 1;
  }
  return;
}


