/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fe464; name: FUN_007fe464
 */


void FUN_007fe464(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x273];
  *param_1 = (long)(PTR_DAT_047d1610 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    param_1[0x273] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x26f));
  FUN_0284e3d4(param_1 + 0x26a);
  FUN_0079a828(param_1);
  return;
}


