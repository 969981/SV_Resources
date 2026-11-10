/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02755324; name: FUN_02755324
 */


void FUN_02755324(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1[0x25];
  lVar1 = param_1[0x26];
  *param_1 = &PTR_FUN_045db040;
  param_1[4] = &PTR_LAB_045db190;
  param_1[5] = &DAT_045db2b8;
  param_1[6] = &PTR_LAB_045db310;
  param_1[7] = &PTR_LAB_045db338;
  if (lVar1 != lVar2) {
    uVar3 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(lVar2 + uVar3 * 8) + 0x30) + 0x38))();
      lVar2 = param_1[0x25];
      lVar1 = param_1[0x26];
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(lVar1 - lVar2 >> 3));
  }
  while (lVar2 != lVar1) {
    lVar1 = lVar1 + -8;
    FUN_0275510c(lVar1);
  }
  param_1[0x26] = lVar2;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2c));
  FUN_027553dc(param_1 + 0x25);
  FUN_00e6bfa4(param_1);
  return;
}


