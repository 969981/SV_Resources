/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


