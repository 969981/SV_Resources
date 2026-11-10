/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030367c0; name: _INIT_809
 */


void _INIT_809(void)

{
  if ((DAT_04872ec8 & 1) == 0) {
    DAT_04872eb8 = 0;
    DAT_04872ec0 = 0;
    DAT_04872ea8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ea8;
    DAT_04872eb0 = &DAT_0464af90;
    DAT_04872ec8 = 1;
  }
  return;
}


