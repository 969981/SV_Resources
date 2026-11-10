/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021932a4; name: FUN_021932a4
 */


void FUN_021932a4(long param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  
  lVar14 = *(long *)(param_1 + 0x30);
  plVar1 = (long *)(lVar14 + 0xe0);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(lVar14 + 0xe8) == 0) {
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar15;
      *(undefined8 *)(lVar14 + 0xe8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_021932f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
  do {
    if (*plVar1 != 0 || *(long *)(lVar14 + 0xe8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
        while (*plVar1 == 0 && *(long *)(lVar14 + 0xe8) == 0) {
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar15;
            *(undefined8 *)(lVar14 + 0xe8) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_021932f4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar15;
      *(undefined8 *)(lVar14 + 0xe8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_021932f4:
  puVar12 = PTR_PTR_047d4508;
  uVar18 = *(ulong *)(lVar14 + 0x10);
  if (uVar18 != 0) {
    uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar17 = *param_2;
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar18 - 1 & uVar17;
    }
    else {
      uVar20 = uVar17;
      if (uVar18 <= uVar17) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar17 / uVar18;
        }
        uVar20 = uVar17 - uVar20 * uVar18;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar14 + 8) + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == uVar17) {
            if (plVar21[2] == uVar17) goto LAB_02193484;
          }
          else if ((plVar21[1] & uVar18 - 1) != uVar20) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 != uVar17) {
            if (uVar18 <= uVar19) {
              uVar8 = 0;
              if (uVar18 != 0) {
                uVar8 = uVar19 / uVar18;
              }
              uVar19 = uVar19 - uVar8 * uVar18;
            }
            if (uVar19 == uVar20) goto LAB_02193390;
            break;
          }
          if (plVar21[2] == uVar17) goto LAB_02193484;
LAB_02193390:
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_02193398;
LAB_02193484:
  if (((param_3 & 0xff00000000) == 0) || ((int)plVar21[6] == (int)param_3)) {
    plVar22 = *(long **)(lVar14 + 0xa0);
    if (plVar22 != (long *)0x0) {
      do {
        if ((plVar22[0xd] == uVar17) && (plVar21[10] != 0)) {
          plVar5 = (long *)plVar22[7];
          plVar9 = (long *)plVar22[6];
          do {
            if (plVar9 == plVar5) goto LAB_02193530;
            puVar2 = (undefined8 *)puVar12;
            if (*plVar9 != 0) {
              puVar2 = (undefined8 *)(*plVar9 + 0x38);
            }
            uVar18 = FUN_00e3d990(plVar21 + 7,*puVar2);
            puVar10 = PTR_DAT_047d3e28;
            plVar9 = plVar9 + 1;
          } while ((uVar18 & 1) == 0);
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar10);
          }
          puVar11 = PTR_DAT_047d3e30;
          (*(code *)plVar22[0xe])(plVar22 + 0x12,PTR_DAT_047d3e30);
          if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d4118,puVar11,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          plVar22[0xd] = *(long *)puVar11;
        }
LAB_02193530:
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) break;
        uVar17 = *param_2;
      } while( true );
    }
    FUN_02193638((long *)(lVar14 + 8),plVar21);
  }
LAB_02193398:
  do {
    lVar15 = *plVar1;
    lVar6 = *(long *)(lVar14 + 0xe8);
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar15;
      *(long *)(lVar14 + 0xe8) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar14 + 0xe8);
    if (lVar3 != lVar15 || lVar4 != lVar6) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_02193420;
    }
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = 0;
      *(long *)(lVar14 + 0xe4) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar16 = true;
LAB_02193420:
  if (!bVar16) {
    do {
      lVar15 = *plVar1;
      lVar6 = *(long *)(lVar14 + 0xe8);
      if (lVar15 != lVar3 || lVar6 != lVar4) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x0219358c;
      }
      cVar7 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = 0;
        *(long *)(lVar14 + 0xe4) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar16 = true;
joined_r0x0219358c:
    if (!bVar16) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(lVar14 + 0xe8);
        if (lVar3 != lVar15 || lVar4 != lVar6) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar15 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x0219358c;
        }
        cVar7 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = 0;
          *(long *)(lVar14 + 0xe4) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar16 = true;
      lVar15 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x0219358c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xf0));
  return;
}


