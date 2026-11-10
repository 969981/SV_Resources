/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0334c790; name: _INIT_2049
 */


void _INIT_2049(void)

{
  if ((DAT_0488d938 & 1) == 0) {
    DAT_0488d928 = 0;
    DAT_0488d930 = 0;
    DAT_0488d918 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488d918;
    DAT_0488d920 = &DAT_047ad380;
    DAT_0488d938 = 1;
  }
  return;
}


