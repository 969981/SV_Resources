/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca7a88; name: FUN_00ca7a88
 */


void FUN_00ca7a88(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long *plStack_68;
  
  plVar13 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  if (plVar13 == plVar3) {
    return;
  }
  plVar1 = param_2 + 3;
LAB_00ca7ae4:
  piVar9 = (int *)*plVar13;
  piVar4 = (int *)plVar13[1];
  if (piVar9 != piVar4) {
    if ((param_3 >> 2 & 1) == 0) {
      if ((param_3 >> 1 & 1) == 0) {
        if ((param_3 & 1) != 0) {
          do {
            if (*piVar9 - 1U < 0x19) goto LAB_00ca7b0c;
            piVar9 = piVar9 + 2;
          } while (piVar4 != piVar9);
        }
      }
      else if ((param_3 & 1) == 0) {
        do {
          if (0x18 < *piVar9 - 1U && *piVar9 - 0x1aU < 8) goto LAB_00ca7b0c;
          piVar9 = piVar9 + 2;
        } while (piVar4 != piVar9);
      }
      else {
        do {
          if (*piVar9 - 1U < 0x19 || *piVar9 - 0x1aU < 8) goto LAB_00ca7b0c;
          piVar9 = piVar9 + 2;
        } while (piVar4 != piVar9);
      }
    }
    else if ((param_3 >> 1 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        do {
          iVar5 = *piVar9;
          if ((0x18 < iVar5 - 1U) && (7 < iVar5 - 0x1aU && iVar5 - 0x22U < 4)) goto LAB_00ca7b0c;
          piVar9 = piVar9 + 2;
        } while (piVar4 != piVar9);
      }
      else {
        do {
          iVar5 = *piVar9;
          if ((iVar5 - 1U < 0x19) || (7 < iVar5 - 0x1aU && iVar5 - 0x22U < 4)) goto LAB_00ca7b0c;
          piVar9 = piVar9 + 2;
        } while (piVar4 != piVar9);
      }
    }
    else if ((param_3 & 1) == 0) {
      do {
        if (0x18 < *piVar9 - 1U && *piVar9 - 0x1aU < 0xc) goto LAB_00ca7b0c;
        piVar9 = piVar9 + 2;
      } while (piVar4 != piVar9);
    }
    else {
      do {
        if (*piVar9 - 1U < 0x19 || *piVar9 - 0x1aU < 0xc) goto LAB_00ca7b0c;
        piVar9 = piVar9 + 2;
      } while (piVar4 != piVar9);
    }
  }
  goto LAB_00ca7ba0;
LAB_00ca7b0c:
  puVar7 = (undefined8 *)param_2[1];
  lVar15 = param_2[7];
  if (puVar7 < (undefined8 *)param_2[2]) {
    lVar14 = *plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ca7f9c;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar7[4] = 0x1fffffffffffffff;
    puVar7[5] = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = lVar15;
    puVar7[7] = 0;
    puVar7[8] = 0;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    puVar7 = puVar7 + 9;
    param_2[1] = (long)puVar7;
  }
  else {
    lVar14 = (long)puVar7 - *param_2 >> 3;
    uVar11 = param_2[4];
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar2 = lVar14 * -0x71c71c71c71c71c7 + 1;
    if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_2[2] - *param_2 >> 3;
    local_70 = (undefined8 *)0x0;
    uVar10 = lVar6 * 0x1c71c71c71c71c72;
    if (uVar2 <= uVar10) {
      uVar2 = uVar10;
    }
    if (uVar11 >> 1 <= (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
      uVar2 = uVar11;
    }
    plStack_68 = plVar1;
    if (uVar2 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 * 0x48,8);
      if (puVar7 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    puVar12 = puVar7 + lVar14;
    local_70 = puVar7 + uVar2 * 9;
    lVar6 = *plVar1;
    local_88 = puVar7;
    local_80 = puVar12;
    local_78 = puVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00ca7f9c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar6;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar7[lVar14 + 5] = 0;
    puVar7[lVar14 + 3] = lVar15;
    puVar7[lVar14 + 4] = 0x1fffffffffffffff;
    *(undefined4 *)(puVar7 + lVar14 + 6) = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    puVar7[lVar14 + 7] = 0;
    puVar7[lVar14 + 8] = 0;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    local_78 = local_78 + 9;
    FUN_00ca966c(plVar1,*param_2,param_2[1],&local_80);
    local_88 = (undefined8 *)*param_2;
    puVar12 = (undefined8 *)param_2[1];
    *param_2 = (long)local_80;
    param_2[1] = (long)local_78;
    puVar7 = (undefined8 *)param_2[2];
    param_2[2] = (long)local_70;
    local_80 = local_88;
    local_78 = puVar12;
    local_70 = puVar7;
    FUN_00ca954c(&local_88);
    puVar7 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      lVar15 = (long)local_70 - (long)local_88;
      plVar16 = (long *)*plStack_68;
      uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,puVar7,lVar15,8);
      }
      else {
        FUN_00c48fe8(plVar16,puVar7,lVar15,8);
      }
    }
    puVar7 = (undefined8 *)param_2[1];
  }
  FUN_00ca7fa8(plVar13,puVar7 + -9,param_3);
LAB_00ca7ba0:
  plVar13 = plVar13 + 9;
  if (plVar13 == plVar3) {
    return;
  }
  goto LAB_00ca7ae4;
}


