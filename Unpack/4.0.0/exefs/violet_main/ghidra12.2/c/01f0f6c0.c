/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f0f6c0; name: FUN_01f0f6c0
 */


long FUN_01f0f6c0(void)

{
  long lVar1;
  undefined *local_8;
  
  lVar1 = FUN_01f0f820();
  if (lVar1 == 0) {
    local_8 = PTR_DAT_047daae8 + 0x10;
    FUN_00fb9b60(&local_8);
    std::exception::~exception((exception *)&local_8);
  }
  return lVar1;
}


