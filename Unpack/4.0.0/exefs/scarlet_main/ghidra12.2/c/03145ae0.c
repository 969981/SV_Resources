/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145ae0; name: _INIT_866
 */


void _INIT_866(void)

{
  if ((DAT_04876910 & 1) == 0) {
    DAT_04876900 = 0;
    DAT_04876908 = 0;
    DAT_048768f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048768f0;
    DAT_048768f8 = &DAT_04669110;
    DAT_04876910 = 1;
  }
  return;
}


