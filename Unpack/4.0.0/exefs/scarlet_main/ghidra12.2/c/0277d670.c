/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277d670; name: FUN_0277d670
 */


void FUN_0277d670(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  code *pcVar18;
  short sVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  lVar14 = *param_1;
  if (lVar14 != 0) {
    uVar16 = *param_2;
    if (*(short *)(lVar14 + 0x1a) != 0) {
      psVar1 = (short *)(lVar14 + 0x1a);
      sVar19 = *(short *)(lVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar19) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0277d6f8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0277d6f8:
          bVar5 = false;
        }
        puVar7 = PTR_DAT_047d94e8;
        if (bVar5) {
          lVar14 = *(long *)(lVar14 + 0x10);
          if (lVar14 == 0) {
            return;
          }
          if (((*PTR_DAT_047d94e8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d94e8);
          }
          puVar9 = PTR_DAT_047d94f8;
          puVar8 = PTR_DAT_047d94f0;
          lVar26 = *(long *)PTR_DAT_047d94f0;
          *(long *)PTR_DAT_047d94f8 = lVar26;
          plVar25 = (long *)(lVar26 + 0x78);
          lVar21 = *plVar25;
          plVar20 = (long *)(lVar14 + -0x28);
          lVar11 = nn::os::GetCurrentThread();
          if (lVar11 == lVar21) {
            plVar25 = (long *)0x0;
            bVar5 = true;
            goto LAB_0277d774;
          }
          lVar11 = nn::os::GetCurrentThread();
          goto LAB_0277d760;
        }
        sVar19 = sVar2;
      } while (sVar2 != 0);
    }
  }
  return;
LAB_0277d760:
  if (*plVar25 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar5) {
      *plVar25 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0277d770;
    goto LAB_0277d760;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x80));
  do {
    if (*plVar25 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x80));
        while (*plVar25 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar5) {
            *plVar25 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0277d770;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar5) {
      *plVar25 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0277d770:
  bVar5 = false;
LAB_0277d774:
  local_88 = (undefined8 *)PTR_DAT_047e2018;
  uVar12 = FUN_0108fedc(lVar26 + 0x90,&local_88);
  if (*(char *)(lVar14 + 0x4d8) == '\0') {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d94e8);
    }
    uVar27 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar27;
    FUN_01181758(uVar27,plVar20);
    *(undefined1 *)(lVar14 + 0x4d8) = 1;
  }
  plVar28 = (long *)(lVar14 + 0x3d0);
  lVar21 = *plVar28;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar21) {
    plVar28 = (long *)0x0;
    bVar3 = true;
LAB_0277d7c8:
    puVar23 = *(undefined8 **)(lVar14 + 0x3f0);
    puVar15 = (undefined8 *)(lVar14 + 0x400);
    lVar11 = param_1[2];
    if (puVar23 < *(undefined8 **)(lVar14 + 0x3f8)) {
      uVar27 = *puVar15;
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar21 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar21 != 0) {
        if (0xf < *(ulong *)(lVar21 + 0x80)) {
LAB_0277dc94:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar27;
        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
      }
      puVar23[4] = plVar20;
      puVar23[5] = uVar16;
      puVar23[6] = lVar11;
      puVar23[7] = uVar12;
      *puVar23 = &LAB_0277ddac;
      puVar23[1] = &LAB_02bd7f88;
      puVar23[2] = &LAB_02bd7f8c;
      puVar23[3] = &LAB_02bd7fa0;
      if (lVar21 != 0) {
        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
      }
      *(undefined8 **)(lVar14 + 0x3f0) = puVar23 + 8;
    }
    else {
      lVar21 = (long)puVar23 - *(long *)(lVar14 + 1000) >> 6;
      uVar13 = lVar21 + 1;
      if (uVar13 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar26 = (long)*(undefined8 **)(lVar14 + 0x3f8) - *(long *)(lVar14 + 1000);
      uVar17 = lVar26 >> 5;
      local_70 = (undefined8 *)0x0;
      if (uVar13 <= uVar17) {
        uVar13 = uVar17;
      }
      if (0x1fffffffffffffe < (ulong)(lVar26 >> 6)) {
        uVar13 = 0x3ffffffffffffff;
      }
      local_68 = puVar15;
      if (uVar13 == 0) {
        puVar23 = (undefined8 *)0x0;
      }
      else {
        puVar23 = (undefined8 *)
                  (**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,uVar13 << 6,0x10);
        if (puVar23 == (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar15 + 0xe8))();
        }
      }
      puVar22 = puVar23 + lVar21 * 8;
      local_70 = puVar23 + uVar13 * 8;
      uVar27 = *puVar15;
      local_88 = puVar23;
      local_80 = puVar22;
      local_78 = puVar22;
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar21 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar21 != 0) {
        if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_0277dc94;
        *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar27;
        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
      }
      puVar22[2] = 0;
      puVar22[3] = 0;
      puVar22[6] = lVar11;
      puVar22[7] = uVar12;
      puVar22[4] = plVar20;
      puVar22[5] = uVar16;
      *puVar22 = &LAB_0277ddac;
      puVar22[1] = &LAB_02bd7f88;
      puVar22[2] = &LAB_02bd7f8c;
      puVar22[3] = &LAB_02bd7fa0;
      if (lVar21 != 0) {
        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
      }
      local_78 = local_78 + 8;
      FUN_02777ab8(puVar15,*(undefined8 *)(lVar14 + 1000),*(undefined8 *)(lVar14 + 0x3f0),&local_80)
      ;
      puVar23 = *(undefined8 **)(lVar14 + 1000);
      *(undefined8 **)(lVar14 + 1000) = local_80;
      puVar15 = *(undefined8 **)(lVar14 + 0x3f0);
      *(undefined8 **)(lVar14 + 0x3f0) = local_78;
      puVar22 = *(undefined8 **)(lVar14 + 0x3f8);
      *(undefined8 **)(lVar14 + 0x3f8) = local_70;
      local_88 = puVar23;
      local_80 = puVar23;
      local_78 = puVar15;
      local_70 = puVar22;
      while (puVar6 = puVar15, puVar6 != puVar23) {
        puVar15 = puVar6 + -8;
        pcVar18 = (code *)puVar6[-7];
        local_78 = puVar15;
        if (pcVar18 != (code *)0x0) {
          puVar6[-6] = 0;
          puVar6[-5] = 0;
          puVar6[-8] = 0;
          puVar6[-7] = 0;
          (*pcVar18)(puVar6 + -4);
        }
      }
      if (puVar23 != (undefined8 *)0x0) {
        lVar14 = (long)puVar22 - (long)puVar23;
        plVar24 = (long *)*local_68;
        uVar13 = (**(code **)(*plVar24 + 0xf8))(plVar24);
        if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar24 + 0x18))(plVar24,puVar23,lVar14,0x10);
        }
        else {
          FUN_00c48fe8(plVar24,puVar23,lVar14,0x10);
        }
      }
    }
    if (!bVar3) {
      *plVar28 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar28 + 1));
    }
    if (!bVar5) {
      *plVar25 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
    }
    (**(code **)(*plVar20 + 0x60))(plVar20);
    return;
  }
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar28 == 0) {
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar3) {
      *plVar28 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0277d7c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x3d8));
  do {
    if (*plVar28 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x3d8));
        while (*plVar28 == 0) {
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar3) {
            *plVar28 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0277d7c4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar3) {
      *plVar28 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0277d7c4:
  bVar3 = false;
  goto LAB_0277d7c8;
}


