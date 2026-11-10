/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148820; name: _INIT_963
 */


void _INIT_963(void)

{
  if ((DAT_04877838 & 1) == 0) {
    DAT_04877828 = 0;
    DAT_04877830 = 0;
    DAT_04877818 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877818;
    DAT_04877820 = &DAT_0466eab8;
    DAT_04877838 = 1;
  }
  return;
}


