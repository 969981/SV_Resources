/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf8c04; name: FUN_00cf8c04
 */


void FUN_00cf8c04(long param_1)

{
  long lVar1;
  int iVar2;
  ThreadType *pTVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x1e9) != '\0') {
    lVar1 = tpidr_el0;
    iVar4 = *(int *)(lVar1 + 0xb4);
    if (iVar4 == 0) {
      pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
      iVar2 = nn::os::GetThreadPriority(pTVar3);
      nn::os::ChangeThreadPriority(pTVar3,8);
      iVar4 = *(int *)(lVar1 + 0xb4);
    }
    else {
      pTVar3 = (ThreadType *)0x0;
      iVar2 = 0x10;
    }
    *(int *)(lVar1 + 0xb4) = iVar4 + 1;
    nn::fs::CloseFile(*(undefined8 *)(param_1 + 0xc0));
    iVar4 = *(int *)(lVar1 + 0xb4) + -1;
    *(int *)(lVar1 + 0xb4) = iVar4;
    if (iVar4 == 0) {
      nn::os::ChangeThreadPriority(pTVar3,iVar2);
    }
    *(undefined1 *)(param_1 + 0x1e9) = 0;
  }
  return;
}


