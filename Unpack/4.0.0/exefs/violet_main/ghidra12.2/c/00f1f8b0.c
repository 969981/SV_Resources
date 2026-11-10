/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1f8b0; name: FUN_00f1f8b0
 */


void FUN_00f1f8b0(long param_1,undefined8 param_2)

{
  LightEventType *pLVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  undefined8 *local_68;
  
  lVar15 = (long)*(int *)(param_1 + 0x3e0);
  plVar13 = (long *)(param_1 + lVar15 * 0x50 + 0x340);
  lVar10 = *plVar13;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar10) {
    lVar5 = nn::os::GetCurrentThread();
LAB_00f1f900:
    if (*plVar13 == 0) goto code_r0x00f1f908;
    pLVar1 = (LightEventType *)(param_1 + lVar15 * 0x50 + 0x348);
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar14) {
              *plVar13 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00f1f910;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar14) {
        *plVar13 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00f1f910:
    bVar14 = false;
    goto LAB_00f1f914;
  }
  plVar13 = (long *)0x0;
  bVar14 = true;
LAB_00f1f914:
  lVar5 = param_1 + lVar15 * 0x50;
  puVar16 = *(undefined8 **)(lVar5 + 0x360);
  plVar12 = (long *)(lVar5 + 0x360);
  puVar8 = (undefined8 *)(lVar5 + 0x370);
  if (puVar16 == *(undefined8 **)(lVar5 + 0x368)) {
    plVar2 = (long *)(lVar5 + 0x358);
    uVar9 = *(ulong *)(param_1 + lVar15 * 0x50 + 0x378);
    lVar10 = (long)puVar16 - *plVar2 >> 3;
    uVar6 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)*(undefined8 **)(lVar5 + 0x368) - *plVar2;
    uVar7 = lVar15 >> 2;
    local_70 = 0;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar9 >> 1 <= (ulong)(lVar15 >> 3)) {
      uVar6 = uVar9;
    }
    local_68 = puVar8;
    if (uVar6 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,uVar6 << 3,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar8 + 0xe8))();
      }
    }
    puVar16 = (undefined8 *)(lVar15 + lVar10 * 8);
    local_70 = lVar15 + uVar6 * 8;
    uVar11 = *puVar8;
    local_80 = puVar16;
    local_78 = puVar16;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *puVar16 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00f1fcb0;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *puVar16 = param_2;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      puVar16 = local_78;
    }
    local_78 = puVar16 + 1;
    FUN_00f20e7c(puVar8,*plVar2,*plVar12,&local_80);
    puVar16 = (undefined8 *)*plVar2;
    *plVar2 = (long)local_80;
    puVar8 = (undefined8 *)*plVar12;
    *plVar12 = (long)local_78;
    lVar10 = *(long *)(lVar5 + 0x368);
    *(long *)(lVar5 + 0x368) = local_70;
    local_78 = puVar8;
    if ((long)puVar8 - (long)puVar16 != 0) {
      local_78 = puVar8 + (((long)puVar8 - (long)puVar16) - 8U >> 3 ^ 0xffffffffffffffff);
    }
    local_80 = puVar16;
    local_70 = lVar10;
    if (puVar16 != (undefined8 *)0x0) {
      plVar12 = (long *)*local_68;
      uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar16,lVar10 - (long)puVar16,8);
      }
      else {
        FUN_00c48fe8(plVar12,puVar16,lVar10 - (long)puVar16,8);
      }
    }
  }
  else {
    uVar11 = *puVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar16 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00f1fcb0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar16 = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *plVar12 = (long)(puVar16 + 1);
  }
  if (bVar14) {
    return;
  }
  *plVar13 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  return;
code_r0x00f1f908:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar14) {
    *plVar13 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00f1f910;
  goto LAB_00f1f900;
}


