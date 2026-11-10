/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034330; name: _INIT_692
 */


void _INIT_692(void)

{
  if ((DAT_04871c80 & 1) == 0) {
    DAT_04871c70 = 0;
    DAT_04871c78 = 0;
    DAT_04871c60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871c60;
    DAT_04871c68 = &DAT_046438c0;
    DAT_04871c80 = 1;
  }
  return;
}


