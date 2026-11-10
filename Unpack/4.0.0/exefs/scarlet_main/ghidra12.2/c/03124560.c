/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03124560; name: _INIT_848
 */


void _INIT_848(void)

{
  if ((DAT_048735b0 & 1) == 0) {
    DAT_048735a0 = 0;
    DAT_048735a8 = 0;
    DAT_04873590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873590;
    DAT_04873598 = &DAT_0464fcc8;
    DAT_048735b0 = 1;
  }
  return;
}


