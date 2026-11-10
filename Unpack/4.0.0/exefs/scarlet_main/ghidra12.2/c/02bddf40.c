/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bddf40; name: _INIT_459
 */


void _INIT_459(void)

{
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  DAT_0485edb0 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0485edb4 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_0485edb8 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0485edc4 = 0;
  DAT_0485edc0 = 0;
  DAT_0485edcc = 0xffff;
  DAT_0485edc8 = 0xffffffff;
  local_4[0] = 7;
  local_8[0] = 1;
  local_24[0] = 0xf;
  local_28[0] = 0xf;
  FUN_0278d1d4(&DAT_0485edd0,local_4,local_8,local_24,local_28);
  return;
}


