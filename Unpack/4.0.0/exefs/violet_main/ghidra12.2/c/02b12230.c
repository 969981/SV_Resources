/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b12230; name: _INIT_384
 */


void _INIT_384(void)

{
  DAT_04840bb8 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_04840bbc = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_04840bc0 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_04840bcc = 0;
  DAT_04840bc8 = 0;
  DAT_04840bd4 = 0xffff;
  DAT_04840bd0 = 0xffffffff;
  return;
}


