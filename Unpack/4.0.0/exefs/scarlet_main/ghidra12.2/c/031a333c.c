/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a333c; name: FUN_031a333c
 */


void FUN_031a333c(long *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *param_1 = (long)(PTR_DAT_047e5898 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[0x34] = 0;
  param_1[0x35] = -0x8000000000000000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x38),true,0);
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  FUN_031a344c(param_1,param_2);
  lVar6 = (long)(int)param_1[0x36] * (long)param_3;
  uVar1 = lVar6 + 0xf;
  uVar4 = uVar1 & 0xfffffffffffffff0;
  uVar2 = (uint)uVar4;
  if ((int)(*(uint *)((long)param_1 + 0x1ac) & 0x7fffffff) < (int)uVar2) {
    FUN_00cb58c0(param_1 + 0x34,PTR_PTR_047d1a50,uVar4);
  }
  if (*(uint *)(param_1 + 0x35) == uVar2) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x35);
  }
  else {
    *(uint *)(param_1 + 0x35) = uVar2;
  }
  iVar3 = (int)uVar4;
  iVar5 = (int)lVar6;
  if (0 < iVar5) {
    memset((void *)param_1[0x34],0,(ulong)(((int)uVar1 >> 4) - 1) * 0x10 + 0x10);
    iVar3 = (int)param_1[0x35];
  }
  if (iVar3 != iVar5) {
    *(int *)(param_1 + 0x35) = iVar5;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  return;
}


