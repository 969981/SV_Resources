/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f56428; name: FUN_00f56428
 */


void FUN_00f56428(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar1 = (long *)(param_1 + 0x1d8);
  local_98 = param_3;
  uStack_90 = param_2;
  lVar8 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00f5646c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00f5646c:
  uVar3 = *(ulong *)(param_1 + 0x170);
  puVar2 = (undefined8 *)(param_1 + 0x180);
  if (uVar3 < *(ulong *)(param_1 + 0x178)) {
    FUN_02b4e7e4(puVar2,uVar3,&local_98,&uStack_90);
    *(ulong *)(param_1 + 0x170) = uVar3 + 0x10;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x188);
    lVar8 = (long)(uVar3 - *(long *)(param_1 + 0x168)) >> 4;
    uVar3 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(ulong *)(param_1 + 0x178) - *(long *)(param_1 + 0x168);
    uVar10 = lVar9 >> 3;
    local_70 = 0;
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar12 >> 1 <= (ulong)(lVar9 >> 4)) {
      uVar3 = uVar12;
    }
    puStack_68 = puVar2;
    if (uVar3 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar3 << 4,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
    }
    lVar8 = local_88 + lVar8 * 0x10;
    lVar9 = local_88 + uVar3 * 0x10;
    local_80 = lVar8;
    local_70 = lVar9;
    FUN_02b4e7e4(puVar2,lVar8,&local_98,&uStack_90);
    puVar6 = PTR_LAB_047d3900;
    local_78 = lVar8 + 0x10;
    lVar11 = *(long *)(param_1 + 0x168);
    lVar13 = *(long *)(param_1 + 0x170);
    if (lVar13 == lVar11) {
      lVar13 = lVar11;
    }
    else {
      do {
        uVar14 = *puVar2;
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar6,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        *(undefined8 *)(lVar8 + -0x10) = *(undefined8 *)(lVar13 + -0x10);
        uVar14 = *(undefined8 *)(lVar13 + -8);
        *(undefined8 *)(lVar13 + -8) = 0;
        lVar13 = lVar13 + -0x10;
        *(undefined8 *)(lVar8 + -8) = uVar14;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar8 = local_80 + -0x10;
        local_80 = lVar8;
      } while (lVar11 != lVar13);
      lVar11 = *(long *)(param_1 + 0x168);
      lVar9 = local_70;
      lVar13 = *(long *)(param_1 + 0x170);
    }
    *(long *)(param_1 + 0x168) = lVar8;
    *(long *)(param_1 + 0x170) = local_78;
    local_70 = *(undefined8 *)(param_1 + 0x178);
    *(long *)(param_1 + 0x178) = lVar9;
    local_88 = lVar11;
    local_80 = lVar11;
    local_78 = lVar13;
    FUN_02b4e6b8(&local_88);
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e0));
  return;
}


