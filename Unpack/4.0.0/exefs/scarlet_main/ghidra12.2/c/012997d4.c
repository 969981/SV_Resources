/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012997d4; name: FUN_012997d4
 */


void FUN_012997d4(undefined8 *param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  FUN_01177ab4();
  *param_1 = &PTR_FUN_04561158;
  param_1[0xe] = 0;
  param_1[4] = &PTR_LAB_045611f0;
  param_1[5] = &DAT_04561240;
  plVar9 = param_1 + 0xb;
  *plVar9 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_2 == 0) {
    local_98 = 0;
    if (*(long *)(param_1[8] + 0xe8) != 0) {
      local_98 = *(undefined8 *)(*(long *)(param_1[8] + 0xe8) + 0x48);
    }
    FUN_0129a2e0(&local_90,param_1[1],&local_98,param_3);
    plVar10 = local_90;
    local_90 = (long *)0x0;
    puVar11 = (undefined8 *)*plVar9;
    *plVar9 = (long)plVar10;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar3 = *(int *)(lVar6 + 0x12c8);
      iVar5 = iVar3 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar5;
      if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
        *(int *)(lVar6 + 0x12cc) = iVar5;
      }
      (**(code **)*puVar11)(puVar11);
      plVar9 = (long *)param_1[0xc];
      uVar13 = param_1[0xd];
      uVar17 = param_1[0xe];
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar11,uVar13,uVar17);
      }
      else {
        FUN_00c48fe8(plVar9,puVar11,uVar13,uVar17);
      }
      lVar6 = FUN_00c4e600();
      iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          local_68 = plVar9;
          FUN_00c4ea30(&local_68,&local_70);
          plVar12 = (long *)*plVar9;
          plVar10 = plVar9;
          if (plVar9[600] != 0) {
            plVar10 = plVar9 + plVar9[600] * 3;
          }
          if (plVar10 == plVar9) {
            uVar16 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
              plVar12 = (long *)*plVar9;
            }
            plVar15 = plVar9 + 3;
            if (plVar10 == plVar15) {
              uVar16 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              bVar4 = (long *)*plVar15 != plVar12;
              if (bVar4) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
                plVar12 = (long *)plVar9[3];
              }
              uVar16 = (ulong)bVar4;
              plVar15 = plVar9 + 6;
              if (plVar10 == plVar15) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar16 * 3,plVar9 + 6);
                  plVar12 = (long *)plVar9[6];
                  uVar16 = 2;
                }
                plVar15 = plVar9 + 9;
                if (plVar10 == plVar15) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar16 * 3,plVar9 + 9);
                    plVar12 = (long *)plVar9[9];
                    uVar16 = 3;
                  }
                  plVar15 = plVar9 + 0xc;
                  if (plVar10 == plVar15) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar16 * 3,plVar9 + 0xc);
                      plVar12 = (long *)plVar9[0xc];
                      uVar16 = 4;
                    }
                    plVar15 = plVar9 + 0xf;
                    if (plVar10 == plVar15) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar15 + 0xd0))();
                      if ((long *)*plVar15 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar16 * 3,plVar9 + 0xf);
                        plVar12 = (long *)plVar9[0xf];
                        uVar16 = 5;
                      }
                      uVar8 = 6;
                      for (plVar15 = plVar9 + 0x12; plVar10 != plVar15; plVar15 = plVar15 + 3) {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar16 * 3,plVar15);
                          plVar12 = (long *)*plVar15;
                          uVar16 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar16 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    param_1[0xc] = local_88;
    param_1[0xd] = uStack_80;
    param_1[0xe] = local_78;
  }
  else {
    plVar10 = (long *)param_1[1];
    if (*(long *)(param_1[8] + 0xe8) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(param_1[8] + 0xe8) + 0x48);
    }
    lVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,0x110,0x10);
    if (lVar6 == 0) {
      plVar10 = (long *)0x0;
      uVar17 = 0;
      uVar13 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      FUN_0129a0d8(lVar6,uVar13,param_3);
      uVar13 = 0x10;
      uVar17 = 0x110;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    puVar11 = (undefined8 *)*plVar9;
    *plVar9 = lVar6;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar3 = *(int *)(lVar6 + 0x12c8);
      iVar5 = iVar3 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar5;
      if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
        *(int *)(lVar6 + 0x12cc) = iVar5;
      }
      (**(code **)*puVar11)(puVar11);
      plVar9 = (long *)param_1[0xc];
      uVar2 = param_1[0xd];
      uVar14 = param_1[0xe];
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar11,uVar2,uVar14);
      }
      else {
        FUN_00c48fe8(plVar9,puVar11,uVar2,uVar14);
      }
      lVar6 = FUN_00c4e600();
      iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_68 = plVar9 + plVar9[600] * 3;
          local_90 = plVar9;
          FUN_00c4ea30(&local_90,&local_68);
          plVar15 = (long *)*plVar9;
          plVar12 = plVar9;
          if (plVar9[600] != 0) {
            plVar12 = plVar9 + plVar9[600] * 3;
          }
          if (plVar12 == plVar9) {
            uVar16 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar15) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar9,plVar9);
              plVar15 = (long *)*plVar9;
            }
            plVar1 = plVar9 + 3;
            if (plVar12 == plVar1) {
              uVar16 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar4 = (long *)*plVar1 != plVar15;
              if (bVar4) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar9,plVar9 + 3);
                plVar15 = (long *)plVar9[3];
              }
              uVar16 = (ulong)bVar4;
              plVar1 = plVar9 + 6;
              if (plVar12 == plVar1) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar16 * 3,plVar9 + 6);
                  plVar15 = (long *)plVar9[6];
                  uVar16 = 2;
                }
                plVar1 = plVar9 + 9;
                if (plVar12 == plVar1) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar16 * 3,plVar9 + 9);
                    plVar15 = (long *)plVar9[9];
                    uVar16 = 3;
                  }
                  plVar1 = plVar9 + 0xc;
                  if (plVar12 == plVar1) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar16 * 3,plVar9 + 0xc);
                      plVar15 = (long *)plVar9[0xc];
                      uVar16 = 4;
                    }
                    plVar1 = plVar9 + 0xf;
                    if (plVar12 == plVar1) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar16 * 3,plVar9 + 0xf);
                        plVar15 = (long *)plVar9[0xf];
                        uVar16 = 5;
                      }
                      uVar8 = 6;
                      for (local_a0 = plVar9 + 0x12; plVar12 != local_a0; local_a0 = local_a0 + 3) {
                        (**(code **)(*(long *)*local_a0 + 0xd0))();
                        if ((long *)*local_a0 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar16 * 3,local_a0);
                          plVar15 = (long *)*local_a0;
                          uVar16 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar16 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    param_1[0xc] = plVar10;
    param_1[0xd] = uVar17;
    param_1[0xe] = uVar13;
  }
  return;
}


