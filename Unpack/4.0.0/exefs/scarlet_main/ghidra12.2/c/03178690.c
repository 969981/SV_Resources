/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178690; name: _INIT_1370
 */


void _INIT_1370(void)

{
  if ((DAT_0487c498 & 1) == 0) {
    DAT_0487c488 = 0;
    DAT_0487c490 = 0;
    DAT_0487c478 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c478;
    DAT_0487c480 = &DAT_0468fc00;
    DAT_0487c498 = 1;
  }
  return;
}


