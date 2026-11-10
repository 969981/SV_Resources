/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033c00; name: _INIT_669
 */


void _INIT_669(void)

{
  if ((DAT_048718e8 & 1) == 0) {
    DAT_048718d8 = 0;
    DAT_048718e0 = 0;
    DAT_048718c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048718c8;
    DAT_048718d0 = &DAT_046422f0;
    DAT_048718e8 = 1;
  }
  return;
}


