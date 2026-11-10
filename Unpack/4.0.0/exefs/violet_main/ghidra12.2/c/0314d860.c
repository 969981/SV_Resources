/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d860; name: _INIT_1160
 */


void _INIT_1160(void)

{
  if ((DAT_04879700 & 1) == 0) {
    DAT_048796f0 = 0;
    DAT_048796f8 = 0;
    DAT_048796e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048796e0;
    DAT_048796e8 = &DAT_0467a990;
    DAT_04879700 = 1;
  }
  return;
}


