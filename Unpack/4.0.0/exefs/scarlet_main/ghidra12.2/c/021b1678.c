/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b1678; name: FUN_021b1678
 */


void FUN_021b1678(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_00d1a240(param_1,0x80098080);
  *param_1 = (long)&PTR_FUN_045db040;
  param_1[4] = (long)&PTR_LAB_045db190;
  param_1[5] = (long)&DAT_045db2b8;
  param_1[6] = (long)&PTR_LAB_045db310;
  param_1[7] = (long)&PTR_LAB_045db338;
  param_1[0x24] = 0x3f8000003f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_02754ac4(param_1 + 0x28);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2c),false,0);
  lVar2 = param_2[1];
  for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x400) {
    FUN_02754b7c(param_1,lVar1);
  }
  (**(code **)(*param_1 + 0x70))(param_1,0);
  return;
}


