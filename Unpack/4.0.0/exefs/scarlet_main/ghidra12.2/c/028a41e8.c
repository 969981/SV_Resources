/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a41e8; name: FUN_028a41e8
 */


void FUN_028a41e8(long param_1)

{
  long lVar1;
  int iVar2;
  ThreadType *pTVar3;
  int iVar4;
  
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
  nn::fs::CloseFile(*(undefined8 *)(param_1 + 0x10));
  iVar4 = *(int *)(lVar1 + 0xb4) + -1;
  *(int *)(lVar1 + 0xb4) = iVar4;
  if (iVar4 == 0) {
    nn::os::ChangeThreadPriority(pTVar3,iVar2);
    return;
  }
  return;
}


