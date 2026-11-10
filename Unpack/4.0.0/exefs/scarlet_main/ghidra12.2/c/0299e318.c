/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299e318; name: FUN_0299e318
 */


void FUN_0299e318(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1d8));
  lVar1 = FUN_0299dc40(param_1 + 0x170,param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_00cf8198(*(undefined8 *)(lVar1 + 0x20));
    plVar3 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar2);
    FUN_0299e394(param_1 + 0x170,lVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1d8));
  return;
}


