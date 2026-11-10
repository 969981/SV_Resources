/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148b10; name: _INIT_972
 */


void _INIT_972(void)

{
  if ((DAT_048779a0 & 1) == 0) {
    DAT_04877990 = 0;
    DAT_04877998 = 0;
    DAT_04877980 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877980;
    DAT_04877988 = &DAT_0466f300;
    DAT_048779a0 = 1;
  }
  return;
}


