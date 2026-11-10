/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0177258c; name: FUN_0177258c
 */


void FUN_0177258c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long local_68;
  
  plVar1 = (long *)(param_1 + 0xd70);
  local_68 = param_2;
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_017725d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xd78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar4;
            *(undefined8 *)(param_1 + 0xd78) = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_017725d8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_017725d8:
  lVar4 = local_68;
  *(undefined8 *)(local_68 + 8) = param_3;
  if (*(long *)(param_1 + 0xd98) == *(long *)(param_1 + 0xda0)) {
    uVar10 = *(ulong *)(param_1 + 0xdb0);
    lVar12 = *(long *)(param_1 + 0xd98) - *(long *)(param_1 + 0xd90) >> 3;
    uVar6 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *(long *)(param_1 + 0xda0) - *(long *)(param_1 + 0xd90);
    uVar9 = lVar8 >> 2;
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar10 >> 1 <= (ulong)(lVar8 >> 3)) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(param_1 + 0xda8) + 0x10))
                        (*(long **)(param_1 + 0xda8),uVar6 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(param_1 + 0xda8) + 0xe8))();
      }
    }
    uVar13 = *(undefined8 *)(param_1 + 0xda8);
    plVar11 = (long *)(lVar8 + lVar12 * 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *plVar11 = lVar4;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_017729b4;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *plVar11 = local_68;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    lVar4 = *(long *)(param_1 + 0xd90);
    lVar12 = *(long *)(param_1 + 0xd98);
    plVar14 = plVar11;
    if (lVar12 != lVar4) {
      do {
        uVar13 = *(undefined8 *)(param_1 + 0xda8);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          plVar14[-1] = *(long *)(lVar12 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_017729b4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          plVar14[-1] = *(long *)(lVar12 + -8);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar12 = lVar12 + -8;
        plVar14 = plVar14 + -1;
      } while (lVar4 != lVar12);
      lVar4 = *(long *)(param_1 + 0xd90);
    }
    *(long **)(param_1 + 0xd98) = plVar11 + 1;
    lVar12 = *(long *)(param_1 + 0xda0);
    *(long **)(param_1 + 0xd90) = plVar14;
    *(ulong *)(param_1 + 0xda0) = lVar8 + uVar6 * 8;
    if (lVar4 != 0) {
      plVar11 = *(long **)(param_1 + 0xda8);
      lVar12 = lVar12 - lVar4;
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar4,lVar12,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar4,lVar12,8);
      }
    }
  }
  else {
    FUN_017729c0((long *)(param_1 + 0xd90),&local_68);
  }
  do {
    lVar4 = *plVar1;
    lVar12 = *(long *)(param_1 + 0xd78);
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xd78) = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar8 = *plVar1;
    lVar5 = *(long *)(param_1 + 0xd78);
    if (lVar8 != lVar4 || lVar5 != lVar12) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_01772818;
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xd74) = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar7 = true;
LAB_01772818:
  if (!bVar7) {
    do {
      lVar4 = *plVar1;
      lVar12 = *(long *)(param_1 + 0xd78);
      if (lVar4 != lVar8 || lVar12 != lVar5) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01772960;
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xd74) = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar7 = true;
joined_r0x01772960:
    if (!bVar7) {
      do {
        lVar8 = *plVar1;
        lVar5 = *(long *)(param_1 + 0xd78);
        if (lVar8 != lVar4 || lVar5 != lVar12) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar4 = lVar8;
          lVar12 = lVar5;
          goto joined_r0x01772960;
        }
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0xd74) = lVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar7 = true;
      lVar4 = lVar8;
      lVar12 = lVar5;
      goto joined_r0x01772960;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  return;
}


