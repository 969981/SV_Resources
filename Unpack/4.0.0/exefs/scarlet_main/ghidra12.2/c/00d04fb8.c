/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d04fb8; name: FUN_00d04fb8
 */


undefined1  [16] FUN_00d04fb8(long param_1,char *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ThreadType *pTVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = tpidr_el0;
  iVar4 = *(int *)(lVar2 + 0xb4);
  if (iVar4 == 0) {
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    iVar3 = nn::os::GetThreadPriority(pTVar5);
    nn::os::ChangeThreadPriority(pTVar5,8);
    iVar4 = *(int *)(lVar2 + 0xb4);
  }
  else {
    pTVar5 = (ThreadType *)0x0;
    iVar3 = 0x10;
  }
  *(int *)(lVar2 + 0xb4) = iVar4 + 1;
  iVar4 = nn::fs::OpenFile((FileHandle *)(param_1 + 0x10),param_2,param_3);
  if (iVar4 == 0) {
    iVar4 = nn::fs::GetFileSize(param_1,*(undefined8 *)(param_1 + 0x10));
    uVar6 = 0x100000001;
  }
  else {
    uVar6 = 0x100000000;
  }
  iVar1 = *(int *)(lVar2 + 0xb4) + -1;
  *(int *)(lVar2 + 0xb4) = iVar1;
  if (iVar1 == 0) {
    nn::os::ChangeThreadPriority(pTVar5,iVar3);
  }
  auVar7._8_4_ = iVar4;
  auVar7._0_8_ = uVar6;
  auVar7._12_4_ = 0;
  return auVar7;
}


