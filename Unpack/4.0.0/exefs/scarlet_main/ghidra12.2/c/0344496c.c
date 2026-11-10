/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344496c; name: FUN_0344496c
 */


undefined4 FUN_0344496c(void *param_1,int *param_2)

{
  ThreadType *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  *(undefined8 *)((long)param_1 + 0x210) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar8 = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)((long)param_1 + 0x248) = *(undefined8 *)param_2;
  *(undefined8 *)((long)param_1 + 0x260) = uVar3;
  *(undefined8 *)((long)param_1 + 600) = uVar8;
  *(undefined8 *)((long)param_1 + 0x250) = uVar2;
  *(undefined1 *)((long)param_1 + 0x268) = 1;
  uVar8 = *(undefined8 *)(param_2 + 2);
  lVar6 = tpidr_el0;
  plVar10 = *(long **)(lVar6 + 0x30);
  if (plVar10 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar10 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  pvVar5 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,0x1000);
  *(void **)((long)param_1 + 0x1d0) = pvVar5;
  if (pvVar5 == (void *)0x0) goto LAB_03444a5c;
  uVar9 = *(ulong *)(param_2 + 2);
  *(int *)((long)param_1 + 0x1e0) = (int)uVar9;
  pTVar1 = (ThreadType *)((long)param_1 + 0x10);
  iVar4 = nn::os::CreateThread(pTVar1,FUN_03444bb4,param_1,pvVar5,uVar9 & 0xffffffff,*param_2);
  if (iVar4 == 0) {
    nn::os::SetThreadName(pTVar1,"AK::IOThread");
    nn::os::SetThreadCoreMask(pTVar1,param_2[4],*(ulong *)(param_2 + 6));
    nn::os::StartThread(pTVar1);
    goto LAB_03444a5c;
  }
  if ((*(long *)((long)param_1 + 0x1d8) != 0) &&
     (lVar11 = *(long *)((long)param_1 + 0x1d0), lVar11 != 0)) {
    plVar10 = *(long **)(lVar6 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar9 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar10,lVar11,0,8);
        goto LAB_03444a2c;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,0,8);
  }
LAB_03444a2c:
  *(undefined8 *)((long)param_1 + 0x1d0) = 0;
LAB_03444a5c:
  uVar7 = 1;
  if (*(char *)((long)param_1 + 0x50) == '\0') {
    uVar7 = 2;
  }
  return uVar7;
}


