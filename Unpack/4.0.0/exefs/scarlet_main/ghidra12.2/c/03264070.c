/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264070; name: _INIT_1816
 */


void _INIT_1816(void)

{
  if ((DAT_04889b88 & 1) == 0) {
    DAT_04889b78 = 0;
    DAT_04889b80 = 0;
    DAT_04889b68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889b68;
    DAT_04889b70 = &DAT_046c3838;
    DAT_04889b88 = 1;
  }
  return;
}


