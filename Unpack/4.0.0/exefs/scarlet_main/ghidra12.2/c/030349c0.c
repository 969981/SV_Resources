/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030349c0; name: _INIT_713
 */


void _INIT_713(void)

{
  if ((DAT_04871fc8 & 1) == 0) {
    DAT_04871fb8 = 0;
    DAT_04871fc0 = 0;
    DAT_04871fa8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871fa8;
    DAT_04871fb0 = &DAT_04644eb0;
    DAT_04871fc8 = 1;
  }
  return;
}


