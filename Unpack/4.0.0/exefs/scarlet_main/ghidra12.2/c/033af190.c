/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033af190; name: FUN_033af190
 */


void FUN_033af190(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  *param_1 = (long)&PTR_LAB_047b3368;
  if (lVar1 != 0) {
    FUN_033791fc(lVar1);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


