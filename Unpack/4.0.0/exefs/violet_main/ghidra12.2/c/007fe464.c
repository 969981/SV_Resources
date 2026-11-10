/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


