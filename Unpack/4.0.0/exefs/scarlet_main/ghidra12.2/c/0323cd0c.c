/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0323cd0c; name: FUN_0323cd0c
 */


void FUN_0323cd0c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  lVar3 = *param_1;
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = lVar3;
  }
  param_1[1] = lVar4;
  puVar2 = PTR_PTR_047d1a50;
  if (lVar3 != 0) {
    while( true ) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        *(undefined4 *)(lVar1 + 0x28) = 0;
        if ((lVar1 + 0x30 != *(long *)(lVar1 + 0x20)) && (-1 < *(int *)(lVar1 + 0x2c))) {
          FUN_0323dbcc(puVar2,lVar1 + 0x20,lVar1 + 0x30,2);
        }
        *(undefined4 *)(lVar1 + 0x48) = 0;
        if ((lVar1 + 0x50 != *(long *)(lVar1 + 0x40)) && (-1 < *(int *)(lVar1 + 0x4c))) {
          FUN_0323dbcc(puVar2,lVar1 + 0x40,lVar1 + 0x50,1);
        }
        lVar4 = lVar4 + 0x60;
      } while (lVar4 != 0xfc0);
      lVar4 = *(long *)(lVar3 + 0xfc0);
      FUN_0323d260(lVar3);
      if (lVar4 == 0) break;
      *(long *)(lVar3 + 0xfc0) = lVar4;
      *(long *)(lVar3 + 0xfb8) = lVar4;
      lVar3 = lVar4;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return;
}


