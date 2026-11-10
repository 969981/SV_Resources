/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033660; name: _INIT_651
 */


void _INIT_651(void)

{
  if ((DAT_04871618 & 1) == 0) {
    DAT_04871608 = 0;
    DAT_04871610 = 0;
    DAT_048715f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048715f8;
    DAT_04871600 = &DAT_046411f0;
    DAT_04871618 = 1;
  }
  return;
}


