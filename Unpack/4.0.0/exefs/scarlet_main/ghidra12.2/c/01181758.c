/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01181758; name: FUN_01181758
 */


void FUN_01181758(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  
  plVar15 = (long *)(param_1 + 0x28);
  lVar10 = *plVar15;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar10) {
    lVar4 = nn::os::GetCurrentThread();
LAB_0118179c:
    if (*plVar15 == 0) goto code_r0x011817a4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
    do {
      if (*plVar15 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
          while (*plVar15 == 0) {
            cVar2 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *plVar15 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_011817ac;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar12) {
        *plVar15 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_011817ac:
    bVar12 = false;
    goto LAB_011817b0;
  }
  plVar15 = (long *)0x0;
  bVar12 = true;
LAB_011817b0:
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 == *(undefined8 **)(param_1 + 0x50)) {
    uVar8 = *(ulong *)(param_1 + 0x60);
    lVar4 = (long)puVar1 - *(long *)(param_1 + 0x40) >> 3;
    uVar6 = lVar4 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar7 = lVar10 >> 2;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar6 = uVar8;
    }
    if (uVar6 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
                         (*(long **)(param_1 + 0x58),uVar6 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0xe8))();
      }
    }
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    puVar1 = (undefined8 *)(lVar10 + lVar4 * 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01181b8c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    lVar13 = *(long *)(param_1 + 0x48);
    puVar14 = puVar1;
    if (lVar13 != lVar4) {
      do {
        uVar11 = *(undefined8 *)(param_1 + 0x58);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          puVar14[-1] = *(undefined8 *)(lVar13 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01181b8c;
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          puVar14[-1] = *(undefined8 *)(lVar13 + -8);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar13 = lVar13 + -8;
        puVar14 = puVar14 + -1;
      } while (lVar4 != lVar13);
      lVar4 = *(long *)(param_1 + 0x40);
    }
    *(undefined8 **)(param_1 + 0x40) = puVar14;
    *(undefined8 **)(param_1 + 0x48) = puVar1 + 1;
    lVar13 = *(long *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = lVar10 + uVar6 * 8;
    if (lVar4 != 0) {
      plVar9 = *(long **)(param_1 + 0x58);
      lVar13 = lVar13 - lVar4;
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar4,lVar13,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar4,lVar13,8);
      }
    }
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01181b8c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x48) = puVar1 + 1;
  }
  if (!bVar12) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    return;
  }
  return;
code_r0x011817a4:
  cVar2 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar12) {
    *plVar15 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_011817ac;
  goto LAB_0118179c;
}


