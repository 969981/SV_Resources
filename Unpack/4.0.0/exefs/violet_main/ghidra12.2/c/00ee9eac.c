/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee9eac; name: FUN_00ee9eac
 */


void FUN_00ee9eac(long param_1,char *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  
  if (*param_2 == '\0') {
    return;
  }
  plVar15 = (long *)(param_1 + 0x62d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00ee9efc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x62d8));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x62d8));
        while (*plVar15 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00ee9efc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00ee9efc:
  lVar6 = param_1 + (ulong)*(uint *)(param_1 + 0x6390) * 0x38;
  plVar15 = (long *)(lVar6 + 0x62f0);
  puVar14 = *(undefined8 **)(lVar6 + 0x62f0);
  puVar1 = (undefined8 *)(lVar6 + 0x6300);
  if (puVar14 == *(undefined8 **)(lVar6 + 0x62f8)) {
    plVar2 = (long *)(lVar6 + 0x62e8);
    uVar9 = *(ulong *)(param_1 + (ulong)*(uint *)(param_1 + 0x6390) * 0x38 + 0x6308);
    lVar12 = (long)puVar14 - *plVar2 >> 4;
    uVar8 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(undefined8 **)(lVar6 + 0x62f8) - *plVar2;
    uVar11 = lVar10 >> 3;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (uVar9 >> 1 <= (ulong)(lVar10 >> 4)) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 << 4,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar14 = (undefined8 *)(lVar10 + lVar12 * 0x10);
    uVar16 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      uVar16 = *(undefined8 *)(param_2 + 8);
      *puVar14 = *(undefined8 *)param_2;
      puVar14[1] = uVar16;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00eea324;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      uVar16 = *(undefined8 *)(param_2 + 8);
      *puVar14 = *(undefined8 *)param_2;
      puVar14[1] = uVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    lVar12 = *plVar2;
    lVar13 = *plVar15;
    puVar17 = puVar14;
    if (lVar13 != lVar12) {
      do {
        uVar16 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          uVar16 = *(undefined8 *)(lVar13 + -8);
          puVar17[-2] = *(undefined8 *)(lVar13 + -0x10);
          puVar17[-1] = uVar16;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00eea324;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar16;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          uVar16 = *(undefined8 *)(lVar13 + -8);
          puVar17[-2] = *(undefined8 *)(lVar13 + -0x10);
          puVar17[-1] = uVar16;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        lVar13 = lVar13 + -0x10;
        puVar17 = puVar17 + -2;
      } while (lVar12 != lVar13);
      lVar12 = *plVar2;
    }
    *plVar2 = (long)puVar17;
    *plVar15 = (long)(puVar14 + 2);
    lVar13 = *(long *)(lVar6 + 0x62f8);
    *(long *)(lVar6 + 0x62f8) = lVar10 + uVar8 * 0x10;
    if (lVar12 != 0) {
      plVar15 = (long *)*puVar1;
      lVar13 = lVar13 - lVar12;
      uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar8 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar12,lVar13,8);
      }
      else {
        FUN_00c48fe8(plVar15,lVar12,lVar13,8);
      }
    }
  }
  else {
    uVar16 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      uVar16 = *(undefined8 *)(param_2 + 8);
      *puVar14 = *(undefined8 *)param_2;
      puVar14[1] = uVar16;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00eea324:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar16;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar16 = *(undefined8 *)(param_2 + 8);
      *puVar14 = *(undefined8 *)param_2;
      puVar14[1] = uVar16;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar15 = (long)(puVar14 + 2);
  }
  *(undefined8 *)(param_1 + 0x62d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x62d8));
  return;
}


