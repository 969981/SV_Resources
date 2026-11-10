/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d10690; name: FUN_00d10690
 */


void FUN_00d10690(long param_1,int param_2,char *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *puVar20;
  long *plVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  long *plVar25;
  ulong uVar26;
  long *local_90;
  int local_78 [2];
  long *local_70;
  long *plStack_68;
  
  plVar21 = *(long **)(param_1 + 0x1c0);
  local_78[0] = param_2;
  if (plVar21 == (long *)0x0) {
    plVar9 = *(long **)(param_1 + 8);
    plVar21 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0xd8,8);
    if (plVar21 == (long *)0x0) {
      plVar9 = (long *)0x0;
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00d11024;
      *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar9;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      *plVar21 = 0;
      plVar21[1] = 0;
      plVar21[2] = 0;
      plVar21[3] = (long)plVar9;
      plVar21[7] = 0;
      plVar21[8] = 0;
      *(undefined4 *)(plVar21 + 6) = 0;
      plVar21[0xf] = 0;
      *(undefined4 *)(plVar21 + 0x10) = 0;
      plVar21[4] = 0x555555555555555;
      plVar21[5] = 0;
      plVar21[0xb] = 0;
      plVar21[0xc] = 0x400000010;
      plVar21[9] = 0;
      plVar21[10] = 0;
      plVar21[0xd] = -0x407fffff40800000;
      plVar21[0xe] = 0;
      memset(plVar21 + 0x11,0,0x49);
      uVar17 = 8;
      uVar16 = 0xd8;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    lVar15 = *(long *)(param_1 + 0x1c0);
    *(long **)(param_1 + 0x1c0) = plVar21;
    if (lVar15 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar13 = FUN_00c4e600();
      iVar4 = *(int *)(lVar13 + 0x12c8);
      iVar8 = iVar4 + 1;
      *(int *)(lVar13 + 0x12c8) = iVar8;
      if (*(int *)(lVar13 + 0x12cc) <= iVar4) {
        *(int *)(lVar13 + 0x12cc) = iVar8;
      }
      FUN_00ee9b24(lVar15);
      plVar21 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar24 = *(undefined8 *)(param_1 + 0x1d8);
      uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar18 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar15,uVar3,uVar24);
      }
      else {
        FUN_00c48fe8(plVar21,lVar15,uVar3,uVar24);
      }
      lVar15 = FUN_00c4e600();
      iVar8 = *(int *)(lVar15 + 0x12c8) + -1;
      *(int *)(lVar15 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar21 = (long *)FUN_00c4e600();
        if (plVar21[600] != 0) {
          local_70 = plVar21 + plVar21[600] * 3;
          plStack_68 = plVar21;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar25 = (long *)*plVar21;
          plVar2 = plVar21;
          if (plVar21[600] != 0) {
            plVar2 = plVar21 + plVar21[600] * 3;
          }
          if (plVar2 == plVar21) {
            uVar26 = 0;
            uVar18 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar21 + 0xd0))();
            if ((long *)*plVar21 != plVar25) {
              (**(code **)(*plVar25 + 0x100))(plVar25,plVar21,plVar21);
              plVar25 = (long *)*plVar21;
            }
            plVar1 = plVar21 + 3;
            if (plVar2 == plVar1) {
              uVar26 = 0;
              uVar18 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar7 = (long *)*plVar1 != plVar25;
              if (bVar7) {
                (**(code **)(*plVar25 + 0x100))(plVar25,plVar21,plVar21 + 3);
                plVar25 = (long *)plVar21[3];
              }
              uVar26 = (ulong)bVar7;
              plVar1 = plVar21 + 6;
              if (plVar2 == plVar1) {
                uVar18 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar25) {
                  (**(code **)(*plVar25 + 0x100))(plVar25,plVar21 + uVar26 * 3,plVar21 + 6);
                  plVar25 = (long *)plVar21[6];
                  uVar26 = 2;
                }
                plVar1 = plVar21 + 9;
                if (plVar2 == plVar1) {
                  uVar18 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar25) {
                    (**(code **)(*plVar25 + 0x100))(plVar25,plVar21 + uVar26 * 3,plVar21 + 9);
                    plVar25 = (long *)plVar21[9];
                    uVar26 = 3;
                  }
                  plVar1 = plVar21 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar18 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar25) {
                      (**(code **)(*plVar25 + 0x100))(plVar25,plVar21 + uVar26 * 3,plVar21 + 0xc);
                      plVar25 = (long *)plVar21[0xc];
                      uVar26 = 4;
                    }
                    plVar1 = plVar21 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar18 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar25) {
                        (**(code **)(*plVar25 + 0x100))(plVar25,plVar21 + uVar26 * 3,plVar21 + 0xf);
                        plVar25 = (long *)plVar21[0xf];
                        uVar26 = 5;
                      }
                      uVar18 = 6;
                      for (local_90 = plVar21 + 0x12; plVar2 != local_90; local_90 = local_90 + 3) {
                        (**(code **)(*(long *)*local_90 + 0xd0))();
                        if ((long *)*local_90 != plVar25) {
                          (**(code **)(*plVar25 + 0x100))(plVar25,plVar21 + uVar26 * 3,local_90);
                          plVar25 = (long *)*local_90;
                          uVar26 = uVar18;
                        }
                        uVar18 = uVar18 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar25 + 0x100))(plVar25,plVar21 + uVar26 * 3,plVar21 + uVar18 * 3);
          plVar21[600] = 0;
        }
        *(undefined4 *)(lVar15 + 0x12cc) = 0;
      }
      plVar21 = *(long **)(param_1 + 0x1c0);
    }
    bVar7 = false;
    *(long **)(param_1 + 0x1c8) = plVar9;
    *(undefined8 *)(param_1 + 0x1d0) = uVar16;
    *(undefined8 *)(param_1 + 0x1d8) = uVar17;
  }
  else {
    bVar7 = true;
  }
  piVar23 = (int *)*plVar21;
  piVar12 = (int *)plVar21[1];
  if (piVar23 != piVar12) {
    if (param_2 - 0x1fU < 2) {
      if (*piVar23 == param_2) {
LAB_00d106f0:
        cVar5 = (char)piVar23[2];
        cVar6 = *param_3;
        if ((cVar5 == '\0') || (cVar6 == '\0')) {
          if (cVar6 == '\0' && cVar5 == '\0') goto LAB_00d10710;
        }
        else if (*(long *)(piVar23 + 4) == *(long *)(param_3 + 8)) {
LAB_00d10710:
          if (bVar7) {
            return;
          }
          goto LAB_00d10d74;
        }
        if (cVar5 == '\0') {
          if (cVar6 != '\0') {
            *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(param_3 + 8);
            *(undefined8 *)(piVar23 + 6) = *(undefined8 *)(param_3 + 0x10);
            *(undefined8 *)(piVar23 + 8) = *(undefined8 *)(param_3 + 0x18);
            plVar21 = *(long **)(param_3 + 0x20);
            *(long **)(piVar23 + 10) = plVar21;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))();
            }
            *(undefined1 *)(piVar23 + 2) = 1;
          }
        }
        else if (cVar6 == '\0') {
          if (*(long **)(piVar23 + 10) != (long *)0x0) {
            (**(code **)(**(long **)(piVar23 + 10) + 0x20))();
          }
          *(undefined1 *)(piVar23 + 2) = 0;
        }
        else {
          *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(param_3 + 8);
          *(undefined8 *)(piVar23 + 6) = *(undefined8 *)(param_3 + 0x10);
          *(undefined8 *)(piVar23 + 8) = *(undefined8 *)(param_3 + 0x18);
          plVar21 = *(long **)(param_3 + 0x20);
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x18))(plVar21);
          }
          plVar9 = *(long **)(piVar23 + 10);
          *(long **)(piVar23 + 10) = plVar21;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
        }
        goto LAB_00d10d74;
      }
LAB_00d10be8:
      FUN_00d11680(plVar21);
      piVar23 = (int *)plVar21[1];
    }
    else {
      do {
        if (*piVar23 == param_2) goto LAB_00d106f0;
        if (*piVar23 - 0x1fU < 2) goto LAB_00d10be8;
        piVar23 = piVar23 + 0xc;
      } while (piVar12 != piVar23);
      piVar23 = piVar12;
    }
  }
  if (piVar23 < (int *)plVar21[2]) {
    FUN_00d1174c(plVar21,local_78,param_3);
    local_78[0] = param_2;
  }
  else {
    uVar18 = plVar21[4];
    lVar15 = (long)piVar23 - *plVar21 >> 4;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    uVar26 = lVar15 * -0x5555555555555555 + 1;
    if (uVar18 < uVar26) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = plVar21[2] - *plVar21 >> 4;
    uVar14 = lVar13 * 0x5555555555555556;
    if (uVar26 <= uVar14) {
      uVar26 = uVar14;
    }
    if (uVar18 >> 1 <= (ulong)(lVar13 * -0x5555555555555555)) {
      uVar26 = uVar18;
    }
    if (uVar26 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)plVar21[3] + 0x10))((long *)plVar21[3],uVar26 * 0x30,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)plVar21[3] + 0xe8))();
      }
    }
    lVar22 = plVar21[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00d11024:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar22;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    piVar23 = (int *)(lVar13 + lVar15 * 0x10);
    *piVar23 = param_2;
    puVar20 = (undefined1 *)(lVar13 + lVar15 * 0x10 + 8);
    *puVar20 = 0;
    if (*param_3 != '\0') {
      lVar15 = lVar13 + lVar15 * 0x10;
      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(param_3 + 0x18);
      plVar9 = *(long **)(param_3 + 0x20);
      *(long **)(lVar15 + 0x28) = plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))();
      }
      *puVar20 = 1;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    lVar15 = *plVar21;
    lVar22 = plVar21[1];
    if (lVar22 == lVar15) {
      piVar12 = piVar23;
      lVar22 = lVar15;
    }
    else {
      lVar10 = 0;
      do {
        lVar19 = plVar21[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00d11024;
          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar19;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        lVar19 = lVar22 + lVar10;
        *(undefined4 *)((long)piVar23 + lVar10 + -0x30) = *(undefined4 *)(lVar19 + -0x30);
        *(undefined1 *)((long)piVar23 + lVar10 + -0x28) = 0;
        if (*(char *)(lVar19 + -0x28) != '\0') {
          *(undefined8 *)((long)piVar23 + lVar10 + -0x20) = *(undefined8 *)(lVar19 + -0x20);
          *(undefined8 *)((long)piVar23 + lVar10 + -0x18) = *(undefined8 *)(lVar19 + -0x18);
          *(undefined8 *)((long)piVar23 + lVar10 + -0x10) = *(undefined8 *)(lVar19 + -0x10);
          uVar17 = *(undefined8 *)(lVar19 + -8);
          *(undefined8 *)(lVar19 + -8) = 0;
          *(undefined1 *)((long)piVar23 + lVar10 + -0x28) = 1;
          *(undefined8 *)((long)piVar23 + lVar10 + -8) = uVar17;
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        lVar10 = lVar10 + -0x30;
      } while (lVar15 - lVar22 != lVar10);
      lVar15 = *plVar21;
      lVar22 = plVar21[1];
      piVar12 = (int *)((long)piVar23 + lVar10);
    }
    lVar10 = plVar21[2];
    *plVar21 = (long)piVar12;
    plVar21[1] = (long)(piVar23 + 0xc);
    plVar21[2] = lVar13 + uVar26 * 0x30;
    if (lVar22 != lVar15) {
      if (*(char *)(lVar22 + -0x28) != '\0') {
        if (*(long **)(lVar22 + -8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar22 + -8) + 0x20))();
        }
        *(undefined1 *)(lVar22 + -0x28) = 0;
      }
      if (lVar22 + -0x30 != lVar15) {
        do {
          if (*(char *)(lVar22 + -0x58) != '\0') {
            if (*(long **)(lVar22 + -0x38) != (long *)0x0) {
              (**(code **)(**(long **)(lVar22 + -0x38) + 0x20))();
            }
            *(undefined1 *)(lVar22 + -0x58) = 0;
          }
          lVar22 = lVar22 + -0x30;
        } while (lVar15 + 0x30 != lVar22);
      }
    }
    if (lVar15 != 0) {
      plVar9 = (long *)plVar21[3];
      uVar18 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar18 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar15,lVar10 - lVar15,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar15,lVar10 - lVar15,8);
      }
    }
  }
  *(bool *)(plVar21 + 0x1a) = local_78[0] == 0x20;
LAB_00d10d74:
  lVar15 = *(long *)(param_1 + 0x208);
  lVar13 = *(long *)(param_1 + 0x210);
  if (((lVar15 != lVar13) && (*(undefined1 *)(lVar15 + 0x10) = 1, lVar15 + 0x18 != lVar13)) &&
     (*(undefined1 *)(lVar15 + 0x28) = 1, lVar15 + 0x30 != lVar13)) {
    *(undefined1 *)(lVar15 + 0x40) = 1;
    for (lVar15 = lVar15 + 0x48; lVar15 != lVar13; lVar15 = lVar15 + 0x18) {
      *(undefined1 *)(lVar15 + 0x10) = 1;
    }
  }
  return;
}


