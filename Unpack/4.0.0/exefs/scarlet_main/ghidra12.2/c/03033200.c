/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033200; name: _INIT_637
 */


void _INIT_637(void)

{
  if ((DAT_048713e8 & 1) == 0) {
    DAT_048713d8 = 0;
    DAT_048713e0 = 0;
    DAT_048713c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048713c8;
    DAT_048713d0 = &DAT_04640620;
    DAT_048713e8 = 1;
  }
  return;
}


