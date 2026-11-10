/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1a3b8; name: FUN_01e1a3b8
 */


void FUN_01e1a3b8(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar1 = (long *)(param_2 + 0xa0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01e1a3f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa8));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01e1a3f8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01e1a3f8:
  iVar8 = (int)((ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40)) >> 4);
  if ((iVar8 < 1) || (iVar8 <= param_3)) {
    *(undefined8 *)(param_2 + 0xa0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xa8));
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_01e04c80(param_1,&local_58);
    puVar11 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_58 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_48 = *puVar11;
          FUN_00c44438(lVar9 + 0x8040,&local_48);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  plVar1 = (long *)(*(long *)(param_2 + 0x40) + (long)param_3 * 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = PTR_DAT_047d6528;
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (puVar11 = *(undefined8 **)(lVar9 + 8), puVar11 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
      uVar10 = FUN_0151c130();
      *(undefined8 *)puVar7 = uVar10;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    do {
      if (puVar11 == (undefined8 *)puVar7) {
        FUN_00d7c390(param_1,plVar1);
        break;
      }
      puVar11 = (undefined8 *)*puVar11;
    } while (puVar11 != (undefined8 *)0x0);
  }
  *(undefined8 *)(param_2 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xa8));
  return;
}


