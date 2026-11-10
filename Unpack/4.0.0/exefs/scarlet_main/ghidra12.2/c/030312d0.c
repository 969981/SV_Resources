/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030312d0; name: _INIT_537
 */


void _INIT_537(void)

{
  if ((DAT_04870458 & 1) == 0) {
    DAT_04870448 = 0;
    DAT_04870450 = 0;
    DAT_04870438 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870438;
    DAT_04870440 = &DAT_0463a640;
    DAT_04870458 = 1;
  }
  return;
}


