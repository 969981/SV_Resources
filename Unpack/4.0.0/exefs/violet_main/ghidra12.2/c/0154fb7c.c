/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154fb7c; name: FUN_0154fb7c
 */


int FUN_0154fb7c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  
  plVar19 = (long *)(param_1 + 0xf0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar7) {
      *plVar19 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_0154fbbc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar19 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar7) {
            *plVar19 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0154fbbc;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar7) {
      *plVar19 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0154fbbc:
  puVar17 = *(undefined8 **)(param_1 + 0x278);
  uVar12 = (long)puVar17 - *(long *)(param_1 + 0x270);
  uVar20 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  plVar19 = (long *)param_2[3];
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puVar17 = *(undefined8 **)(param_1 + 0x278);
  }
  iVar5 = (int)(uVar12 >> 3) * -0x33333333;
  if (puVar17 < *(undefined8 **)(param_1 + 0x280)) {
    uVar16 = *(undefined8 *)(param_1 + 0x288);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01550098;
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar16;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    *puVar17 = uVar20;
    puVar17[1] = uVar4;
    *(int *)(puVar17 + 4) = iVar5;
    puVar17[2] = uVar3;
    puVar17[3] = plVar19;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x278) = puVar17 + 5;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x290);
    lVar9 = (long)puVar17 - *(long *)(param_1 + 0x270) >> 3;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uVar1 = lVar9 * -0x3333333333333333 + 1;
    if (uVar12 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (long)*(undefined8 **)(param_1 + 0x280) - *(long *)(param_1 + 0x270) >> 3;
    uVar15 = lVar13 * -0x6666666666666666;
    if (uVar1 <= uVar15) {
      uVar1 = uVar15;
    }
    if (uVar12 >> 1 <= (ulong)(lVar13 * -0x3333333333333333)) {
      uVar1 = uVar12;
    }
    if (uVar1 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(**(long **)(param_1 + 0x288) + 0x10))
                         (*(long **)(param_1 + 0x288),uVar1 * 0x28,8);
      if (lVar13 == 0) {
        (**(code **)(**(long **)(param_1 + 0x288) + 0xe8))();
      }
    }
    uVar16 = *(undefined8 *)(param_1 + 0x288);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01550098;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    puVar17 = (undefined8 *)(lVar13 + lVar9 * 8);
    lVar9 = lVar13 + lVar9 * 8;
    *puVar17 = uVar20;
    *(long **)(lVar9 + 0x18) = plVar19;
    *(undefined8 *)(lVar9 + 8) = uVar4;
    *(undefined8 *)(lVar9 + 0x10) = uVar3;
    *(int *)(lVar9 + 0x20) = iVar5;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    lVar10 = *(long *)(param_1 + 0x270);
    lVar9 = *(long *)(param_1 + 0x278);
    if (lVar9 == lVar10) {
      puVar14 = puVar17;
      lVar9 = lVar10;
    }
    else {
      lVar18 = 0;
      do {
        uVar20 = *(undefined8 *)(param_1 + 0x288);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_01550098:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar20;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        lVar2 = lVar9 + lVar18;
        *(undefined8 *)((long)puVar17 + lVar18 + -0x28) = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)((long)puVar17 + lVar18 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
        *(undefined8 *)((long)puVar17 + lVar18 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        uVar20 = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined8 *)((long)puVar17 + lVar18 + -0x10) = uVar20;
        *(undefined4 *)((long)puVar17 + lVar18 + -8) = *(undefined4 *)(lVar2 + -8);
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        lVar18 = lVar18 + -0x28;
      } while (lVar10 - lVar9 != lVar18);
      lVar10 = *(long *)(param_1 + 0x270);
      puVar14 = (undefined8 *)((long)puVar17 + lVar18);
      lVar9 = *(long *)(param_1 + 0x278);
    }
    lVar18 = *(long *)(param_1 + 0x280);
    *(undefined8 **)(param_1 + 0x270) = puVar14;
    *(undefined8 **)(param_1 + 0x278) = puVar17 + 5;
    *(ulong *)(param_1 + 0x280) = lVar13 + uVar1 * 0x28;
    if (lVar9 != lVar10) {
      if (*(long **)(lVar9 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x10) + 0x20))();
      }
      if (lVar9 + -0x28 != lVar10) {
        if (*(long **)(lVar9 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x38) + 0x20))();
        }
        if (lVar9 + -0x50 != lVar10) {
          do {
            if (*(long **)(lVar9 + -0x60) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + -0x60) + 0x20))();
            }
            lVar9 = lVar9 + -0x28;
          } while (lVar10 + 0x50 != lVar9);
        }
      }
    }
    if (lVar10 != 0) {
      plVar19 = *(long **)(param_1 + 0x288);
      lVar18 = lVar18 - lVar10;
      uVar12 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar12 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar10,lVar18,8);
      }
      else {
        FUN_00c48fe8(plVar19,lVar10,lVar18,8);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return iVar5;
}


