/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031490b0; name: _INIT_990
 */


void _INIT_990(void)

{
  if ((DAT_04877c70 & 1) == 0) {
    DAT_04877c60 = 0;
    DAT_04877c68 = 0;
    DAT_04877c50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877c50;
    DAT_04877c58 = &DAT_04670790;
    DAT_04877c70 = 1;
  }
  return;
}


