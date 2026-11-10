/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02231818; name: FUN_02231818
 */


void FUN_02231818(long param_1)

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
  bool bVar10;
  short sVar11;
  long lVar12;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
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
      sVar11 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_022318e4;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_022318e4:
          bVar10 = false;
        }
        if (bVar10) {
          lVar9 = local_48[2];
          if (lVar9 == 0) goto LAB_022319a4;
          plVar8 = (long *)(lVar9 + 0xe8);
          lVar12 = *plVar8;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 != lVar12) {
            lVar7 = nn::os::GetCurrentThread();
            goto LAB_02231928;
          }
          bVar10 = true;
          goto LAB_0223193c;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
LAB_022319a0:
      if (local_48 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_022319a4:
    puVar5 = local_48;
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar5;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_02231928:
  if (*plVar8 == 0) goto code_r0x02231930;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar10) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02231938;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar10) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02231938:
  bVar10 = false;
LAB_0223193c:
  plVar8 = (long *)FUN_02231640(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
  if ((*(long **)(lVar9 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_02231640(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
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
  if (!bVar10) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  if (lVar7 != 0) {
    FUN_02231af8(lVar7,1);
  }
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
  goto LAB_022319a0;
code_r0x02231930:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar10) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_02231938;
  goto LAB_02231928;
}


