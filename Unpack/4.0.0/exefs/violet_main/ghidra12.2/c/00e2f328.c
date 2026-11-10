/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e2f328; name: FUN_00e2f328
 */


void FUN_00e2f328(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  plVar11 = (long *)(param_1 + 0x110);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00e2f36c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar11 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00e2f36c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00e2f36c:
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar1 == *(undefined8 **)(param_1 + 0xe8)) {
    uVar10 = *(ulong *)(param_1 + 0xf8);
    lVar5 = (long)puVar1 - *(long *)(param_1 + 0xd8) >> 3;
    uVar7 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(undefined8 **)(param_1 + 0xe8) - *(long *)(param_1 + 0xd8);
    uVar9 = lVar8 >> 2;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar10 >> 1 <= (ulong)(lVar8 >> 3)) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))
                        (*(long **)(param_1 + 0xf0),uVar7 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(param_1 + 0xf0) + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar8 + lVar5 * 8);
    uVar12 = *(undefined8 *)(param_1 + 0xf0);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00e2f6ac;
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar5 = *(long *)(param_1 + 0xd8);
    lVar14 = *(long *)(param_1 + 0xe0);
    puVar13 = puVar1;
    if (lVar14 != lVar5) {
      do {
        uVar12 = *(undefined8 *)(param_1 + 0xf0);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          puVar13[-1] = *(undefined8 *)(lVar14 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00e2f6ac;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          puVar13[-1] = *(undefined8 *)(lVar14 + -8);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar14 = lVar14 + -8;
        puVar13 = puVar13 + -1;
      } while (lVar5 != lVar14);
      lVar5 = *(long *)(param_1 + 0xd8);
    }
    *(undefined8 **)(param_1 + 0xd8) = puVar13;
    *(undefined8 **)(param_1 + 0xe0) = puVar1 + 1;
    lVar14 = *(long *)(param_1 + 0xe8);
    *(ulong *)(param_1 + 0xe8) = lVar8 + uVar7 * 8;
    if (lVar5 != 0) {
      plVar11 = *(long **)(param_1 + 0xf0);
      lVar14 = lVar14 - lVar5;
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,lVar14,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar5,lVar14,8);
      }
    }
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0xf0);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00e2f6ac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0xe0) = puVar1 + 1;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
  return;
}


