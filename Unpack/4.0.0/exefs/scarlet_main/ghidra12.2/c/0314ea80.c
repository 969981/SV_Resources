/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ea80; name: _INIT_1218
 */


void _INIT_1218(void)

{
  if ((DAT_0487a010 & 1) == 0) {
    DAT_0487a000 = 0;
    DAT_0487a008 = 0;
    DAT_04879ff0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879ff0;
    DAT_04879ff8 = &DAT_0467e348;
    DAT_0487a010 = 1;
  }
  return;
}


