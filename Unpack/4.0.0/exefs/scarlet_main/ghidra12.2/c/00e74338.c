/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e74338; name: FUN_00e74338
 */


void FUN_00e74338(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *local_a0;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar1 = (long *)(param_1 + 0x1d8);
  local_90 = param_2;
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00e7437c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00e7437c:
  plVar1 = local_90;
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar2 != *(undefined8 **)(param_1 + 0xf8)) {
    plVar11 = (long *)*puVar2;
    puVar2 = puVar2 + 1;
    if (plVar11 == local_90) goto LAB_00e74648;
  }
  FUN_02b4e02c(param_1 + 0x130,&local_90);
  FUN_02b4e02c((undefined8 *)(param_1 + 0xf0),&local_90);
  lVar13 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar13) {
    local_a0 = (long *)0x0;
    bVar5 = true;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar1 + 1));
          while (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00e743e8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00e743e8:
    bVar5 = false;
    local_a0 = plVar1;
  }
  lVar7 = plVar1[3];
  lVar13 = plVar1[4];
  if (lVar7 != lVar13) {
    puVar2 = (undefined8 *)(param_1 + 0x180);
    do {
      uVar3 = *(ulong *)(param_1 + 0x170);
      if (uVar3 < *(ulong *)(param_1 + 0x178)) {
        FUN_02b4e528(puVar2,uVar3,&local_90,lVar7);
        *(ulong *)(param_1 + 0x170) = uVar3 + 0x10;
      }
      else {
        uVar12 = *(ulong *)(param_1 + 0x188);
        lVar15 = (long)(uVar3 - *(long *)(param_1 + 0x168)) >> 4;
        uVar3 = lVar15 + 1;
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
          lVar9 = 0;
        }
        else {
          lVar9 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar3 << 4,8);
          if (lVar9 == 0) {
            (**(code **)(*(long *)*puVar2 + 0xe8))();
          }
        }
        lVar15 = lVar9 + lVar15 * 0x10;
        lVar8 = lVar9 + uVar3 * 0x10;
        local_88 = lVar9;
        local_80 = lVar15;
        local_70 = lVar8;
        FUN_02b4e528(puVar2,lVar15,&local_90,lVar7);
        local_78 = lVar15 + 0x10;
        lVar9 = *(long *)(param_1 + 0x168);
        lVar16 = *(long *)(param_1 + 0x170);
        if (lVar16 == lVar9) {
          lVar16 = lVar9;
        }
        else {
          do {
            uVar14 = *puVar2;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            *(undefined8 *)(lVar15 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
            uVar14 = *(undefined8 *)(lVar16 + -8);
            *(undefined8 *)(lVar16 + -8) = 0;
            lVar16 = lVar16 + -0x10;
            *(undefined8 *)(lVar15 + -8) = uVar14;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            lVar15 = local_80 + -0x10;
            local_80 = lVar15;
          } while (lVar9 != lVar16);
          lVar9 = *(long *)(param_1 + 0x168);
          lVar8 = local_70;
          lVar16 = *(long *)(param_1 + 0x170);
        }
        *(long *)(param_1 + 0x168) = lVar15;
        *(long *)(param_1 + 0x170) = local_78;
        local_70 = *(undefined8 *)(param_1 + 0x178);
        *(long *)(param_1 + 0x178) = lVar8;
        local_88 = lVar9;
        local_80 = lVar9;
        local_78 = lVar16;
        FUN_02b4e6b8(&local_88);
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != lVar13);
  }
  if (!bVar5) {
    *local_a0 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_a0 + 1));
  }
LAB_00e74648:
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e0));
  return;
}


