/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ad7f00; name: _INIT_370
 */


void _INIT_370(void)

{
  DAT_04840668 = NEON_fmov(0x3f780000,4);
  DAT_04840670 = 0x3f8400003f840000;
  DAT_04840678 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0484067c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840680 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0484068c = 0;
  DAT_04840688 = 0;
  DAT_04840694 = 0xffff;
  DAT_04840690 = 0xffffffff;
  DAT_048406a0 = 0;
  DAT_048406a8 = 0;
  DAT_048406b0 = 0;
  DAT_048406b8 = 0;
  FUN_00100190(&LAB_02ad8010,&DAT_048406a0,&PTR_LOOP_04483000);
  DAT_04840720 = 0;
  DAT_04840728 = 0;
  DAT_04840730 = 0;
  DAT_04840738 = 0;
  FUN_00100190(&LAB_02ad8010,&DAT_04840720,&PTR_LOOP_04483000);
  DAT_048407a0 = 0;
  DAT_048407a8 = 0;
  DAT_048407b0 = 0;
  DAT_048407b8 = 0;
  FUN_00100190(&LAB_02ad8010,&DAT_048407a0,&PTR_LOOP_04483000);
  return;
}


