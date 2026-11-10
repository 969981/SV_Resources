/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b18ef0; name: _INIT_386
 */


void _INIT_386(void)

{
  DAT_04840c20 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840c24 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840c28 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840c34 = 0;
  DAT_04840c30 = 0;
  DAT_04840c3c = 0xffff;
  DAT_04840c38 = 0xffffffff;
  return;
}


