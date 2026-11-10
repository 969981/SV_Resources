/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0178842c; name: FUN_0178842c
 */


/* WARNING: Removing unreachable block (ram,0x01788818) */

void FUN_0178842c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *local_a8;
  undefined1 auStack_a0 [64];
  long *local_48;
  
  plVar17 = (long *)(param_1 + 0x120);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01788474;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01788474;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01788474:
  pcVar14 = *(char **)(param_2 + 8);
  if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) {
    local_a8 = (long *)FUN_00d44228();
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))(local_a8);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar8;
    FUN_00cf9884(&local_48,uVar8,pcVar14);
    local_a8 = local_48;
  }
  FUN_01186a68(auStack_a0,param_3);
  puVar16 = *(undefined8 **)(param_1 + 0x560);
  puVar1 = (undefined8 *)(param_1 + 0x570);
  if (puVar16 == *(undefined8 **)(param_1 + 0x568)) {
    uVar13 = *(ulong *)(param_1 + 0x578);
    lVar7 = (long)puVar16 - *(long *)(param_1 + 0x558) >> 3;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar2 = lVar7 * -0x71c71c71c71c71c7 + 1;
    if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)*(undefined8 **)(param_1 + 0x568) - *(long *)(param_1 + 0x558) >> 3;
    uVar12 = lVar11 * 0x1c71c71c71c71c72;
    if (uVar2 <= uVar12) {
      uVar2 = uVar12;
    }
    if (uVar13 >> 1 <= (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
      uVar2 = uVar13;
    }
    if (uVar2 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x48,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    uVar8 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_017889a8;
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    puVar16 = (undefined8 *)(lVar11 + lVar7 * 8);
    *puVar16 = local_a8;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))();
    }
    FUN_01186a68(lVar11 + lVar7 * 8 + 8,auStack_a0);
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    plVar17 = *(long **)(param_1 + 0x558);
    plVar15 = *(long **)(param_1 + 0x560);
    puVar3 = puVar16 + 9;
    if (plVar15 == plVar17) {
      plVar15 = plVar17;
    }
    else {
      do {
        puVar16 = puVar16 + -9;
        plVar15 = plVar15 + -9;
        FUN_017889b4(puVar1,puVar16,plVar15);
      } while (plVar17 != plVar15);
      plVar17 = *(long **)(param_1 + 0x558);
      plVar15 = *(long **)(param_1 + 0x560);
    }
    *(undefined8 **)(param_1 + 0x558) = puVar16;
    lVar7 = *(long *)(param_1 + 0x568);
    *(undefined8 **)(param_1 + 0x560) = puVar3;
    *(ulong *)(param_1 + 0x568) = lVar11 + uVar2 * 0x48;
    if (plVar15 != plVar17) {
      FUN_01185de0(plVar15 + -8);
      plVar10 = (long *)plVar15[-9];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      if (plVar15 + -9 != plVar17) {
        FUN_01185de0(plVar15 + -0x11);
        plVar10 = (long *)plVar15[-0x12];
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        if (plVar15 + -0x12 != plVar17) {
          do {
            FUN_01185de0(plVar15 + -0x1a);
            if ((long *)plVar15[-0x1b] != (long *)0x0) {
              (**(code **)(*(long *)plVar15[-0x1b] + 0x20))();
            }
            plVar15 = plVar15 + -9;
          } while (plVar17 + 0x12 != plVar15);
        }
      }
    }
    if (plVar17 != (long *)0x0) {
      plVar15 = (long *)*puVar1;
      lVar7 = lVar7 - (long)plVar17;
      uVar13 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,plVar17,lVar7,8);
      }
      else {
        FUN_00c48fe8(plVar15,plVar17,lVar7,8);
      }
    }
  }
  else {
    uVar8 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_017889a8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    *puVar16 = local_a8;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))();
    }
    FUN_01186a68(puVar16 + 1,auStack_a0);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x560) = puVar16 + 9;
  }
  FUN_01185de0(auStack_a0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x128));
  return;
}


