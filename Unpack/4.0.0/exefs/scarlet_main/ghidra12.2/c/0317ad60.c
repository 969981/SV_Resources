/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317ad60; name: _INIT_1431
 */


void _INIT_1431(void)

{
  if ((DAT_0487ce20 & 1) == 0) {
    DAT_0487ce10 = 0;
    DAT_0487ce18 = 0;
    DAT_0487ce00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ce00;
    DAT_0487ce08 = &DAT_04693900;
    DAT_0487ce20 = 1;
  }
  return;
}


