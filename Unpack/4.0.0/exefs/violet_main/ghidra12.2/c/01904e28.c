/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01904e28; name: FUN_01904e28
 */


void FUN_01904e28(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  bool bVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01904ea0;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01904ea0:
        bVar12 = false;
      }
      if (bVar12) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        if ((*param_2 == 0) || (*(short *)(*param_2 + 0x1a) == 0)) goto LAB_01904f64;
        plVar8 = (long *)(lVar9 + 0xe8);
        lVar11 = *plVar8;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 == lVar11) {
          bVar12 = true;
          goto LAB_01904f0c;
        }
        lVar7 = nn::os::GetCurrentThread();
        goto LAB_01904ef8;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  return;
LAB_01904ef8:
  if (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar12) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01904f08;
    goto LAB_01904ef8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar12) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01904f08;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar12) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01904f08:
  bVar12 = false;
LAB_01904f0c:
  plVar8 = (long *)FUN_01e1a8d0(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
  if ((*(long **)(lVar9 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_01e1a8d0(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
    if (*(long **)(lVar9 + 0x140) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  if (lVar7 == 0) goto LAB_01904f64;
  FUN_0190df18(local_50,lVar7);
  puVar5 = local_50[0];
  if (local_50[0] == (undefined8 *)0x0) goto LAB_01904f64;
  if (*(short *)((long)local_50[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_50[0] + 0x1a);
    sVar10 = *(short *)((long)local_50[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01904ff0;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01904ff0:
        bVar12 = false;
      }
      if (bVar12) {
        plVar8 = (long *)0x0;
        if (local_50[0][2] != 0) {
          plVar8 = (long *)(local_50[0][2] + -0x28);
        }
        goto LAB_01905004;
      }
      sVar10 = sVar3;
      if (sVar3 == 0) break;
    } while( true );
  }
  plVar8 = (long *)0x0;
LAB_01905004:
  psVar1 = (short *)(local_50[0] + 3);
  do {
    sVar10 = *psVar1;
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar10 == 1) {
    piVar2 = (int *)((long)local_50[0] + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
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
      local_28 = *puVar5;
      FUN_00c44438(lVar7 + 0x8040,&local_28);
    }
  }
  else if (sVar10 == 0) goto LAB_019050d8;
  if (plVar8 != (long *)0x0) {
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00d0a71c(&local_60,param_2);
    FUN_01913e70(plVar8,&local_60,param_4,param_3,param_5 & 1);
    puVar5 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
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
          local_50[0] = (undefined8 *)*puVar5;
          FUN_00c44438(lVar7 + 0x8040,local_50);
        }
      }
      else if (sVar10 == 0) {
LAB_019050d8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01904f64:
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
  return;
}


