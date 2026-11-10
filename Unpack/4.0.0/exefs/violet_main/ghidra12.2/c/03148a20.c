/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148a20; name: _INIT_969
 */


void _INIT_969(void)

{
  if ((DAT_04877928 & 1) == 0) {
    DAT_04877918 = 0;
    DAT_04877920 = 0;
    DAT_04877908 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877908;
    DAT_04877910 = &DAT_0466f050;
    DAT_04877928 = 1;
  }
  return;
}


