/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033786b0; name: _INIT_2061
 */


void _INIT_2061(void)

{
  if ((DAT_0488deb0 & 1) == 0) {
    DAT_0488dea0 = 0;
    DAT_0488dea8 = 0;
    DAT_0488de90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488de90;
    DAT_0488de98 = &DAT_047ae7e8;
    DAT_0488deb0 = 1;
  }
  return;
}


