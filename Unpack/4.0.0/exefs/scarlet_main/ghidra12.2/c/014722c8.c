/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014722c8; name: FUN_014722c8
 */


void FUN_014722c8(undefined8 *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  long *local_108;
  long *local_100;
  code *local_f8;
  long local_f0;
  long local_e8;
  undefined1 auStack_e0 [104];
  long *local_78 [3];
  
  local_10c = param_3;
  FUN_01177ab4();
  *param_1 = &PTR_FUN_04560f28;
  param_1[0xe] = 0;
  param_1[4] = &PTR_LAB_04560fc0;
  param_1[5] = &DAT_04561010;
  plVar11 = param_1 + 0xb;
  *plVar11 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_2 == 0) {
    local_118 = 0;
    if (*(long *)(param_1[8] + 0xe8) != 0) {
      local_118 = *(undefined8 *)(*(long *)(param_1[8] + 0xe8) + 0x48);
    }
    local_11c = 0;
    FUN_01473060(&local_100,param_1[1],&local_118,&local_11c,&local_10c,param_4);
    plVar12 = local_100;
    local_100 = (long *)0x0;
    puVar13 = (undefined8 *)*plVar11;
    *plVar11 = (long)plVar12;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar3 = *(int *)(lVar8 + 0x12c8);
      iVar7 = iVar3 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar7;
      if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
        *(int *)(lVar8 + 0x12cc) = iVar7;
      }
      (**(code **)*puVar13)(puVar13);
      plVar11 = (long *)param_1[0xc];
      uVar17 = param_1[0xd];
      uVar19 = param_1[0xe];
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar13,uVar17,uVar19);
      }
      else {
        FUN_00c48fe8(plVar11,puVar13,uVar17,uVar19);
      }
      lVar8 = FUN_00c4e600();
      iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
      *(int *)(lVar8 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar11 = (long *)FUN_00c4e600();
        if (plVar11[600] != 0) {
          local_108 = plVar11 + plVar11[600] * 3;
          local_78[0] = plVar11;
          FUN_00c4ea30(local_78,&local_108);
          plVar14 = (long *)*plVar11;
          plVar12 = plVar11;
          if (plVar11[600] != 0) {
            plVar12 = plVar11 + plVar11[600] * 3;
          }
          if (plVar12 == plVar11) {
            uVar18 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11);
              plVar14 = (long *)*plVar11;
            }
            plVar16 = plVar11 + 3;
            if (plVar12 == plVar16) {
              uVar18 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar16 + 0xd0))();
              bVar6 = (long *)*plVar16 != plVar14;
              if (bVar6) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11 + 3);
                plVar14 = (long *)plVar11[3];
              }
              uVar18 = (ulong)bVar6;
              plVar16 = plVar11 + 6;
              if (plVar12 == plVar16) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar16 + 0xd0))();
                if ((long *)*plVar16 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar18 * 3,plVar11 + 6);
                  plVar14 = (long *)plVar11[6];
                  uVar18 = 2;
                }
                plVar16 = plVar11 + 9;
                if (plVar12 == plVar16) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar16 + 0xd0))();
                  if ((long *)*plVar16 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar18 * 3,plVar11 + 9);
                    plVar14 = (long *)plVar11[9];
                    uVar18 = 3;
                  }
                  plVar16 = plVar11 + 0xc;
                  if (plVar12 == plVar16) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar16 + 0xd0))();
                    if ((long *)*plVar16 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar18 * 3,plVar11 + 0xc);
                      plVar14 = (long *)plVar11[0xc];
                      uVar18 = 4;
                    }
                    plVar16 = plVar11 + 0xf;
                    if (plVar12 == plVar16) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar16 + 0xd0))();
                      if ((long *)*plVar16 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar18 * 3,plVar11 + 0xf);
                        plVar14 = (long *)plVar11[0xf];
                        uVar18 = 5;
                      }
                      uVar10 = 6;
                      for (plVar16 = plVar11 + 0x12; plVar12 != plVar16; plVar16 = plVar16 + 3) {
                        (**(code **)(*(long *)*plVar16 + 0xd0))();
                        if ((long *)*plVar16 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar18 * 3,plVar16);
                          plVar14 = (long *)*plVar16;
                          uVar18 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar18 * 3,plVar11 + uVar10 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
    }
    param_1[0xc] = local_f8;
    param_1[0xd] = local_f0;
    param_1[0xe] = local_e8;
  }
  else {
    plVar12 = (long *)param_1[1];
    if (*(long *)(param_1[8] + 0xe8) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(param_1[8] + 0xe8) + 0x48);
    }
    lVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,0x450,0x10);
    if (lVar8 == 0) {
      plVar12 = (long *)0x0;
      uVar19 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      uVar4 = local_10c;
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      local_100 = (long *)0x0;
      local_f8 = (code *)0x0;
      local_f0 = 0;
      local_e8 = 0;
      if ((code *)param_4[2] != (code *)0x0) {
        (*(code *)param_4[2])(param_4 + 4,auStack_e0);
        local_e8 = param_4[3];
        local_f8 = (code *)param_4[1];
        local_100 = (long *)*param_4;
        local_f0 = param_4[2];
      }
      FUN_01472c48(lVar8,uVar17,param_2,uVar4,&local_100);
      pcVar5 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = 0;
        local_e8 = 0;
        local_100 = (long *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar5)(auStack_e0);
      }
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      uVar17 = 0x10;
      uVar19 = 0x450;
    }
    puVar13 = (undefined8 *)*plVar11;
    *plVar11 = lVar8;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar3 = *(int *)(lVar8 + 0x12c8);
      iVar7 = iVar3 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar7;
      if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
        *(int *)(lVar8 + 0x12cc) = iVar7;
      }
      (**(code **)*puVar13)(puVar13);
      plVar11 = (long *)param_1[0xc];
      uVar2 = param_1[0xd];
      uVar15 = param_1[0xe];
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar13,uVar2,uVar15);
      }
      else {
        FUN_00c48fe8(plVar11,puVar13,uVar2,uVar15);
      }
      lVar8 = FUN_00c4e600();
      iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
      *(int *)(lVar8 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar11 = (long *)FUN_00c4e600();
        if (plVar11[600] != 0) {
          local_78[0] = plVar11 + plVar11[600] * 3;
          local_100 = plVar11;
          FUN_00c4ea30(&local_100,local_78);
          plVar16 = (long *)*plVar11;
          plVar14 = plVar11;
          if (plVar11[600] != 0) {
            plVar14 = plVar11 + plVar11[600] * 3;
          }
          if (plVar14 == plVar11) {
            uVar18 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar11,plVar11);
              plVar16 = (long *)*plVar11;
            }
            plVar1 = plVar11 + 3;
            if (plVar14 == plVar1) {
              uVar18 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar6 = (long *)*plVar1 != plVar16;
              if (bVar6) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar11,plVar11 + 3);
                plVar16 = (long *)plVar11[3];
              }
              uVar18 = (ulong)bVar6;
              plVar1 = plVar11 + 6;
              if (plVar14 == plVar1) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar18 * 3,plVar11 + 6);
                  plVar16 = (long *)plVar11[6];
                  uVar18 = 2;
                }
                plVar1 = plVar11 + 9;
                if (plVar14 == plVar1) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar18 * 3,plVar11 + 9);
                    plVar16 = (long *)plVar11[9];
                    uVar18 = 3;
                  }
                  plVar1 = plVar11 + 0xc;
                  if (plVar14 == plVar1) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar18 * 3,plVar11 + 0xc);
                      plVar16 = (long *)plVar11[0xc];
                      uVar18 = 4;
                    }
                    plVar1 = plVar11 + 0xf;
                    if (plVar14 == plVar1) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar18 * 3,plVar11 + 0xf);
                        plVar16 = (long *)plVar11[0xf];
                        uVar18 = 5;
                      }
                      uVar10 = 6;
                      for (local_128 = plVar11 + 0x12; plVar14 != local_128;
                          local_128 = local_128 + 3) {
                        (**(code **)(*(long *)*local_128 + 0xd0))();
                        if ((long *)*local_128 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar18 * 3,local_128);
                          plVar16 = (long *)*local_128;
                          uVar18 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar18 * 3,plVar11 + uVar10 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
    }
    param_1[0xc] = plVar12;
    param_1[0xd] = uVar19;
    param_1[0xe] = uVar17;
  }
  return;
}


