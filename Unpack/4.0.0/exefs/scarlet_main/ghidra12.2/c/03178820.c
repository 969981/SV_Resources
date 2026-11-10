/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178820; name: _INIT_1375
 */


void _INIT_1375(void)

{
  if ((DAT_0487c560 & 1) == 0) {
    DAT_0487c550 = 0;
    DAT_0487c558 = 0;
    DAT_0487c540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c540;
    DAT_0487c548 = &DAT_04690130;
    DAT_0487c560 = 1;
  }
  return;
}


