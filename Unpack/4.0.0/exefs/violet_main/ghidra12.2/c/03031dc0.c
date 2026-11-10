/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031dc0; name: _INIT_572
 */


void _INIT_572(void)

{
  if ((DAT_048709d0 & 1) == 0) {
    DAT_048709c0 = 0;
    DAT_048709c8 = 0;
    DAT_048709b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048709b0;
    DAT_048709b8 = &DAT_0463c818;
    DAT_048709d0 = 1;
  }
  return;
}


