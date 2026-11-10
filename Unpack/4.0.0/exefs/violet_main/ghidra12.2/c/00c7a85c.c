/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7a85c; name: FUN_00c7a85c
 */


void FUN_00c7a85c(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  FUN_00c7ac4c(*(undefined8 *)(param_1 + 0x30));
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x69) == '\0') {
    bVar7 = *(char *)(*(long *)(param_1 + 0x70) + 0x6a) != '\0';
  }
  else {
    bVar7 = true;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 0x68);
  plVar8 = (long *)**(long **)(**(long **)(param_1 + 0x38) + 0x30);
  if (plVar8 != (long *)0x0) {
    plVar13 = plVar8 + 5;
    do {
      lVar14 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)lVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar14 == -1) goto LAB_00c7abfc;
  }
  plVar13 = *(long **)plVar8[10];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
    do {
      lVar14 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar14 == -1) {
LAB_00c7abfc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar1 = plVar8 + 5;
  do {
    lVar14 = *plVar1;
    iVar6 = (int)lVar14 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  else if ((int)lVar14 == 0) goto LAB_00c7ac24;
  if (*(int *)((long)plVar13 + 0x15c) != iVar3) {
    *(int *)((long)plVar13 + 0x15c) = iVar3;
    *(undefined1 *)((long)plVar13 + 0x19a) = 1;
  }
  if (iVar3 == 0) {
    lVar14 = **(long **)(*(long *)(param_1 + 0x30) + 0x30);
    FUN_00c41540(lVar14);
    puVar9 = *(undefined8 **)(lVar14 + 0x88);
    *puVar9 = 0;
    puVar9[1] = 0;
  }
  plVar8 = plVar13 + 0xe;
  lVar14 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar8;
    lVar12 = plVar13[0xf];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar10;
      plVar13[0xf] = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c7a94c:
  while ((lVar10 != 0 && (lVar14 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x10));
    do {
      lVar10 = *plVar8;
      lVar12 = plVar13[0xf];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar10;
        plVar13[0xf] = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar8;
    if (lVar2 != lVar10 || plVar13[0xf] != lVar12) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00c7a97c;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar10;
      *(long *)((long)plVar13 + 0x74) = lVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar5 = true;
LAB_00c7a97c:
  if (!bVar5) {
    lVar10 = lVar2;
    lVar12 = plVar13[0xf];
    goto LAB_00c7a94c;
  }
  if ((int)((ulong)(plVar13[7] - plVar13[6]) >> 3) != 0) {
    lVar14 = *(long *)plVar13[6];
    if ((bool)(bVar7 | iVar3 == 0)) {
      *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) & 0xfffffffffffffffe;
      if ((plVar13[7] - plVar13[6] & 0x7fffffff0U) != 0) {
        lVar14 = *(long *)(plVar13[6] + 8);
        *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) & 0xfffffffffffffffe;
        if (0x10 < (plVar13[7] - plVar13[6] & 0x7fffffff8U)) {
          lVar14 = *(long *)(plVar13[6] + 0x10);
          *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) & 0xfffffffffffffffe;
          lVar14 = plVar13[6];
          if ((plVar13[7] - lVar14 & 0x7ffffffe0U) != 0) {
            uVar11 = 3;
            do {
              lVar14 = *(long *)(lVar14 + uVar11 * 8);
              uVar11 = uVar11 + 1;
              *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) & 0xfffffffffffffffe;
              lVar14 = plVar13[6];
            } while (uVar11 < ((ulong)(plVar13[7] - lVar14) >> 3 & 0xffffffff));
          }
        }
      }
    }
    else {
      *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1;
      if ((plVar13[7] - plVar13[6] & 0x7fffffff0U) != 0) {
        lVar14 = *(long *)(plVar13[6] + 8);
        *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1;
        if (0x10 < (plVar13[7] - plVar13[6] & 0x7fffffff8U)) {
          lVar14 = *(long *)(plVar13[6] + 0x10);
          *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1;
          lVar14 = plVar13[6];
          if ((plVar13[7] - lVar14 & 0x7ffffffe0U) != 0) {
            uVar11 = 3;
            do {
              lVar14 = *(long *)(lVar14 + uVar11 * 8);
              uVar11 = uVar11 + 1;
              *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1;
              lVar14 = plVar13[6];
            } while (uVar11 < ((ulong)(plVar13[7] - lVar14) >> 3 & 0xffffffff));
          }
        }
      }
    }
  }
  do {
    lVar14 = *plVar8;
    lVar10 = plVar13[0xf];
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar14;
      plVar13[0xf] = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar12 = *plVar8;
    lVar2 = plVar13[0xf];
    if (lVar12 != lVar14 || lVar2 != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x00c7aaf8;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar14;
      *(long *)((long)plVar13 + 0x74) = lVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
joined_r0x00c7aaf8:
  if (!bVar7) {
    do {
      lVar14 = *plVar8;
      lVar10 = plVar13[0xf];
      if (lVar14 != lVar12 || lVar10 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar12 = lVar14;
        lVar2 = lVar10;
        goto joined_r0x00c7aaf8;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar12;
        *(long *)((long)plVar13 + 0x74) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
    lVar12 = lVar14;
    lVar2 = lVar10;
    goto joined_r0x00c7aaf8;
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x10));
  if (plVar13 != (long *)0x0) {
    plVar8 = plVar13 + 5;
    do {
      lVar14 = *plVar8;
      iVar3 = (int)lVar14 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c7abb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x10))(plVar13);
      return;
    }
    if ((int)lVar14 == 0) {
LAB_00c7ac24:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


