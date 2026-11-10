/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b18b90; name: _INIT_256
 */


void _INIT_256(void)

{
  DAT_048394d8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_048394dc = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_048394e0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_048394ec = 0;
  DAT_048394e8 = 0;
  DAT_048394f4 = 0xffff;
  DAT_048394f0 = 0xffffffff;
  return;
}


