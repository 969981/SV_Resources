/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175ec0; name: _INIT_1287
 */


void _INIT_1287(void)

{
  if ((DAT_0487b7a0 & 1) == 0) {
    DAT_0487b790 = 0;
    DAT_0487b798 = 0;
    DAT_0487b780 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b780;
    DAT_0487b788 = &DAT_0468a228;
    DAT_0487b7a0 = 1;
  }
  return;
}


