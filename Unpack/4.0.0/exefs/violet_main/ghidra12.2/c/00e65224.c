/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e65224; name: FUN_00e65224
 */


void FUN_00e65224(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 local_6c;
  long *local_68;
  
  plVar12 = (long *)(param_1 + 0x130);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar12;
    lVar9 = *(long *)(param_1 + 0x138);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar10;
      *(long *)(param_1 + 0x138) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00e65264:
  while ((lVar10 != 0 && (lVar6 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
    do {
      lVar10 = *plVar12;
      lVar9 = *(long *)(param_1 + 0x138);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar10;
        *(long *)(param_1 + 0x138) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar1 = *plVar12;
    if (lVar1 != lVar10 || *(long *)(param_1 + 0x138) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00e65294;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar10;
      *(long *)(param_1 + 0x134) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00e65294:
  if (!bVar7) {
    lVar10 = lVar1;
    lVar9 = *(long *)(param_1 + 0x138);
    goto LAB_00e65264;
  }
  plVar3 = *(long **)(param_1 + 0x158);
  for (plVar2 = *(long **)(param_1 + 0x150); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar6 = *plVar2;
    if (*(int *)(lVar6 + 0x2c) != 0) {
      plVar8 = *(long **)(lVar6 + 0x10e8);
      lVar10 = *plVar8;
      if (*(long *)(lVar10 + 0x38) != *(long *)(lVar10 + 0x30)) {
        lVar9 = lVar6 + 0x30;
        if (*(char *)(*(long *)(lVar10 + 0x30) + 0x20) != '\0') {
          plVar8 = *(long **)(lVar6 + 0x1040);
          FUN_00e657bc(*(undefined8 *)(*plVar8 + 200),0x24,*(undefined4 *)(lVar6 + 0x2c),lVar9,
                       *(undefined8 *)(lVar6 + 0x1078),1);
          FUN_00c4cf3c(*plVar8);
          plVar8 = *(long **)(lVar6 + 0x10e8);
        }
        lVar10 = *plVar8;
        if (1 < (ulong)((*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30) >> 4) *
                       -0x5555555555555555)) {
          if (*(char *)(*(long *)(lVar10 + 0x30) + 0x50) != '\0') {
            lVar10 = *(long *)(lVar6 + 0x1040);
            FUN_00e657bc(*(undefined8 *)(*(long *)(lVar10 + 8) + 200),0x24,
                         *(undefined4 *)(lVar6 + 0x2c),lVar9,*(long *)(lVar6 + 0x1078) + 8,1);
            FUN_00c4cf3c(*(undefined8 *)(lVar10 + 8));
            plVar8 = *(long **)(lVar6 + 0x10e8);
          }
          lVar10 = *plVar8;
          if (2 < (ulong)((*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30) >> 4) *
                         -0x5555555555555555)) {
            if (*(char *)(*(long *)(lVar10 + 0x30) + 0x80) != '\0') {
              lVar10 = *(long *)(lVar6 + 0x1040);
              FUN_00e657bc(*(undefined8 *)(*(long *)(lVar10 + 0x10) + 200),0x24,
                           *(undefined4 *)(lVar6 + 0x2c),lVar9,*(long *)(lVar6 + 0x1078) + 0x10,1);
              FUN_00c4cf3c(*(undefined8 *)(lVar10 + 0x10));
              plVar8 = *(long **)(lVar6 + 0x10e8);
            }
            lVar10 = *plVar8;
            if (3 < (ulong)((*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30) >> 4) *
                           -0x5555555555555555)) {
              uVar11 = 3;
              do {
                if (*(char *)(*(long *)(lVar10 + 0x30) + uVar11 * 0x30 + 0x20) != '\0') {
                  lVar10 = *(long *)(lVar6 + 0x1040);
                  FUN_00e657bc(*(undefined8 *)(*(long *)(lVar10 + uVar11 * 8) + 200),0x24,
                               *(undefined4 *)(lVar6 + 0x2c),lVar9,
                               *(long *)(lVar6 + 0x1078) + uVar11 * 8,1);
                  FUN_00c4cf3c(*(undefined8 *)(lVar10 + uVar11 * 8));
                  plVar8 = *(long **)(lVar6 + 0x10e8);
                }
                lVar10 = *plVar8;
                uVar11 = uVar11 + 1;
              } while (uVar11 < (ulong)((*(long *)(lVar10 + 0x38) - *(long *)(lVar10 + 0x30) >> 4) *
                                       -0x5555555555555555));
            }
          }
        }
      }
      *(undefined4 *)(lVar6 + 0x2c) = 0;
    }
  }
  do {
    lVar6 = *plVar12;
    lVar10 = *(long *)(param_1 + 0x138);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x138) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar12;
    lVar1 = *(long *)(param_1 + 0x138);
    if (lVar9 != lVar6 || lVar1 != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00e65454;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x134) = lVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00e65454:
  if (!bVar7) {
    do {
      lVar6 = *plVar12;
      lVar10 = *(long *)(param_1 + 0x138);
      if (lVar6 != lVar9 || lVar10 != lVar1) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e65608;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar9;
        *(long *)(param_1 + 0x134) = lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00e65608:
    if (!bVar7) {
      do {
        lVar9 = *plVar12;
        lVar1 = *(long *)(param_1 + 0x138);
        if (lVar9 != lVar6 || lVar1 != lVar10) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar10 = lVar1;
          goto joined_r0x00e65608;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar6;
          *(long *)(param_1 + 0x134) = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar10 = lVar1;
      goto joined_r0x00e65608;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  (*DAT_04859f60)(&local_68,&DAT_04859f80);
  lVar6 = local_68[0x22];
  if (local_68 != (long *)0x0) {
    plVar12 = local_68 + 5;
    do {
      lVar10 = *plVar12;
      iVar5 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar10 = *(long *)(param_1 + 0x1a8);
  uVar11 = lVar6 + 1U & 3;
  plVar12 = (long *)(param_1 + 400);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00e654c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x198));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x198));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00e654c4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00e654c4:
  plVar12 = (long *)(lVar10 + uVar11 * 0x78 + 0x48);
  lVar6 = *plVar12;
  if (lVar6 != 0) {
    lVar10 = lVar10 + uVar11 * 0x78;
    do {
      uVar11 = (lVar6 + *(long *)(lVar10 + 0x40)) - 1;
      local_6c = *(undefined4 *)
                  (*(long *)(*(long *)(lVar10 + 8) + (uVar11 >> 7 & 0x1fffffffffffff8)) +
                  (uVar11 & 0x3ff) * 4);
      FUN_00c44438(param_1 + 0x40,&local_6c);
      *plVar12 = *plVar12 + -1;
      FUN_00e65704(lVar10);
      lVar6 = *plVar12;
    } while (lVar6 != 0);
  }
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x198));
  return;
}


