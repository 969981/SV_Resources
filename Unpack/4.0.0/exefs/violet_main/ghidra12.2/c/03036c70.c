/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036c70; name: _INIT_818
 */


void _INIT_818(void)

{
  if ((DAT_04873030 & 1) == 0) {
    DAT_04873020 = 0;
    DAT_04873028 = 0;
    DAT_04873010 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873010;
    DAT_04873018 = &DAT_0464b9b0;
    DAT_04873030 = 1;
  }
  return;
}


