/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030359b0; name: _INIT_764
 */


void _INIT_764(void)

{
  if ((DAT_048727c0 & 1) == 0) {
    DAT_048727b0 = 0;
    DAT_048727b8 = 0;
    DAT_048727a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048727a0;
    DAT_048727a8 = &DAT_04647fe0;
    DAT_048727c0 = 1;
  }
  return;
}


