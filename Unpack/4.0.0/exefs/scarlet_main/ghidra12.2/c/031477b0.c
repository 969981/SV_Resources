/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031477b0; name: _INIT_933
 */


void _INIT_933(void)

{
  if ((DAT_04877388 & 1) == 0) {
    DAT_04877378 = 0;
    DAT_04877380 = 0;
    DAT_04877368 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877368;
    DAT_04877370 = &DAT_0466ce68;
    DAT_04877388 = 1;
  }
  return;
}


