/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d72348; name: FUN_00d72348
 */


void FUN_00d72348(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long local_68;
  
  plVar13 = (long *)(param_1 + 0x138);
  local_68 = param_2;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d72390;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar13 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d72390;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d72390:
  if (param_3[2] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("behaviorPtr->m_data.setting.owner == nullptr","Add",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/behavior_container.cpp"
               ,0x3a);
  }
  param_3[1] = local_68;
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 < *(long **)(param_1 + 0x18)) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *plVar13 = (long)param_3;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00d72740;
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *plVar13 = (long)param_3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x10) = plVar13 + 1;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x28);
    lVar5 = (long)plVar13 - *(long *)(param_1 + 8) >> 3;
    uVar6 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(long **)(param_1 + 0x18) - *(long *)(param_1 + 8);
    uVar9 = lVar8 >> 2;
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar11 >> 1 <= (ulong)(lVar8 >> 3)) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                        (*(long **)(param_1 + 0x20),uVar6 << 3,1);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0xe8))();
      }
    }
    plVar13 = (long *)(lVar8 + lVar5 * 8);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *plVar13 = (long)param_3;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00d72740;
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *plVar13 = (long)param_3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar5 = *(long *)(param_1 + 8);
    lVar10 = *(long *)(param_1 + 0x10);
    plVar14 = plVar13;
    if (lVar10 != lVar5) {
      do {
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          plVar14[-1] = *(long *)(lVar10 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00d72740:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          plVar14[-1] = *(long *)(lVar10 + -8);
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        lVar10 = lVar10 + -8;
        plVar14 = plVar14 + -1;
      } while (lVar5 != lVar10);
      lVar5 = *(long *)(param_1 + 8);
    }
    *(long **)(param_1 + 8) = plVar14;
    *(long **)(param_1 + 0x10) = plVar13 + 1;
    lVar10 = *(long *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = lVar8 + uVar6 * 8;
    if (lVar5 != 0) {
      plVar13 = *(long **)(param_1 + 0x20);
      lVar10 = lVar10 - lVar5;
      uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar5,lVar10,1);
      }
      else {
        FUN_00c48fe8(plVar13,lVar5,lVar10,1);
      }
    }
  }
  uVar3 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x133));
  FUN_00d727c8(param_1,uVar3,param_3);
  if ((*(byte *)(param_3 + 5) >> 1 & 1) != 0) {
    FUN_00c43b2c(param_1 + 0x78,&local_68);
  }
  param_3[2] = param_1;
  *(undefined1 *)(param_1 + 0x132) = 1;
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


