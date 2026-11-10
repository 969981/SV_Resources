/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f820; name: _INIT_1257
 */


void _INIT_1257(void)

{
  if ((DAT_0487a628 & 1) == 0) {
    DAT_0487a618 = 0;
    DAT_0487a620 = 0;
    DAT_0487a608 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a608;
    DAT_0487a610 = &DAT_046807a0;
    DAT_0487a628 = 1;
  }
  return;
}


