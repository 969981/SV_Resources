/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178230; name: _INIT_1356
 */


void _INIT_1356(void)

{
  if ((DAT_0487c268 & 1) == 0) {
    DAT_0487c258 = 0;
    DAT_0487c260 = 0;
    DAT_0487c248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c248;
    DAT_0487c250 = &DAT_0468ed10;
    DAT_0487c268 = 1;
  }
  return;
}


