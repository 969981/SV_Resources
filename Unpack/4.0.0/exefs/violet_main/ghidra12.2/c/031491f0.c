/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031491f0; name: _INIT_994
 */


void _INIT_994(void)

{
  if ((DAT_04877d10 & 1) == 0) {
    DAT_04877d00 = 0;
    DAT_04877d08 = 0;
    DAT_04877cf0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877cf0;
    DAT_04877cf8 = &DAT_04670c70;
    DAT_04877d10 = 1;
  }
  return;
}


