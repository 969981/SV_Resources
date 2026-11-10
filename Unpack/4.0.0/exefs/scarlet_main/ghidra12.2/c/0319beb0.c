/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319beb0; name: _INIT_1513
 */


void _INIT_1513(void)

{
  if ((DAT_0487e420 & 1) == 0) {
    DAT_0487e410 = 0;
    DAT_0487e418 = 0;
    DAT_0487e400 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e400;
    DAT_0487e408 = &DAT_0469eca8;
    DAT_0487e420 = 1;
  }
  return;
}


