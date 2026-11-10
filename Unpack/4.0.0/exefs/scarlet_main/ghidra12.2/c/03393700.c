/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03393700; name: _INIT_2066
 */


void _INIT_2066(void)

{
  if ((DAT_0488e090 & 1) == 0) {
    DAT_0488e080 = 0;
    DAT_0488e088 = 0;
    DAT_0488e070 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e070;
    DAT_0488e078 = &DAT_047b2da0;
    DAT_0488e090 = 1;
  }
  return;
}


