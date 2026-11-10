/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015859fc; name: FUN_015859fc
 */


void FUN_015859fc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_2 + 0x288);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x288) = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01585a3c:
  while ((lVar10 != 0 && (lVar8 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x288);
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x288) = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 != lVar10 || *(long *)(param_2 + 0x288) != lVar11) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_01585a6c;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x284) = lVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_01585a6c:
  if (!bVar9) {
    lVar10 = lVar4;
    lVar11 = *(long *)(param_2 + 0x288);
    goto LAB_01585a3c;
  }
  FUN_01585ce4(&local_60,param_2,param_3);
  if (local_60 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar13 = local_60 + 5;
    (**(code **)(*local_60 + 0x18))(local_58);
    *param_1 = 0;
    param_1[1] = 0;
    puVar12 = local_58[0];
    if ((long *)local_58[0][2] == plVar13) {
      FUN_00d53104(param_1,local_58);
      puVar12 = local_58[0];
    }
    if (puVar12 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar12 + 3);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = *puVar12;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_60 != (long *)0x0) {
      lVar8 = local_60[6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_60 + 0x50))();
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_2 + 0x288);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x288) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar11 = *plVar1;
    lVar4 = *(long *)(param_2 + 0x288);
    if (lVar11 != lVar8 || lVar4 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto joined_r0x01585b48;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x284) = lVar10 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
joined_r0x01585b48:
  do {
    if (bVar9) {
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
      return;
    }
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x288);
      if (lVar8 != lVar11 || lVar10 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        lVar11 = lVar8;
        lVar4 = lVar10;
        goto joined_r0x01585b48;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x284) = lVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
    lVar11 = lVar8;
    lVar4 = lVar10;
  } while( true );
}


