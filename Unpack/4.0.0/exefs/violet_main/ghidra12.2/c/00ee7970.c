/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee7970; name: FUN_00ee7970
 */


void FUN_00ee7970(long param_1,int param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *piVar11;
  int local_38;
  int local_34;
  
  local_38 = param_3;
  local_34 = param_2;
  if (param_3 == param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("dependencyId != id","SetDependencyObject",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/game_object_manager.cpp"
               ,0x2e0);
  }
  plVar1 = (long *)(param_1 + 0x138);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00ee79b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ee79b4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ee79b4:
  iVar7 = local_34;
  iVar6 = local_38;
  uVar2 = *(long *)(param_1 + 0x280) + (long)local_38;
  uVar3 = *(long *)(param_1 + 0x280) + (long)local_34;
  lVar8 = *(long *)(*(long *)(param_1 + 0x248) + (uVar2 >> 2 & 0x3ffffffffffffff8)) +
          (uVar2 & 0x1f) * 0x80;
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x248) + (uVar3 >> 2 & 0x3ffffffffffffff8)) +
                   (uVar3 & 0x1f) * 0x80);
  puVar9 = (undefined8 *)(lVar8 + 0x38);
  piVar11 = (int *)*puVar9;
  piVar10 = *(int **)(lVar8 + 0x40);
  if ((piVar11 != piVar10) && (*piVar11 != local_34)) {
    do {
      piVar11 = piVar11 + 1;
      if (piVar10 == piVar11) {
        piVar11 = piVar10;
        goto LAB_00ee7a2c;
      }
    } while (*piVar11 != local_34);
  }
LAB_00ee7a2c:
  if (piVar10 == piVar11) {
    FUN_00ee7bb4(puVar9,&local_34);
    piVar11 = (int *)*plVar1;
    piVar10 = (int *)plVar1[1];
    if ((piVar11 != piVar10) && (*piVar11 != iVar6)) {
      do {
        piVar11 = piVar11 + 1;
        if (piVar10 == piVar11) {
          piVar11 = piVar10;
          goto LAB_00ee7a70;
        }
      } while (*piVar11 != iVar6);
    }
LAB_00ee7a70:
    if (piVar10 != piVar11) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("std::find(child.parentIds.cbegin(), child.parentIds.cend(), dependencyId) == child.parentIds.cend()"
                 ,"SetDependencyObject",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/game_object_manager.cpp"
                 ,0x2ee);
    }
    FUN_00ee7bb4(plVar1,&local_38);
    FUN_00c5a744(param_1,iVar7);
    *(undefined1 *)(param_1 + 0x3e4) = 1;
  }
  else {
    piVar11 = (int *)*plVar1;
    piVar10 = (int *)plVar1[1];
    if ((piVar11 != piVar10) && (*piVar11 != local_38)) {
      do {
        piVar11 = piVar11 + 1;
        if (piVar10 == piVar11) {
          piVar11 = piVar10;
          goto LAB_00ee7b34;
        }
      } while (*piVar11 != local_38);
    }
LAB_00ee7b34:
    if (piVar10 == piVar11) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("std::find(child.parentIds.cbegin(), child.parentIds.cend(), dependencyId) != child.parentIds.cend()"
                 ,"SetDependencyObject",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/game_object_manager.cpp"
                 ,0x2e8);
    }
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


