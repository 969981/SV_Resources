/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178e10; name: _INIT_1394
 */


void _INIT_1394(void)

{
  if ((DAT_0487c858 & 1) == 0) {
    DAT_0487c848 = 0;
    DAT_0487c850 = 0;
    DAT_0487c838 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c838;
    DAT_0487c840 = &DAT_046916a8;
    DAT_0487c858 = 1;
  }
  return;
}


