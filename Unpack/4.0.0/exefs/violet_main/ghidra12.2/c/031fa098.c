/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031fa098; name: FUN_031fa098
 */


undefined8 FUN_031fa098(void)

{
  undefined8 uVar1;
  
  if (*(long *)PTR_DAT_047ddc48 == 0) {
    uVar1 = 0x80040200;
  }
  else {
    if ((DAT_04884df8 & 0xfffffffffffffffc) != 0) {
      FUN_031f6cf8(*(long *)PTR_DAT_047ddc48,DAT_04884df8 & 0xfffffffffffffffc);
    }
    uVar1 = 0;
  }
  return uVar1;
}


