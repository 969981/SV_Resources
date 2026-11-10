/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019dd2e0; name: FUN_019dd2e0
 */


void FUN_019dd2e0(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  bool bVar14;
  short sVar15;
  long lVar16;
  code *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  long *plStack_d8;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  puVar8 = (undefined8 *)FUN_0140f310();
  local_78 = *puVar8;
  uStack_70 = puVar8[1];
  local_68 = puVar8[2];
  local_60 = (long *)puVar8[3];
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  FUN_0140f318(local_58,param_1,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_58[0] != (undefined8 *)0x0) {
    puVar8 = local_58[0];
    if (*(short *)((long)local_58[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58[0] + 0x1a);
      sVar15 = *(short *)((long)local_58[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar15) {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_019dd3a0;
          bVar14 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019dd3a0:
          bVar14 = false;
        }
        if (bVar14) {
          lVar13 = local_58[0][2];
          if (lVar13 == 0) goto LAB_019dd59c;
          plVar11 = (long *)(lVar13 + 0xe8);
          lVar16 = *plVar11;
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 != lVar16) {
            lVar9 = nn::os::GetCurrentThread();
            bVar14 = false;
            goto LAB_019dd744;
          }
          bVar14 = true;
          goto LAB_019dd3e0;
        }
        sVar15 = sVar4;
      } while (sVar4 != 0);
LAB_019dd598:
      puVar8 = local_58[0];
      if (local_58[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_019dd59c:
    psVar1 = (short *)(puVar8 + 3);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_100 = (code *)*puVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_100);
      }
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_019dd744:
  if (*plVar11 == 0) goto code_r0x019dd74c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
  bVar14 = false;
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
        while (*plVar11 == 0) {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar14) {
            *plVar11 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          bVar14 = false;
          if (cVar6 == '\0') goto LAB_019dd3e0;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_019dd3e0:
  plVar10 = (long *)FUN_02132b90(*(undefined8 *)(lVar13 + 0x100),*(undefined8 *)(lVar13 + 0x108));
  if ((*(long **)(lVar13 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_02132b90(*(undefined8 *)(lVar13 + 0x138),*(undefined8 *)(lVar13 + 0x140));
    if (*(long **)(lVar13 + 0x140) == plVar10) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*plVar10 != 0) {
        lVar9 = *plVar10 + -0x20;
      }
    }
  }
  else {
    lVar9 = *plVar10 + -0x20;
  }
  if (!bVar14) {
    *(undefined8 *)(lVar13 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
  }
  local_80 = lVar9;
  if (lVar9 != 0) {
    lVar16 = *plVar11;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar16) {
      lVar9 = nn::os::GetCurrentThread();
LAB_019dd440:
      if (*plVar11 == 0) goto code_r0x019dd448;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
            while (*plVar11 == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar14) {
                *plVar11 = lVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_019dd450;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar14) {
          *plVar11 = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_019dd450:
      bVar14 = false;
      goto LAB_019dd454;
    }
    bVar14 = true;
LAB_019dd454:
    plVar11 = (long *)FUN_02132cb0(*(undefined8 *)(lVar13 + 0x100),*(undefined8 *)(lVar13 + 0x108));
    if ((*(long **)(lVar13 + 0x108) == plVar11) || (*plVar11 == 0)) {
      plVar11 = (long *)FUN_02132cb0(*(undefined8 *)(lVar13 + 0x138),*(undefined8 *)(lVar13 + 0x140)
                                    );
      if (*(long **)(lVar13 + 0x140) == plVar11) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (*plVar11 != 0) {
          lVar9 = *plVar11 + -0x20;
        }
      }
    }
    else {
      lVar9 = *plVar11 + -0x20;
    }
    if (!bVar14) {
      *(undefined8 *)(lVar13 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
    }
    if (lVar9 != 0) {
      plStack_d8 = &local_80;
      local_100 = FUN_01788284;
      local_f8 = FUN_02b240ec;
      local_f0 = &LAB_02b240f0;
      puStack_e8 = &LAB_02b240fc;
      puVar8 = *(undefined8 **)(lVar9 + 0x178);
      puVar3 = *(undefined8 **)(lVar9 + 0x180);
      pcVar12 = FUN_02b240ec;
      local_e0 = param_1;
      if (puVar8 != puVar3) {
        local_48 = *puVar8;
        FUN_01788284(&local_e0,&local_48);
        if (puVar8 + 1 != puVar3) {
          local_48 = puVar8[1];
          (*local_100)(&local_e0,&local_48);
          if (puVar8 + 2 != puVar3) {
            local_48 = puVar8[2];
            (*local_100)(&local_e0,&local_48);
            if (puVar8 + 3 != puVar3) {
              local_48 = puVar8[3];
              (*local_100)(&local_e0,&local_48);
              for (puVar8 = puVar8 + 4; puVar8 != puVar3; puVar8 = puVar8 + 1) {
                local_48 = *puVar8;
                (*local_100)(&local_e0,&local_48);
              }
            }
          }
        }
        pcVar12 = local_f8;
        if (local_f8 == (code *)0x0) goto LAB_019dd584;
      }
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar12)(&local_e0);
    }
  }
LAB_019dd584:
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
  goto LAB_019dd598;
code_r0x019dd74c:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_019dd3e0;
  goto LAB_019dd744;
code_r0x019dd448:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar14) {
    *plVar11 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_019dd450;
  goto LAB_019dd440;
}


