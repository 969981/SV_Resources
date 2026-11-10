/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308f2f0; name: _INIT_831
 */


void _INIT_831(void)

{
  if ((DAT_048732e8 & 1) == 0) {
    DAT_048732d8 = 0;
    DAT_048732e0 = 0;
    DAT_048732c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048732c8;
    DAT_048732d0 = &DAT_0464cf40;
    DAT_048732e8 = 1;
  }
  return;
}


