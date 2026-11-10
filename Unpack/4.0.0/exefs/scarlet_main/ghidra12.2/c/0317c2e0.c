/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317c2e0; name: _INIT_1460
 */


void _INIT_1460(void)

{
  if ((DAT_0487d2a8 & 1) == 0) {
    DAT_0487d298 = 0;
    DAT_0487d2a0 = 0;
    DAT_0487d288 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d288;
    DAT_0487d290 = &DAT_04695430;
    DAT_0487d2a8 = 1;
  }
  return;
}


