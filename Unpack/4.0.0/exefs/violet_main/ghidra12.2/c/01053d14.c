/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01053d14; name: FUN_01053d14
 */


void FUN_01053d14(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x27;
  undefined8 uVar16;
  float fVar17;
  
  plVar1 = (long *)(param_1 + 0x480);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x488) == 0) {
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x488) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01053d58;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x490));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x488) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x490));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x488) == 0) {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar9;
            *(undefined8 *)(param_1 + 0x488) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01053d58;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x488) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01053d58:
  lVar9 = *param_2;
  uVar14 = *(ulong *)(param_1 + 0x4a8);
  plVar2 = (long *)(param_1 + 0x4a0);
  uVar15 = (ulong)(lVar9 != 0);
  if (uVar14 == 0) {
LAB_01053e68:
    plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x4d8) + 0x10))
                                (*(long **)(param_1 + 0x4d8),0x18,8);
    if (plVar12 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x4d8) + 0xe8))();
    }
    uVar16 = *(undefined8 *)(param_1 + 0x4d8);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar16;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    param_2 = (long *)*param_2;
    plVar12[2] = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x10))();
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    *plVar12 = 0;
    plVar12[1] = uVar15;
    fVar17 = (float)(*(long *)(param_1 + 0x4f8) + 1);
    if ((uVar14 == 0) || (*(float *)(param_1 + 0x500) * (float)uVar14 < fVar17)) {
      uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
      uVar13 = (ulong)(fVar17 / *(float *)(param_1 + 0x500));
      if (uVar13 <= uVar14) {
        uVar13 = uVar14;
      }
      FUN_01054138(plVar2,uVar13);
      uVar14 = *(ulong *)(param_1 + 0x4a8);
      if ((uVar14 & uVar14 - 1) == 0) {
        unaff_x27 = (int)uVar14 + 1 & uVar15;
      }
      else if (uVar15 < uVar14) {
        unaff_x27 = uVar15;
      }
      else {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar15 / uVar14;
        }
        unaff_x27 = uVar15 - uVar13 * uVar14;
      }
    }
    plVar11 = *(long **)(*plVar2 + unaff_x27 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar12 = *(long *)(param_1 + 0x4d0);
      *(long **)(param_1 + 0x4d0) = plVar12;
      *(long *)(*(long *)(param_1 + 0x4a0) + unaff_x27 * 8) = param_1 + 0x4d0;
      if (*plVar12 != 0) {
        uVar15 = *(ulong *)(*plVar12 + 8);
        if ((uVar14 & uVar14 - 1) == 0) {
          uVar15 = uVar15 & uVar14 - 1;
        }
        else if (uVar14 <= uVar15) {
          uVar13 = 0;
          if (uVar14 != 0) {
            uVar13 = uVar15 / uVar14;
          }
          uVar15 = uVar15 - uVar13 * uVar14;
        }
        plVar11 = (long *)(*plVar2 + uVar15 * 8);
        goto LAB_01053ff8;
      }
    }
    else {
      *plVar12 = *plVar11;
LAB_01053ff8:
      *plVar11 = (long)plVar12;
    }
    *(long *)(param_1 + 0x4f8) = *(long *)(param_1 + 0x4f8) + 1;
  }
  else {
    if ((uVar14 & uVar14 - 1) != 0) {
      unaff_x27 = uVar15;
      if (uVar14 <= uVar15) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar15 / uVar14;
        }
        unaff_x27 = uVar15 - uVar13 * uVar14;
      }
      plVar12 = *(long **)(*plVar2 + unaff_x27 * 8);
      if (plVar12 != (long *)0x0) {
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          uVar13 = plVar12[1];
          if (uVar13 != uVar15) {
            if (uVar14 <= uVar13) {
              uVar7 = 0;
              if (uVar14 != 0) {
                uVar7 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar7 * uVar14;
            }
            if (uVar13 != unaff_x27) break;
          }
          if (plVar12[2] == lVar9) goto LAB_01053dbc;
        }
      }
      goto LAB_01053e68;
    }
    unaff_x27 = (int)uVar14 + 1 & uVar15;
    plVar12 = *(long **)(*plVar2 + unaff_x27 * 8);
    if (plVar12 == (long *)0x0) goto LAB_01053e68;
    do {
      plVar12 = (long *)*plVar12;
      if ((plVar12 == (long *)0x0) ||
         (plVar12[1] != uVar15 && (plVar12[1] & uVar14 - 1) != unaff_x27)) goto LAB_01053e68;
    } while (plVar12[2] != lVar9);
  }
LAB_01053dbc:
  do {
    lVar9 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x488);
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x488) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x488);
    if (lVar3 != lVar9 || lVar4 != lVar5) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_01053e44;
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x484) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar10 = true;
LAB_01053e44:
  if (!bVar10) {
    do {
      lVar9 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x488);
      if (lVar9 != lVar3 || lVar5 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x01054098;
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x484) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar10 = true;
joined_r0x01054098:
    if (!bVar10) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x488);
        if (lVar3 != lVar9 || lVar4 != lVar5) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x01054098;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x484) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar9 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x01054098;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x490));
  return;
}


