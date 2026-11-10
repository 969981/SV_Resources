/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031640; name: _INIT_548
 */


void _INIT_548(void)

{
  if ((DAT_04870610 & 1) == 0) {
    DAT_04870600 = 0;
    DAT_04870608 = 0;
    DAT_048705f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048705f0;
    DAT_048705f8 = &DAT_0463b0e0;
    DAT_04870610 = 1;
  }
  return;
}


