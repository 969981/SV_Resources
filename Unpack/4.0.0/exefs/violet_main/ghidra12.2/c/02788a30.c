/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02788a30; name: FUN_02788a30
 */


void FUN_02788a30(void)

{
  long lVar1;
  
  DAT_0485dd20 = 0;
  DAT_0485dd08 = 0;
  DAT_0485dd10 = 0;
  DAT_0485dd18 = 0;
  DAT_0485dd28 = 0;
  DAT_0485dd30 = 0;
  memset(&DAT_0485dd38,0,0xc00);
  lVar1 = DAT_0485dce8;
  DAT_0485e938 = 0;
  DAT_0485dce8 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_02788994(&DAT_0485dcf0);
  return;
}


