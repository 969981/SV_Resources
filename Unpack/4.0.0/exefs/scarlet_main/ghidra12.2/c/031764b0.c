/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031764b0; name: _INIT_1306
 */


void _INIT_1306(void)

{
  if ((DAT_0487ba98 & 1) == 0) {
    DAT_0487ba88 = 0;
    DAT_0487ba90 = 0;
    DAT_0487ba78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ba78;
    DAT_0487ba80 = &DAT_0468b918;
    DAT_0487ba98 = 1;
  }
  return;
}


