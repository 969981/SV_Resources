/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03124510; name: _INIT_847
 */


void _INIT_847(void)

{
  if ((DAT_04873588 & 1) == 0) {
    DAT_04873578 = 0;
    DAT_04873580 = 0;
    DAT_04873568 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873568;
    DAT_04873570 = &DAT_0464fc00;
    DAT_04873588 = 1;
  }
  return;
}


