/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147e20; name: _INIT_942
 */


void _INIT_942(void)

{
  if ((DAT_048774f0 & 1) == 0) {
    DAT_048774e0 = 0;
    DAT_048774e8 = 0;
    DAT_048774d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048774d0;
    DAT_048774d8 = &DAT_0466d798;
    DAT_048774f0 = 1;
  }
  return;
}


