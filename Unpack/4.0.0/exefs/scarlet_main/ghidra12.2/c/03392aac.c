/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03392aac; name: FUN_03392aac
 */


void FUN_03392aac(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  *param_1 = (long)&PTR_LAB_047b2808;
  if (lVar1 != 0) {
    FUN_03392b10(lVar1);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


