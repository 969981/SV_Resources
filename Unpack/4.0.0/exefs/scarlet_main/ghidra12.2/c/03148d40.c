/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148d40; name: _INIT_979
 */


void _INIT_979(void)

{
  if ((DAT_04877ab8 & 1) == 0) {
    DAT_04877aa8 = 0;
    DAT_04877ab0 = 0;
    DAT_04877a98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877a98;
    DAT_04877aa0 = &DAT_0466fbc8;
    DAT_04877ab8 = 1;
  }
  return;
}


