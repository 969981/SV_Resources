/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d81b84; name: FUN_00d81b84
 */


void FUN_00d81b84(float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  
  local_c0 = *(undefined8 *)(param_5 + 8);
  lVar18 = *(long *)(param_5 + 0x48);
  if (lVar18 == 0) {
    FUN_00d8a020(&local_b8,local_c0,&local_c0);
    lVar18 = local_b8;
    local_b8 = 0;
    lVar10 = *(long *)(param_5 + 0x48);
    *(long *)(param_5 + 0x48) = lVar18;
    if (lVar10 == 0) {
      *(undefined8 *)(param_5 + 0x58) = uStack_a8;
      *(undefined8 *)(param_5 + 0x60) = local_a0;
    }
    else {
      FUN_00c4e5a0(auStack_98,0);
      FUN_00eeabac(lVar10);
      plVar16 = *(long **)(param_5 + 0x50);
      uVar17 = *(undefined8 *)(param_5 + 0x58);
      uVar11 = *(undefined8 *)(param_5 + 0x60);
      uVar14 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar14 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar10,uVar17,uVar11);
      }
      else {
        FUN_00c48fe8(plVar16,lVar10,uVar17,uVar11);
      }
      FUN_00c4e70c(auStack_98);
      *(undefined8 *)(param_5 + 0x58) = uStack_a8;
      *(undefined8 *)(param_5 + 0x60) = local_a0;
      lVar18 = *(long *)(param_5 + 0x48);
    }
    *(undefined8 *)(param_5 + 0x50) = local_b0;
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  piVar12 = *(int **)(lVar18 + 0x88);
  piVar15 = *(int **)(lVar18 + 0x90);
  if (piVar12 != piVar15) {
    piVar9 = piVar12;
    do {
      if (*piVar9 == param_6) {
        bVar2 = (float)piVar9[1] != param_1;
        if (bVar2) {
          piVar9[1] = (int)param_1;
        }
        bVar3 = (float)piVar9[2] != param_2;
        if (bVar3) {
          piVar9[2] = (int)param_2;
        }
        fVar19 = (float)piVar9[3];
        if (fVar19 != param_3) {
          piVar9[3] = (int)param_3;
        }
        if ((float)piVar9[4] == param_4) {
          if ((!bVar2 && ((!bVar3 && !bVar2) && (fVar19 == param_3 && (!bVar3 && !bVar2)))) &&
             (bVar7)) {
            return;
          }
        }
        else {
          piVar9[4] = (int)param_4;
        }
        goto LAB_00d81d24;
      }
      piVar9 = piVar9 + 5;
    } while (piVar15 != piVar9);
  }
  if (piVar15 < *(int **)(lVar18 + 0x98)) {
    uVar17 = *(undefined8 *)(lVar18 + 0xa0);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *piVar15 = param_6;
      piVar15[1] = (int)param_1;
      piVar15[2] = (int)param_2;
      piVar15[3] = (int)param_3;
      piVar15[4] = (int)param_4;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d8217c;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar17;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *piVar15 = param_6;
      piVar15[1] = (int)param_1;
      piVar15[2] = (int)param_2;
      piVar15[3] = (int)param_3;
      piVar15[4] = (int)param_4;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *(int **)(lVar18 + 0x90) = piVar15 + 5;
  }
  else {
    uVar14 = *(ulong *)(lVar18 + 0xa8);
    lVar10 = (long)piVar15 - (long)piVar12 >> 2;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar1 = lVar10 * -0x3333333333333333 + 1;
    if (uVar14 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(int **)(lVar18 + 0x98) - (long)piVar12 >> 2;
    uVar13 = lVar8 * -0x6666666666666666;
    if (uVar1 <= uVar13) {
      uVar1 = uVar13;
    }
    if (uVar14 >> 1 <= (ulong)(lVar8 * -0x3333333333333333)) {
      uVar1 = uVar14;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(lVar18 + 0xa0) + 0x10))
                        (*(long **)(lVar18 + 0xa0),uVar1 * 0x14,4);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(lVar18 + 0xa0) + 0xe8))();
      }
    }
    piVar12 = (int *)(lVar8 + lVar10 * 4);
    uVar17 = *(undefined8 *)(lVar18 + 0xa0);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      lVar10 = lVar8 + lVar10 * 4;
      *piVar12 = param_6;
      *(float *)(lVar10 + 4) = param_1;
      *(float *)(lVar10 + 8) = param_2;
      *(float *)(lVar10 + 0xc) = param_3;
      *(float *)(lVar10 + 0x10) = param_4;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00d8217c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar17;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar10 = lVar8 + lVar10 * 4;
      *piVar12 = param_6;
      *(float *)(lVar10 + 4) = param_1;
      *(float *)(lVar10 + 8) = param_2;
      *(float *)(lVar10 + 0xc) = param_3;
      *(float *)(lVar10 + 0x10) = param_4;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar10 = *(long *)(lVar18 + 0x88);
    lVar5 = *(long *)(lVar18 + 0x90);
    piVar15 = piVar12;
    if (lVar5 != lVar10) {
      do {
        uVar17 = *(undefined8 *)(lVar18 + 0xa0);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          uVar17 = *(undefined8 *)(lVar5 + -0x14);
          uVar11 = *(undefined8 *)(lVar5 + -0xc);
          piVar15[-1] = *(int *)(lVar5 + -4);
          *(undefined8 *)(piVar15 + -3) = uVar11;
          *(undefined8 *)(piVar15 + -5) = uVar17;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00d8217c;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar17;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar17 = *(undefined8 *)(lVar5 + -0x14);
          uVar11 = *(undefined8 *)(lVar5 + -0xc);
          piVar15[-1] = *(int *)(lVar5 + -4);
          *(undefined8 *)(piVar15 + -3) = uVar11;
          *(undefined8 *)(piVar15 + -5) = uVar17;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar5 = lVar5 + -0x14;
        piVar15 = piVar15 + -5;
      } while (lVar10 != lVar5);
      lVar10 = *(long *)(lVar18 + 0x88);
    }
    *(int **)(lVar18 + 0x88) = piVar15;
    *(int **)(lVar18 + 0x90) = piVar12 + 5;
    lVar5 = *(long *)(lVar18 + 0x98);
    *(ulong *)(lVar18 + 0x98) = lVar8 + uVar1 * 0x14;
    if (lVar10 != 0) {
      plVar16 = *(long **)(lVar18 + 0xa0);
      lVar5 = lVar5 - lVar10;
      uVar14 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar14 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar10,lVar5,4);
      }
      else {
        FUN_00c48fe8(plVar16,lVar10,lVar5,4);
      }
    }
  }
LAB_00d81d24:
  lVar18 = *(long *)(param_5 + 0x208);
  lVar10 = *(long *)(param_5 + 0x210);
  if (((lVar18 != lVar10) && (*(undefined1 *)(lVar18 + 0x10) = 1, lVar18 + 0x18 != lVar10)) &&
     (*(undefined1 *)(lVar18 + 0x28) = 1, lVar18 + 0x30 != lVar10)) {
    *(undefined1 *)(lVar18 + 0x40) = 1;
    for (lVar18 = lVar18 + 0x48; lVar18 != lVar10; lVar18 = lVar18 + 0x18) {
      *(undefined1 *)(lVar18 + 0x10) = 1;
    }
  }
  return;
}


