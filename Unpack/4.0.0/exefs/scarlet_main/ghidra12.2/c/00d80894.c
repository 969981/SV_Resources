/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d80894; name: FUN_00d80894
 */


void FUN_00d80894(float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

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
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_5 + 8);
  lVar14 = *(long *)(param_5 + 0x48);
  if (lVar14 == 0) {
    FUN_00d8a020(&local_98,local_a0,&local_a0);
    lVar14 = local_98;
    local_98 = 0;
    lVar10 = *(long *)(param_5 + 0x48);
    *(long *)(param_5 + 0x48) = lVar14;
    if (lVar10 == 0) {
      *(undefined8 *)(param_5 + 0x50) = local_90;
      *(undefined8 *)(param_5 + 0x58) = uStack_88;
      *(undefined8 *)(param_5 + 0x60) = local_80;
    }
    else {
      FUN_00c4e5a0(auStack_78,0);
      FUN_00eeabac(lVar10);
      plVar17 = *(long **)(param_5 + 0x50);
      uVar18 = *(undefined8 *)(param_5 + 0x58);
      uVar11 = *(undefined8 *)(param_5 + 0x60);
      uVar15 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar15 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,uVar18,uVar11);
      }
      else {
        FUN_00c48fe8(plVar17,lVar10,uVar18,uVar11);
      }
      FUN_00c4e70c(auStack_78);
      *(undefined8 *)(param_5 + 0x58) = uStack_88;
      *(undefined8 *)(param_5 + 0x60) = local_80;
      lVar14 = *(long *)(param_5 + 0x48);
      *(undefined8 *)(param_5 + 0x50) = local_90;
    }
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  piVar12 = *(int **)(lVar14 + 0x50);
  piVar16 = *(int **)(lVar14 + 0x58);
  if (piVar12 != piVar16) {
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
        goto LAB_00d80b1c;
      }
      piVar9 = piVar9 + 5;
    } while (piVar16 != piVar9);
  }
  if (piVar16 < *(int **)(lVar14 + 0x60)) {
    uVar18 = *(undefined8 *)(lVar14 + 0x68);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *piVar16 = param_6;
      piVar16[1] = (int)param_1;
      piVar16[2] = (int)param_2;
      piVar16[3] = (int)param_3;
      piVar16[4] = (int)param_4;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d80ef4;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar18;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      piVar16[1] = (int)param_1;
      piVar16[2] = (int)param_2;
      *piVar16 = param_6;
      piVar16[3] = (int)param_3;
      piVar16[4] = (int)param_4;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *(int **)(lVar14 + 0x58) = piVar16 + 5;
  }
  else {
    uVar15 = *(ulong *)(lVar14 + 0x70);
    lVar10 = (long)piVar16 - (long)piVar12 >> 2;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    uVar1 = lVar10 * -0x3333333333333333 + 1;
    if (uVar15 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(int **)(lVar14 + 0x60) - (long)piVar12 >> 2;
    uVar13 = lVar8 * -0x6666666666666666;
    if (uVar1 <= uVar13) {
      uVar1 = uVar13;
    }
    if (uVar15 >> 1 <= (ulong)(lVar8 * -0x3333333333333333)) {
      uVar1 = uVar15;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(lVar14 + 0x68) + 0x10))
                        (*(long **)(lVar14 + 0x68),uVar1 * 0x14,4);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(lVar14 + 0x68) + 0xe8))();
      }
    }
    piVar12 = (int *)(lVar8 + lVar10 * 4);
    uVar18 = *(undefined8 *)(lVar14 + 0x68);
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
LAB_00d80ef4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar18;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar10 = lVar8 + lVar10 * 4;
      *piVar12 = param_6;
      *(float *)(lVar10 + 4) = param_1;
      *(float *)(lVar10 + 8) = param_2;
      *(float *)(lVar10 + 0xc) = param_3;
      *(float *)(lVar10 + 0x10) = param_4;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar10 = *(long *)(lVar14 + 0x50);
    lVar5 = *(long *)(lVar14 + 0x58);
    piVar16 = piVar12;
    if (lVar5 != lVar10) {
      do {
        uVar18 = *(undefined8 *)(lVar14 + 0x68);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          uVar18 = *(undefined8 *)(lVar5 + -0x14);
          uVar11 = *(undefined8 *)(lVar5 + -0xc);
          piVar16[-1] = *(int *)(lVar5 + -4);
          *(undefined8 *)(piVar16 + -3) = uVar11;
          *(undefined8 *)(piVar16 + -5) = uVar18;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00d80ef4;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar18 = *(undefined8 *)(lVar5 + -0x14);
          uVar11 = *(undefined8 *)(lVar5 + -0xc);
          piVar16[-1] = *(int *)(lVar5 + -4);
          *(undefined8 *)(piVar16 + -3) = uVar11;
          *(undefined8 *)(piVar16 + -5) = uVar18;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar5 = lVar5 + -0x14;
        piVar16 = piVar16 + -5;
      } while (lVar10 != lVar5);
      lVar10 = *(long *)(lVar14 + 0x50);
    }
    *(int **)(lVar14 + 0x50) = piVar16;
    *(int **)(lVar14 + 0x58) = piVar12 + 5;
    lVar5 = *(long *)(lVar14 + 0x60);
    *(ulong *)(lVar14 + 0x60) = lVar8 + uVar1 * 0x14;
    if (lVar10 != 0) {
      plVar17 = *(long **)(lVar14 + 0x68);
      lVar5 = lVar5 - lVar10;
      uVar15 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar15 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,lVar5,4);
      }
      else {
        FUN_00c48fe8(plVar17,lVar10,lVar5,4);
      }
    }
  }
LAB_00d80b1c:
  lVar14 = *(long *)(param_5 + 0x208);
  lVar10 = *(long *)(param_5 + 0x210);
  if (((lVar14 != lVar10) && (*(undefined1 *)(lVar14 + 0x10) = 1, lVar14 + 0x18 != lVar10)) &&
     (*(undefined1 *)(lVar14 + 0x28) = 1, lVar14 + 0x30 != lVar10)) {
    *(undefined1 *)(lVar14 + 0x40) = 1;
    for (lVar14 = lVar14 + 0x48; lVar14 != lVar10; lVar14 = lVar14 + 0x18) {
      *(undefined1 *)(lVar14 + 0x10) = 1;
    }
  }
  return;
}


