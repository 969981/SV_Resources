/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc8f28; name: FUN_00dc8f28
 */


undefined1  [16] FUN_00dc8f28(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ThreadType *pTVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  lVar2 = tpidr_el0;
  iVar6 = *(int *)(lVar2 + 0xb4);
  if (iVar6 == 0) {
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    iVar3 = nn::os::GetThreadPriority(pTVar5);
    nn::os::ChangeThreadPriority(pTVar5,8);
    iVar6 = *(int *)(lVar2 + 0xb4);
  }
  else {
    pTVar5 = (ThreadType *)0x0;
    iVar3 = 0x10;
  }
  *(int *)(lVar2 + 0xb4) = iVar6 + 1;
  uVar4 = nn::fs::ReadFile(param_1[2],param_1[1],param_2,param_3);
  if (uVar4 == 0) {
    lVar1 = *param_1;
    if (param_1[1] + param_3 <= *param_1) {
      lVar1 = param_1[1] + param_3;
    }
    param_1[1] = lVar1;
  }
  iVar6 = *(int *)(lVar2 + 0xb4) + -1;
  *(int *)(lVar2 + 0xb4) = iVar6;
  if (iVar6 == 0) {
    nn::os::ChangeThreadPriority(pTVar5,iVar3);
  }
  auVar7._12_4_ = 0;
  auVar7._8_4_ = uVar4;
  auVar7._0_8_ = 0x100000003;
  return auVar7;
}


