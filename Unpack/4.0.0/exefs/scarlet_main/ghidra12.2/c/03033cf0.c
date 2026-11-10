/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033cf0; name: _INIT_672
 */


void _INIT_672(void)

{
  if ((DAT_04871960 & 1) == 0) {
    DAT_04871950 = 0;
    DAT_04871958 = 0;
    DAT_04871940 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871940;
    DAT_04871948 = &DAT_046425d8;
    DAT_04871960 = 1;
  }
  return;
}


