/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d67358; name: FUN_00d67358
 */


void FUN_00d67358(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if (*(int *)(param_1 + 0x480) != param_2) {
    plVar6 = *(long **)(param_1 + 0x488);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))
                (plVar6,param_1 + 0x30,param_1 + 0x170,param_1 + 0x2e0,param_1 + 0x370);
    }
    *(int *)(param_1 + 0x480) = param_2;
    if (param_2 == 1) {
      plVar9 = *(long **)(param_1 + 8);
      plVar6 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x18,8);
      if (plVar6 == (long *)0x0) {
        plVar9 = (long *)0x0;
        uVar16 = 0;
        uVar17 = 0;
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
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
        puVar3 = PTR_DAT_047d92c8;
        uVar17 = 0x18;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *plVar6 = (long)(puVar3 + 0x10);
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined8 *)((long)plVar6 + 0xc) = 0;
        *(undefined1 *)((long)plVar6 + 0x14) = 0;
        uVar16 = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      puVar11 = *(undefined8 **)(param_1 + 0x488);
      *(long **)(param_1 + 0x488) = plVar6;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar7 = FUN_00c4e600();
        iVar2 = *(int *)(lVar7 + 0x12c8);
        iVar5 = iVar2 + 1;
        *(int *)(lVar7 + 0x12c8) = iVar5;
        if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
          *(int *)(lVar7 + 0x12cc) = iVar5;
        }
        (**(code **)*puVar11)(puVar11);
        plVar6 = *(long **)(param_1 + 0x490);
        uVar10 = *(undefined8 *)(param_1 + 0x498);
        uVar14 = *(undefined8 *)(param_1 + 0x4a0);
        uVar8 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar11,uVar10,uVar14);
        }
        else {
          FUN_00c48fe8(plVar6,puVar11,uVar10,uVar14);
        }
        lVar7 = FUN_00c4e600();
        iVar5 = *(int *)(lVar7 + 0x12c8) + -1;
        *(int *)(lVar7 + 0x12c8) = iVar5;
        if (iVar5 == 0) {
          plVar6 = (long *)FUN_00c4e600();
          if (plVar6[600] != 0) {
            local_68 = plVar6 + plVar6[600] * 3;
            local_90 = plVar6;
            FUN_00c4ea30(&local_90,&local_68);
            plVar12 = (long *)*plVar6;
            plVar13 = plVar6;
            if (plVar6[600] != 0) {
              plVar13 = plVar6 + plVar6[600] * 3;
            }
            if (plVar13 == plVar6) {
              uVar15 = 0;
              uVar8 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar6 + 0xd0))();
              if ((long *)*plVar6 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar6,plVar6);
                plVar12 = (long *)*plVar6;
              }
              plVar1 = plVar6 + 3;
              if (plVar13 == plVar1) {
                uVar15 = 0;
                uVar8 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                bVar4 = (long *)*plVar1 != plVar12;
                if (bVar4) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar6,plVar6 + 3);
                  plVar12 = (long *)plVar6[3];
                }
                uVar15 = (ulong)bVar4;
                plVar1 = plVar6 + 6;
                if (plVar13 == plVar1) {
                  uVar8 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + uVar15 * 3,plVar6 + 6);
                    plVar12 = (long *)plVar6[6];
                    uVar15 = 2;
                  }
                  plVar1 = plVar6 + 9;
                  if (plVar13 == plVar1) {
                    uVar8 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + uVar15 * 3,plVar6 + 9);
                      plVar12 = (long *)plVar6[9];
                      uVar15 = 3;
                    }
                    plVar1 = plVar6 + 0xc;
                    if (plVar13 == plVar1) {
                      uVar8 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + uVar15 * 3,plVar6 + 0xc);
                        plVar12 = (long *)plVar6[0xc];
                        uVar15 = 4;
                      }
                      plVar1 = plVar6 + 0xf;
                      if (plVar13 == plVar1) {
                        uVar8 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + uVar15 * 3,plVar6 + 0xf);
                          plVar12 = (long *)plVar6[0xf];
                          uVar15 = 5;
                        }
                        uVar8 = 6;
                        for (local_98 = plVar6 + 0x12; plVar13 != local_98; local_98 = local_98 + 3)
                        {
                          (**(code **)(*(long *)*local_98 + 0xd0))();
                          if ((long *)*local_98 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + uVar15 * 3,local_98);
                            plVar12 = (long *)*local_98;
                            uVar15 = uVar8;
                          }
                          uVar8 = uVar8 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + uVar15 * 3,plVar6 + uVar8 * 3);
            plVar6[600] = 0;
          }
          *(undefined4 *)(lVar7 + 0x12cc) = 0;
        }
      }
      *(long **)(param_1 + 0x490) = plVar9;
      *(undefined8 *)(param_1 + 0x498) = uVar17;
      *(undefined8 *)(param_1 + 0x4a0) = uVar16;
    }
    else if (param_2 == 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x488);
      *(undefined8 *)(param_1 + 0x488) = 0;
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar2 = *(int *)(lVar7 + 0x12c8);
      iVar5 = iVar2 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar5;
      if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
        *(int *)(lVar7 + 0x12cc) = iVar5;
      }
      (**(code **)*puVar11)(puVar11);
      plVar6 = *(long **)(param_1 + 0x490);
      uVar16 = *(undefined8 *)(param_1 + 0x498);
      uVar17 = *(undefined8 *)(param_1 + 0x4a0);
      uVar8 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar11,uVar16,uVar17);
      }
      else {
        FUN_00c48fe8(plVar6,puVar11,uVar16,uVar17);
      }
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar6 = (long *)FUN_00c4e600();
        if (plVar6[600] != 0) {
          local_68 = plVar6 + plVar6[600] * 3;
          local_90 = plVar6;
          FUN_00c4ea30(&local_90,&local_68);
          plVar13 = (long *)*plVar6;
          plVar9 = plVar6;
          if (plVar6[600] != 0) {
            plVar9 = plVar6 + plVar6[600] * 3;
          }
          if (plVar9 == plVar6) {
            uVar15 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar6 + 0xd0))();
            if ((long *)*plVar6 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar6,plVar6);
              plVar13 = (long *)*plVar6;
            }
            plVar12 = plVar6 + 3;
            if (plVar9 == plVar12) {
              uVar15 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              bVar4 = (long *)*plVar12 != plVar13;
              if (bVar4) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar6,plVar6 + 3);
                plVar13 = (long *)plVar6[3];
              }
              uVar15 = (ulong)bVar4;
              plVar12 = plVar6 + 6;
              if (plVar9 == plVar12) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 6);
                  plVar13 = (long *)plVar6[6];
                  uVar15 = 2;
                }
                plVar12 = plVar6 + 9;
                if (plVar9 == plVar12) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar12 + 0xd0))();
                  if ((long *)*plVar12 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 9);
                    plVar13 = (long *)plVar6[9];
                    uVar15 = 3;
                  }
                  plVar12 = plVar6 + 0xc;
                  if (plVar9 == plVar12) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar12 + 0xd0))();
                    if ((long *)*plVar12 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 0xc);
                      plVar13 = (long *)plVar6[0xc];
                      uVar15 = 4;
                    }
                    plVar12 = plVar6 + 0xf;
                    if (plVar9 == plVar12) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar12 + 0xd0))();
                      if ((long *)*plVar12 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 0xf);
                        plVar13 = (long *)plVar6[0xf];
                        uVar15 = 5;
                      }
                      uVar8 = 6;
                      for (plVar12 = plVar6 + 0x12; plVar9 != plVar12; plVar12 = plVar12 + 3) {
                        (**(code **)(*(long *)*plVar12 + 0xd0))();
                        if ((long *)*plVar12 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar12);
                          plVar13 = (long *)*plVar12;
                          uVar15 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + uVar8 * 3);
          plVar6[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    else if (param_2 == 2) {
      FUN_00d70100(&local_90,*(undefined8 *)(param_1 + 8));
      plVar6 = local_90;
      local_90 = (long *)0x0;
      puVar11 = *(undefined8 **)(param_1 + 0x488);
      *(long **)(param_1 + 0x488) = plVar6;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar7 = FUN_00c4e600();
        iVar2 = *(int *)(lVar7 + 0x12c8);
        iVar5 = iVar2 + 1;
        *(int *)(lVar7 + 0x12c8) = iVar5;
        if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
          *(int *)(lVar7 + 0x12cc) = iVar5;
        }
        (**(code **)*puVar11)(puVar11);
        plVar6 = *(long **)(param_1 + 0x490);
        uVar16 = *(undefined8 *)(param_1 + 0x498);
        uVar17 = *(undefined8 *)(param_1 + 0x4a0);
        uVar8 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar11,uVar16,uVar17);
        }
        else {
          FUN_00c48fe8(plVar6,puVar11,uVar16,uVar17);
        }
        lVar7 = FUN_00c4e600();
        iVar5 = *(int *)(lVar7 + 0x12c8) + -1;
        *(int *)(lVar7 + 0x12c8) = iVar5;
        if (iVar5 == 0) {
          plVar6 = (long *)FUN_00c4e600();
          if (plVar6[600] != 0) {
            local_70 = plVar6 + plVar6[600] * 3;
            local_68 = plVar6;
            FUN_00c4ea30(&local_68,&local_70);
            plVar13 = (long *)*plVar6;
            plVar9 = plVar6;
            if (plVar6[600] != 0) {
              plVar9 = plVar6 + plVar6[600] * 3;
            }
            if (plVar9 == plVar6) {
              uVar15 = 0;
              uVar8 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar6 + 0xd0))();
              if ((long *)*plVar6 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar6,plVar6);
                plVar13 = (long *)*plVar6;
              }
              plVar12 = plVar6 + 3;
              if (plVar9 == plVar12) {
                uVar15 = 0;
                uVar8 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                bVar4 = (long *)*plVar12 != plVar13;
                if (bVar4) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar6,plVar6 + 3);
                  plVar13 = (long *)plVar6[3];
                }
                uVar15 = (ulong)bVar4;
                plVar12 = plVar6 + 6;
                if (plVar9 == plVar12) {
                  uVar8 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar12 + 0xd0))();
                  if ((long *)*plVar12 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 6);
                    plVar13 = (long *)plVar6[6];
                    uVar15 = 2;
                  }
                  plVar12 = plVar6 + 9;
                  if (plVar9 == plVar12) {
                    uVar8 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar12 + 0xd0))();
                    if ((long *)*plVar12 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 9);
                      plVar13 = (long *)plVar6[9];
                      uVar15 = 3;
                    }
                    plVar12 = plVar6 + 0xc;
                    if (plVar9 == plVar12) {
                      uVar8 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar12 + 0xd0))();
                      if ((long *)*plVar12 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 0xc);
                        plVar13 = (long *)plVar6[0xc];
                        uVar15 = 4;
                      }
                      plVar12 = plVar6 + 0xf;
                      if (plVar9 == plVar12) {
                        uVar8 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar12 + 0xd0))();
                        if ((long *)*plVar12 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + 0xf);
                          plVar13 = (long *)plVar6[0xf];
                          uVar15 = 5;
                        }
                        uVar8 = 6;
                        for (plVar12 = plVar6 + 0x12; plVar9 != plVar12; plVar12 = plVar12 + 3) {
                          (**(code **)(*(long *)*plVar12 + 0xd0))();
                          if ((long *)*plVar12 != plVar13) {
                            (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar12);
                            plVar13 = (long *)*plVar12;
                            uVar15 = uVar8;
                          }
                          uVar8 = uVar8 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar6 + uVar15 * 3,plVar6 + uVar8 * 3);
            plVar6[600] = 0;
          }
          *(undefined4 *)(lVar7 + 0x12cc) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x490) = local_88;
      *(undefined8 *)(param_1 + 0x498) = uStack_80;
      *(undefined8 *)(param_1 + 0x4a0) = local_78;
    }
    plVar6 = *(long **)(param_1 + 0x488);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))
                (plVar6,param_1 + 0x30,param_1 + 0x170,param_1 + 0x2e0,param_1 + 0x370);
    }
  }
  return;
}


