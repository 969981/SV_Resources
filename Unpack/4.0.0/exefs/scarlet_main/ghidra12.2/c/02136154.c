/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02136154; name: FUN_02136154
 */


void FUN_02136154(long param_1,uint param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60 [2];
  
  lVar9 = *(long *)(param_1 + 0x78);
  if (lVar9 == 0) {
    return;
  }
  if (*(short *)(lVar9 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar11 = *(short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_021361cc;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_021361cc:
      bVar14 = false;
    }
    if (bVar14) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        return;
      }
      local_80 = *(undefined8 *)(param_1 + 0x60);
      uStack_78 = *(undefined8 *)(param_1 + 0x68);
      plVar12 = (long *)(lVar9 + -0x28);
      local_70 = *(undefined8 *)(param_1 + 0x70);
      local_68 = (long *)0x0;
      FUN_00fe3ff4(local_60,plVar12,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_60[0] == (undefined8 *)0x0) goto LAB_02136220;
      if (*(short *)((long)local_60[0] + 0x1a) == 0) goto LAB_02136390;
      if (local_60[0] == (undefined8 *)0x0) goto LAB_02136220;
      if (*(short *)((long)local_60[0] + 0x1a) == 0) goto LAB_02136390;
      psVar1 = (short *)((long)local_60[0] + 0x1a);
      sVar11 = *(short *)((long)local_60[0] + 0x1a);
      goto LAB_02136294;
    }
    sVar11 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
LAB_021364c4:
  if (*plVar8 == 0) goto code_r0x021364cc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  bVar14 = false;
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar8 == 0) {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar14) {
            *plVar8 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar14 = false;
          if (cVar5 == '\0') goto LAB_02136314;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02136314:
  plVar8 = (long *)FUN_02136530(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_02136530(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
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
  if (!bVar14) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (lVar7 != 0) {
    FUN_01101dbc(lVar7,param_2 & 1,0);
  }
  lVar7 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar11 = *psVar1;
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar11 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
  }
  else if (sVar11 == 0) goto LAB_02136244;
  goto LAB_02136390;
code_r0x021364cc:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar4) {
    *plVar8 = lVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_02136314;
  goto LAB_021364c4;
  while (sVar11 = sVar3, sVar3 != 0) {
LAB_02136294:
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_021362b8;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_021362b8:
      bVar14 = false;
    }
    if (bVar14) {
      lVar10 = local_60[0][2];
      if (lVar10 != 0) {
        plVar8 = (long *)(lVar10 + 0xe8);
        lVar13 = *plVar8;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar13) {
          lVar7 = nn::os::GetCurrentThread();
          bVar14 = false;
          goto LAB_021364c4;
        }
        bVar14 = true;
        goto LAB_02136314;
      }
      break;
    }
  }
LAB_02136390:
  if (local_60[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60[0] + 3);
    do {
      sVar11 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_80 = *local_60[0];
        FUN_00c44438(lVar10 + 0x8040,&local_80);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_02136220:
  lVar9 = *(long *)(lVar9 + 8);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar11 = *psVar1;
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar11 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar12 + 0x50))(plVar12);
  }
  else if (sVar11 == 0) {
LAB_02136244:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


