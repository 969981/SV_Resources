/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021643bc; name: FUN_021643bc
 */


void FUN_021643bc(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  code *pcVar17;
  short sVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  bool bVar28;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  lVar13 = *param_1;
  if (lVar13 != 0) {
    uVar15 = *param_2;
    if (*(short *)(lVar13 + 0x1a) != 0) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar18 = *(short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar18) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_02164440;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02164440:
          bVar4 = false;
        }
        puVar6 = PTR_DAT_047d94e8;
        if (bVar4) {
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 == 0) {
            return;
          }
          if (((*PTR_DAT_047d94e8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d94e8);
          }
          puVar8 = PTR_DAT_047d94f8;
          puVar7 = PTR_DAT_047d94f0;
          lVar26 = *(long *)PTR_DAT_047d94f0;
          *(long *)PTR_DAT_047d94f8 = lVar26;
          plVar25 = (long *)(lVar26 + 0x78);
          lVar20 = *plVar25;
          plVar19 = (long *)(lVar13 + -0x28);
          lVar10 = nn::os::GetCurrentThread();
          if (lVar10 == lVar20) {
            plVar25 = (long *)0x0;
            bVar4 = true;
            goto LAB_021644b8;
          }
          lVar10 = nn::os::GetCurrentThread();
          goto LAB_021644a4;
        }
        sVar18 = sVar2;
      } while (sVar2 != 0);
    }
  }
  return;
LAB_021644a4:
  if (*plVar25 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar4) {
      *plVar25 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_021644b4;
    goto LAB_021644a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x80));
  do {
    if (*plVar25 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x80));
        while (*plVar25 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_021644b4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar4) {
      *plVar25 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_021644b4:
  bVar4 = false;
LAB_021644b8:
  local_88 = (undefined8 *)PTR_DAT_047dcfb8;
  uVar11 = FUN_0108fedc(lVar26 + 0x90,&local_88);
  if (*(char *)(lVar13 + 0x4d8) == '\0') {
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d94e8);
    }
    uVar23 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar23;
    FUN_01181758(uVar23,plVar19);
    *(undefined1 *)(lVar13 + 0x4d8) = 1;
  }
  plVar27 = (long *)(lVar13 + 0x3d0);
  lVar20 = *plVar27;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar20) {
    plVar27 = (long *)0x0;
    bVar28 = true;
LAB_0216450c:
    puVar22 = *(undefined8 **)(lVar13 + 0x3f0);
    puVar14 = (undefined8 *)(lVar13 + 0x400);
    if (puVar22 < *(undefined8 **)(lVar13 + 0x3f8)) {
      uVar23 = *puVar14;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_021649d0;
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar23;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      puVar22[4] = plVar19;
      puVar22[5] = uVar15;
      puVar22[7] = uVar11;
      *puVar22 = &LAB_02164c50;
      puVar22[1] = &LAB_02b368f0;
      puVar22[2] = &LAB_02b368f4;
      puVar22[3] = &LAB_02b36908;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      *(undefined8 **)(lVar13 + 0x3f0) = puVar22 + 8;
    }
    else {
      lVar10 = (long)puVar22 - *(long *)(lVar13 + 1000) >> 6;
      uVar12 = lVar10 + 1;
      if (uVar12 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar20 = (long)*(undefined8 **)(lVar13 + 0x3f8) - *(long *)(lVar13 + 1000);
      uVar16 = lVar20 >> 5;
      local_70 = (undefined8 *)0x0;
      if (uVar12 <= uVar16) {
        uVar12 = uVar16;
      }
      if (0x1fffffffffffffe < (ulong)(lVar20 >> 6)) {
        uVar12 = 0x3ffffffffffffff;
      }
      local_68 = puVar14;
      if (uVar12 == 0) {
        puVar22 = (undefined8 *)0x0;
      }
      else {
        puVar22 = (undefined8 *)
                  (**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,uVar12 << 6,0x10);
        if (puVar22 == (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar14 + 0xe8))();
        }
      }
      puVar21 = puVar22 + lVar10 * 8;
      local_70 = puVar22 + uVar12 * 8;
      uVar23 = *puVar14;
      local_88 = puVar22;
      local_80 = puVar21;
      local_78 = puVar21;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_021649d0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar23;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = plVar19;
      puVar21[5] = uVar15;
      puVar21[7] = uVar11;
      *puVar21 = &LAB_02164c50;
      puVar21[1] = &LAB_02b368f0;
      puVar21[2] = &LAB_02b368f4;
      puVar21[3] = &LAB_02b36908;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      local_78 = local_78 + 8;
      FUN_021649d8(puVar14,*(undefined8 *)(lVar13 + 1000),*(undefined8 *)(lVar13 + 0x3f0),&local_80)
      ;
      puVar22 = *(undefined8 **)(lVar13 + 1000);
      *(undefined8 **)(lVar13 + 1000) = local_80;
      puVar14 = *(undefined8 **)(lVar13 + 0x3f0);
      *(undefined8 **)(lVar13 + 0x3f0) = local_78;
      puVar21 = *(undefined8 **)(lVar13 + 0x3f8);
      *(undefined8 **)(lVar13 + 0x3f8) = local_70;
      local_88 = puVar22;
      local_80 = puVar22;
      local_78 = puVar14;
      local_70 = puVar21;
      while (puVar5 = puVar14, puVar5 != puVar22) {
        puVar14 = puVar5 + -8;
        pcVar17 = (code *)puVar5[-7];
        local_78 = puVar14;
        if (pcVar17 != (code *)0x0) {
          puVar5[-6] = 0;
          puVar5[-5] = 0;
          puVar5[-8] = 0;
          puVar5[-7] = 0;
          (*pcVar17)(puVar5 + -4);
        }
      }
      if (puVar22 != (undefined8 *)0x0) {
        lVar13 = (long)puVar21 - (long)puVar22;
        plVar24 = (long *)*local_68;
        uVar12 = (**(code **)(*plVar24 + 0xf8))(plVar24);
        if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar24 + 0x18))(plVar24,puVar22,lVar13,0x10);
        }
        else {
          FUN_00c48fe8(plVar24,puVar22,lVar13,0x10);
        }
      }
    }
    if (!bVar28) {
      *plVar27 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar27 + 1));
    }
    if (!bVar4) {
      *plVar25 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
    }
    (**(code **)(*plVar19 + 0x60))(plVar19);
    return;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar27 == 0) {
    cVar3 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar28) {
      *plVar27 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02164508;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x3d8));
  do {
    if (*plVar27 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x3d8));
        while (*plVar27 == 0) {
          cVar3 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar28) {
            *plVar27 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02164508;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar28) {
      *plVar27 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02164508:
  bVar28 = false;
  goto LAB_0216450c;
}


