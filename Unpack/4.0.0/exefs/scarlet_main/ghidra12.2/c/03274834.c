/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03274834; name: FUN_03274834
 */


undefined8 FUN_03274834(void)

{
  undefined8 uVar1;
  
  if (*(long *)PTR_DAT_047e61d8 == 0 || *(long *)PTR_DAT_047ddc48 == 0) {
    uVar1 = 0x80040200;
  }
  else {
    uVar1 = 0;
    if ((DAT_0488a840 & 0xfffffffffffffffc) != 0) {
      FUN_03341b00(DAT_0488a840 & 0xfffffffffffffffc);
      uVar1 = 0;
    }
  }
  return uVar1;
}


