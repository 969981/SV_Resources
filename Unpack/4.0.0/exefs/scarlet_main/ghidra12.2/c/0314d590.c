/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d590; name: _INIT_1151
 */


void _INIT_1151(void)

{
  if ((DAT_04879598 & 1) == 0) {
    DAT_04879588 = 0;
    DAT_04879590 = 0;
    DAT_04879578 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879578;
    DAT_04879580 = &DAT_0467a088;
    DAT_04879598 = 1;
  }
  return;
}


