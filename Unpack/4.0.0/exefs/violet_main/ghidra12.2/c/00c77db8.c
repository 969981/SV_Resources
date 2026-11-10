/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c77db8; name: FUN_00c77db8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c77db8(long param_1,char *param_2,char *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *local_a0;
  undefined8 local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  uVar16 = *(undefined8 *)(param_1 + 8);
  local_98 = uVar16;
  if (*(long *)(param_1 + 0x180) == 0) {
    FUN_00eb3a30(&local_90,uVar16,&local_98);
    lVar11 = local_90;
    local_90 = 0;
    lVar10 = *(long *)(param_1 + 0x180);
    *(long *)(param_1 + 0x180) = lVar11;
    if (lVar10 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
      local_90 = 0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar3 = *(int *)(lVar11 + 0x12c8);
      iVar8 = iVar3 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar8;
      if (*(int *)(lVar11 + 0x12cc) <= iVar3) {
        *(int *)(lVar11 + 0x12cc) = iVar8;
      }
      FUN_00eea34c(lVar10);
      plVar13 = *(long **)(param_1 + 0x188);
      uVar14 = *(undefined8 *)(param_1 + 400);
      uVar17 = *(undefined8 *)(param_1 + 0x198);
      uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar10,uVar14,uVar17);
      }
      else {
        FUN_00c48fe8(plVar13,lVar10,uVar14,uVar17);
      }
      lVar11 = FUN_00c4e600();
      iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          plStack_68 = plVar13;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar18 = (long *)*plVar13;
          plVar2 = plVar13;
          if (plVar13[600] != 0) {
            plVar2 = plVar13 + plVar13[600] * 3;
          }
          if (plVar2 == plVar13) {
            uVar15 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13);
              plVar18 = (long *)*plVar13;
            }
            plVar1 = plVar13 + 3;
            if (plVar2 == plVar1) {
              uVar15 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar7 = (long *)*plVar1 != plVar18;
              if (bVar7) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13 + 3);
                plVar18 = (long *)plVar13[3];
              }
              uVar15 = (ulong)bVar7;
              plVar1 = plVar13 + 6;
              if (plVar2 == plVar1) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + 6);
                  plVar18 = (long *)plVar13[6];
                  uVar15 = 2;
                }
                plVar1 = plVar13 + 9;
                if (plVar2 == plVar1) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + 9);
                    plVar18 = (long *)plVar13[9];
                    uVar15 = 3;
                  }
                  plVar1 = plVar13 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + 0xc);
                      plVar18 = (long *)plVar13[0xc];
                      uVar15 = 4;
                    }
                    plVar1 = plVar13 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + 0xf);
                        plVar18 = (long *)plVar13[0xf];
                        uVar15 = 5;
                      }
                      uVar9 = 6;
                      for (local_a0 = plVar13 + 0x12; plVar2 != local_a0; local_a0 = local_a0 + 3) {
                        (**(code **)(*(long *)*local_a0 + 0xd0))();
                        if ((long *)*local_a0 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,local_a0);
                          plVar18 = (long *)*local_a0;
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
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + uVar9 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
      lVar11 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = 0;
      if (lVar11 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar10 = FUN_00c4e600();
        iVar3 = *(int *)(lVar10 + 0x12c8);
        iVar8 = iVar3 + 1;
        *(int *)(lVar10 + 0x12c8) = iVar8;
        if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
          *(int *)(lVar10 + 0x12cc) = iVar8;
        }
        FUN_00eea34c(lVar11);
        uVar9 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,lVar11,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,lVar11,local_80,local_78);
        }
        lVar11 = FUN_00c4e600();
        iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
        *(int *)(lVar11 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar13 = (long *)FUN_00c4e600();
          if (plVar13[600] != 0) {
            local_70 = plVar13 + plVar13[600] * 3;
            plStack_68 = plVar13;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar18 = (long *)*plVar13;
            plVar2 = plVar13;
            if (plVar13[600] != 0) {
              plVar2 = plVar13 + plVar13[600] * 3;
            }
            if (plVar2 == plVar13) {
              uVar15 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13);
                plVar18 = (long *)*plVar13;
              }
              plVar1 = plVar13 + 3;
              if (plVar2 == plVar1) {
                uVar15 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                bVar7 = (long *)*plVar1 != plVar18;
                if (bVar7) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13 + 3);
                  plVar18 = (long *)plVar13[3];
                }
                uVar15 = (ulong)bVar7;
                plVar1 = plVar13 + 6;
                if (plVar2 == plVar1) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + 6);
                    plVar18 = (long *)plVar13[6];
                    uVar15 = 2;
                  }
                  plVar1 = plVar13 + 9;
                  if (plVar2 == plVar1) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + 9);
                      plVar18 = (long *)plVar13[9];
                      uVar15 = 3;
                    }
                    plVar1 = plVar13 + 0xc;
                    if (plVar2 == plVar1) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + 0xc);
                        plVar18 = (long *)plVar13[0xc];
                        uVar15 = 4;
                      }
                      plVar1 = plVar13 + 0xf;
                      if (plVar2 == plVar1) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))
                                    (plVar18,plVar13 + uVar15 * 3,plVar13 + 0xf);
                          plVar18 = (long *)plVar13[0xf];
                          uVar15 = 5;
                        }
                        uVar9 = 6;
                        for (local_a0 = plVar13 + 0x12; plVar2 != local_a0; local_a0 = local_a0 + 3)
                        {
                          (**(code **)(*(long *)*local_a0 + 0xd0))();
                          if ((long *)*local_a0 != plVar18) {
                            (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,local_a0);
                            plVar18 = (long *)*local_a0;
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
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar15 * 3,plVar13 + uVar9 * 3);
            plVar13[600] = 0;
          }
          *(undefined4 *)(lVar11 + 0x12cc) = 0;
        }
      }
    }
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  pcVar12 = *(char **)(param_1 + 0x1a0);
  if (pcVar12 == (char *)0x0) {
    plVar13 = *(long **)(param_1 + 8);
    pcVar12 = (char *)(**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
    if (pcVar12 == (char *)0x0) {
      plVar13 = (long *)0x0;
      uVar16 = 0;
      uVar14 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar13;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *pcVar12 = '\0';
      pcVar12[0x10] = '\0';
      pcVar12[0x50] = '\0';
      pcVar12[0x51] = '\0';
      pcVar12[0x52] = '\0';
      pcVar12[0x53] = '\0';
      pcVar12[0x20] = '\0';
      pcVar12[0x21] = '\0';
      pcVar12[0x22] = '\0';
      pcVar12[0x23] = '\0';
      pcVar12[0x24] = '\0';
      pcVar12[0x25] = '\0';
      pcVar12[0x26] = '\0';
      pcVar12[0x27] = '\0';
      pcVar12[0x28] = '\0';
      pcVar12[0x29] = '\0';
      pcVar12[0x2a] = '\0';
      pcVar12[0x2b] = '\0';
      pcVar12[0x2c] = '\0';
      pcVar12[0x2d] = '\0';
      pcVar12[0x2e] = '\0';
      pcVar12[0x2f] = '\0';
      uVar14 = 8;
      pcVar12[0x30] = '\0';
      pcVar12[0x31] = '\0';
      pcVar12[0x32] = '\0';
      pcVar12[0x33] = '\0';
      pcVar12[0x34] = '\0';
      pcVar12[0x35] = '\0';
      pcVar12[0x36] = '\0';
      pcVar12[0x37] = '\0';
      *(undefined8 *)(pcVar12 + 0x38) = uVar16;
      uVar16 = 0x58;
      pcVar12[0x40] = -1;
      pcVar12[0x41] = -1;
      pcVar12[0x42] = -1;
      pcVar12[0x43] = -1;
      pcVar12[0x44] = -1;
      pcVar12[0x45] = -1;
      pcVar12[0x46] = -1;
      pcVar12[0x47] = '\x0f';
      pcVar12[0x48] = '\0';
      pcVar12[0x49] = '\0';
      pcVar12[0x4a] = '\0';
      pcVar12[0x4b] = '\0';
      pcVar12[0x4c] = '\0';
      pcVar12[0x4d] = '\0';
      pcVar12[0x4e] = '\0';
      pcVar12[0x4f] = '\0';
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    lVar11 = *(long *)(param_1 + 0x1a0);
    *(char **)(param_1 + 0x1a0) = pcVar12;
    if (lVar11 != 0) {
      FUN_00f32d40(param_1,param_1 + 0x1a8);
      pcVar12 = *(char **)(param_1 + 0x1a0);
    }
    bVar6 = 0;
    *(undefined8 *)(param_1 + 0x1b8) = uVar14;
    *(long **)(param_1 + 0x1a8) = plVar13;
    *(undefined8 *)(param_1 + 0x1b0) = uVar16;
  }
  else {
    bVar6 = 1;
  }
  if (*pcVar12 == '\0' || *param_2 == '\0') {
    if (*param_2 != '\0' || *pcVar12 != '\0') goto LAB_00c77e78;
LAB_00c77e1c:
    bVar5 = 1;
  }
  else {
    if (*(long *)(pcVar12 + 8) == *(long *)(param_2 + 8)) goto LAB_00c77e1c;
LAB_00c77e78:
    uVar16 = *(undefined8 *)(param_2 + 8);
    bVar5 = 0;
    *(undefined8 *)pcVar12 = *(undefined8 *)param_2;
    *(undefined8 *)(pcVar12 + 8) = uVar16;
  }
  cVar4 = pcVar12[0x10];
  if ((cVar4 == '\0') || (*param_3 == '\0')) {
    if (*param_3 != '\0' || cVar4 != '\0') goto LAB_00c77e90;
  }
  else if (*(long *)(pcVar12 + 0x18) != *(long *)(param_3 + 8)) {
LAB_00c77e90:
    uVar16 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(pcVar12 + 0x10) = *(undefined8 *)param_3;
    *(undefined8 *)(pcVar12 + 0x18) = uVar16;
    goto LAB_00c77e98;
  }
  if (((bool)(bVar6 & bVar5)) && (bVar7)) {
    return;
  }
LAB_00c77e98:
  lVar11 = *(long *)(param_1 + 0x208);
  lVar10 = *(long *)(param_1 + 0x210);
  if (((lVar11 != lVar10) && (*(undefined1 *)(lVar11 + 0x10) = 1, lVar11 + 0x18 != lVar10)) &&
     (*(undefined1 *)(lVar11 + 0x28) = 1, lVar11 + 0x30 != lVar10)) {
    *(undefined1 *)(lVar11 + 0x40) = 1;
    for (lVar11 = lVar11 + 0x48; lVar11 != lVar10; lVar11 = lVar11 + 0x18) {
      *(undefined1 *)(lVar11 + 0x10) = 1;
    }
  }
  return;
}


