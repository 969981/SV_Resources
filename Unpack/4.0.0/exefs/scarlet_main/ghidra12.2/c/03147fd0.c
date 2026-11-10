/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147fd0; name: _INIT_947
 */


void _INIT_947(void)

{
  if ((DAT_048775b8 & 1) == 0) {
    DAT_048775a8 = 0;
    DAT_048775b0 = 0;
    DAT_04877598 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877598;
    DAT_048775a0 = &DAT_0466dbb0;
    DAT_048775b8 = 1;
  }
  return;
}


