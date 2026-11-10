/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a5180; name: FUN_029a5180
 */


void FUN_029a5180(undefined8 *param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  short sVar10;
  undefined8 local_8;
  
  *param_1 = &PTR_FUN_04601940;
  param_1[4] = &PTR_LAB_04601a88;
  param_1[5] = &DAT_04601bb0;
  lVar7 = param_1[0x24];
  param_1[6] = &PTR_LAB_04601c08;
  param_1[7] = &PTR_LAB_04601c30;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar7 + 0x1a);
    sVar10 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_029a52c0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029a52c0:
        bVar5 = false;
      }
      if (bVar5) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x4c) < 3) {
            *(undefined4 *)(lVar7 + 0x4c) =
                 *(undefined4 *)(&DAT_03d6b564 + (long)(int)*(uint *)(lVar7 + 0x4c) * 4);
          }
          lVar9 = *(long *)(lVar7 + 8);
          psVar2 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
          }
          else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x27));
  puVar8 = (undefined8 *)param_1[0x24];
  if (puVar8 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar8 + 3);
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
      piVar1 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
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
        local_8 = *puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_8);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


