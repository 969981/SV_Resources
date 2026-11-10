/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343dc24; name: FUN_0343dc24
 */


void FUN_0343dc24(long param_1,long param_2,uint param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(int *)(param_1 + 0xa8) != 4)) {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xac) = 1;
    uVar5 = *(int *)(*(long *)(param_2 + 8) + 0x18) - *(int *)(param_2 + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x50) + 0x618);
    if (uVar2 < uVar5) {
      *(undefined1 *)(param_1 + 0xac) = 0;
      uVar5 = uVar2;
    }
    if ((*(char *)(param_1 + 0x66) == '\0') &&
       ((**(long **)(param_1 + 0x20) - **(long **)(param_2 + 8)) - (ulong)*(uint *)(param_2 + 0x10)
        <= (ulong)uVar5)) {
      *(undefined1 *)(param_1 + 0x67) = 1;
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(int *)(param_1 + 0x90) =
           *(int *)(param_1 + 0x90) +
           ((int)**(long **)(param_1 + 0x20) -
           (**(int **)(param_2 + 8) + (*(int **)(param_2 + 8))[6]));
    }
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
  nn::os::LockMutex(pMVar1);
  lVar4 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar3 = PTR_DAT_047e2fd0;
  if ((lVar4 != 0) && (lVar4 != param_1 + 0x78)) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7);
  }
  (**(code **)(puVar3 + 0x30))(7,param_2);
  nn::os::UnlockMutex(pMVar1);
  return;
}


