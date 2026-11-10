/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0168c8d0; name: FUN_0168c8d0
 */


void FUN_0168c8d0(undefined1 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_50 [16];
  undefined8 *local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
LAB_0168c8f0:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_0168cad8;
  }
  else {
    if ((cVar4 != '\0') && (cVar4 != '\x01')) {
      if (cVar4 != '\x03') goto LAB_0168cad8;
      goto LAB_0168c8f0;
    }
    if (*(long *)(param_2 + 8) == 0) goto LAB_0168cad8;
  }
  cVar4 = *param_2;
  if (cVar4 == '\x02') {
    FUN_0168cb20(local_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0168c5ac(param_1 + 8,local_40);
    if (local_40[0] == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_40[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) {
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_40[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_28 = *local_40[0];
    FUN_00c44438(lVar9 + 0x8040,&local_28);
    return;
  }
  if (cVar4 == '\x03') {
    FUN_0168cb20(auStack_50,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_0168c5ac(param_1 + 8,auStack_50);
    FUN_01408fd4(auStack_50);
    return;
  }
  if (cVar4 == '\x01') {
    lVar9 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar9 + 0x28))();
    uVar8 = FUN_0168cb70();
    if ((uVar8 & 1) == 0) {
      lVar9 = 0;
    }
    FUN_0168d050(&local_30,lVar9);
    uVar6 = local_30;
    *param_1 = 1;
    local_30 = 0;
    *(undefined8 *)(param_1 + 8) = uVar6;
    FUN_0168ceb0(&local_30);
    return;
  }
  if (cVar4 == '\0') {
    lVar9 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar9 + 0x28))();
    uVar8 = FUN_0168cb70();
    if ((uVar8 & 1) == 0) {
      lVar9 = 0;
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar9;
    return;
  }
LAB_0168cad8:
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


