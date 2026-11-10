/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a815a8; name: FUN_01a815a8
 */


void FUN_01a815a8(undefined8 param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 *local_c8 [2];
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  puVar7 = (undefined8 *)FUN_0140f310();
  local_80 = *puVar7;
  uStack_78 = puVar7[1];
  local_70 = puVar7[2];
  local_68 = (long *)puVar7[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_0140f318(local_60,param_1,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_01340a44(&local_b8,param_1,1);
  if ((char)local_b8 != '\0') {
    local_e8 = local_b0;
    uStack_e0 = uStack_a8;
    local_d8 = local_a0;
    local_d0 = local_98;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
    FUN_0140f318(local_c8,param_1,&local_e8);
    FUN_00d0a34c(&local_90,local_c8);
    if (local_c8[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_c8[0] + 3);
      do {
        sVar14 = *psVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar13) {
          *psVar2 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        piVar1 = (int *)((long)local_c8[0] + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *local_c8[0];
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar14 == 0) goto LAB_01a816fc;
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if ((char)local_b8 != '\0') {
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      local_b8 = (long *)((ulong)local_b8 & 0xffffffffffffff00);
    }
  }
  if ((local_60[0] != (undefined8 *)0x0) && (*(short *)((long)local_60[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_60[0] + 0x1a);
    sVar14 = *(short *)((long)local_60[0] + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar14) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar13) {
          *psVar2 = sVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a818cc;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a818cc:
        bVar13 = false;
      }
      if (bVar13) {
        lVar11 = local_60[0][2];
        if (lVar11 != 0) {
          lVar8 = FUN_01491340(lVar11 + 0xe0,&local_b8);
          if (((lVar8 == 0) || (local_90 == (undefined8 *)0x0)) ||
             (*(short *)((long)local_90 + 0x1a) == 0)) goto LAB_01a8190c;
          psVar2 = (short *)((long)local_90 + 0x1a);
          sVar14 = *(short *)((long)local_90 + 0x1a);
          goto LAB_01a819e8;
        }
        break;
      }
      sVar14 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_01a8168c;
LAB_01a81ae4:
  if (*plVar10 == 0) goto code_r0x01a81aec;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
  bVar13 = false;
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar13) {
            *plVar10 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar13 = false;
          if (cVar4 == '\0') goto LAB_01a81a4c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a81a4c:
  plVar10 = (long *)FUN_022491f0(*(undefined8 *)(lVar12 + 0x100),*(undefined8 *)(lVar12 + 0x108));
  if ((*(long **)(lVar12 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_022491f0(*(undefined8 *)(lVar12 + 0x138),*(undefined8 *)(lVar12 + 0x140));
    if (*(long **)(lVar12 + 0x140) == plVar10) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)0x0;
      if (*plVar10 != 0) {
        plVar16 = (long *)(*plVar10 + -0x20);
      }
    }
  }
  else {
    plVar16 = (long *)(*plVar10 + -0x20);
  }
  if (!bVar13) {
    *(undefined8 *)(lVar12 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xf0));
  }
  if (plVar16 != (long *)0x0) {
    local_b8 = plVar16;
    (**(code **)(*plVar16 + 0x58))(plVar16);
    FUN_02249360(lVar8,&local_b8);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x60))();
    }
  }
  (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
  goto LAB_01a8190c;
code_r0x01a81aec:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar5) {
    *plVar10 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01a81a4c;
  goto LAB_01a81ae4;
  while (sVar14 = sVar3, sVar3 != 0) {
LAB_01a819e8:
    sVar3 = *psVar2;
    if (sVar3 == sVar14) {
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a81a0c;
      bVar13 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a81a0c:
      bVar13 = false;
    }
    if (bVar13) {
      lVar12 = local_90[2];
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 0xe8);
        lVar15 = *plVar10;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 != lVar15) {
          lVar9 = nn::os::GetCurrentThread();
          bVar13 = false;
          goto LAB_01a81ae4;
        }
        bVar13 = true;
        goto LAB_01a81a4c;
      }
      break;
    }
  }
LAB_01a8190c:
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
LAB_01a8168c:
  puVar7 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar14 = *psVar2;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar14 == 1) {
      piVar1 = (int *)((long)local_90 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_b8 = (long *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_b8);
      }
    }
    else if (sVar14 == 0) goto LAB_01a816fc;
  }
  if (local_60[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_60[0] + 3);
    do {
      sVar14 = *psVar2;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar14 == 1) {
      piVar1 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_b8 = (long *)*local_60[0];
        FUN_00c44438(lVar11 + 0x8040,&local_b8);
      }
    }
    else if (sVar14 == 0) {
LAB_01a816fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


