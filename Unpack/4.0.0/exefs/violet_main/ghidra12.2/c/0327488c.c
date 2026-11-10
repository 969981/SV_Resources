/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0327488c; name: FUN_0327488c
 */


undefined8 FUN_0327488c(void)

{
  undefined8 uVar1;
  
  if (*(long *)PTR_DAT_047e61d8 == 0 || *(long *)PTR_DAT_047ddc48 == 0) {
    uVar1 = 0x80040200;
  }
  else {
    uVar1 = 0;
    if ((DAT_0488a840 & 0xfffffffffffffffc) != 0) {
      FUN_03341db4(DAT_0488a840 & 0xfffffffffffffffc);
      uVar1 = 0;
    }
  }
  return uVar1;
}


