/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156cdb4; name: FUN_0156cdb4
 */


void FUN_0156cdb4(undefined8 param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  short sVar10;
  undefined8 *local_48 [2];
  long *local_38;
  undefined8 local_28;
  
  FUN_0156cf88(local_48);
  if ((local_48[0] != (undefined8 *)0x0) && (*(short *)((long)local_48[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_48[0] + 0x1a);
    sVar10 = *(short *)((long)local_48[0] + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0156cf20;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0156cf20:
        bVar5 = false;
      }
      if (bVar5) {
        local_38 = (long *)0x0;
        if (local_48[0][2] != 0) {
          local_38 = (long *)(local_48[0][2] + -0x28);
        }
        goto LAB_0156cde8;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  local_38 = (long *)0x0;
LAB_0156cde8:
  plVar6 = local_38;
  uVar8 = FUN_00da75d8(param_2);
  FUN_0156d194(param_1,&local_38,uVar8,param_2 + 0x1e0,FUN_00ea349c,0,param_2);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x60))(plVar6);
  }
  if (local_48[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_48[0] + 3);
    do {
      sVar10 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar1 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *local_48[0];
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


