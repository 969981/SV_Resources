/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03047440; name: _INIT_826
 */


void _INIT_826(void)

{
  if ((DAT_04873148 & 1) == 0) {
    DAT_04873138 = 0;
    DAT_04873140 = 0;
    DAT_04873128 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873128;
    DAT_04873130 = &DAT_0464c1f0;
    DAT_04873148 = 1;
  }
  return;
}


