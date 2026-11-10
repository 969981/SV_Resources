/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343c458; name: FUN_0343c458
 */


long * FUN_0343c458(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x48))();
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)((long)plVar1 + 0x6b) = 1;
    (**(code **)(*plVar1 + 0x40))(plVar1,param_4);
    nn::os::LockMutex((MutexType *)(param_1 + 0x51));
    if (param_1[0x50] == 0) {
      param_1[0x50] = (long)plVar1;
      plVar1[2] = 0;
    }
    else {
      plVar1[2] = param_1[0x50];
      param_1[0x50] = (long)plVar1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x51));
  }
  return plVar1;
}


