/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012f8b44; name: FUN_012f8b44
 */


void FUN_012f8b44(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  long *local_90;
  undefined1 auStack_88 [24];
  long *local_70;
  undefined8 local_68;
  
  *param_1 = param_2;
  plVar9 = (long *)FUN_012f9d00(param_2);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x58))(plVar9);
  }
  plVar10 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))();
  }
  plVar10 = (long *)param_1[3];
  plVar20 = (long *)param_1[4];
  param_1[1] = plVar9;
  *(undefined4 *)(param_1 + 2) = param_3;
  if (plVar20 != plVar10) {
    plVar9 = (long *)plVar20[-2];
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x60))();
    }
    if (plVar20 + -2 != plVar10) {
      plVar9 = (long *)plVar20[-4];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x60))();
      }
      if (plVar20 + -4 != plVar10) {
        do {
          if ((long *)plVar20[-6] != (long *)0x0) {
            (**(code **)(*(long *)plVar20[-6] + 0x60))();
          }
          plVar20 = plVar20 + -2;
        } while (plVar10 + 4 != plVar20);
      }
    }
  }
  lVar21 = param_1[10];
  param_1[4] = plVar10;
  lVar19 = param_1[0xb];
  if (((lVar19 != lVar21) && (FUN_011efa60(lVar19 + -0x48), lVar19 + -0x48 != lVar21)) &&
     (FUN_011efa60(lVar19 + -0x90), lVar19 + -0x90 != lVar21)) {
    do {
      FUN_011efa60(lVar19 + -0xd8);
      lVar19 = lVar19 + -0x48;
    } while (lVar21 + 0x90 != lVar19);
  }
  param_1[0xb] = lVar21;
  uVar13 = 0;
  if (*(int *)(param_1 + 2) != 0) {
    puVar1 = PTR_DAT_047ddd98 + 0x10;
    uVar23 = 0;
    puVar2 = PTR_DAT_047ddda0 + 0x10;
    do {
      puVar12 = (undefined8 *)param_1[4];
      if (puVar12 < (undefined8 *)param_1[5]) {
        uVar22 = param_1[6];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar19 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar19 == 0) {
          *puVar12 = 0;
          puVar12[1] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_012f9b80;
          *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar22;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          *puVar12 = 0;
          puVar12[1] = 0;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        }
        param_1[4] = puVar12 + 2;
      }
      else {
        uVar17 = param_1[7];
        lVar19 = (long)puVar12 - param_1[3] >> 4;
        uVar18 = lVar19 + 1;
        if (0x7ffffffffffffffe < uVar17) {
          uVar17 = 0x7fffffffffffffff;
        }
        if (uVar17 < uVar18) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar21 = (long)param_1[5] - param_1[3];
        uVar16 = lVar21 >> 3;
        if (uVar18 <= uVar16) {
          uVar18 = uVar16;
        }
        if (uVar17 >> 1 <= (ulong)(lVar21 >> 4)) {
          uVar18 = uVar17;
        }
        if (uVar18 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],uVar18 << 4,8);
          if (lVar21 == 0) {
            (**(code **)(*(long *)param_1[6] + 0xe8))();
          }
        }
        puVar12 = (undefined8 *)(lVar21 + lVar19 * 0x10);
        uVar22 = param_1[6];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar19 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar19 == 0) {
          *puVar12 = 0;
          puVar12[1] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_012f9b80;
          *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar22;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          *puVar12 = 0;
          puVar12[1] = 0;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        }
        plVar9 = (long *)param_1[3];
        plVar10 = (long *)param_1[4];
        if (plVar10 == plVar9) {
          puVar14 = puVar12;
          plVar10 = plVar9;
        }
        else {
          puVar25 = puVar12;
          do {
            uVar22 = param_1[6];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar19 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar19 != 0) {
              if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_012f9b80;
              *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar22;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
            }
            lVar24 = plVar10[-2];
            plVar10[-2] = 0;
            puVar25[-2] = lVar24;
            plVar20 = plVar10 + -1;
            puVar14 = puVar25 + -2;
            plVar10 = plVar10 + -2;
            puVar25[-1] = *plVar20;
            if (lVar19 != 0) {
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            }
            puVar25 = puVar14;
          } while (plVar9 != plVar10);
          plVar9 = (long *)param_1[4];
          plVar10 = (long *)param_1[3];
        }
        lVar19 = param_1[5];
        param_1[3] = puVar14;
        param_1[4] = puVar12 + 2;
        param_1[5] = lVar21 + uVar18 * 0x10;
        if (plVar9 != plVar10) {
          plVar20 = (long *)plVar9[-2];
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x60))();
          }
          if (plVar9 + -2 != plVar10) {
            plVar20 = (long *)plVar9[-4];
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0x60))();
            }
            if (plVar9 + -4 != plVar10) {
              plVar20 = (long *)plVar9[-6];
              if (plVar20 != (long *)0x0) {
                (**(code **)(*plVar20 + 0x60))();
              }
              if (plVar9 + -6 != plVar10) {
                do {
                  if ((long *)plVar9[-8] != (long *)0x0) {
                    (**(code **)(*(long *)plVar9[-8] + 0x60))();
                  }
                  plVar9 = plVar9 + -2;
                } while (plVar10 + 6 != plVar9);
              }
            }
          }
        }
        if (plVar10 != (long *)0x0) {
          plVar9 = (long *)param_1[6];
          uVar18 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar18 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,lVar19 - (long)plVar10,8);
          }
          else {
            FUN_00c48fe8(plVar9,plVar10,lVar19 - (long)plVar10,8);
          }
        }
      }
      lVar19 = param_1[4];
      plVar9 = (long *)FUN_011e4110(param_1[1],*(undefined8 *)(param_1[1] + 8));
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x58))(plVar9);
      }
      plVar10 = *(long **)(lVar19 + -0x10);
      *(long **)(lVar19 + -0x10) = plVar9;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x60))();
        plVar9 = *(long **)(lVar19 + -0x10);
      }
      FUN_011e465c(plVar9,uVar23);
      FUN_011e48c4(*(undefined8 *)(lVar19 + -0x10),1);
      plVar9 = (long *)param_1[0xb];
      if (plVar9 < (long *)param_1[0xc]) {
        uVar22 = param_1[0xd];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar19 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar19 == 0) {
          plVar9[7] = 0;
          plVar9[8] = 0;
          *(undefined1 *)(plVar9 + 8) = 0;
          plVar9[5] = 0;
          plVar9[6] = 0;
          plVar9[3] = 0;
          plVar9[4] = 0;
          plVar9[1] = 0;
          plVar9[2] = 0;
          *plVar9 = (long)puVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_012f9b80:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar22;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          plVar9[2] = 0;
          plVar9[7] = 0;
          plVar9[8] = 0;
          plVar9[5] = 0;
          plVar9[6] = 0;
          plVar9[3] = 0;
          plVar9[4] = 0;
          *plVar9 = (long)(PTR_DAT_047ddd98 + 0x10);
          plVar9[1] = 0;
          *(undefined1 *)(plVar9 + 8) = 0;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        }
        param_1[0xb] = plVar9 + 9;
      }
      else {
        uVar18 = param_1[0xe];
        lVar19 = (long)plVar9 - param_1[10] >> 3;
        if (0x7ffffffffffffffe < uVar18) {
          uVar18 = 0x7fffffffffffffff;
        }
        uVar17 = lVar19 * -0x71c71c71c71c71c7 + 1;
        if (uVar18 < uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar21 = (long)param_1[0xc] - param_1[10] >> 3;
        uVar16 = lVar21 * 0x1c71c71c71c71c72;
        if (uVar17 <= uVar16) {
          uVar17 = uVar16;
        }
        if (uVar18 >> 1 <= (ulong)(lVar21 * -0x71c71c71c71c71c7)) {
          uVar17 = uVar18;
        }
        if (uVar17 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = (**(code **)(*(long *)param_1[0xd] + 0x10))((long *)param_1[0xd],uVar17 * 0x48,8)
          ;
          if (lVar21 == 0) {
            (**(code **)(*(long *)param_1[0xd] + 0xe8))();
          }
        }
        plVar9 = (long *)(lVar21 + lVar19 * 8);
        uVar22 = param_1[0xd];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar24 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar24 == 0) {
          lVar19 = lVar21 + lVar19 * 8;
          *(undefined8 *)(lVar19 + 0x38) = 0;
          *(undefined8 *)(lVar19 + 0x40) = 0;
          *(undefined8 *)(lVar19 + 0x28) = 0;
          *(undefined8 *)(lVar19 + 0x30) = 0;
          *(undefined8 *)(lVar19 + 0x18) = 0;
          *(undefined8 *)(lVar19 + 0x20) = 0;
          *(undefined8 *)(lVar19 + 8) = 0;
          *(undefined8 *)(lVar19 + 0x10) = 0;
          *plVar9 = (long)(PTR_DAT_047ddd98 + 0x10);
          *(undefined1 *)(lVar19 + 0x40) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_012f9b80;
          *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar22;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
          lVar19 = lVar21 + lVar19 * 8;
          *(undefined8 *)(lVar19 + 0x38) = 0;
          *(undefined8 *)(lVar19 + 0x40) = 0;
          *(undefined8 *)(lVar19 + 0x28) = 0;
          *(undefined8 *)(lVar19 + 0x30) = 0;
          *(undefined8 *)(lVar19 + 0x18) = 0;
          *(undefined8 *)(lVar19 + 0x20) = 0;
          *(undefined8 *)(lVar19 + 8) = 0;
          *(undefined8 *)(lVar19 + 0x10) = 0;
          *plVar9 = (long)(PTR_DAT_047ddd98 + 0x10);
          *(undefined1 *)(lVar19 + 0x40) = 0;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
        }
        lVar19 = param_1[10];
        lVar24 = param_1[0xb];
        plVar10 = plVar9;
        if (lVar24 == lVar19) {
          lVar24 = lVar19;
        }
        else {
          do {
            uVar22 = param_1[0xd];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar11 == 0) {
              plVar10[-8] = 0;
              plVar10[-7] = 0;
              plVar10[-6] = 0;
              plVar10[-5] = 0;
              plVar10[-4] = 0;
              plVar10[-9] = (long)puVar2;
              plVar10[-3] = 0;
              plVar10[-2] = 0;
              FUN_011f0820(plVar10 + -8,lVar24 + -0x40);
              plVar20 = (long *)plVar10[-6];
              plVar10[-6] = 0;
              if (plVar20 != (long *)0x0) {
                lVar11 = plVar20[6];
                psVar3 = (short *)(lVar11 + 0x1a);
                do {
                  sVar4 = *psVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                  if (bVar6) {
                    *psVar3 = sVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar4 == 1) {
                  *(undefined8 *)(lVar11 + 0x10) = 0;
                  (**(code **)(*plVar20 + 0x50))();
                }
                else if (sVar4 == 0) goto LAB_012f9514;
              }
              lVar11 = *(long *)(lVar24 + -0x30);
              *(undefined8 *)(lVar24 + -0x30) = 0;
              plVar10[-6] = lVar11;
              FUN_00ecc978(plVar10 + -5,lVar24 + -0x28);
              FUN_00eccc4c(plVar10 + -3,lVar24 + -0x18);
              plVar10[-9] = (long)(PTR_DAT_047ddd98 + 0x10);
              *(undefined1 *)(plVar10 + -1) = *(undefined1 *)(lVar24 + -8);
            }
            else {
              if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012f9b80;
              *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar22;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
              plVar10[-8] = 0;
              plVar10[-9] = (long)(PTR_DAT_047ddda0 + 0x10);
              plVar10[-7] = 0;
              plVar10[-6] = 0;
              plVar10[-5] = 0;
              plVar10[-4] = 0;
              plVar10[-3] = 0;
              plVar10[-2] = 0;
              FUN_011f0820(plVar10 + -8,lVar24 + -0x40);
              plVar20 = (long *)plVar10[-6];
              plVar10[-6] = 0;
              if (plVar20 != (long *)0x0) {
                lVar15 = plVar20[6];
                psVar3 = (short *)(lVar15 + 0x1a);
                do {
                  sVar4 = *psVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                  if (bVar6) {
                    *psVar3 = sVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar4 == 1) {
                  *(undefined8 *)(lVar15 + 0x10) = 0;
                  (**(code **)(*plVar20 + 0x50))();
                }
                else if (sVar4 == 0) goto LAB_012f9514;
              }
              lVar15 = *(long *)(lVar24 + -0x30);
              *(undefined8 *)(lVar24 + -0x30) = 0;
              plVar10[-6] = lVar15;
              FUN_00ecc978(plVar10 + -5,lVar24 + -0x28);
              FUN_00eccc4c(plVar10 + -3,lVar24 + -0x18);
              plVar10[-9] = (long)(PTR_DAT_047ddd98 + 0x10);
              *(undefined1 *)(plVar10 + -1) = *(undefined1 *)(lVar24 + -8);
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            lVar24 = lVar24 + -0x48;
            plVar10 = plVar10 + -9;
          } while (lVar24 != lVar19);
          lVar19 = param_1[0xb];
          lVar24 = param_1[10];
        }
        lVar11 = param_1[0xc];
        param_1[0xc] = lVar21 + uVar17 * 0x48;
        param_1[10] = plVar10;
        param_1[0xb] = plVar9 + 9;
        if ((((lVar19 != lVar24) && (FUN_011efa60(lVar19 + -0x48), lVar19 + -0x48 != lVar24)) &&
            (FUN_011efa60(lVar19 + -0x90), lVar19 + -0x90 != lVar24)) &&
           (FUN_011efa60(lVar19 + -0xd8), lVar19 + -0xd8 != lVar24)) {
          do {
            FUN_011efa60(lVar19 + -0x120);
            lVar19 = lVar19 + -0x48;
          } while (lVar24 + 0xd8 != lVar19);
        }
        if (lVar24 != 0) {
          plVar9 = (long *)param_1[0xd];
          uVar18 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar18 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,lVar24,lVar11 - lVar24,8);
          }
          else {
            FUN_00c48fe8(plVar9,lVar24,lVar11 - lVar24,8);
          }
        }
      }
      uVar13 = *(uint *)(param_1 + 2);
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar13);
  }
  FUN_012fa090(*(undefined8 *)(param_1[3] + (ulong)(uVar13 - 1) * 0x10),1);
  plVar9 = *(long **)(param_1[1] + 0x460);
  if (plVar9 != (long *)0x0) {
    lVar19 = plVar9[6];
    if (*(long *)(lVar19 + 0x10) == 0) {
LAB_012f9c6c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar3 = (short *)(lVar19 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar22;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_012f9c8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  puVar1 = PTR_DAT_047d89c8;
  if (((*PTR_DAT_047d89c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  puVar7 = PTR_DAT_047d89d8;
  puVar2 = PTR_DAT_047d89d0;
  lVar19 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar19;
  lVar21 = *(long *)(lVar19 + 0x38);
  plVar10 = (long *)(lVar21 + 0x1d0);
  lVar19 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_012f92cc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x1d8));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_012f92cc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_012f92cc:
  FUN_00e220f4(lVar21,0,plVar9[8]);
  lVar24 = plVar9[9];
  plVar10 = (long *)(lVar24 + 0x1d0);
  lVar19 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_012f92fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x1d8));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_012f92fc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_012f92fc:
  *(undefined8 *)(lVar21 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x1d8));
  if (((*puVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar19 = *(long *)puVar2;
  *(long *)puVar7 = lVar19;
  FUN_00e220f4(lVar24,0,*(undefined8 *)(lVar19 + 0x40));
  *(undefined8 *)(lVar24 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x1d8));
  if (plVar9 != (long *)0x0) {
    lVar19 = plVar9[6];
    psVar3 = (short *)(lVar19 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar4 == 0) goto LAB_012f9514;
  }
  if ((param_1[0x1b] == 0) || (param_1[0x1c] == 0)) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
    puVar12 = (undefined8 *)FUN_012f9cf0();
    puVar12 = (undefined8 *)FUN_012f9cf8(*puVar12);
    plVar9 = (long *)*puVar12;
    if (plVar9 != (long *)0x0) {
      lVar19 = plVar9[6];
      if (*(long *)(lVar19 + 0x10) == 0) goto LAB_012f9c6c;
      psVar3 = (short *)(lVar19 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar22 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        *(undefined8 *)(lVar19 + 8) = uVar22;
        *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_012f9c8c;
    }
    local_c8 = 0xb8fca75ddf924be5;
    local_c0 = "pe::field::WeatherController_0";
    local_b8 = 0x1e;
    FUN_00d8fb98(auStack_88,&local_c8);
    FUN_01100fc0(&local_68,plVar9,auStack_88,param_2);
    plVar10 = (long *)param_1[0x1b];
    param_1[0x1b] = 0;
    if (plVar10 != (long *)0x0) {
      lVar19 = plVar10[6];
      psVar3 = (short *)(lVar19 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_012f9514;
    }
    uVar22 = local_68;
    local_68 = 0;
    param_1[0x1b] = uVar22;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    local_c8 = 0xb8fca65ddf924a32;
    local_c0 = "pe::field::WeatherController_1";
    local_b8 = 0x1e;
    FUN_00d8fb98(auStack_a8,&local_c8);
    FUN_01100fc0(&local_68,plVar9,auStack_a8,param_2);
    plVar10 = (long *)param_1[0x1c];
    param_1[0x1c] = 0;
    if (plVar10 != (long *)0x0) {
      lVar19 = plVar10[6];
      psVar3 = (short *)(lVar19 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_012f9514;
    }
    uVar22 = local_68;
    local_68 = 0;
    param_1[0x1c] = uVar22;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (plVar9 != (long *)0x0) {
      lVar19 = plVar9[6];
      psVar3 = (short *)(lVar19 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar4 == 0) {
LAB_012f9514:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  FUN_012f9f70(&local_c8,*param_1,param_1);
  uVar22 = local_c8;
  local_c8 = 0;
  lVar19 = param_1[0x1e];
  param_1[0x1e] = uVar22;
  if (lVar19 != 0) {
    FUN_012fa1e0(param_1 + 0x1f);
  }
  param_1[0x20] = local_b8;
  param_1[0x21] = local_b0;
  param_1[0x1f] = local_c0;
  FUN_012f9e50(&local_c8,*param_1,param_1);
  uVar22 = local_c8;
  local_c8 = 0;
  lVar19 = param_1[0x22];
  param_1[0x22] = uVar22;
  if (lVar19 != 0) {
    FUN_012fa644(param_1 + 0x23);
  }
  param_1[0x24] = local_b8;
  param_1[0x25] = local_b0;
  param_1[0x23] = local_c0;
  return;
}


