/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ac50; name: _INIT_1066
 */


void _INIT_1066(void)

{
  if ((DAT_04878850 & 1) == 0) {
    DAT_04878840 = 0;
    DAT_04878848 = 0;
    DAT_04878830 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878830;
    DAT_04878838 = &DAT_04675210;
    DAT_04878850 = 1;
  }
  return;
}


