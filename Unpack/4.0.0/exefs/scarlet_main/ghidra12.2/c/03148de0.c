/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148de0; name: _INIT_981
 */


void _INIT_981(void)

{
  if ((DAT_04877b08 & 1) == 0) {
    DAT_04877af8 = 0;
    DAT_04877b00 = 0;
    DAT_04877ae8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ae8;
    DAT_04877af0 = &DAT_0466fe20;
    DAT_04877b08 = 1;
  }
  return;
}


