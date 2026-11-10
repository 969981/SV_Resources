/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a671c; name: FUN_018a671c
 */


void FUN_018a671c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  lVar8 = *param_1;
  local_50 = param_2;
  uStack_48 = param_3;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar8) {
    plVar9 = (long *)0x0;
    bVar10 = true;
LAB_018a6770:
    local_38 = CONCAT71(local_38._1_7_,1);
    FUN_018a68e8(param_1 + 3,&local_38,&local_60);
    if (!bVar10) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    puVar5 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
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
          local_38 = *puVar5;
          FUN_00c44438(lVar7 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*param_1 == 0) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar10) {
      *param_1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_018a6768;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
  do {
    if (*param_1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
        while (*param_1 == 0) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar10) {
            *param_1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_018a6768;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar10) {
      *param_1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_018a6768:
  bVar10 = false;
  plVar9 = param_1;
  goto LAB_018a6770;
}


