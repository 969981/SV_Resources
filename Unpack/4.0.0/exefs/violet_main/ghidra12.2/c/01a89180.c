/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a89180; name: FUN_01a89180
 */


undefined8 FUN_01a89180(undefined8 param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  long **pplVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  short sVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  char local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *local_58;
  
  local_98 = 0x452d8fca04bfb23b;
  pcStack_90 = "SetObjectName";
  local_88 = 0xd;
  local_80 = (long *)0x0;
  FUN_01315eac(&local_78,param_1,&local_98);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar7 = local_78 != '\0';
  puVar2 = (undefined8 *)PTR_DAT_047d3e30;
  if (bVar7) {
    puVar2 = &uStack_70;
  }
  uVar16 = *puVar2;
  puVar2 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
  if (bVar7) {
    puVar2 = &uStack_68;
  }
  uVar18 = *puVar2;
  puVar2 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  if (bVar7) {
    puVar2 = &uStack_60;
  }
  uVar19 = *puVar2;
  pplVar3 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar7) {
    pplVar3 = &local_58;
  }
  plVar15 = *pplVar3;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (local_78 != '\0') {
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_78 = '\0';
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_b8 = uVar16;
  uStack_b0 = uVar18;
  local_a8 = uVar19;
  local_a0 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  FUN_0140f318(&local_78,param_1,&local_b8);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  lVar12 = CONCAT71(uStack_77,local_78);
  if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) {
LAB_01a8929c:
    plVar9 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar14 = *(short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar14) {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01a893e4;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a893e4:
        bVar7 = false;
      }
      if (bVar7) {
        lVar12 = *(long *)(lVar12 + 0x10);
        plVar9 = (long *)(lVar12 + -0x28);
        if (lVar12 == 0) goto LAB_01a8929c;
        local_d8 = 0xf341fd2d945ae2c7;
        pcStack_d0 = "playables.Player";
        local_c8 = 0x10;
        local_c0 = (long *)0x0;
        FUN_0140f318(&local_98,param_1,&local_d8);
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_98 != 0) {
          if (*(short *)(local_98 + 0x1a) == 0) goto LAB_01a895b4;
          psVar1 = (short *)(local_98 + 0x1a);
          sVar14 = *(short *)(local_98 + 0x1a);
          goto LAB_01a8947c;
        }
        break;
      }
      plVar9 = (long *)0x0;
      sVar14 = sVar4;
    } while (sVar4 != 0);
  }
  goto LAB_01a892a0;
LAB_01a895b4:
  bVar7 = true;
LAB_01a8955c:
  psVar1 = (short *)(local_98 + 0x18);
  do {
    sVar14 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 != 1) {
    if (sVar14 == 0) goto LAB_01a89300;
    goto LAB_01a8957c;
  }
  FUN_0116e168();
  if (bVar7) goto LAB_01a892a0;
LAB_01a895e4:
  uVar16 = 0;
  goto LAB_01a892a4;
LAB_01a895c8:
  if (*plVar11 == 0) goto code_r0x01a895d0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
  bVar7 = false;
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
        while (*plVar11 == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar7 = false;
          if (cVar5 == '\0') goto LAB_01a894e4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01a894e4:
  plVar11 = (long *)FUN_02133680(*(undefined8 *)(lVar12 + 0x100),*(undefined8 *)(lVar12 + 0x108));
  if ((*(long **)(lVar12 + 0x108) == plVar11) || (*plVar11 == 0)) {
    plVar11 = (long *)FUN_02133680(*(undefined8 *)(lVar12 + 0x138),*(undefined8 *)(lVar12 + 0x140));
    if (*(long **)(lVar12 + 0x140) == plVar11) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (*plVar11 != 0) {
        lVar10 = *plVar11 + -0x20;
      }
    }
  }
  else {
    lVar10 = *plVar11 + -0x20;
  }
  if (!bVar7) {
    *(undefined8 *)(lVar12 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xf0));
  }
  if ((lVar10 == 0) || (iVar8 = FUN_01fad2d4(lVar10), iVar8 == 1)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  (**(code **)(*plVar13 + 0x60))(plVar13);
  goto LAB_01a89558;
code_r0x01a895d0:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar6) {
    *plVar11 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01a894e4;
  goto LAB_01a895c8;
  while (sVar14 = sVar4, sVar4 != 0) {
LAB_01a8947c:
    sVar4 = *psVar1;
    if (sVar4 == sVar14) {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01a894a0;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a894a0:
      bVar7 = false;
    }
    if (bVar7) {
      plVar13 = (long *)(*(long *)(local_98 + 0x10) + -0x28);
      if (*(long *)(local_98 + 0x10) == 0) goto LAB_01a895b4;
      plVar11 = (long *)(lVar12 + 0xe8);
      lVar17 = *plVar11;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar17) {
        lVar10 = nn::os::GetCurrentThread();
        bVar7 = false;
        goto LAB_01a895c8;
      }
      bVar7 = true;
      goto LAB_01a894e4;
    }
  }
  bVar7 = true;
LAB_01a89558:
  if (local_98 != 0) goto LAB_01a8955c;
LAB_01a8957c:
  if (!bVar7) goto LAB_01a895e4;
LAB_01a892a0:
  uVar16 = 1;
LAB_01a892a4:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x60))();
  }
  if (CONCAT71(uStack_77,local_78) != 0) {
    psVar1 = (short *)(CONCAT71(uStack_77,local_78) + 0x18);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      FUN_0116e168();
    }
    else if (sVar14 == 0) {
LAB_01a89300:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return uVar16;
}


