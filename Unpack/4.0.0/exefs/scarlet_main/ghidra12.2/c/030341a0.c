/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030341a0; name: _INIT_687
 */


void _INIT_687(void)

{
  if ((DAT_04871bb8 & 1) == 0) {
    DAT_04871ba8 = 0;
    DAT_04871bb0 = 0;
    DAT_04871b98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871b98;
    DAT_04871ba0 = &DAT_04643410;
    DAT_04871bb8 = 1;
  }
  return;
}


