/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343e2a0; name: FUN_0343e2a0
 */


void FUN_0343e2a0(long param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0x68) = 1;
  cVar5 = *(char *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (cVar5 != '\0') {
    uVar3 = *(uint *)(param_1 + 0x90);
    plVar6 = (long *)(param_1 + 0xb8);
    do {
      plVar6 = (long *)*plVar6;
      cVar5 = cVar5 + -1;
      lVar7 = *(long *)plVar6[1];
      uVar4 = *(uint *)((long *)plVar6[1] + 3);
      uVar1 = lVar7 + (ulong)*(uint *)(plVar6 + 2);
      iVar2 = uVar4 - *(uint *)(plVar6 + 2);
      if (uVar1 < uVar3 && (ulong)uVar3 < lVar7 + (ulong)uVar4) {
        iVar2 = uVar3 - (int)uVar1;
      }
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar2;
      *(char *)(param_1 + 0xc0) = cVar5;
    } while (cVar5 != '\0');
  }
  FUN_0343e344(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


