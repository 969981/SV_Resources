/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147ee0; name: _INIT_944
 */


void _INIT_944(void)

{
  if ((DAT_04877540 & 1) == 0) {
    DAT_04877530 = 0;
    DAT_04877538 = 0;
    DAT_04877520 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877520;
    DAT_04877528 = &DAT_0466d910;
    DAT_04877540 = 1;
  }
  return;
}


