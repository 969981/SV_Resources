/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0224428c; name: FUN_0224428c
 */


void FUN_0224428c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  
  local_68 = *(undefined8 *)(param_1 + 0x110);
  uStack_60 = *(undefined8 *)(param_1 + 0x118);
  local_58 = *(undefined8 *)(param_1 + 0x120);
  plVar8 = *(long **)(param_1 + 0x128);
  local_50 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_48,param_1 + 0x30,&local_68);
    plVar8 = local_50;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar12 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02244358;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02244358:
          bVar11 = false;
        }
        if (bVar11) {
          lVar10 = local_48[2];
          if (lVar10 == 0) goto LAB_02244474;
          plVar8 = (long *)(lVar10 + 0xe8);
          lVar13 = *plVar8;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 != lVar13) {
            lVar7 = nn::os::GetCurrentThread();
            goto LAB_0224439c;
          }
          bVar11 = true;
          goto LAB_022443b0;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
LAB_02244470:
      if (local_48 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_02244474:
    puVar5 = local_48;
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = (long *)*puVar5;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_0224439c:
  if (*plVar8 == 0) goto code_r0x022443a4;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_022443ac;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_022443ac:
  bVar11 = false;
LAB_022443b0:
  plVar8 = (long *)FUN_022440f0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_022440f0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar8) {
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
  if (!bVar11) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if ((lVar7 != 0) && (lVar13 = FUN_00d8f934(lVar7), lVar13 != 0)) {
    uVar14 = 0;
    do {
      FUN_021217f0(&local_38,lVar7,uVar14 & 0xffffffff);
      if (local_38 != (long *)0x0) {
        lVar13 = local_38[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        *(undefined1 *)((long)local_38 + 0x71) = 1;
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar14 = uVar14 + 1;
      uVar9 = FUN_00d8f934(lVar7);
    } while (uVar14 < uVar9);
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
  goto LAB_02244470;
code_r0x022443a4:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar11) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_022443ac;
  goto LAB_0224439c;
}


