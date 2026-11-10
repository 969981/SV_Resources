/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013de424; name: FUN_013de424
 */


void FUN_013de424(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_28;
  
  lVar8 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar6;
  FUN_00c44204(&local_28,uVar6,lVar8);
  lVar7 = *param_1;
  *param_1 = 0;
  if (local_28 == 0) {
    if (lVar7 != 0) {
      psVar1 = (short *)(lVar7 + 0x18);
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
        FUN_0116e168();
      }
      else if (sVar2 == 0) goto LAB_013de4f8;
    }
    lVar8 = 0;
  }
  else {
    if (lVar7 != 0) {
      psVar1 = (short *)(lVar7 + 0x18);
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
        FUN_0116e168();
      }
      else if (sVar2 == 0) goto LAB_013de4f8;
    }
    lVar7 = local_28;
    local_28 = 0;
    *param_1 = lVar7;
  }
  param_1[1] = lVar8;
  if (local_28 != 0) {
    psVar1 = (short *)(local_28 + 0x18);
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
      FUN_0116e168();
    }
    else if (sVar2 == 0) {
LAB_013de4f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


