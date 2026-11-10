/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079d848; name: FUN_0079d848
 */


void FUN_0079d848(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x20);
  iVar1 = FUN_00798434();
  iVar2 = FUN_027e9a44(*(undefined8 *)(param_1 + 0x218));
  FUN_007a336c(param_2,uVar3,iVar2 + iVar1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


