/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a320a0; name: _INIT_159
 */


void _INIT_159(void)

{
  DAT_04835320 = NEON_fmov(0x3f780000,4);
  DAT_04835328 = 0x3f8400003f840000;
  DAT_04835330 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04835334 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04835338 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04835344 = 0;
  DAT_04835340 = 0;
  DAT_0483534c = 0xffff;
  DAT_04835348 = 0xffffffff;
  DAT_04835350 = 0;
  DAT_04835358 = 0;
  DAT_04835360 = 0;
  DAT_04835368 = 0;
  FUN_00100190(&LAB_00a32194,&DAT_04835350,&PTR_LOOP_04483000);
  DAT_048353d0 = 0;
  DAT_048353d8 = 0;
  DAT_048353e0 = 0;
  DAT_048353e8 = 0;
  FUN_00100190(&LAB_00a321b4,&DAT_048353d0,&PTR_LOOP_04483000);
  return;
}


