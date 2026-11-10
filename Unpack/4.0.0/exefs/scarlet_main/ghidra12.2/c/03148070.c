/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148070; name: _INIT_949
 */


void _INIT_949(void)

{
  if ((DAT_04877608 & 1) == 0) {
    DAT_048775f8 = 0;
    DAT_04877600 = 0;
    DAT_048775e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048775e8;
    DAT_048775f0 = &DAT_0466dd68;
    DAT_04877608 = 1;
  }
  return;
}


