/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b0aa10; name: _INIT_380
 */


void _INIT_380(void)

{
  DAT_04840a80 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840a84 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840a88 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840a94 = 0;
  DAT_04840a90 = 0;
  DAT_04840a9c = 0xffff;
  DAT_04840a98 = 0xffffffff;
  return;
}


