/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033110; name: _INIT_634
 */


void _INIT_634(void)

{
  if ((DAT_04871370 & 1) == 0) {
    DAT_04871360 = 0;
    DAT_04871368 = 0;
    DAT_04871350 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871350;
    DAT_04871358 = &DAT_04640348;
    DAT_04871370 = 1;
  }
  return;
}


