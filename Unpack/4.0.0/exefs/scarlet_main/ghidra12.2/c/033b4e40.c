/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b4e40; name: _INIT_2076
 */


void _INIT_2076(void)

{
  if ((DAT_0488e568 & 1) == 0) {
    DAT_0488e558 = 0;
    DAT_0488e560 = 0;
    DAT_0488e548 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e548;
    DAT_0488e550 = &DAT_047b4270;
    DAT_0488e568 = 1;
  }
  return;
}


