/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035780; name: _INIT_757
 */


void _INIT_757(void)

{
  if ((DAT_048726a8 & 1) == 0) {
    DAT_04872698 = 0;
    DAT_048726a0 = 0;
    DAT_04872688 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872688;
    DAT_04872690 = &DAT_04647708;
    DAT_048726a8 = 1;
  }
  return;
}


