/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df8c30; name: FUN_00df8c30
 */


void FUN_00df8c30(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  undefined8 uVar14;
  long *plVar15;
  
  plVar12 = (long *)(param_1 + 8);
  lVar9 = *plVar12;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar9) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00df8c70:
    if (*plVar12 == 0) goto code_r0x00df8c78;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar12 == 0) {
            cVar1 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar13) {
              *plVar12 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00df8c80;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00df8c80:
    bVar13 = false;
    goto LAB_00df8c84;
  }
  bVar13 = true;
LAB_00df8c84:
  lVar9 = *param_2;
  plVar12 = (long *)(lVar9 + 0xa8);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00df8ca4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xb0));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xb0));
        while (*plVar12 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00df8ca4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00df8ca4:
  if ((*(long *)(lVar9 + 0xc0) != 0) && (*(long *)(lVar9 + 200) != 0)) {
    FUN_015a289c();
  }
  if ((param_1 != 0) && (*(long *)(lVar9 + 200) != 0)) {
    FUN_015a2318(param_1);
  }
  *(long *)(lVar9 + 0xc0) = param_1;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xb0));
  lVar9 = *param_2;
  *param_2 = 0;
  plVar12 = *(long **)(param_1 + 0x28);
  lVar4 = 0;
  if (lVar9 != 0) {
    lVar4 = lVar9 + 0x20;
  }
  if (plVar12 < *(long **)(param_1 + 0x30)) {
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      *plVar12 = lVar4;
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00df91a8;
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar12 = lVar4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x28) = plVar12 + 1;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x40);
    lVar9 = (long)plVar12 - *(long *)(param_1 + 0x20) >> 3;
    uVar5 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(long **)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
    uVar7 = lVar6 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar6 >> 3)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                        (*(long **)(param_1 + 0x38),uVar5 << 3,1);
      if (lVar6 == 0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0xe8))();
      }
    }
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    plVar12 = (long *)(lVar6 + lVar9 * 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      *plVar12 = lVar4;
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00df91a8;
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar12 = lVar4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    plVar10 = *(long **)(param_1 + 0x20);
    plVar11 = *(long **)(param_1 + 0x28);
    plVar15 = plVar12;
    if (plVar11 == plVar10) {
      plVar11 = plVar10;
    }
    else {
      do {
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          lVar4 = plVar11[-1];
          plVar11[-1] = 0;
          plVar15[-1] = lVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00df91a8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          lVar9 = plVar11[-1];
          plVar11[-1] = 0;
          plVar15[-1] = lVar9;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        plVar11 = plVar11 + -1;
        plVar15 = plVar15 + -1;
      } while (plVar10 != plVar11);
      plVar10 = *(long **)(param_1 + 0x20);
      plVar11 = *(long **)(param_1 + 0x28);
    }
    lVar4 = *(long *)(param_1 + 0x30);
    *(long **)(param_1 + 0x20) = plVar15;
    *(long **)(param_1 + 0x28) = plVar12 + 1;
    *(ulong *)(param_1 + 0x30) = lVar6 + uVar5 * 8;
    if (plVar11 != plVar10) {
      plVar12 = (long *)plVar11[-1];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))();
      }
      if (plVar11 + -1 != plVar10) {
        plVar12 = (long *)plVar11[-2];
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))();
        }
        if (plVar11 + -2 != plVar10) {
          do {
            if ((long *)plVar11[-3] != (long *)0x0) {
              (**(code **)(*(long *)plVar11[-3] + 0x18))();
            }
            plVar11 = plVar11 + -1;
          } while (plVar10 + 2 != plVar11);
        }
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar12 = *(long **)(param_1 + 0x38);
      lVar4 = lVar4 - (long)plVar10;
      uVar5 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar5 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar10,lVar4,1);
      }
      else {
        FUN_00c48fe8(plVar12,plVar10,lVar4,1);
      }
    }
  }
  *(undefined1 **)(param_1 + 0x98) = &LAB_00d719ac;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (bVar13) {
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  return;
code_r0x00df8c78:
  cVar1 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar13) {
    *plVar12 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00df8c80;
  goto LAB_00df8c70;
}


