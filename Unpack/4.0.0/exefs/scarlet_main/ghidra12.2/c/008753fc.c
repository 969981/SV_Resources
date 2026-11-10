/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008753fc; name: FUN_008753fc
 */


undefined8 FUN_008753fc(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x48))();
  if (iVar1 - DAT_047fc380 == 1) {
    DAT_044ea8dc = DAT_044ea8d8;
  }
  return 1;
}


