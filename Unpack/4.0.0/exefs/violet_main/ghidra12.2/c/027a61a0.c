/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027a61a0; name: FUN_027a61a0
 */


void FUN_027a61a0(void)

{
  long lVar1;
  undefined *local_18;
  
  lVar1 = FUN_027a61e0();
  if (lVar1 == 0) {
    local_18 = PTR_DAT_047daae8 + 0x10;
    FUN_00fb9b60(&local_18);
    std::exception::~exception((exception *)&local_18);
  }
  return;
}


