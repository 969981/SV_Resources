/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145860; name: _INIT_858
 */


void _INIT_858(void)

{
  if ((DAT_048767d0 & 1) == 0) {
    DAT_048767c0 = 0;
    DAT_048767c8 = 0;
    DAT_048767b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048767b0;
    DAT_048767b8 = &DAT_04668a20;
    DAT_048767d0 = 1;
  }
  return;
}


