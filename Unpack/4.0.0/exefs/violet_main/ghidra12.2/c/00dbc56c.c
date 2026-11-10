/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbc56c; name: FUN_00dbc56c
 */


void FUN_00dbc56c(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  
  FUN_00dbcb28(*param_2,param_1);
  plVar11 = (long *)(param_1 + 8);
  lVar9 = *plVar11;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar9) {
    lVar3 = nn::os::GetCurrentThread();
LAB_00dbc5b8:
    if (*plVar11 == 0) goto code_r0x00dbc5c0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar11 == 0) {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar12) {
              *plVar11 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00dbc5c8;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00dbc5c8:
    bVar12 = false;
    goto LAB_00dbc5cc;
  }
  plVar11 = (long *)0x0;
  bVar12 = true;
LAB_00dbc5cc:
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  puVar6 = (undefined8 *)(param_1 + 0x38);
  if (puVar8 < *(undefined8 **)(param_1 + 0x30)) {
    uVar13 = *puVar6;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar13 = *param_2;
      *param_2 = 0;
      *puVar8 = uVar13;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00dbc938:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar13 = *param_2;
      *param_2 = 0;
      *puVar8 = uVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x28) = puVar8 + 1;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x40);
    lVar3 = (long)puVar8 - *(long *)(param_1 + 0x20) >> 3;
    uVar4 = lVar3 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)*(undefined8 **)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
    uVar5 = lVar9 >> 2;
    local_60 = (undefined8 *)0x0;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar7 >> 1 <= (ulong)(lVar9 >> 3)) {
      uVar4 = uVar7;
    }
    puStack_58 = puVar6;
    if (uVar4 == 0) {
      local_78 = (undefined8 *)0x0;
    }
    else {
      local_78 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,uVar4 << 3,8);
      if (local_78 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar6 + 0xe8))();
      }
    }
    puVar8 = local_78 + lVar3;
    local_60 = local_78 + uVar4;
    uVar13 = *puVar6;
    local_70 = puVar8;
    local_68 = puVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar13 = *param_2;
      *param_2 = 0;
      *puVar8 = uVar13;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00dbc938;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar13 = *param_2;
      *param_2 = 0;
      *puVar8 = uVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar8 = local_68;
    }
    local_68 = puVar8 + 1;
    FUN_00dbca00(puVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&local_70);
    local_78 = *(undefined8 **)(param_1 + 0x20);
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x20) = local_70;
    *(undefined8 **)(param_1 + 0x28) = local_68;
    puVar6 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = local_60;
    local_70 = local_78;
    local_68 = puVar8;
    local_60 = puVar6;
    FUN_00dbc954(&local_78);
    puVar6 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      lVar3 = (long)local_60 - (long)local_78;
      plVar10 = (long *)*puStack_58;
      uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar4 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,puVar6,lVar3,8);
      }
      else {
        FUN_00c48fe8(plVar10,puVar6,lVar3,8);
      }
    }
  }
  if (bVar12) {
    return;
  }
  *plVar11 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  return;
code_r0x00dbc5c0:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar12) {
    *plVar11 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00dbc5c8;
  goto LAB_00dbc5b8;
}


