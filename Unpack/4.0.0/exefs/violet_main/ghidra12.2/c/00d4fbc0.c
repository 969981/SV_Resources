/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4fbc0; name: FUN_00d4fbc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4fbc0(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  if (*(int *)(param_1 + 0x120) == 2) {
    *(undefined4 *)(*(long *)(param_1 + 0x128) + 0xf0) = *(undefined4 *)(param_1 + 0x154);
    FUN_00c9e664(&local_c0,param_1 + 0xe8);
    if (local_b8 == (code *)0x0) {
      uVar12 = _DAT_000000e0;
      uVar13 = uRam00000000000000e8;
LAB_00d4fc2c:
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x60))();
      }
      lVar8 = *(long *)(param_1 + 0x128);
      *(ulong *)(lVar8 + 0x138) =
           CONCAT44(0x3f800000,(float)uVar13 + (float)*(undefined8 *)(lVar8 + 0x148));
      *(ulong *)(lVar8 + 0x130) =
           CONCAT44((float)((ulong)uVar12 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar8 + 0x140) >> 0x20),
                    (float)uVar12 + (float)*(undefined8 *)(lVar8 + 0x140));
      nn::os::LockMutex((MutexType *)(param_1 + 0x130));
      FUN_00d4ffe4(*(undefined8 *)(param_1 + 0x128));
      if (*(char *)(param_1 + 0x150) == '\0') {
        bVar5 = *(char *)(param_1 + 0x151) != '\0';
      }
      else {
        bVar5 = true;
      }
      *(bool *)(*(long *)(param_1 + 0x128) + 0x250) = bVar5;
      *(undefined1 *)(param_1 + 0x151) = 0;
      if ((*(char *)(param_1 + 0x150) == '\0') &&
         ((*(char *)(param_1 + 0x58) != -0x7e || (*(char *)(param_1 + 0x59) != -0x7e)))) {
        uVar2 = *(undefined2 *)(param_1 + 0x58);
        plVar11 = (long *)(param_1 + 0x38);
        *(undefined2 *)(param_1 + 0x58) = 0x8282;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_00c6a584(*(long *)(param_1 + 0x48),plVar11);
        }
        (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
      return;
    }
    plVar11 = (long *)((long)local_b8 + 0x28);
    uVar13 = *(undefined8 *)(*(long *)((long)local_b8 + 0x48) + 0xe8);
    uVar12 = *(undefined8 *)(*(long *)((long)local_b8 + 0x48) + 0xe0);
    do {
      lVar8 = *plVar11;
      iVar4 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*(long *)local_b8 + 0x10))();
      goto LAB_00d4fc2c;
    }
    if ((int)lVar8 != 0) goto LAB_00d4fc2c;
    goto LAB_00d4ffbc;
  }
  if (*(int *)(param_1 + 0x120) != 1) {
    return;
  }
  FUN_00c9e664(&local_c0,param_1 + 0xe8);
  if (local_b8 == (code *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)((long)local_b8 + 0x48);
  }
  plVar11 = (long *)(lVar8 + 0x110);
  lVar10 = *plVar11;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar10) {
    lVar6 = nn::os::GetCurrentThread();
LAB_00d4fd08:
    if (*plVar11 == 0) goto code_r0x00d4fd10;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00d4fd18;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00d4fd18:
    bVar5 = false;
    goto LAB_00d4fd1c;
  }
  bVar5 = true;
LAB_00d4fd1c:
  plVar11 = *(long **)(lVar8 + 0x128);
  plVar1 = *(long **)(lVar8 + 0x130);
  if (plVar11 == plVar1) {
LAB_00d4fd7c:
    plVar11 = *(long **)(lVar8 + 0x160);
    plVar1 = *(long **)(lVar8 + 0x168);
    if (plVar11 != plVar1) {
      do {
        if ((*plVar11 != 0) && (uVar7 = FUN_00d50230(*plVar11 + 8), (uVar7 & 1) != 0)) {
          uVar7 = (**(code **)(*(long *)*plVar11 + 0xc0))();
          if ((uVar7 & 1) == 0) goto LAB_00d4fdc0;
        }
        plVar11 = plVar11 + 1;
      } while (plVar1 != plVar11);
      plVar11 = plVar1;
LAB_00d4fdc0:
      if (plVar11 != *(long **)(lVar8 + 0x168)) {
        lVar6 = 0;
        if (*plVar11 != 0) {
          lVar6 = *plVar11 + -0x20;
        }
        goto LAB_00d4fe80;
      }
    }
    lVar6 = 0;
  }
  else {
    do {
      if ((*plVar11 != 0) && (uVar7 = FUN_00d50230(*plVar11 + 8), (uVar7 & 1) != 0)) {
        uVar7 = (**(code **)(*(long *)*plVar11 + 0xc0))();
        if ((uVar7 & 1) == 0) goto LAB_00d4fd60;
      }
      plVar11 = plVar11 + 1;
    } while (plVar1 != plVar11);
    plVar11 = plVar1;
LAB_00d4fd60:
    if ((plVar11 == *(long **)(lVar8 + 0x130)) || (*plVar11 == 0)) goto LAB_00d4fd7c;
    lVar6 = *plVar11 + -0x20;
  }
LAB_00d4fe80:
  if (!bVar5) {
    *(undefined8 *)(lVar8 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
  }
  if (local_b8 != (code *)0x0) {
    plVar11 = (long *)((long)local_b8 + 0x28);
    do {
      lVar8 = *plVar11;
      iVar4 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*(long *)local_b8 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_00d4ffbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x60))();
  }
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x120) != 2) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x128);
  local_c0 = (long *)&LAB_0218b038;
  local_b8 = FUN_02b49478;
  local_b0 = FUN_02b4947c;
  local_a8 = &LAB_02b49488;
  pcVar9 = *(code **)(lVar8 + 0x38);
  alStack_a0[0] = param_1;
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    (*pcVar9)(lVar8 + 0x50);
    if (local_b0 == (code *)0x0) goto LAB_00d4ff60;
  }
  (*local_b0)(alStack_a0,lVar8 + 0x50);
  *(undefined1 **)(lVar8 + 0x48) = local_a8;
  *(undefined8 *)(lVar8 + 0x30) = local_c0;
  *(code **)(lVar8 + 0x38) = local_b8;
  *(code **)(lVar8 + 0x40) = local_b0;
LAB_00d4ff60:
  pcVar9 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (long *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar9)(alStack_a0);
  }
  *(undefined4 *)(param_1 + 0x120) = 2;
  return;
code_r0x00d4fd10:
  cVar3 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00d4fd18;
  goto LAB_00d4fd08;
}


