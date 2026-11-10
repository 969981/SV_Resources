/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fd7b8; name: FUN_029fd7b8
 */


void FUN_029fd7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined4 param_7)

{
  nn::os::LockMutex((MutexType *)(param_5 + 0x130));
  FUN_029fd838(param_1,param_2,param_3,param_4,param_5,
               *(undefined8 *)(*(long *)(*(long *)(param_5 + 8) + 0x130) + 0xe0),param_6,param_7);
  nn::os::UnlockMutex((MutexType *)(param_5 + 0x130));
  return;
}


