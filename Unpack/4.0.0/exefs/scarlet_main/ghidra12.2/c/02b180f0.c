/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b180f0; name: _INIT_385
 */


void _INIT_385(void)

{
  DAT_04840c00 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840c04 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840c08 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840c14 = 0;
  DAT_04840c10 = 0;
  DAT_04840c1c = 0xffff;
  DAT_04840c18 = 0xffffffff;
  return;
}


