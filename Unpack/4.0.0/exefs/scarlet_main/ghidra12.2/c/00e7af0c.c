/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e7af0c; name: FUN_00e7af0c
 */


void FUN_00e7af0c(long *param_1,long param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((*(byte *)(param_2 + 0x588) & 1) != 0) {
LAB_00e7af2c:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar7 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar7;
  if (*(int *)(lVar7 + 0x314) <= param_3) goto LAB_00e7af2c;
  if (param_3 == 0) {
LAB_00e7afe0:
    FUN_028adfd8(param_1,*(undefined8 *)(param_2 + 0x468));
    if (*param_1 != 0) {
      return;
    }
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_3 != 2) goto LAB_00e7afb8;
  }
  else {
    FUN_028adfd8(param_1,*(undefined8 *)(param_2 + 0x460));
    if (*param_1 != 0) {
      return;
    }
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_3 != 1) goto LAB_00e7afe0;
LAB_00e7afb8:
    FUN_028adfd8(param_1,*(undefined8 *)(param_2 + 0x470));
    if (*param_1 != 0) {
      return;
    }
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x440));
  if (*(long *)(param_2 + 0x3a8) == 0) {
    if (*(long *)(param_2 + 0x418) != 0) {
      lVar7 = param_2 + 0x3d0;
      goto LAB_00e7b054;
    }
  }
  else {
    lVar7 = param_2 + 0x360;
LAB_00e7b054:
    plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 8) +
                                 (*(ulong *)(lVar7 + 0x40) >> 6 & 0x3fffffffffffff8)) +
                       (*(ulong *)(lVar7 + 0x40) & 0x1ff) * 8);
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00e7b1e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar6;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_00e7b208;
      FUN_028ae300(lVar7);
      *param_1 = (long)plVar8;
      lVar7 = plVar8[6];
      if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00e7b1e8;
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_00e7b208:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      *(undefined1 *)(param_1 + 1) = 0;
      lVar7 = plVar8[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_00e7b030;
    }
    FUN_028ae300(lVar7);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
LAB_00e7b030:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x440));
  return;
}


