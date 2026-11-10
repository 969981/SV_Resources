/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0222e6c0; name: FUN_0222e6c0
 */


void FUN_0222e6c0(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  long **pplVar5;
  short sVar6;
  bool bVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong *puVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  short sVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long *local_150;
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long *local_128 [4];
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_d0;
  ulong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  ulong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  
  local_88 = 0xb0452476e3e51578;
  local_80 = "Container";
  local_78 = 9;
  local_70 = (long *)0x0;
  FUN_01315eac(&local_148,param_1,&local_88);
  puVar9 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar10 = PTR_DAT_047d3e30;
  bVar12 = (char)local_148 != '\0';
  puVar4 = (undefined8 *)PTR_DAT_047d3e30;
  if (bVar12) {
    puVar4 = &local_140;
  }
  uVar21 = *puVar4;
  puVar4 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
  if (bVar12) {
    puVar4 = &local_138;
  }
  uVar22 = *puVar4;
  puVar4 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  if (bVar12) {
    puVar4 = &local_130;
  }
  uVar23 = *puVar4;
  pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar12) {
    pplVar5 = local_128;
  }
  plVar20 = *pplVar5;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  if ((char)local_148 != '\0') {
    if (local_128[0] != (long *)0x0) {
      (**(code **)(*local_128[0] + 0x20))();
    }
    local_148 = local_148 & 0xffffffffffffff00;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_b8 = uVar21;
  uStack_b0 = uVar22;
  local_a8 = uVar23;
  local_a0 = plVar20;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_98 = (ulong *)0x0;
    uStack_90 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_98,param_1 + 0x30,&local_b8);
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_98 == (ulong *)0x0) goto LAB_0222e7e8;
  if (*(short *)((long)local_98 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_98 + 0x1a);
    sVar19 = *(short *)((long)local_98 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar19) {
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar19 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_0222e8c8;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0222e8c8:
        bVar12 = false;
      }
      if (bVar12) {
        uVar16 = local_98[2];
        if (uVar16 == 0) goto LAB_0222e968;
        lVar17 = FUN_01410e94(uVar16 + 0xe0,&local_148);
        if (lVar17 == 0) goto LAB_0222e950;
        local_e8 = *(undefined8 *)(param_1 + 0x110);
        uStack_e0 = *(undefined8 *)(param_1 + 0x118);
        local_d8 = *(undefined8 *)(param_1 + 0x120);
        local_d0 = *(long **)(param_1 + 0x128);
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x18))();
        }
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          local_c8 = (ulong *)0x0;
          uStack_c0 = 0;
        }
        else {
          (**(code **)(param_1 + 0x10))(&local_c8,param_1 + 0x30,&local_e8);
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_c8 == (ulong *)0x0) goto LAB_0222e950;
        if (*(short *)((long)local_c8 + 0x1a) == 0) goto LAB_0222ed1c;
        psVar1 = (short *)((long)local_c8 + 0x1a);
        sVar19 = *(short *)((long)local_c8 + 0x1a);
        goto LAB_0222ea74;
      }
      sVar19 = sVar6;
    } while (sVar6 != 0);
    goto LAB_0222e964;
  }
  goto LAB_0222e968;
LAB_0222ee7c:
  if (*plVar15 == 0) goto code_r0x0222ee84;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(uVar18 + 0xf0));
  bVar12 = false;
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(uVar18 + 0xf0));
        while (*plVar15 == 0) {
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *plVar15 = lVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
          bVar12 = false;
          if (cVar8 == '\0') goto LAB_0222ead8;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar14;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_0222ead8:
  plVar15 = (long *)FUN_0222ef60(*(undefined8 *)(uVar18 + 0x100),*(undefined8 *)(uVar18 + 0x108));
  if ((*(long **)(uVar18 + 0x108) == plVar15) || (*plVar15 == 0)) {
    plVar15 = (long *)FUN_0222ef60(*(undefined8 *)(uVar18 + 0x138),*(undefined8 *)(uVar18 + 0x140));
    if (*(long **)(uVar18 + 0x140) == plVar15) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      if (*plVar15 != 0) {
        lVar14 = *plVar15 + -0x20;
      }
    }
  }
  else {
    lVar14 = *plVar15 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(uVar18 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(uVar18 + 0xf0));
  }
  if (lVar14 != 0) {
    local_88 = 0x5f4296f4386634c8;
    local_80 = "FileName";
    local_78 = 8;
    local_70 = (long *)0x0;
    FUN_01315eac(&local_148,param_1,&local_88);
    if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    bVar12 = (char)local_148 != '\0';
    puVar4 = (undefined8 *)puVar10;
    if (bVar12) {
      puVar4 = &local_140;
    }
    uVar21 = *puVar4;
    puVar4 = (undefined8 *)(puVar10 + 8);
    if (bVar12) {
      puVar4 = &local_138;
    }
    uVar22 = *puVar4;
    puVar4 = (undefined8 *)(puVar10 + 0x10);
    if (bVar12) {
      puVar4 = &local_130;
    }
    uVar23 = *puVar4;
    pplVar5 = (long **)(puVar10 + 0x18);
    if (bVar12) {
      pplVar5 = local_128;
    }
    plVar15 = *pplVar5;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    if ((char)local_148 != '\0') {
      if (local_128[0] != (long *)0x0) {
        (**(code **)(*local_128[0] + 0x20))();
      }
      local_148 = local_148 & 0xffffffffffffff00;
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    local_108 = 0x8f291493dc06d486;
    pcStack_100 = "PartsName";
    local_f8 = 9;
    local_f0 = (long *)0x0;
    FUN_01315eac(&local_148,param_1,&local_108);
    if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    bVar12 = (char)local_148 != '\0';
    puVar4 = (undefined8 *)puVar10;
    if (bVar12) {
      puVar4 = &local_140;
    }
    local_88 = *puVar4;
    puVar4 = (undefined8 *)(puVar10 + 8);
    if (bVar12) {
      puVar4 = &local_138;
    }
    local_80 = (char *)*puVar4;
    puVar4 = (undefined8 *)(puVar10 + 0x10);
    if (bVar12) {
      puVar4 = &local_130;
    }
    local_78 = *puVar4;
    pplVar5 = (long **)(puVar10 + 0x18);
    if (bVar12) {
      pplVar5 = local_128;
    }
    local_70 = *pplVar5;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    if ((char)local_148 != '\0') {
      if (local_128[0] != (long *)0x0) {
        (**(code **)(*local_128[0] + 0x20))();
      }
      local_148 = local_148 & 0xffffffffffffff00;
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    local_168 = uVar21;
    uStack_160 = uVar22;
    local_158 = uVar23;
    local_150 = plVar15;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    FUN_0133dc54(&local_148,lVar17,&local_168);
    FUN_0178842c(lVar14,&local_88,&local_148);
    FUN_01185de0(&local_148);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  (**(code **)(*(long *)(uVar18 - 0x28) + 0x60))((long *)(uVar18 - 0x28));
  goto LAB_0222ed18;
code_r0x0222ee84:
  cVar8 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_0222ead8;
  goto LAB_0222ee7c;
  while (sVar19 = sVar6, sVar6 != 0) {
LAB_0222ea74:
    sVar6 = *psVar1;
    if (sVar6 == sVar19) {
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar19 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_0222ea98;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0222ea98:
      bVar12 = false;
    }
    if (bVar12) {
      uVar18 = local_c8[2];
      if (uVar18 == 0) goto LAB_0222ed1c;
      plVar15 = (long *)(uVar18 + 0xe8);
      lVar24 = *plVar15;
      lVar14 = nn::os::GetCurrentThread();
      if (lVar14 != lVar24) {
        lVar14 = nn::os::GetCurrentThread();
        bVar12 = false;
        goto LAB_0222ee7c;
      }
      bVar12 = true;
      goto LAB_0222ead8;
    }
  }
LAB_0222ed18:
  if (local_c8 != (ulong *)0x0) {
LAB_0222ed1c:
    puVar11 = local_c8;
    puVar2 = local_c8 + 3;
    do {
      sVar19 = (short)*puVar2;
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar12) {
        *(short *)puVar2 = sVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar19 == 1) {
      piVar3 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_148 = *puVar11;
        FUN_00c44438(lVar17 + 0x8040,&local_148);
      }
    }
    else if (sVar19 == 0) goto LAB_0222e988;
  }
LAB_0222e950:
  (**(code **)(*(long *)(uVar16 - 0x28) + 0x60))((long *)(uVar16 - 0x28));
LAB_0222e964:
  if (local_98 == (ulong *)0x0) goto LAB_0222e7e8;
LAB_0222e968:
  puVar11 = local_98;
  puVar2 = local_98 + 3;
  do {
    sVar19 = (short)*puVar2;
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *(short *)puVar2 = sVar19 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar19 == 1) {
    piVar3 = (int *)((long)local_98 + 0x1c);
    do {
      iVar13 = *piVar3;
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar12) {
        *piVar3 = -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar13 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar17 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar17;
      local_148 = *puVar11;
      FUN_00c44438(lVar17 + 0x8040,&local_148);
    }
  }
  else if (sVar19 == 0) {
LAB_0222e988:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_0222e7e8:
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  return;
}


