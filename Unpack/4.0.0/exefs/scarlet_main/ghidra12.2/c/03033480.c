/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033480; name: _INIT_645
 */


void _INIT_645(void)

{
  if ((DAT_04871528 & 1) == 0) {
    DAT_04871518 = 0;
    DAT_04871520 = 0;
    DAT_04871508 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871508;
    DAT_04871510 = &DAT_04640ca8;
    DAT_04871528 = 1;
  }
  return;
}


