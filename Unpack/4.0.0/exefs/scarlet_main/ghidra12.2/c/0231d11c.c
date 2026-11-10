/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0231d11c; name: FUN_0231d11c
 */


void FUN_0231d11c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d8));
  pcVar1 = *(code **)(param_1 + 0x98);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar1)(param_1 + 0xb0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0xb0);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x98) = param_2[1];
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0xa0) = param_2[2];
    *(undefined8 *)(param_1 + 0x90) = uVar2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d8));
  return;
}


