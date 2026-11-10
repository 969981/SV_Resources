/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a42c28; name: FUN_00a42c28
 */


void FUN_00a42c28(long param_1,long *param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined4 *puVar19;
  long *plVar20;
  
  plVar15 = DAT_04836488;
  lVar14 = *(long *)(param_1 + 0x80);
  if (lVar14 != 0) {
    if (*(int **)(param_1 + 0x10) == *(int **)(param_1 + 0x18)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 1;
      piVar16 = *(int **)(param_1 + 0x10);
      do {
        piVar18 = piVar16 + 1;
        lVar11 = (long)*piVar16 * (long)(int)lVar11;
        piVar16 = piVar18;
      } while (*(int **)(param_1 + 0x18) != piVar18);
      lVar11 = lVar11 * 0x88;
    }
    uVar4 = (**(code **)(*DAT_04836488 + 0xf8))(DAT_04836488);
    if (((uVar4 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar14,lVar11,0x40);
    }
    else {
      FUN_00c48fe8(plVar15,lVar14,lVar11,0x40);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  piVar16 = *(int **)(param_1 + 0x10);
  *(int **)(param_1 + 0x18) = piVar16;
  plVar15 = (long *)(param_1 + 0x48);
  *(long *)(param_1 + 0x50) = *plVar15;
  lVar14 = *param_2;
  if (param_2[1] - lVar14 == 0) {
    return;
  }
  uVar9 = param_2[1] - lVar14 >> 2;
  uVar4 = 0;
  uVar13 = 0;
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  do {
    iVar3 = *(int *)(lVar14 + uVar4 * 4);
    if (piVar16 == *(int **)(param_1 + 0x20)) {
      lVar14 = (long)piVar16 - *(long *)(param_1 + 0x10);
      uVar10 = *(ulong *)(param_1 + 0x30);
      uVar8 = lVar14 >> 2;
      uVar7 = uVar8 + 1;
      if (0x7ffffffffffffffe < uVar10) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar6 = lVar14 >> 1;
      if (uVar7 <= uVar6) {
        uVar7 = uVar6;
      }
      if (uVar10 >> 1 <= uVar8) {
        uVar7 = uVar10;
      }
      if (uVar7 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
                           (*(long **)(param_1 + 0x28),uVar7 << 2,4);
        if (lVar14 == 0) {
          (**(code **)(**(long **)(param_1 + 0x28) + 0xe8))();
        }
      }
      piVar16 = (int *)(lVar14 + uVar8 * 4);
      uVar17 = *(undefined8 *)(param_1 + 0x28);
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        *piVar16 = iVar3;
      }
      else {
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00a43540;
        *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar17;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *piVar16 = iVar3;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      lVar11 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(param_1 + 0x18);
      piVar18 = piVar16;
      if (lVar12 != lVar11) {
        do {
          uVar17 = *(undefined8 *)(param_1 + 0x28);
          if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar5 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar5 == 0) {
            piVar18[-1] = *(int *)(lVar12 + -4);
          }
          else {
            if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00a43540;
            *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar17;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            piVar18[-1] = *(int *)(lVar12 + -4);
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          }
          lVar12 = lVar12 + -4;
          piVar18 = piVar18 + -1;
        } while (lVar11 != lVar12);
        lVar11 = *(long *)(param_1 + 0x10);
      }
      *(int **)(param_1 + 0x10) = piVar18;
      *(int **)(param_1 + 0x18) = piVar16 + 1;
      lVar12 = *(long *)(param_1 + 0x20);
      *(ulong *)(param_1 + 0x20) = lVar14 + uVar7 * 4;
      if (lVar11 != 0) {
        plVar20 = *(long **)(param_1 + 0x28);
        lVar12 = lVar12 - lVar11;
        uVar7 = (**(code **)(*plVar20 + 0xf8))(plVar20);
        if (((uVar7 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar11,lVar12,4);
        }
        else {
          FUN_00c48fe8(plVar20,lVar11,lVar12,4);
        }
      }
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 0x28);
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar14 == 0) {
        *piVar16 = iVar3;
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00a43540;
        *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar17;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        *piVar16 = iVar3;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      *(int **)(param_1 + 0x18) = piVar16 + 1;
    }
    if (uVar4 == 0) {
      uVar13 = 1;
    }
    iVar2 = *(int *)(*param_2 + uVar4 * 4);
    if (uVar4 != 0) {
      uVar7 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          *(int *)(*plVar15 + uVar10 * 4) = *(int *)(*plVar15 + uVar10 * 4) * iVar3;
          lVar14 = *plVar15 + uVar10 * 4;
          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) * iVar3;
          lVar14 = *plVar15 + uVar10 * 4;
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) * iVar3;
          lVar14 = *plVar15 + uVar10 * 4;
          uVar10 = uVar10 + 4;
          *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) * iVar3;
        } while ((uVar4 & 0xfffffffffffffffc) != uVar10);
      }
      if (uVar7 != 0) {
        lVar14 = uVar10 << 2;
        do {
          uVar7 = uVar7 - 1;
          *(int *)(*plVar15 + lVar14) = *(int *)(*plVar15 + lVar14) * iVar3;
          lVar14 = lVar14 + 4;
        } while (uVar7 != 0);
      }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x50);
    if (puVar1 < *(undefined4 **)(param_1 + 0x58)) {
      uVar17 = *(undefined8 *)(param_1 + 0x60);
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar14 == 0) {
        *puVar1 = 1;
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00a43540;
        *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar17;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        *puVar1 = 1;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      *(undefined4 **)(param_1 + 0x50) = puVar1 + 1;
    }
    else {
      uVar10 = *(ulong *)(param_1 + 0x68);
      lVar14 = (long)puVar1 - *(long *)(param_1 + 0x48) >> 2;
      uVar7 = lVar14 + 1;
      if (0x7ffffffffffffffe < uVar10) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar11 = (long)*(undefined4 **)(param_1 + 0x58) - *(long *)(param_1 + 0x48);
      uVar8 = lVar11 >> 1;
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar10 >> 1 <= (ulong)(lVar11 >> 2)) {
        uVar7 = uVar10;
      }
      if (uVar7 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                           (*(long **)(param_1 + 0x60),uVar7 << 2,4);
        if (lVar11 == 0) {
          (**(code **)(**(long **)(param_1 + 0x60) + 0xe8))();
        }
      }
      puVar1 = (undefined4 *)(lVar11 + lVar14 * 4);
      uVar17 = *(undefined8 *)(param_1 + 0x60);
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar14 == 0) {
        *puVar1 = 1;
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_00a43540:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar17;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        *puVar1 = 1;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      lVar14 = *(long *)(param_1 + 0x48);
      lVar12 = *(long *)(param_1 + 0x50);
      puVar19 = puVar1;
      if (lVar12 != lVar14) {
        do {
          uVar17 = *(undefined8 *)(param_1 + 0x60);
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar5 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar5 == 0) {
            puVar19[-1] = *(undefined4 *)(lVar12 + -4);
          }
          else {
            if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00a43540;
            *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar17;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            puVar19[-1] = *(undefined4 *)(lVar12 + -4);
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          }
          lVar12 = lVar12 + -4;
          puVar19 = puVar19 + -1;
        } while (lVar14 != lVar12);
        lVar14 = *plVar15;
      }
      *(undefined4 **)(param_1 + 0x48) = puVar19;
      *(undefined4 **)(param_1 + 0x50) = puVar1 + 1;
      lVar12 = *(long *)(param_1 + 0x58);
      *(ulong *)(param_1 + 0x58) = lVar11 + uVar7 * 4;
      if (lVar14 != 0) {
        plVar20 = *(long **)(param_1 + 0x60);
        lVar12 = lVar12 - lVar14;
        uVar7 = (**(code **)(*plVar20 + 0xf8))(plVar20);
        if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar14,lVar12,4);
        }
        else {
          FUN_00c48fe8(plVar20,lVar14,lVar12,4);
        }
      }
    }
    uVar13 = iVar2 * uVar13;
    uVar4 = uVar4 + 1;
    if (uVar4 == uVar9) {
      if ((int)uVar13 < 1) {
        return;
      }
      __dest = (void *)(**(code **)(*DAT_04836488 + 0x30))(DAT_04836488,(ulong)uVar13 << 2,0x40);
      *(void **)(param_1 + 0x80) = __dest;
      if (__dest == (void *)0x0) {
        *(undefined1 *)(param_1 + 8) = 0;
        return;
      }
      if (param_3 == (void *)0x0) {
        return;
      }
      memcpy(__dest,param_3,(ulong)uVar13 << 2);
      return;
    }
    lVar14 = *param_2;
    piVar16 = *(int **)(param_1 + 0x18);
  } while( true );
}


