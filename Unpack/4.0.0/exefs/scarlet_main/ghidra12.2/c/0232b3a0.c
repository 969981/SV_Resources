/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0232b3a0; name: FUN_0232b3a0
 */


void FUN_0232b3a0(undefined1 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_50 [16];
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  cVar4 = *param_2;
  if ((cVar4 == '\x02') || (cVar4 == '\x03')) {
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_0232b3fc_default;
  }
  else if (((cVar4 != '\x01') && (cVar4 != '\0')) || (*(long *)(param_2 + 8) == 0))
  goto switchD_0232b3fc_default;
  switch(*param_2) {
  case '\0':
    lVar9 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar9 + 0x28))();
    uVar7 = FUN_0232d760();
    if ((uVar7 & 1) == 0) {
      lVar9 = 0;
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar9;
    return;
  case '\x01':
    lVar9 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar9 + 0x28))();
    uVar7 = FUN_0232d760();
    if ((uVar7 & 1) == 0) {
      lVar9 = 0;
    }
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x98);
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar8;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    *param_1 = 1;
    *(long *)(param_1 + 8) = lVar9;
    return;
  case '\x02':
    FUN_0232d870(local_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00e7e7c8(param_1 + 8,local_40);
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
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_18 = *local_40[0];
    FUN_00c44438(lVar9 + 0x8040,&local_18);
    return;
  case '\x03':
    FUN_0232d870(auStack_50,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00e7e7c8(param_1 + 8,auStack_50);
    FUN_0232be80(auStack_50);
    return;
  }
switchD_0232b3fc_default:
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


