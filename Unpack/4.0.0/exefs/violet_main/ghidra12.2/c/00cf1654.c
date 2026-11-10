/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf1654; name: FUN_00cf1654
 */


void FUN_00cf1654(long param_1,undefined8 *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar1 = (long *)(param_1 + 0x1c0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00cf1698;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c8));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00cf1698;
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
LAB_00cf1698:
  plVar11 = (long *)*param_2;
  (**(code **)(*plVar11 + 0x18))(local_78,plVar11);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  plVar1 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 5;
  }
  if ((long *)local_78[0][2] == plVar1) {
    FUN_00cf1b68(&local_88,local_78);
  }
  puVar10 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78[0] + 3);
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
      piVar3 = (int *)((long)local_78[0] + 0x1c);
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
        local_68 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_00cf17bc;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x188);
  puVar12 = *(undefined8 **)(param_1 + 400);
  if (puVar10 == puVar12) {
    puVar14 = puVar10;
  }
  else {
    do {
      if ((undefined8 *)*puVar10 == local_88) {
        puVar14 = puVar10;
        if ((puVar10[2] != 0) && (*(short *)(puVar10[2] + 0x1a) != 0)) goto LAB_00cf1b48;
        break;
      }
LAB_00cf1b48:
      puVar10 = puVar10 + 4;
      puVar14 = puVar12;
    } while (puVar12 != puVar10);
    puVar10 = *(undefined8 **)(param_1 + 400);
  }
  if (puVar10 != puVar14) {
    (**(code **)(*(long *)*param_2 + 0x68))();
    puVar13 = *(undefined8 **)(param_1 + 400);
    puVar10 = puVar14 + 4;
    puVar12 = puVar10;
    plVar1 = (long *)PTR_DAT_047d3918;
    plVar11 = (long *)PTR_DAT_047d3910;
    pbVar7 = PTR_DAT_047d3908;
    if (puVar10 == puVar13) {
LAB_00cf182c:
      do {
        puVar10 = puVar14;
        puVar14 = (undefined8 *)puVar12[-2];
        if (puVar14 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar14 + 3);
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
            piVar3 = (int *)((long)puVar14 + 0x1c);
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
              if (((*pbVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar7), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,plVar11,&PTR_LOOP_04483000);
                __cxa_guard_release(pbVar7);
              }
              lVar9 = *plVar11;
              *plVar1 = lVar9;
              local_78[0] = (undefined8 *)*puVar14;
              FUN_00c44438(lVar9 + 0x8040,local_78);
            }
          }
          else if (sVar4 == 0) goto LAB_00cf17bc;
        }
        puVar12 = puVar12 + -4;
        puVar14 = (undefined8 *)*puVar12;
        if (puVar14 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar14 + 3);
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
            piVar3 = (int *)((long)puVar14 + 0x1c);
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
              if (((*pbVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar7), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,plVar11,&PTR_LOOP_04483000);
                __cxa_guard_release(pbVar7);
              }
              lVar9 = *plVar11;
              *plVar1 = lVar9;
              local_78[0] = (undefined8 *)*puVar14;
              FUN_00c44438(lVar9 + 0x8040,local_78);
            }
          }
          else if (sVar4 == 0) goto LAB_00cf17bc;
        }
        puVar14 = puVar10;
      } while (puVar12 != puVar10);
    }
    else {
      lVar9 = *(long *)(param_1 + 0x188);
      FUN_00d91d68(puVar14,puVar10);
      FUN_00c96b7c(lVar9 + ((long)puVar14 - lVar9 >> 5) * 0x20 + 0x10,puVar14 + 6);
      if (puVar14 + 8 != puVar13) {
        do {
          puVar10 = puVar12 + 4;
          FUN_00d91d68(puVar12,puVar10);
          FUN_00c96b7c(puVar12 + 2,puVar12 + 6);
          puVar14 = puVar12 + 8;
          puVar12 = puVar10;
        } while (puVar14 != puVar13);
      }
      puVar12 = *(undefined8 **)(param_1 + 400);
      plVar1 = (long *)PTR_DAT_047d3918;
      plVar11 = (long *)PTR_DAT_047d3910;
      pbVar7 = PTR_DAT_047d3908;
      puVar14 = puVar10;
      if (puVar12 != puVar10) goto LAB_00cf182c;
    }
    *(undefined8 **)(param_1 + 400) = puVar10;
  }
  puVar10 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
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
      piVar3 = (int *)((long)local_88 + 0x1c);
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
        local_78[0] = (undefined8 *)*puVar10;
        FUN_00c44438(lVar9 + 0x8040,local_78);
      }
    }
    else if (sVar4 == 0) {
LAB_00cf17bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c8));
  return;
}


