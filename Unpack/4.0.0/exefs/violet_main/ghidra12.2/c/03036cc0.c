/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036cc0; name: _INIT_819
 */


void _INIT_819(void)

{
  if ((DAT_04873058 & 1) == 0) {
    DAT_04873048 = 0;
    DAT_04873050 = 0;
    DAT_04873038 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873038;
    DAT_04873040 = &DAT_0464bad0;
    DAT_04873058 = 1;
  }
  return;
}


