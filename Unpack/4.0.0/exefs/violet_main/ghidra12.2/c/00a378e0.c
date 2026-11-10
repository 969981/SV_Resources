/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a378e0; name: _INIT_163
 */


void _INIT_163(void)

{
  DAT_04835890 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04835894 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04835898 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_048358a4 = 0;
  DAT_048358a0 = 0;
  DAT_048358ac = 0xffff;
  DAT_048358a8 = 0xffffffff;
  DAT_048358b0 = 0;
  DAT_048358b8 = 0;
  DAT_048358c0 = 0;
  DAT_048358c8 = 0;
  FUN_00100190(&LAB_00a37348,&DAT_048358b0,&PTR_LOOP_04483000);
  DAT_04835930 = 0;
  DAT_04835938 = 0;
  DAT_04835940 = 0;
  DAT_04835948 = 0;
  FUN_00100190(&LAB_00a37348,&DAT_04835930,&PTR_LOOP_04483000);
  DAT_048359b0 = 0;
  DAT_048359b8 = 0;
  DAT_048359c0 = 0;
  DAT_048359c8 = 0;
  FUN_00100190(&LAB_00a37348,&DAT_048359b0,&PTR_LOOP_04483000);
  return;
}


