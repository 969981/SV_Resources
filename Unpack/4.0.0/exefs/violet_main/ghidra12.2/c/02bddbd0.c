/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bddbd0; name: _INIT_458
 */


void _INIT_458(void)

{
  DAT_0485ec00 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0485ec04 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_0485ec08 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0485ec14 = 0;
  DAT_0485ec10 = 0;
  DAT_0485ec1c = 0xffff;
  DAT_0485ec18 = 0xffffffff;
  DAT_0485ec20 = 0;
  FUN_00100190(&LAB_0151a504,&DAT_0485ec20,&PTR_LOOP_04483000);
  return;
}


