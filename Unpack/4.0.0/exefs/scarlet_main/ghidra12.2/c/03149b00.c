/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149b00; name: _INIT_1023
 */


void _INIT_1023(void)

{
  if ((DAT_04878198 & 1) == 0) {
    DAT_04878188 = 0;
    DAT_04878190 = 0;
    DAT_04878178 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878178;
    DAT_04878180 = &DAT_046729f0;
    DAT_04878198 = 1;
  }
  return;
}


