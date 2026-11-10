/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022389d4; name: FUN_022389d4
 */


void FUN_022389d4(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  ulong *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  ulong local_98;
  undefined1 auStack_90 [24];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  ulong *local_50;
  undefined8 uStack_48;
  
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  plVar9 = *(long **)(param_1 + 0x128);
  local_58 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50 = (ulong *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
    plVar9 = local_58;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_50 != (ulong *)0x0) {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar13 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_02238aa8;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02238aa8:
          bVar12 = false;
        }
        if (bVar12) {
          uVar10 = local_50[2];
          if (uVar10 == 0) goto LAB_02238b84;
          plVar9 = (long *)(uVar10 + 0xe8);
          lVar14 = *plVar9;
          lVar11 = nn::os::GetCurrentThread();
          if (lVar11 == lVar14) {
            bVar12 = true;
            goto LAB_02238ae8;
          }
          lVar11 = nn::os::GetCurrentThread();
          bVar12 = false;
          goto LAB_02238ca8;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
LAB_02238b80:
      if (local_50 == (ulong *)0x0) {
        return;
      }
    }
LAB_02238b84:
    puVar7 = local_50;
    puVar2 = local_50 + 3;
    do {
      sVar13 = (short)*puVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar12) {
        *(short *)puVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_98 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_98);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_02238ca8:
  if (*plVar9 == 0) goto code_r0x02238cb0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(uVar10 + 0xf0));
  bVar12 = false;
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(uVar10 + 0xf0));
        while (*plVar9 == 0) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *plVar9 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          bVar12 = false;
          if (cVar6 == '\0') goto LAB_02238ae8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02238ae8:
  plVar9 = (long *)FUN_022380d0(*(undefined8 *)(uVar10 + 0x100),*(undefined8 *)(uVar10 + 0x108));
  if ((*(long **)(uVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_022380d0(*(undefined8 *)(uVar10 + 0x138),*(undefined8 *)(uVar10 + 0x140));
    if (*(long **)(uVar10 + 0x140) == plVar9) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*plVar9 != 0) {
        lVar11 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar11 = *plVar9 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(uVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(uVar10 + 0xf0));
  }
  if (lVar11 != 0) {
    FUN_01340a44(&local_98,param_1,1);
    if ((char)local_98 != '\0') {
      FUN_012a26c4(lVar11,auStack_90,0);
      if ((char)local_98 != '\0') {
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        local_98 = local_98 & 0xffffffffffffff00;
      }
    }
  }
  (**(code **)(*(long *)(uVar10 - 0x28) + 0x60))((long *)(uVar10 - 0x28));
  goto LAB_02238b80;
code_r0x02238cb0:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02238ae8;
  goto LAB_02238ca8;
}


