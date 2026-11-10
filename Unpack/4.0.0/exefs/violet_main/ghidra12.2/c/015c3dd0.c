/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c3dd0; name: FUN_015c3dd0
 */


void FUN_015c3dd0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  
  plVar6 = (long *)(param_1 + 0x48);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_015c3e10;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_015c3e10;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_015c3e10:
  (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,param_1);
  plVar6 = *(long **)(param_1 + 0x80);
  if (plVar6 == *(long **)(param_1 + 0x88)) {
    uVar10 = *(ulong *)(param_1 + 0x98);
    lVar4 = (long)plVar6 - *(long *)(param_1 + 0x78) >> 3;
    uVar7 = lVar4 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(long **)(param_1 + 0x88) - *(long *)(param_1 + 0x78);
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
      lVar8 = (**(code **)(**(long **)(param_1 + 0x90) + 0x10))
                        (*(long **)(param_1 + 0x90),uVar7 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(param_1 + 0x90) + 0xe8))();
      }
    }
    uVar14 = *(undefined8 *)(param_1 + 0x90);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_015c4264;
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    param_2 = (long *)*param_2;
    plVar6 = (long *)(lVar8 + lVar4 * 8);
    *plVar6 = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x10))();
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    plVar12 = *(long **)(param_1 + 0x78);
    plVar11 = *(long **)(param_1 + 0x80);
    plVar13 = plVar6;
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      do {
        uVar14 = *(undefined8 *)(param_1 + 0x90);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          lVar4 = plVar11[-1];
          plVar11[-1] = 0;
          plVar13[-1] = lVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_015c4264:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          lVar5 = plVar11[-1];
          plVar11[-1] = 0;
          plVar13[-1] = lVar5;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        plVar11 = plVar11 + -1;
        plVar13 = plVar13 + -1;
      } while (plVar12 != plVar11);
      plVar12 = *(long **)(param_1 + 0x78);
      plVar11 = *(long **)(param_1 + 0x80);
    }
    lVar4 = *(long *)(param_1 + 0x88);
    *(long **)(param_1 + 0x78) = plVar13;
    *(long **)(param_1 + 0x80) = plVar6 + 1;
    *(ulong *)(param_1 + 0x88) = lVar8 + uVar7 * 8;
    if (plVar11 != plVar12) {
      plVar6 = (long *)plVar11[-1];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      if (plVar11 + -1 != plVar12) {
        plVar6 = (long *)plVar11[-2];
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))();
        }
        if (plVar11 + -2 != plVar12) {
          do {
            if ((long *)plVar11[-3] != (long *)0x0) {
              (**(code **)(*(long *)plVar11[-3] + 0x18))();
            }
            plVar11 = plVar11 + -1;
          } while (plVar12 + 2 != plVar11);
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x90);
      lVar4 = lVar4 - (long)plVar12;
      uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar12,lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar6,plVar12,lVar4,8);
      }
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x90);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_015c4264;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    param_2 = (long *)*param_2;
    *plVar6 = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x10))();
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x80) = plVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0xe8) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return;
}


