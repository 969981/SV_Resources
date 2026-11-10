/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ad750; name: _INIT_840
 */


void _INIT_840(void)

{
  if ((DAT_04873468 & 1) == 0) {
    DAT_04873458 = 0;
    DAT_04873460 = 0;
    DAT_04873448 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873448;
    DAT_04873450 = &DAT_0464d3f8;
    DAT_04873468 = 1;
  }
  return;
}


