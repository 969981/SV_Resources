/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033ed0; name: _INIT_678
 */


void _INIT_678(void)

{
  if ((DAT_04871a50 & 1) == 0) {
    DAT_04871a40 = 0;
    DAT_04871a48 = 0;
    DAT_04871a30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871a30;
    DAT_04871a38 = &DAT_04642b90;
    DAT_04871a50 = 1;
  }
  return;
}


