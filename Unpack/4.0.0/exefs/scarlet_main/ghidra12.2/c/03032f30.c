/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032f30; name: _INIT_628
 */


void _INIT_628(void)

{
  if ((DAT_04871280 & 1) == 0) {
    DAT_04871270 = 0;
    DAT_04871278 = 0;
    DAT_04871260 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871260;
    DAT_04871268 = &DAT_0463fdd8;
    DAT_04871280 = 1;
  }
  return;
}


