/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f48310; name: _INIT_511
 */


void _INIT_511(void)

{
  DAT_0486b360 = NEON_fmov(0x3f780000,4);
  DAT_0486b370 = 0x4300000043000000;
  DAT_0486b368 = 0x3f8400003f840000;
  DAT_0486b378 = 0x3c0000003c000000;
  DAT_0486b380 = *(int *)(PTR_DAT_047e4880 + 4);
  *(int *)(PTR_DAT_047e4880 + 4) = DAT_0486b380 + 1;
  return;
}


