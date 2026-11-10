/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142a91c; name: FUN_0142a91c
 */


void FUN_0142a91c(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar10 = (long *)(param_2 + 0x110);
  lVar9 = *plVar10;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar9) {
    lVar7 = nn::os::GetCurrentThread();
LAB_0142a958:
    if (*plVar10 == 0) goto code_r0x0142a960;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
          while (*plVar10 == 0) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar12) {
              *plVar10 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0142a968;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar12) {
        *plVar10 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0142a968:
    bVar12 = false;
    goto LAB_0142a96c;
  }
  bVar12 = true;
LAB_0142a96c:
  plVar10 = *(long **)(param_2 + 0x128);
  plVar11 = *(long **)(param_2 + 0x130);
  if (plVar10 == plVar11) {
LAB_0142a9bc:
    plVar10 = *(long **)(param_2 + 0x160);
    plVar11 = *(long **)(param_2 + 0x168);
    if (plVar10 != plVar11) {
      do {
        if ((*plVar10 != 0) && (uVar8 = FUN_0142ac94(*plVar10 + 8), (uVar8 & 1) != 0)) {
          uVar8 = (**(code **)(*(long *)*plVar10 + 0xc0))();
          if ((uVar8 & 1) == 0) goto LAB_0142aa00;
        }
        plVar10 = plVar10 + 1;
      } while (plVar11 != plVar10);
      plVar10 = plVar11;
LAB_0142aa00:
      if (plVar10 != *(long **)(param_2 + 0x168)) {
        plVar11 = (long *)0x0;
        if (*plVar10 != 0) {
          plVar11 = (long *)(*plVar10 + -0x20);
        }
        goto LAB_0142aa10;
      }
    }
    plVar11 = (long *)0x0;
  }
  else {
    do {
      if ((*plVar10 != 0) && (uVar8 = FUN_0142ac94(*plVar10 + 8), (uVar8 & 1) != 0)) {
        uVar8 = (**(code **)(*(long *)*plVar10 + 0xc0))();
        if ((uVar8 & 1) == 0) goto LAB_0142a9b0;
      }
      plVar10 = plVar10 + 1;
    } while (plVar11 != plVar10);
    plVar10 = plVar11;
LAB_0142a9b0:
    if ((plVar10 == *(long **)(param_2 + 0x130)) || (*plVar10 == 0)) goto LAB_0142a9bc;
    plVar11 = (long *)(*plVar10 + -0x20);
  }
LAB_0142aa10:
  if (!bVar12) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
  }
  if (plVar11 == (long *)0x0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_0142b090(param_1,&local_50);
    puVar5 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_28 = *puVar5;
      goto LAB_0142ac04;
    }
  }
  else {
    (**(code **)(*plVar11 + 0x18))(&local_50,plVar11);
    *param_1 = 0;
    param_1[1] = 0;
    if ((long *)local_50[2] == plVar11 + 5) {
      FUN_0142ad6c(param_1,&local_50);
    }
    puVar5 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_28 = *puVar5;
LAB_0142ac04:
      FUN_00c44438(lVar7 + 0x8040,&local_28);
      return;
    }
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
code_r0x0142a960:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar12) {
    *plVar10 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0142a968;
  goto LAB_0142a958;
}


