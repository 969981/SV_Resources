/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b020; name: _INIT_1073
 */


void _INIT_1073(void)

{
  if ((DAT_04878968 & 1) == 0) {
    DAT_04878958 = 0;
    DAT_04878960 = 0;
    DAT_04878948 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878948;
    DAT_04878950 = &DAT_04675828;
    DAT_04878968 = 1;
  }
  return;
}


