/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbcb28; name: FUN_00dbcb28
 */


void FUN_00dbcb28(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  char cVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_28;
  
  if (param_2 != (long *)0x0) {
    plVar1 = (long *)(param_1 + 0x570);
    lVar11 = nn::os::GetCurrentThread();
    while (*plVar1 == 0 && *(long *)(param_1 + 0x578) == 0) {
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(undefined8 *)(param_1 + 0x578) = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') goto LAB_00dbcb6c;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x580));
    do {
      if (*plVar1 != 0 || *(long *)(param_1 + 0x578) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x580));
          while (*plVar1 == 0 && *(long *)(param_1 + 0x578) == 0) {
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar11;
              *(undefined8 *)(param_1 + 0x578) = 0;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_00dbcb6c;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(undefined8 *)(param_1 + 0x578) = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_00dbcb6c:
    (**(code **)(*param_2 + 0x40))(&local_48,param_2);
    plVar9 = local_48;
    if (local_48 == (long *)0x0) {
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
    }
    else {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_00c43ef0(&local_70,local_48 + 6);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      if ((long *)local_70[2] == plVar9 + 5) {
        FUN_00e29918(&local_58,&local_70);
      }
      puVar13 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_70 + 3);
        do {
          sVar6 = *psVar2;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar12) {
            *psVar2 = sVar6 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 1) {
          piVar3 = (int *)((long)local_70 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_28 = *puVar13;
            FUN_00c44438(lVar11 + 0x8040,&local_28);
          }
        }
        else if (sVar6 == 0) goto LAB_00dbccd8;
      }
    }
    FUN_00dbd160(param_1 + 0x590,&local_58);
    puVar13 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_58 + 3);
      do {
        sVar6 = *psVar2;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_58 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_70 = (undefined8 *)*puVar13;
          FUN_00c44438(lVar11 + 0x8040,&local_70);
        }
      }
      else if (sVar6 == 0) goto LAB_00dbccd8;
    }
    (**(code **)(*param_2 + 0x20))(&local_70,param_2);
    local_60 = param_2;
    FUN_00c96b7c(param_1 + 0x5a0,&local_70);
    puVar13 = local_70;
    *(long **)(param_1 + 0x5b0) = local_60;
    if (local_70 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_70 + 3);
      do {
        sVar6 = *psVar2;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_70 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_58 = (undefined8 *)*puVar13;
          FUN_00c44438(lVar11 + 0x8040,&local_58);
        }
      }
      else if (sVar6 == 0) goto LAB_00dbccd8;
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x60))();
    }
    do {
      lVar11 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x578);
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x578) = lVar7;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar4 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x578);
      if (lVar4 != lVar11 || lVar5 != lVar7) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_00dbcc64;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x574) = lVar7;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
LAB_00dbcc64:
    if (!bVar12) {
      do {
        lVar11 = *plVar1;
        lVar7 = *(long *)(param_1 + 0x578);
        if (lVar11 != lVar4 || lVar7 != lVar5) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x00dbcff4;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x574) = lVar5;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
joined_r0x00dbcff4:
      if (!bVar12) {
        do {
          lVar4 = *plVar1;
          lVar5 = *(long *)(param_1 + 0x578);
          if (lVar4 != lVar11 || lVar5 != lVar7) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar11 = lVar4;
            lVar7 = lVar5;
            goto joined_r0x00dbcff4;
          }
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = 0;
            *(long *)(param_1 + 0x574) = lVar7;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar12 = true;
        lVar11 = lVar4;
        lVar7 = lVar5;
        goto joined_r0x00dbcff4;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x580));
    goto LAB_00dbcc70;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (puVar13 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar13 + 3);
    do {
      sVar6 = *psVar2;
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70 = (undefined8 *)*puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_70);
      }
    }
    else if (sVar6 == 0) goto LAB_00dbccd8;
  }
  *(undefined8 *)(param_1 + 0x598) = 0;
  puVar13 = *(undefined8 **)(param_1 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  if (puVar13 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar13 + 3);
    do {
      sVar6 = *psVar2;
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70 = (undefined8 *)*puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_70);
      }
    }
    else if (sVar6 == 0) {
LAB_00dbccd8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
LAB_00dbcc70:
  FUN_00e5a938(param_1,1);
  return;
}


