/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148550; name: _INIT_959
 */


void _INIT_959(void)

{
  if ((DAT_04877798 & 1) == 0) {
    DAT_04877788 = 0;
    DAT_04877790 = 0;
    DAT_04877778 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877778;
    DAT_04877780 = &DAT_0466e6a8;
    DAT_04877798 = 1;
  }
  return;
}


