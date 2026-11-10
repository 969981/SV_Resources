/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ca4a4; name: FUN_010ca4a4
 */


void FUN_010ca4a4(long param_1,int param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  size_t sVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  plVar10 = (long *)(param_1 + 0x138);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_010ca4e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_010ca4e0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_010ca4e0:
  uVar2 = *(long *)(param_1 + 0x280) + (long)param_3;
  lVar6 = *(long *)(*(long *)(param_1 + 0x248) + (uVar2 >> 2 & 0x3ffffffffffffff8)) +
          (uVar2 & 0x1f) * 0x80;
  plVar10 = (long *)(lVar6 + 0x40);
  piVar7 = (int *)*plVar10;
  piVar9 = *(int **)(lVar6 + 0x38);
  if ((piVar9 != piVar7) && (*piVar9 != param_2)) {
    do {
      if (piVar7 + -1 == piVar9) {
        piVar9 = piVar7;
        goto LAB_010ca540;
      }
      piVar1 = piVar9 + 1;
      piVar9 = piVar9 + 1;
    } while (*piVar1 != param_2);
  }
LAB_010ca540:
  if (piVar7 != piVar9) {
    sVar5 = (long)piVar7 - (long)(piVar9 + 1);
    if (sVar5 != 0) {
      memmove(piVar9,piVar9 + 1,sVar5);
    }
    *plVar10 = (long)piVar9 + sVar5;
    uVar2 = *(long *)(param_1 + 0x280) + (long)param_2;
    uVar8 = uVar2 & 0x1f;
    lVar6 = *(long *)(*(long *)(param_1 + 0x248) + (uVar2 >> 2 & 0x3ffffffffffffff8));
    piVar9 = *(int **)(lVar6 + uVar8 * 0x80);
    plVar10 = (long *)(lVar6 + uVar8 * 0x80 + 8);
    piVar7 = (int *)*plVar10;
    if ((piVar9 != piVar7) && (*piVar9 != param_3)) {
      do {
        if (piVar7 + -1 == piVar9) {
          piVar9 = piVar7;
          goto LAB_010ca5c0;
        }
        piVar1 = piVar9 + 1;
        piVar9 = piVar9 + 1;
      } while (*piVar1 != param_3);
    }
LAB_010ca5c0:
    if (piVar7 == piVar9) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("it != child.parentIds.cend()","RemoveDependencyObject",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/game_object_manager.cpp"
                 ,0x2ff);
    }
    sVar5 = (long)piVar7 - (long)(piVar9 + 1);
    if (sVar5 != 0) {
      memmove(piVar9,piVar9 + 1,sVar5);
    }
    *plVar10 = (long)piVar9 + sVar5;
    FUN_00c5a744(param_1,param_2);
    *(undefined1 *)(param_1 + 0x3e4) = 1;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


