/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


