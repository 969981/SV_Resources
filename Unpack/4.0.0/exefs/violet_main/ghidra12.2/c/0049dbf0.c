/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049dbf0; name: FUN_0049dbf0
 */


bool FUN_0049dbf0(void)

{
  uint uVar1;
  
  if (((DAT_047f4450 & 1) == 0) && (uVar1 = nn::ssl::Initialize(), uVar1 != 0)) {
    return (uVar1 & 0x3fffff) == 0x1927b;
  }
  DAT_047f4450 = 1;
  return true;
}


