/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1ab8c; name: FUN_01e1ab8c
 */


void FUN_01e1ab8c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  puVar7 = PTR_DAT_047d6528;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  plVar10 = (long *)(param_1 + 0x78);
  if ((*plVar10 != 0) && (puVar12 = *(undefined8 **)(*plVar10 + 8), puVar12 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (uVar9 = __cxa_guard_acquire(PTR_DAT_047d6520), (int)uVar9 != 0)) {
      uVar9 = FUN_0151c130(uVar9,plVar10);
      *(undefined8 *)puVar7 = uVar9;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    do {
      if (puVar12 == (undefined8 *)puVar7) {
        FUN_00d7c390(&local_60,plVar10);
        break;
      }
      puVar12 = (undefined8 *)*puVar12;
    } while (puVar12 != (undefined8 *)0x0);
  }
  if ((local_60 == (undefined8 *)0x0) || (*(short *)((long)local_60 + 0x1a) == 0)) {
    FUN_01e1b020(param_1,param_2,param_4);
LAB_01e1ac1c:
    puVar12 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_70[0] = (undefined8 *)*puVar12;
          FUN_00c44438(lVar11 + 0x8040,local_70);
        }
      }
      else if (sVar3 == 0) {
LAB_01e1acc0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  plVar10 = (long *)(param_1 + 0xa0);
  lVar11 = nn::os::GetCurrentThread();
LAB_01e1ac5c:
  if (*plVar10 == 0) goto code_r0x01e1ac64;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01e1ac6c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01e1ac6c:
  if (param_3 == -1) {
    plVar4 = *(long **)(param_1 + 0x48);
    for (plVar10 = *(long **)(param_1 + 0x40); plVar10 != plVar4; plVar10 = plVar10 + 2) {
      if (((*plVar10 != 0) && (*(short *)(*plVar10 + 0x1a) != 0)) &&
         ((undefined8 *)*plVar10 != local_60)) {
        FUN_01904e28(param_2,plVar10,param_4,0,0);
      }
    }
  }
  else {
    FUN_01e1a3b8(local_70,param_1,param_3);
    if (local_70[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_70[0] + 0x1a) != 0) {
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_013dbad8(&local_80,local_70);
        FUN_01904e28(param_2,&local_80,param_4,0,0);
        puVar12 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_80 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_80 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_38 = *puVar12;
              FUN_00c44438(lVar11 + 0x8040,&local_38);
            }
          }
          else if (sVar3 == 0) goto LAB_01e1acc0;
        }
      }
      if (local_70[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70[0] + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_70[0] + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_80 = (undefined8 *)*local_70[0];
            FUN_00c44438(lVar11 + 0x8040,&local_80);
          }
        }
        else if (sVar3 == 0) goto LAB_01e1acc0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  goto LAB_01e1ac1c;
code_r0x01e1ac64:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar6) {
    *plVar10 = lVar11;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01e1ac6c;
  goto LAB_01e1ac5c;
}


