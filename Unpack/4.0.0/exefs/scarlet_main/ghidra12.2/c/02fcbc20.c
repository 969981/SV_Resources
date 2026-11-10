/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fcbc20; name: _INIT_514
 */


void _INIT_514(void)

{
  DAT_0486b4a0 = NEON_fmov(0x3f780000,4);
  DAT_0486b4b0 = 0x4300000043000000;
  DAT_0486b4b8 = 0x3c0000003c000000;
  DAT_0486b4c8 = 0xffffffff;
  DAT_0486b4d0 = 1;
  DAT_0486b4c0 = &DAT_046120b8;
  DAT_0486b4a8 = 0x3f8400003f840000;
  FUN_00100190(PTR_LAB_047e49b0,&DAT_0486b4c0,&PTR_LOOP_04483000);
  return;
}


