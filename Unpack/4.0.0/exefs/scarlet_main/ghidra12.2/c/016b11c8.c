/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b11c8; name: FUN_016b11c8
 */


void FUN_016b11c8(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  ushort *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  long *local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined1 local_80;
  long *local_78;
  long *aplStack_70 [2];
  
  local_88 = *(long *)(param_1 + 0x48);
  local_e8 = 0;
  uStack_e0 = 0;
  local_118 = PTR_DAT_047de148 + 0x10;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_110 = 0;
  puStack_d0 = PTR_DAT_047e31b0 + 0x10;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_d8 = 0;
  local_80 = 1;
  if ((local_88 == 0) || (piVar13 = *(int **)(local_88 + 0x70), piVar13 == (int *)0x0))
  goto LAB_016b1238;
  puVar14 = (ushort *)((long)piVar13 - (long)*piVar13);
  uVar5 = *puVar14;
  if (uVar5 < 0xb) {
    if (8 < uVar5) goto LAB_016b17f0;
    uVar15 = 0;
  }
  else {
    if ((ulong)puVar14[5] == 0) {
LAB_016b17f0:
      bVar6 = true;
    }
    else {
      bVar6 = *(char *)((long)piVar13 + (ulong)puVar14[5]) == '\0';
    }
    if ((ulong)puVar14[4] == 0) {
      bVar7 = true;
    }
    else {
      bVar7 = *(char *)((long)piVar13 + (ulong)puVar14[4]) == '\0';
    }
    if ((uVar5 < 0xd) || ((ulong)puVar14[6] == 0)) {
      bVar8 = true;
      if (!bVar6) goto LAB_016b17dc;
LAB_016b12dc:
      if (bVar7) {
        uVar15 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      bVar8 = *(char *)((long)piVar13 + (ulong)puVar14[6]) == '\0';
      if (bVar6) goto LAB_016b12dc;
LAB_016b17dc:
      if (bVar7) {
        uVar15 = 4;
      }
      else {
        uVar15 = 6;
      }
    }
    if (!bVar8) {
      uVar15 = uVar15 | 8;
    }
  }
  lVar10 = (**(code **)(*param_2 + 0x10))(param_2,0x200,8);
  if (lVar10 == 0) {
    param_2 = (long *)0x0;
    uVar20 = 0;
    uVar19 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    FUN_00e35578(lVar10,param_2,param_3,uVar15);
    uVar19 = 8;
    uVar20 = 0x200;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  lVar11 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar10;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar9 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar9;
    }
    FUN_01048230(lVar11);
    plVar12 = *(long **)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    uVar15 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar15 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar11,uVar3,uVar16);
    }
    else {
      FUN_00c48fe8(plVar12,lVar11,uVar3,uVar16);
    }
    lVar10 = FUN_00c4e600();
    iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_78 = plVar12 + plVar12[600] * 3;
        aplStack_70[0] = plVar12;
        FUN_00c4ea30(aplStack_70,&local_78);
        plVar17 = (long *)*plVar12;
        plVar2 = plVar12;
        if (plVar12[600] != 0) {
          plVar2 = plVar12 + plVar12[600] * 3;
        }
        if (plVar2 == plVar12) {
          uVar18 = 0;
          uVar15 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar17) {
            (**(code **)(*plVar17 + 0x100))(plVar17,plVar12,plVar12);
            plVar17 = (long *)*plVar12;
          }
          plVar1 = plVar12 + 3;
          if (plVar2 == plVar1) {
            uVar18 = 0;
            uVar15 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar6 = (long *)*plVar1 != plVar17;
            if (bVar6) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar12,plVar12 + 3);
              plVar17 = (long *)plVar12[3];
            }
            uVar18 = (ulong)bVar6;
            plVar1 = plVar12 + 6;
            if (plVar2 == plVar1) {
              uVar15 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar17) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar12 + uVar18 * 3,plVar12 + 6);
                plVar17 = (long *)plVar12[6];
                uVar18 = 2;
              }
              plVar1 = plVar12 + 9;
              if (plVar2 == plVar1) {
                uVar15 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar12 + uVar18 * 3,plVar12 + 9);
                  plVar17 = (long *)plVar12[9];
                  uVar18 = 3;
                }
                plVar1 = plVar12 + 0xc;
                if (plVar2 == plVar1) {
                  uVar15 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar12 + uVar18 * 3,plVar12 + 0xc);
                    plVar17 = (long *)plVar12[0xc];
                    uVar18 = 4;
                  }
                  plVar1 = plVar12 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar15 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar12 + uVar18 * 3,plVar12 + 0xf);
                      plVar17 = (long *)plVar12[0xf];
                      uVar18 = 5;
                    }
                    uVar15 = 6;
                    for (local_120 = plVar12 + 0x12; plVar2 != local_120; local_120 = local_120 + 3)
                    {
                      (**(code **)(*(long *)*local_120 + 0xd0))();
                      if ((long *)*local_120 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar12 + uVar18 * 3,local_120);
                        plVar17 = (long *)*local_120;
                        uVar18 = uVar15;
                      }
                      uVar15 = uVar15 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar17 + 0x100))(plVar17,plVar12 + uVar18 * 3,plVar12 + uVar15 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
    lVar10 = *(long *)(param_1 + 0x28);
  }
  *(long **)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = uVar20;
  *(undefined8 *)(param_1 + 0x40) = uVar19;
  local_80 = 0;
  uVar19 = *(undefined8 *)PTR_DAT_047e3198;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  FUN_00db8a60(lVar10,&local_118,uVar19,uVar19,PTR_DAT_047d3e30);
  lVar10 = *(long *)(param_1 + 0x28);
  *(undefined1 *)(lVar10 + 0xc9) = 1;
  fVar21 = (float)*(int *)(param_1 + 0x68);
  fVar22 = *(float *)(lVar10 + 0xc0);
  *(float *)(lVar10 + 0xbc) = fVar21;
  if (fVar21 < fVar22) {
    *(float *)(lVar10 + 0xbc) = fVar22;
    fVar21 = fVar22;
  }
  if (*(float *)(lVar10 + 0xc4) < fVar21) {
    *(float *)(lVar10 + 0xbc) = *(float *)(lVar10 + 0xc4);
  }
LAB_016b1238:
  FUN_00ca25d0(&puStack_d0);
  FUN_00ca246c(&local_118);
  return;
}


