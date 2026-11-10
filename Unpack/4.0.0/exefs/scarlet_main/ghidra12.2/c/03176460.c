/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176460; name: _INIT_1305
 */


void _INIT_1305(void)

{
  if ((DAT_0487ba70 & 1) == 0) {
    DAT_0487ba60 = 0;
    DAT_0487ba68 = 0;
    DAT_0487ba50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ba50;
    DAT_0487ba58 = &DAT_0468b838;
    DAT_0487ba70 = 1;
  }
  return;
}


