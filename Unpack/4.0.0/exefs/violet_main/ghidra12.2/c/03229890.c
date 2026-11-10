/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03229890; name: _INIT_1674
 */


void _INIT_1674(void)

{
  if ((DAT_04885500 & 1) == 0) {
    DAT_048854f0 = 0;
    DAT_048854f8 = 0;
    DAT_048854e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048854e0;
    DAT_048854e8 = &DAT_046aab48;
    DAT_04885500 = 1;
  }
  return;
}


