/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0231d270; name: FUN_0231d270
 */


void FUN_0231d270(long param_1)

{
  code *pcVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d8));
  pcVar1 = *(code **)(param_1 + 0x98);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar1)(param_1 + 0xb0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d8));
  return;
}


