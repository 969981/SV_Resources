/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149830; name: _INIT_1014
 */


void _INIT_1014(void)

{
  if ((DAT_04878030 & 1) == 0) {
    DAT_04878020 = 0;
    DAT_04878028 = 0;
    DAT_04878010 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878010;
    DAT_04878018 = &DAT_04671fd0;
    DAT_04878030 = 1;
  }
  return;
}


