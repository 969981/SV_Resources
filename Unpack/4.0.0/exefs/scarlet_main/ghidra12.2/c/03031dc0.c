/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031dc0; name: _INIT_572
 */


void _INIT_572(void)

{
  if ((DAT_048709d0 & 1) == 0) {
    DAT_048709c0 = 0;
    DAT_048709c8 = 0;
    DAT_048709b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048709b0;
    DAT_048709b8 = &DAT_0463c818;
    DAT_048709d0 = 1;
  }
  return;
}


