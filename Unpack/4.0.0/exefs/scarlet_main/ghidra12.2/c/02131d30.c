/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02131d30; name: FUN_02131d30
 */


void FUN_02131d30(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  long lVar13;
  long *plVar14;
  code *local_e8;
  undefined1 auStack_d0 [104];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e8 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_d0);
    local_e8 = *(code **)(param_3 + 8);
  }
  local_68 = *(undefined8 *)(param_2 + 0x110);
  uStack_60 = *(undefined8 *)(param_2 + 0x118);
  local_58 = *(undefined8 *)(param_2 + 0x120);
  local_50 = *(long **)(param_2 + 0x128);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x18))();
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_48,param_2 + 0x30,&local_68);
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar12 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02131e50;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02131e50:
          bVar11 = false;
        }
        if (bVar11) {
          lVar10 = local_48[2];
          if (lVar10 == 0) goto LAB_02131fb8;
          plVar14 = (long *)(lVar10 + 0xe8);
          lVar13 = *plVar14;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 != lVar13) {
            lVar8 = nn::os::GetCurrentThread();
            goto LAB_02131e94;
          }
          bVar11 = true;
          goto LAB_02131ea8;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
LAB_02131fb4:
      if (local_48 == (undefined8 *)0x0) goto LAB_02131dd4;
    }
LAB_02131fb8:
    puVar6 = local_48;
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_02131dd4:
  if (local_e8 != (code *)0x0) {
    (*local_e8)(auStack_d0);
  }
  return;
LAB_02131e94:
  if (*plVar14 == 0) goto code_r0x02131e9c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar14 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar11) {
            *plVar14 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02131ea4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *plVar14 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02131ea4:
  bVar11 = false;
LAB_02131ea8:
  plVar14 = *(long **)(lVar10 + 0x100);
  plVar3 = *(long **)(lVar10 + 0x108);
  if (plVar14 != plVar3) {
    do {
      if (((*plVar14 != 0) && (uVar9 = FUN_013deb14(*plVar14 + 8), (uVar9 & 1) != 0)) &&
         (uVar9 = (**(code **)(*(long *)*plVar14 + 0xc0))(), (uVar9 & 1) == 0)) goto LAB_02131eec;
      plVar14 = plVar14 + 1;
    } while (plVar3 != plVar14);
    plVar14 = plVar3;
LAB_02131eec:
    if (plVar14 != *(long **)(lVar10 + 0x108)) {
      (**(code **)(*(long *)*plVar14 + 0xa8))();
      *(undefined **)(lVar10 + 0x188) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar10 + 400) = 0;
    }
  }
  plVar14 = *(long **)(lVar10 + 0x138);
  plVar3 = *(long **)(lVar10 + 0x140);
  if (plVar14 != plVar3) {
    do {
      if (((*plVar14 != 0) && (uVar9 = FUN_013deb14(*plVar14 + 8), (uVar9 & 1) != 0)) &&
         (uVar9 = (**(code **)(*(long *)*plVar14 + 0xc0))(), (uVar9 & 1) == 0)) goto LAB_02131f58;
      plVar14 = plVar14 + 1;
    } while (plVar3 != plVar14);
    plVar14 = plVar3;
LAB_02131f58:
    if (plVar14 != *(long **)(lVar10 + 0x140)) {
      (**(code **)(*(long *)*plVar14 + 0xa8))();
      *(undefined **)(lVar10 + 0x188) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar10 + 400) = 0;
    }
  }
  if ((*(byte *)(lVar10 + 0x338) & 7) != 0) {
    FUN_016a9abc(lVar10 + 0xe0);
  }
  if (!bVar11) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
  goto LAB_02131fb4;
code_r0x02131e9c:
  cVar5 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar11) {
    *plVar14 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_02131ea4;
  goto LAB_02131e94;
}


