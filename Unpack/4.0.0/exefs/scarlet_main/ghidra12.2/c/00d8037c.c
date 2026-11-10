/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8037c; name: FUN_00d8037c
 */


void FUN_00d8037c(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long *plVar16;
  int *local_80;
  int *local_78;
  long local_70;
  undefined8 *local_68;
  
  plVar16 = (long *)(param_1 + 0x2e8);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00d803d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d803d0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d803d0:
  piVar9 = *(int **)(param_1 + 0x2b0);
  piVar14 = *(int **)(param_1 + 0x2b8);
  if (piVar9 != piVar14) {
    piVar11 = piVar9;
    do {
      if (*piVar11 == param_2) {
        *piVar11 = param_2;
        piVar11[1] = param_3;
        piVar11[2] = param_4;
        piVar11[3] = param_5;
        piVar11[4] = param_6;
        goto LAB_00d805dc;
      }
      piVar11 = piVar11 + 5;
    } while (piVar14 != piVar11);
  }
  puVar1 = (undefined8 *)(param_1 + 0x2c8);
  if (piVar14 < *(int **)(param_1 + 0x2c0)) {
    uVar15 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *piVar14 = param_2;
      piVar14[1] = param_3;
      piVar14[2] = param_4;
      piVar14[3] = param_5;
      piVar14[4] = param_6;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00d80878;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *piVar14 = param_2;
      piVar14[1] = param_3;
      piVar14[2] = param_4;
      piVar14[3] = param_5;
      piVar14[4] = param_6;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *(int **)(param_1 + 0x2b8) = piVar14 + 5;
  }
  else {
    lVar6 = (long)piVar14 - (long)piVar9 >> 2;
    uVar13 = *(ulong *)(param_1 + 0x2d0);
    uVar8 = lVar6 * -0x3333333333333333 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(int **)(param_1 + 0x2c0) - (long)piVar9 >> 2;
    uVar12 = lVar10 * -0x6666666666666666;
    local_70 = 0;
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    if (uVar13 >> 1 <= (ulong)(lVar10 * -0x3333333333333333)) {
      uVar8 = uVar13;
    }
    local_68 = puVar1;
    if (uVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 * 0x14,4);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    piVar9 = (int *)(lVar10 + lVar6 * 4);
    local_70 = lVar10 + uVar8 * 0x14;
    uVar15 = *puVar1;
    local_80 = piVar9;
    local_78 = piVar9;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      lVar10 = lVar10 + lVar6 * 4;
      *piVar9 = param_2;
      *(int *)(lVar10 + 4) = param_3;
      *(int *)(lVar10 + 8) = param_4;
      *(int *)(lVar10 + 0xc) = param_5;
      *(int *)(lVar10 + 0x10) = param_6;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00d80878:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar15;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar10 = lVar10 + lVar6 * 4;
      *piVar9 = param_2;
      *(int *)(lVar10 + 4) = param_3;
      *(int *)(lVar10 + 8) = param_4;
      *(int *)(lVar10 + 0xc) = param_5;
      *(int *)(lVar10 + 0x10) = param_6;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      piVar9 = local_78;
    }
    local_78 = piVar9 + 5;
    FUN_00d8aa1c(puVar1,*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x2b8),&local_80)
    ;
    piVar14 = *(int **)(param_1 + 0x2b0);
    *(int **)(param_1 + 0x2b0) = local_80;
    piVar9 = *(int **)(param_1 + 0x2b8);
    *(int **)(param_1 + 0x2b8) = local_78;
    lVar6 = *(long *)(param_1 + 0x2c0);
    *(long *)(param_1 + 0x2c0) = local_70;
    local_78 = piVar9;
    if ((long)piVar9 - (long)piVar14 != 0) {
      local_78 = piVar9 + ((((long)piVar9 - (long)piVar14) - 0x14U) / 0x14 ^ 0xffffffffffffffff) * 5
      ;
    }
    local_80 = piVar14;
    local_70 = lVar6;
    if (piVar14 != (int *)0x0) {
      plVar16 = (long *)*local_68;
      uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,piVar14,lVar6 - (long)piVar14,4);
      }
      else {
        FUN_00c48fe8(plVar16,piVar14,lVar6 - (long)piVar14,4);
      }
    }
  }
LAB_00d805dc:
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f0));
  plVar16 = *(long **)(param_1 + 0x110);
  plVar2 = *(long **)(param_1 + 0x118);
  if (plVar16 != plVar2) {
    lVar6 = *plVar16;
    if (*(long *)(lVar6 + 0x2b8) == *(long *)(lVar6 + 0x2b0)) {
      FUN_00d8037c(lVar6,param_2,param_3,param_4,param_5,param_6);
    }
    if (plVar16 + 1 != plVar2) {
      lVar6 = plVar16[1];
      if (*(long *)(lVar6 + 0x2b8) == *(long *)(lVar6 + 0x2b0)) {
        FUN_00d8037c(lVar6,param_2,param_3,param_4,param_5,param_6);
      }
      for (plVar16 = plVar16 + 2; plVar16 != plVar2; plVar16 = plVar16 + 1) {
        lVar6 = *plVar16;
        if (*(long *)(lVar6 + 0x2b8) == *(long *)(lVar6 + 0x2b0)) {
          FUN_00d8037c(lVar6,param_2,param_3,param_4,param_5,param_6);
        }
      }
    }
  }
  return;
}


