/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03370030; name: _INIT_2053
 */


void _INIT_2053(void)

{
  if ((DAT_0488dad0 & 1) == 0) {
    DAT_0488dac0 = 0;
    DAT_0488dac8 = 0;
    DAT_0488dab0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488dab0;
    DAT_0488dab8 = &DAT_047ade98;
    DAT_0488dad0 = 1;
  }
  return;
}


