/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148f20; name: _INIT_985
 */


void _INIT_985(void)

{
  if ((DAT_04877ba8 & 1) == 0) {
    DAT_04877b98 = 0;
    DAT_04877ba0 = 0;
    DAT_04877b88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877b88;
    DAT_04877b90 = &DAT_04670250;
    DAT_04877ba8 = 1;
  }
  return;
}


