/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157f828; name: FUN_0157f828
 */


void FUN_0157f828(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_0157f8a4();
    lVar1 = *(long *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x180) = 0;
    if (lVar1 != 0) {
      FUN_017d2318(param_1 + 0x188);
    }
  }
  if (*(char *)(param_1 + 0x500) != '\0') {
    nn::oe::LeaveExitRequestHandlingSection();
    pcVar2 = *(code **)(param_1 + 0x5b8);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x5c8) = 0;
      *(undefined8 *)(param_1 + 0x5c0) = 0;
      *(undefined8 *)(param_1 + 0x5b8) = 0;
      *(undefined8 *)(param_1 + 0x5b0) = 0;
      (*pcVar2)(param_1 + 0x5d0);
    }
    *(undefined1 *)(param_1 + 0x500) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return;
}


