/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147090; name: _INIT_920
 */


void _INIT_920(void)

{
  if ((DAT_04877180 & 1) == 0) {
    DAT_04877170 = 0;
    DAT_04877178 = 0;
    DAT_04877160 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877160;
    DAT_04877168 = &DAT_0466c370;
    DAT_04877180 = 1;
  }
  return;
}


