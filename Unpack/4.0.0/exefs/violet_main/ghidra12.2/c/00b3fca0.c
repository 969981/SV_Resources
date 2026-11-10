/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b3fca0; name: _INIT_290
 */


void _INIT_290(void)

{
  DAT_0483a018 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0483a01c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_0483a020 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0483a02c = 0;
  DAT_0483a028 = 0;
  DAT_0483a034 = 0xffff;
  DAT_0483a030 = 0xffffffff;
  DAT_0483a040 = 0;
  DAT_0483a048 = 0;
  DAT_0483a050 = 0;
  DAT_0483a058 = 0;
  FUN_00100190(&LAB_00b3ec98,&DAT_0483a040,&PTR_LOOP_04483000);
  return;
}


