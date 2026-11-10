/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aa488; name: FUN_028aa488
 */


undefined8 FUN_028aa488(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((((param_2 & 0xf8) == 0x30) || ((param_2 & 0xfe) == 0x38)) && ((param_2 & 0xff) - 0x31 < 9)) {
    if (*(uint *)(param_1 + 0x1c) < (param_2 & 0xff) - 0x30) {
                    /* WARNING: Subroutine does not return */
      FUN_028a63d0();
    }
    FUN_028a63dc();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


