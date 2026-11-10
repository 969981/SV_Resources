/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03335890; name: _INIT_2041
 */


void _INIT_2041(void)

{
  if ((DAT_0488d618 & 1) == 0) {
    DAT_0488d608 = 0;
    DAT_0488d610 = 0;
    DAT_0488d5f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488d5f8;
    DAT_0488d600 = &DAT_047ac8b0;
    DAT_0488d618 = 1;
  }
  return;
}


