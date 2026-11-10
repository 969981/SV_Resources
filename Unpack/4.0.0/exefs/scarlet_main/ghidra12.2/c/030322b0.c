/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030322b0; name: _INIT_588
 */


void _INIT_588(void)

{
  if ((DAT_04870c40 & 1) == 0) {
    DAT_04870c30 = 0;
    DAT_04870c38 = 0;
    DAT_04870c20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870c20;
    DAT_04870c28 = &DAT_0463d798;
    DAT_04870c40 = 1;
  }
  return;
}


