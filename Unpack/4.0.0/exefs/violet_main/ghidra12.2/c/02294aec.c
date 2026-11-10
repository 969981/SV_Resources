/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02294aec; name: FUN_02294aec
 */


void FUN_02294aec(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  FUN_01193548(local_40);
  if (local_40[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40[0] + 0x1a);
      sVar8 = *(short *)((long)local_40[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02294b64;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02294b64:
          bVar5 = false;
        }
        if (bVar5) {
          plVar9 = (long *)0x0;
          if (local_40[0][2] != 0) {
            plVar9 = (long *)(local_40[0][2] + -0x28);
          }
          goto LAB_02294b90;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    plVar9 = (long *)0x0;
LAB_02294b90:
    psVar1 = (short *)(local_40[0] + 3);
    do {
      sVar8 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar8 == 1) {
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
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_18 = *local_40[0];
        FUN_00c44438(lVar7 + 0x8040,&local_18);
      }
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar9 != (long *)0x0) {
      memcpy(plVar9 + 0x9f,(void *)(param_2 + 0x18),0x80);
      lVar7 = plVar9[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      plVar9[0x9b] = (long)(plVar9 + 0x9c);
      do {
        sVar8 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


