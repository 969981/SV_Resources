/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033786b0; name: _INIT_2061
 */


void _INIT_2061(void)

{
  if ((DAT_0488deb0 & 1) == 0) {
    DAT_0488dea0 = 0;
    DAT_0488dea8 = 0;
    DAT_0488de90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488de90;
    DAT_0488de98 = &DAT_047ae7e8;
    DAT_0488deb0 = 1;
  }
  return;
}


