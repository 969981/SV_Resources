/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab3298; name: FUN_01ab3298
 */


long FUN_01ab3298(long param_1)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  bool bVar16;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  lVar1 = param_1 + 0x110;
  if ((*(long *)(param_1 + 0x110) != 0) && (*(short *)(*(long *)(param_1 + 0x110) + 0x1a) != 0)) {
    return lVar1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return lVar1;
  }
  if (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) == 0) {
    return lVar1;
  }
  lVar11 = *(long *)(param_1 + 0x80);
  if (lVar11 == 0) {
    return lVar1;
  }
  if (*(short *)(lVar11 + 0x1a) == 0) {
    return lVar1;
  }
  psVar2 = (short *)(lVar11 + 0x1a);
  sVar12 = *(short *)(lVar11 + 0x1a);
  do {
    sVar4 = *psVar2;
    if (sVar4 == sVar12) {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar16) {
        *psVar2 = sVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_01ab3340;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01ab3340:
      bVar16 = false;
    }
    if (bVar16) {
      if (*(long *)(lVar11 + 0x10) == 0) {
        return lVar1;
      }
      plVar13 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
      local_68 = 0xe;
      local_60 = (long *)0x0;
      local_78 = (undefined8 *)&DAT_fe081e60b123f873;
      pcStack_70 = "TeleportEffect";
      FUN_00fe4300(local_58,plVar13,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_58[0] == (undefined8 *)0x0) goto LAB_01ab33c0;
      if (*(short *)((long)local_58[0] + 0x1a) == 0) goto LAB_01ab34f8;
      if (local_58[0] == (undefined8 *)0x0) goto LAB_01ab33c0;
      if (*(short *)((long)local_58[0] + 0x1a) == 0) goto LAB_01ab34f8;
      psVar2 = (short *)((long)local_58[0] + 0x1a);
      sVar12 = *(short *)((long)local_58[0] + 0x1a);
      goto LAB_01ab33f8;
    }
    sVar12 = sVar4;
    if (sVar4 == 0) {
      return lVar1;
    }
  } while( true );
LAB_01ab3768:
  if (*plVar10 == 0) goto code_r0x01ab3770;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
  bVar16 = false;
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
        while (*plVar10 == 0) {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar16) {
            *plVar10 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          bVar16 = false;
          if (cVar6 == '\0') goto LAB_01ab3450;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01ab3450:
  plVar10 = (long *)FUN_01e15d00(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
  if ((*(long **)(lVar11 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_01e15d00(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140));
    if (*(long **)(lVar11 + 0x140) == plVar10) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)0x0;
      if (*plVar10 != 0) {
        plVar15 = (long *)(*plVar10 + -0x20);
      }
    }
  }
  else {
    plVar15 = (long *)(*plVar10 + -0x20);
  }
  if (!bVar16) {
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(&local_78,plVar15);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    if ((long *)local_78[2] == plVar15 + 5) {
      FUN_010b7b78(&local_88,&local_78);
    }
    puVar7 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_78 + 3);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar16) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar16) {
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_48 = *puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_48);
        }
      }
      else if (sVar12 == 0) goto LAB_01ab35c8;
    }
    FUN_010764a4(lVar1,&local_88);
    puVar7 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_88 + 3);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar16) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        piVar3 = (int *)((long)local_88 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar16) {
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_78 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_78);
        }
      }
      else if (sVar12 == 0) goto LAB_01ab35c8;
    }
  }
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))();
  goto LAB_01ab34f8;
code_r0x01ab3770:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar5) {
    *plVar10 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01ab3450;
  goto LAB_01ab3768;
  while (sVar12 = sVar4, sVar4 != 0) {
LAB_01ab33f8:
    sVar4 = *psVar2;
    if (sVar4 == sVar12) {
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar16) {
        *psVar2 = sVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_01ab341c;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01ab341c:
      bVar16 = false;
    }
    if (bVar16) {
      lVar11 = local_58[0][2];
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xe8);
        lVar14 = *plVar10;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 != lVar14) {
          lVar9 = nn::os::GetCurrentThread();
          bVar16 = false;
          goto LAB_01ab3768;
        }
        bVar16 = true;
        goto LAB_01ab3450;
      }
      break;
    }
  }
LAB_01ab34f8:
  if (local_58[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58[0] + 3);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar16) {
        *psVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar16) {
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
        local_78 = (undefined8 *)*local_58[0];
        FUN_00c44438(lVar11 + 0x8040,&local_78);
      }
    }
    else if (sVar12 == 0) {
LAB_01ab35c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_01ab33c0:
  (**(code **)(*plVar13 + 0x60))(plVar13);
  return lVar1;
}


