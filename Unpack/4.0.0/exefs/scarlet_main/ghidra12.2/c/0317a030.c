/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a030; name: _INIT_1418
 */


void _INIT_1418(void)

{
  if ((DAT_0487cc18 & 1) == 0) {
    DAT_0487cc08 = 0;
    DAT_0487cc10 = 0;
    DAT_0487cbf8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cbf8;
    DAT_0487cc00 = &DAT_04692d78;
    DAT_0487cc18 = 1;
  }
  return;
}


