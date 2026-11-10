/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f243c; name: FUN_011f243c
 */


long * FUN_011f243c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  
  plVar12 = *(long **)(param_1 + 0x48);
  plVar16 = *(long **)(param_1 + 0x50);
  if ((plVar12 == plVar16) || (*plVar12 == param_2)) {
    plVar10 = plVar12;
  }
  else {
    plVar14 = plVar12;
    do {
      if (plVar16 + -9 == plVar14) {
        plVar10 = plVar16;
        break;
      }
      plVar1 = plVar14 + 9;
      plVar10 = plVar14 + 9;
      plVar14 = plVar14 + 9;
    } while (*plVar1 != param_2);
  }
  if (plVar16 == plVar10) {
    lVar18 = *(long *)(param_1 + 8);
    if (plVar16 < *(long **)(param_1 + 0x58)) {
      uVar17 = *(undefined8 *)(param_1 + 0x60);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_011f28e0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      *(undefined4 *)(plVar16 + 8) = 0;
      *plVar16 = param_2;
      plVar16[1] = 0;
      plVar16[2] = 0;
      plVar16[3] = 0;
      plVar16[4] = 0;
      plVar16[5] = lVar18;
      plVar16[6] = 0x1c71c71c71c71c7;
      plVar16[7] = 0;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      plVar16 = plVar16 + 9;
      *(long **)(param_1 + 0x50) = plVar16;
    }
    else {
      lVar7 = (long)plVar16 - (long)plVar12 >> 3;
      uVar15 = *(ulong *)(param_1 + 0x68);
      if (0x7ffffffffffffffe < uVar15) {
        uVar15 = 0x7fffffffffffffff;
      }
      uVar2 = lVar7 * -0x71c71c71c71c71c7 + 1;
      if (uVar15 < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar11 = (long)*(long **)(param_1 + 0x58) - (long)plVar12 >> 3;
      uVar13 = lVar11 * 0x1c71c71c71c71c72;
      if (uVar2 <= uVar13) {
        uVar2 = uVar13;
      }
      if (uVar15 >> 1 <= (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
        uVar2 = uVar15;
      }
      if (uVar2 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                           (*(long **)(param_1 + 0x60),uVar2 * 0x48,8);
        if (lVar11 == 0) {
          (**(code **)(**(long **)(param_1 + 0x60) + 0xe8))();
        }
      }
      uVar17 = *(undefined8 *)(param_1 + 0x60);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 != 0) {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011f28e0;
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      }
      plVar16 = (long *)(lVar11 + lVar7 * 8);
      lVar7 = lVar11 + lVar7 * 8;
      *plVar16 = param_2;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined4 *)(lVar7 + 0x40) = 0;
      *(long *)(lVar7 + 0x28) = lVar18;
      *(undefined8 *)(lVar7 + 0x30) = 0x1c71c71c71c71c7;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      lVar18 = *(long *)(param_1 + 0x48);
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 == lVar18) {
        plVar12 = plVar16;
        lVar7 = lVar18;
      }
      else {
        lVar8 = 0;
        do {
          uVar17 = *(undefined8 *)(param_1 + 0x60);
          if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar9 != 0) {
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_011f28e0;
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          }
          lVar3 = lVar7 + lVar8;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x48) = *(undefined8 *)(lVar3 + -0x48);
          uVar17 = *(undefined8 *)(lVar3 + -0x40);
          *(undefined8 *)(lVar3 + -0x40) = 0;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x30) = 0;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x28) = 0;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x40) = uVar17;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x38) = 0;
          uVar17 = *(undefined8 *)(lVar3 + -0x20);
          uVar4 = *(undefined8 *)(lVar3 + -0x18);
          uVar5 = *(undefined8 *)(lVar3 + -8);
          *(undefined8 *)((long)plVar16 + lVar8 + -0x10) = *(undefined8 *)(lVar3 + -0x10);
          *(undefined8 *)((long)plVar16 + lVar8 + -8) = uVar5;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x20) = uVar17;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x18) = uVar4;
          *(undefined8 *)((long)plVar16 + lVar8 + -0x38) = *(undefined8 *)(lVar3 + -0x38);
          *(undefined8 *)((long)plVar16 + lVar8 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
          *(undefined8 *)((long)plVar16 + lVar8 + -0x28) = *(undefined8 *)(lVar3 + -0x28);
          *(undefined8 *)(lVar3 + -0x38) = 0;
          *(undefined8 *)(lVar3 + -0x30) = 0;
          *(undefined8 *)(lVar3 + -0x28) = 0;
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
          lVar8 = lVar8 + -0x48;
        } while (lVar18 - lVar7 != lVar8);
        lVar18 = *(long *)(param_1 + 0x48);
        plVar12 = (long *)((long)plVar16 + lVar8);
        lVar7 = *(long *)(param_1 + 0x50);
      }
      lVar8 = *(long *)(param_1 + 0x58);
      *(long **)(param_1 + 0x48) = plVar12;
      *(long **)(param_1 + 0x50) = plVar16 + 9;
      *(ulong *)(param_1 + 0x58) = lVar11 + uVar2 * 0x48;
      while (lVar7 != lVar18) {
        lVar7 = lVar7 + -0x48;
        FUN_011f28e8(lVar7);
      }
      if (lVar18 != 0) {
        plVar16 = *(long **)(param_1 + 0x60);
        lVar8 = lVar8 - lVar18;
        uVar15 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar15 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar18,lVar8,8);
        }
        else {
          FUN_00c48fe8(plVar16,lVar18,lVar8,8);
        }
      }
      plVar16 = *(long **)(param_1 + 0x50);
    }
    plVar10 = plVar16 + -9;
  }
  return plVar10;
}


