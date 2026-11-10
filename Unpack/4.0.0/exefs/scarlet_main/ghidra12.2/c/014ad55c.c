/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ad55c; name: FUN_014ad55c
 */


void FUN_014ad55c(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *plStack_68;
  
  param_1[2] = 0;
  puVar3 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar3 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar12 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar12;
  param_1[4] = (long)(puVar3 + 0x88);
  plVar10 = param_1 + 5;
  *plVar10 = (long)(puVar3 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar10);
  *param_1 = (long)&PTR_FUN_0459c338;
  param_1[4] = (long)&PTR_LAB_0459c3b0;
  *plVar10 = (long)&DAT_0459c400;
  plVar10 = param_1 + 8;
  param_1[0x19] = 0;
  memset(plVar10,0,0x84);
  param_1[0x1a] = param_2;
  plVar13 = (long *)param_1[1];
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar7 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x38,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
    lVar12 = 0;
    lVar6 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar7[5] = 0;
    puVar7[6] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    lVar6 = 8;
    lVar12 = 0x38;
    *puVar7 = 0;
    puVar7[1] = &DAT_cbf29ce484222645;
    puVar7[2] = &DAT_03c886bc;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = *plVar10;
  *plVar10 = (long)puVar7;
  if (lVar8 != 0) {
    FUN_014ae2c8(param_1 + 9);
  }
  param_1[0xb] = lVar6;
  param_1[9] = (long)plVar13;
  param_1[10] = lVar12;
  FUN_014adf60(&local_90,param_1[1]);
  lVar6 = local_90;
  local_90 = 0;
  lVar12 = param_1[0xc];
  param_1[0xc] = lVar6;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar2 = *(int *)(lVar6 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (*(int *)(lVar6 + 0x12cc) <= iVar2) {
      *(int *)(lVar6 + 0x12cc) = iVar5;
    }
    FUN_014ae1e0(lVar12);
    plVar10 = (long *)param_1[0xd];
    lVar6 = param_1[0xe];
    lVar8 = param_1[0xf];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar6,lVar8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,lVar6,lVar8);
    }
    lVar6 = FUN_00c4e600();
    iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        plStack_68 = plVar10;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar10;
        plVar13 = plVar10;
        if (plVar10[600] != 0) {
          plVar13 = plVar10 + plVar10[600] * 3;
        }
        if (plVar13 == plVar10) {
          uVar15 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10);
            plVar14 = (long *)*plVar10;
          }
          plVar1 = plVar10 + 3;
          if (plVar13 == plVar1) {
            uVar15 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar14;
            if (bVar4) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10 + 3);
              plVar14 = (long *)plVar10[3];
            }
            uVar15 = (ulong)bVar4;
            plVar1 = plVar10 + 6;
            if (plVar13 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 6);
                plVar14 = (long *)plVar10[6];
                uVar15 = 2;
              }
              plVar1 = plVar10 + 9;
              if (plVar13 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 9);
                  plVar14 = (long *)plVar10[9];
                  uVar15 = 3;
                }
                plVar1 = plVar10 + 0xc;
                if (plVar13 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xc);
                    plVar14 = (long *)plVar10[0xc];
                    uVar15 = 4;
                  }
                  plVar1 = plVar10 + 0xf;
                  if (plVar13 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xf);
                      plVar14 = (long *)plVar10[0xf];
                      uVar15 = 5;
                    }
                    uVar9 = 6;
                    for (plVar1 = plVar10 + 0x12; plVar13 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar1);
                        plVar14 = (long *)*plVar1;
                        uVar15 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  param_1[0xd] = local_88;
  param_1[0xe] = lStack_80;
  param_1[0xf] = local_78;
  FUN_014adf60(&local_90,param_1[1]);
  lVar6 = local_90;
  local_90 = 0;
  lVar12 = param_1[0x10];
  param_1[0x10] = lVar6;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar2 = *(int *)(lVar6 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (*(int *)(lVar6 + 0x12cc) <= iVar2) {
      *(int *)(lVar6 + 0x12cc) = iVar5;
    }
    FUN_014ae1e0(lVar12);
    plVar10 = (long *)param_1[0x11];
    lVar6 = param_1[0x12];
    lVar8 = param_1[0x13];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar6,lVar8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,lVar6,lVar8);
    }
    lVar6 = FUN_00c4e600();
    iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        plStack_68 = plVar10;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar10;
        plVar13 = plVar10;
        if (plVar10[600] != 0) {
          plVar13 = plVar10 + plVar10[600] * 3;
        }
        if (plVar13 == plVar10) {
          uVar15 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10);
            plVar14 = (long *)*plVar10;
          }
          plVar1 = plVar10 + 3;
          if (plVar13 == plVar1) {
            uVar15 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar14;
            if (bVar4) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10 + 3);
              plVar14 = (long *)plVar10[3];
            }
            uVar15 = (ulong)bVar4;
            plVar1 = plVar10 + 6;
            if (plVar13 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 6);
                plVar14 = (long *)plVar10[6];
                uVar15 = 2;
              }
              plVar1 = plVar10 + 9;
              if (plVar13 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 9);
                  plVar14 = (long *)plVar10[9];
                  uVar15 = 3;
                }
                plVar1 = plVar10 + 0xc;
                if (plVar13 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xc);
                    plVar14 = (long *)plVar10[0xc];
                    uVar15 = 4;
                  }
                  plVar1 = plVar10 + 0xf;
                  if (plVar13 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xf);
                      plVar14 = (long *)plVar10[0xf];
                      uVar15 = 5;
                    }
                    uVar9 = 6;
                    for (plVar1 = plVar10 + 0x12; plVar13 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar1);
                        plVar14 = (long *)*plVar1;
                        uVar15 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  param_1[0x12] = lStack_80;
  param_1[0x13] = local_78;
  param_1[0x11] = local_88;
  return;
}


