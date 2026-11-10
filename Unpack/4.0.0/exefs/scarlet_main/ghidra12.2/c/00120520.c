/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120520; name: FUN_00120520
 */


undefined8
FUN_00120520(void *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
            undefined8 param_6,ulong param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ThreadType *pTVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  puVar5 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff0);
  pvVar6 = (void *)(param_5 + 0xfffU & 0xfffffffffffff000);
  *(undefined8 **)((long)param_1 + 0x1f8) = puVar5;
  puVar5[2] = param_8;
  *puVar5 = param_2;
  puVar5[1] = param_3;
  uVar1 = FUN_00120430(param_6);
  if (0x1f < uVar1) {
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    uVar1 = nn::os::GetThreadCurrentPriority(pTVar3);
  }
  pTVar3 = (ThreadType *)(puVar5 + 3);
  iVar2 = nn::os::CreateThread
                    (pTVar3,(_func_void_void_ptr *)&LAB_00120630,param_1,pvVar6,
                     (ulong)(param_4 + ((int)param_5 - (int)pvVar6) & 0xfffff000),uVar1);
  if (iVar2 != 0) {
    return 0;
  }
  if (param_7 == 0) {
LAB_001205f8:
    uVar1 = 0xffffffff;
    uVar4 = 7;
  }
  else {
    uVar1 = (uint)param_7;
    if ((~uVar1 & 0xfff0) == 0) {
      uVar1 = (uint)(param_7 >> 0x10) & 0xffff;
    }
    else {
      if ((~uVar1 & 0xf0) != 0) goto LAB_001205f8;
      uVar1 = uVar1 >> 8 & 0xff;
    }
    uVar4 = 7;
    if ((param_7 & 2) != 0) {
      uVar4 = (long)(1 << (ulong)(uVar1 & 0x1f));
    }
  }
  nn::os::SetThreadCoreMask(pTVar3,uVar1,uVar4);
  nn::os::StartThread(pTVar3);
  return 1;
}


