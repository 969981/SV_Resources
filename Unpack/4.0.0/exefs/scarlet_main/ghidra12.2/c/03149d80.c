/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149d80; name: _INIT_1031
 */


void _INIT_1031(void)

{
  if ((DAT_048782d8 & 1) == 0) {
    DAT_048782c8 = 0;
    DAT_048782d0 = 0;
    DAT_048782b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048782b8;
    DAT_048782c0 = &DAT_046731f8;
    DAT_048782d8 = 1;
  }
  return;
}


