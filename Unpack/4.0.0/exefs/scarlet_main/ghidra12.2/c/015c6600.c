/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c6600; name: FUN_015c6600
 */


void FUN_015c6600(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  plVar13 = *(long **)(param_1 + 0xf0);
  lVar6 = *plVar13;
  lVar3 = plVar13[1];
  lVar7 = lVar3;
  if (lVar3 - lVar6 != 0) {
    uVar9 = (lVar3 - lVar6 >> 5) * -0x5555555555555555;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    plVar12 = (long *)(lVar6 + 0x20);
    do {
      if ((*param_2 == plVar12[-4]) && (param_2[4] == *plVar12)) {
        plVar12[-4] = *param_2;
        plVar12[-3] = param_2[1];
        plVar12[-2] = param_2[2];
        plVar13 = (long *)param_2[3];
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        plVar5 = (long *)plVar12[-1];
        plVar12[-1] = (long)plVar13;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        *plVar12 = param_2[4];
        plVar12[1] = param_2[5];
        plVar12[2] = param_2[6];
        plVar13 = (long *)param_2[7];
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        plVar5 = (long *)plVar12[3];
        plVar12[3] = (long)plVar13;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        uVar10 = *(undefined8 *)((long)param_2 + 0x4d);
        plVar12[5] = param_2[9];
        lVar6 = param_2[8];
        *(undefined8 *)((long)plVar12 + 0x2d) = uVar10;
        plVar12[4] = lVar6;
        return;
      }
      plVar12 = plVar12 + 0xc;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    lVar7 = lVar6;
  }
  plVar12 = plVar13 + 3;
  if (plVar13[2] == lVar3) {
    lVar6 = lVar3 - lVar7 >> 5;
    uVar8 = plVar13[4];
    uVar9 = lVar6 * -0x5555555555555555 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar9 <= (ulong)(lVar6 * 0x5555555555555556)) {
      uVar9 = lVar6 * 0x5555555555555556;
    }
    if (uVar8 >> 1 <= (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = uVar8;
    }
    if (uVar9 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar9 * 0x60,0x10);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar12 + 0xe8))();
      }
    }
    lVar15 = lVar3 + lVar6 * 0x20;
    FUN_015c6b18(plVar12,lVar15,param_2);
    lVar6 = *plVar13;
    lVar7 = plVar13[1];
    if (lVar7 == lVar6) {
      lVar7 = lVar15;
      lVar16 = lVar6;
    }
    else {
      lVar16 = 0;
      do {
        lVar14 = *plVar12;
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 != 0) {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        }
        lVar14 = lVar7 + lVar16;
        lVar1 = lVar15 + lVar16;
        *(undefined8 *)(lVar1 + -0x60) = *(undefined8 *)(lVar14 + -0x60);
        *(undefined8 *)(lVar1 + -0x58) = *(undefined8 *)(lVar14 + -0x58);
        *(undefined8 *)(lVar1 + -0x50) = *(undefined8 *)(lVar14 + -0x50);
        uVar10 = *(undefined8 *)(lVar14 + -0x48);
        *(undefined8 *)(lVar14 + -0x48) = 0;
        *(undefined8 *)(lVar1 + -0x48) = uVar10;
        *(undefined8 *)(lVar1 + -0x40) = *(undefined8 *)(lVar14 + -0x40);
        *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(lVar14 + -0x38);
        *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(lVar14 + -0x30);
        uVar10 = *(undefined8 *)(lVar14 + -0x28);
        *(undefined8 *)(lVar14 + -0x28) = 0;
        *(undefined8 *)(lVar1 + -0x28) = uVar10;
        uVar11 = *(undefined8 *)(lVar14 + -0x13);
        *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
        uVar10 = *(undefined8 *)(lVar14 + -0x20);
        *(undefined8 *)(lVar1 + -0x13) = uVar11;
        *(undefined8 *)(lVar1 + -0x20) = uVar10;
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar16 = lVar16 + -0x60;
      } while (lVar6 - lVar7 != lVar16);
      lVar6 = *plVar13;
      lVar7 = lVar15 + lVar16;
      lVar16 = plVar13[1];
    }
    lVar14 = plVar13[2];
    *plVar13 = lVar7;
    plVar13[1] = lVar15 + 0x60;
    plVar13[2] = lVar3 + uVar9 * 0x60;
    if (lVar16 != lVar6) {
      if (*(long **)(lVar16 + -0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar16 + -0x28) + 0x20))();
      }
      if (*(long **)(lVar16 + -0x48) != (long *)0x0) {
        (**(code **)(**(long **)(lVar16 + -0x48) + 0x20))();
      }
      if (lVar16 + -0x60 != lVar6) {
        if (*(long **)(lVar16 + -0x88) != (long *)0x0) {
          (**(code **)(**(long **)(lVar16 + -0x88) + 0x20))();
        }
        if (*(long **)(lVar16 + -0xa8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar16 + -0xa8) + 0x20))();
        }
        if (lVar16 + -0xc0 != lVar6) {
          if (*(long **)(lVar16 + -0xe8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + -0xe8) + 0x20))();
          }
          if (*(long **)(lVar16 + -0x108) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + -0x108) + 0x20))();
          }
          if (lVar16 + -0x120 != lVar6) {
            do {
              if (*(long **)(lVar16 + -0x148) != (long *)0x0) {
                (**(code **)(**(long **)(lVar16 + -0x148) + 0x20))();
              }
              if (*(long **)(lVar16 + -0x168) != (long *)0x0) {
                (**(code **)(**(long **)(lVar16 + -0x168) + 0x20))();
              }
              lVar16 = lVar16 + -0x60;
            } while (lVar6 + 0x120 != lVar16);
          }
        }
      }
    }
    if (lVar6 != 0) {
      plVar12 = (long *)*plVar12;
      uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar9 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x015c688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar6,lVar14 - lVar6,0x10);
        return;
      }
      FUN_00c48fe8(plVar12,lVar6,lVar14 - lVar6,0x10);
      return;
    }
  }
  else {
    FUN_015c6b18(plVar12,lVar3,param_2);
    plVar13[1] = lVar3 + 0x60;
  }
  return;
}


