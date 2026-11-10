/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078cd58; name: FUN_0078cd58
 */


void FUN_0078cd58(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047d0900;
  lVar3 = *(long *)PTR_DAT_047d0900;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x68));
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = 5;
    if ((param_2 & 1) == 0) {
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_007935cc(param_1 + 0x10);
    FUN_0078f40c(*(undefined8 *)puVar1,param_1,param_2 & 1);
  }
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x68));
  return;
}


