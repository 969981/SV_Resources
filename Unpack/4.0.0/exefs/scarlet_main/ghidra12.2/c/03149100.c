/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149100; name: _INIT_991
 */


void _INIT_991(void)

{
  if ((DAT_04877c98 & 1) == 0) {
    DAT_04877c88 = 0;
    DAT_04877c90 = 0;
    DAT_04877c78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877c78;
    DAT_04877c80 = &DAT_04670908;
    DAT_04877c98 = 1;
  }
  return;
}


