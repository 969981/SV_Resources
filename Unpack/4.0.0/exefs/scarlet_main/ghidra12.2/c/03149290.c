/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149290; name: _INIT_996
 */


void _INIT_996(void)

{
  if ((DAT_04877d60 & 1) == 0) {
    DAT_04877d50 = 0;
    DAT_04877d58 = 0;
    DAT_04877d40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877d40;
    DAT_04877d48 = &DAT_04670d10;
    DAT_04877d60 = 1;
  }
  return;
}


