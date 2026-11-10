/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e35578; name: FUN_00e35578
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e35578(undefined8 *param_1,long *param_2,long param_3,uint param_4)

{
  int *piVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  long *local_90;
  long *local_88;
  ulong local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  *param_1 = &DAT_04608d50;
  param_1[1] = param_3;
  if (param_3 == 0) {
    lVar16 = 0;
  }
  else {
    piVar1 = (int *)(param_3 + 0x28);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar16 = param_1[1];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  plVar13 = param_1 + 0x1a;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_047de148 + 0x10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[2] = puVar2;
  param_1[3] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = PTR_DAT_047e31b0 + 0x10;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xc2) = 0;
  param_1[10] = 0;
  param_1[0xb] = puVar2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0x3c00000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  memset(plVar13,0,0xc4);
  param_1[0x37] = 0;
  param_1[0x35] = param_2;
  param_1[0x36] = 0x666666666666666;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = param_2;
  param_1[0x3b] = 0x666666666666666;
  param_1[0x3c] = 0;
  puVar2 = PTR_DAT_047daf58;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  if (((*puVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  plVar24 = (long *)PTR_DAT_047daf60;
  if (*(long *)(lVar16 + 0xc0) != 0) {
    plVar24 = (long *)(*(long *)(lVar16 + 0xc0) + 0x70);
  }
  if (((param_4 & 1) != 0) && (*plVar24 != 0)) {
    lVar16 = (**(code **)(*param_2 + 0x10))(param_2,0x130,8);
    if (lVar16 == 0) {
      plVar24 = (long *)0x0;
      uVar23 = 0;
      uVar22 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e3705c;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      FUN_00e378d8(lVar16);
      uVar22 = 0x130;
      uVar23 = 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      plVar24 = param_2;
    }
    puVar19 = (undefined8 *)*plVar13;
    *plVar13 = lVar16;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar16 = FUN_00c4e600();
      iVar5 = *(int *)(lVar16 + 0x12c8);
      iVar11 = iVar5 + 1;
      *(int *)(lVar16 + 0x12c8) = iVar11;
      if (*(int *)(lVar16 + 0x12cc) <= iVar5) {
        *(int *)(lVar16 + 0x12cc) = iVar11;
      }
      (**(code **)*puVar19)(puVar19);
      plVar13 = (long *)param_1[0x1b];
      uVar4 = param_1[0x1c];
      uVar17 = param_1[0x1d];
      uVar15 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar15 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar19,uVar4,uVar17);
      }
      else {
        FUN_00c48fe8(plVar13,puVar19,uVar4,uVar17);
      }
      lVar16 = FUN_00c4e600();
      iVar11 = *(int *)(lVar16 + 0x12c8) + -1;
      *(int *)(lVar16 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          plStack_68 = plVar13;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar20 = (long *)*plVar13;
          plVar18 = plVar13;
          if (plVar13[600] != 0) {
            plVar18 = plVar13 + plVar13[600] * 3;
          }
          if (plVar18 == plVar13) {
            local_80 = 0;
            uVar15 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13);
              plVar20 = (long *)*plVar13;
            }
            plVar3 = plVar13 + 3;
            if (plVar18 == plVar3) {
              local_80 = 0;
              uVar15 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              bVar10 = (long *)*plVar3 != plVar20;
              if (bVar10) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13 + 3);
                plVar20 = (long *)plVar13[3];
              }
              local_80 = (ulong)bVar10;
              plVar3 = plVar13 + 6;
              if (plVar18 == plVar3) {
                uVar15 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + 6);
                  plVar20 = (long *)plVar13[6];
                  local_80 = 2;
                }
                plVar3 = plVar13 + 9;
                if (plVar18 == plVar3) {
                  uVar15 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + 9);
                    plVar20 = (long *)plVar13[9];
                    local_80 = 3;
                  }
                  plVar3 = plVar13 + 0xc;
                  if (plVar18 == plVar3) {
                    uVar15 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + 0xc);
                      plVar20 = (long *)plVar13[0xc];
                      local_80 = 4;
                    }
                    plVar3 = plVar13 + 0xf;
                    if (plVar18 == plVar3) {
                      uVar15 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))
                                  (plVar20,plVar13 + local_80 * 3,plVar13 + 0xf);
                        plVar20 = (long *)plVar13[0xf];
                        local_80 = 5;
                      }
                      local_88 = plVar13 + 0x12;
                      uVar15 = 6;
                      if (plVar18 != local_88) {
                        do {
                          (**(code **)(*(long *)*local_88 + 0xd0))();
                          if ((long *)*local_88 != plVar20) {
                            (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,local_88)
                            ;
                            plVar20 = (long *)*local_88;
                            local_80 = uVar15;
                          }
                          local_88 = local_88 + 3;
                          uVar15 = uVar15 + 1;
                        } while (plVar18 != local_88);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + uVar15 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar16 + 0x12cc) = 0;
      }
    }
    param_1[0x1d] = uVar23;
    param_1[0x1b] = plVar24;
    param_1[0x1c] = uVar22;
  }
  if ((param_4 >> 1 & 1) != 0) {
    plVar13 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x78,8);
    if (plVar13 == (long *)0x0) {
      plVar24 = (long *)0x0;
      uVar22 = 0;
      uVar23 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_00e3705c;
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = param_2;
      puVar2 = PTR_DAT_047e32a0 + 0x10;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      *plVar13 = (long)puVar2;
      *(undefined1 *)(plVar13 + 1) = 0;
      plVar13[0xc] = 0;
      plVar13[2] = 0;
      plVar13[3] = 0;
      uVar23 = 0x78;
      uVar22 = 8;
      *(undefined4 *)(plVar13 + 0xd) = 0;
      *(undefined2 *)(plVar13 + 0xe) = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[6] = (long)param_2;
      plVar13[7] = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[10] = (long)param_2;
      plVar13[0xb] = 0x7ffffffffffffff;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      plVar24 = param_2;
    }
    puVar19 = (undefined8 *)param_1[0x1e];
    param_1[0x1e] = plVar13;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar16 = FUN_00c4e600();
      iVar5 = *(int *)(lVar16 + 0x12c8);
      iVar11 = iVar5 + 1;
      *(int *)(lVar16 + 0x12c8) = iVar11;
      if (*(int *)(lVar16 + 0x12cc) <= iVar5) {
        *(int *)(lVar16 + 0x12cc) = iVar11;
      }
      (**(code **)*puVar19)(puVar19);
      plVar13 = (long *)param_1[0x1f];
      uVar4 = param_1[0x20];
      uVar17 = param_1[0x21];
      uVar15 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar15 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar19,uVar4,uVar17);
      }
      else {
        FUN_00c48fe8(plVar13,puVar19,uVar4,uVar17);
      }
      lVar16 = FUN_00c4e600();
      iVar11 = *(int *)(lVar16 + 0x12c8) + -1;
      *(int *)(lVar16 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          plStack_68 = plVar13;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar20 = (long *)*plVar13;
          plVar18 = plVar13;
          if (plVar13[600] != 0) {
            plVar18 = plVar13 + plVar13[600] * 3;
          }
          if (plVar18 == plVar13) {
            local_80 = 0;
            uVar15 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13);
              plVar20 = (long *)*plVar13;
            }
            plVar3 = plVar13 + 3;
            if (plVar18 == plVar3) {
              local_80 = 0;
              uVar15 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              bVar10 = (long *)*plVar3 != plVar20;
              if (bVar10) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13 + 3);
                plVar20 = (long *)plVar13[3];
              }
              local_80 = (ulong)bVar10;
              plVar3 = plVar13 + 6;
              if (plVar18 == plVar3) {
                uVar15 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + 6);
                  plVar20 = (long *)plVar13[6];
                  local_80 = 2;
                }
                plVar3 = plVar13 + 9;
                if (plVar18 == plVar3) {
                  uVar15 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + 9);
                    plVar20 = (long *)plVar13[9];
                    local_80 = 3;
                  }
                  plVar3 = plVar13 + 0xc;
                  if (plVar18 == plVar3) {
                    uVar15 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + 0xc);
                      plVar20 = (long *)plVar13[0xc];
                      local_80 = 4;
                    }
                    plVar3 = plVar13 + 0xf;
                    if (plVar18 == plVar3) {
                      uVar15 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))
                                  (plVar20,plVar13 + local_80 * 3,plVar13 + 0xf);
                        plVar20 = (long *)plVar13[0xf];
                        local_80 = 5;
                      }
                      local_88 = plVar13 + 0x12;
                      uVar15 = 6;
                      if (plVar18 != local_88) {
                        do {
                          (**(code **)(*(long *)*local_88 + 0xd0))();
                          if ((long *)*local_88 != plVar20) {
                            (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,local_88)
                            ;
                            plVar20 = (long *)*local_88;
                            local_80 = uVar15;
                          }
                          local_88 = local_88 + 3;
                          uVar15 = uVar15 + 1;
                        } while (plVar18 != local_88);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + local_80 * 3,plVar13 + uVar15 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar16 + 0x12cc) = 0;
      }
    }
    param_1[0x1f] = plVar24;
    param_1[0x20] = uVar23;
    param_1[0x21] = uVar22;
  }
  lVar16 = tpidr_el0;
  if ((param_4 >> 2 & 1) != 0) {
    plVar13 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x50,8);
    if (plVar13 == (long *)0x0) {
      uVar22 = 0;
      uVar23 = 0;
      plVar24 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e3705c;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      memset(plVar13 + 1,0,0x48);
      puVar2 = PTR_DAT_047e3288;
      plVar13[4] = 0;
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = (long)(puVar2 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
          (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
         (lVar14 = *(long *)(lVar16 + 0x30), lVar14 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar14 = DAT_04859430;
        *(long *)(lVar16 + 0x30) = DAT_04859430;
      }
      plVar13[5] = lVar14;
      *(undefined4 *)(plVar13 + 8) = 0;
      plVar13[6] = 0x492492492492492;
      plVar13[7] = 0;
      uVar23 = 0x50;
      uVar22 = 8;
      *(undefined1 *)((long)plVar13 + 0x4c) = 0;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      plVar24 = param_2;
    }
    puVar19 = (undefined8 *)param_1[0x22];
    param_1[0x22] = plVar13;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar5 = *(int *)(lVar12 + 0x12c8);
      iVar11 = iVar5 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
        *(int *)(lVar12 + 0x12cc) = iVar11;
      }
      (**(code **)*puVar19)(puVar19);
      plVar13 = (long *)param_1[0x23];
      uVar4 = param_1[0x24];
      uVar17 = param_1[0x25];
      uVar15 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar19,uVar4,uVar17);
      }
      else {
        FUN_00c48fe8(plVar13,puVar19,uVar4,uVar17);
      }
      lVar12 = FUN_00c4e600();
      iVar11 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          plStack_68 = plVar13;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar20 = (long *)*plVar13;
          plVar18 = plVar13;
          if (plVar13[600] != 0) {
            plVar18 = plVar13 + plVar13[600] * 3;
          }
          if (plVar18 == plVar13) {
            local_88 = (long *)0x0;
            uVar15 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13);
              plVar20 = (long *)*plVar13;
            }
            plVar3 = plVar13 + 3;
            if (plVar18 == plVar3) {
              local_88 = (long *)0x0;
              uVar15 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              bVar10 = (long *)*plVar3 != plVar20;
              if (bVar10) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13 + 3);
                plVar20 = (long *)plVar13[3];
              }
              local_88 = (long *)(ulong)bVar10;
              plVar3 = plVar13 + 6;
              if (plVar18 == plVar3) {
                uVar15 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + (long)local_88 * 3,plVar13 + 6);
                  plVar20 = (long *)plVar13[6];
                  local_88 = (long *)0x2;
                }
                plVar3 = plVar13 + 9;
                if (plVar18 == plVar3) {
                  uVar15 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))
                              (plVar20,plVar13 + (long)local_88 * 3,plVar13 + 9);
                    plVar20 = (long *)plVar13[9];
                    local_88 = (long *)0x3;
                  }
                  plVar3 = plVar13 + 0xc;
                  if (plVar18 == plVar3) {
                    uVar15 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))
                                (plVar20,plVar13 + (long)local_88 * 3,plVar13 + 0xc);
                      plVar20 = (long *)plVar13[0xc];
                      local_88 = (long *)0x4;
                    }
                    plVar3 = plVar13 + 0xf;
                    if (plVar18 == plVar3) {
                      uVar15 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))
                                  (plVar20,plVar13 + (long)local_88 * 3,plVar13 + 0xf);
                        plVar20 = (long *)plVar13[0xf];
                        local_88 = (long *)0x5;
                      }
                      local_90 = plVar13 + 0x12;
                      uVar15 = 6;
                      if (plVar18 != local_90) {
                        do {
                          (**(code **)(*(long *)*local_90 + 0xd0))();
                          if ((long *)*local_90 != plVar20) {
                            (**(code **)(*plVar20 + 0x100))
                                      (plVar20,plVar13 + (long)local_88 * 3,local_90);
                            plVar20 = (long *)*local_90;
                            local_88 = (long *)uVar15;
                          }
                          local_90 = local_90 + 3;
                          uVar15 = uVar15 + 1;
                        } while (plVar18 != local_90);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + (long)local_88 * 3,plVar13 + uVar15 * 3)
          ;
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    param_1[0x23] = plVar24;
    param_1[0x24] = uVar23;
    param_1[0x25] = uVar22;
  }
  if ((param_4 >> 3 & 1) != 0) {
    lVar12 = (**(code **)(*param_2 + 0x10))(param_2,0x50,8);
    if (lVar12 == 0) {
      plVar13 = (long *)0x0;
      uVar22 = 0;
      uVar23 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00e3705c;
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      FUN_00e37788(lVar12);
      uVar23 = 0x50;
      uVar22 = 8;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      plVar13 = param_2;
    }
    puVar19 = (undefined8 *)param_1[0x26];
    param_1[0x26] = lVar12;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar5 = *(int *)(lVar12 + 0x12c8);
      iVar11 = iVar5 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
        *(int *)(lVar12 + 0x12cc) = iVar11;
      }
      (**(code **)*puVar19)(puVar19);
      plVar24 = (long *)param_1[0x27];
      uVar4 = param_1[0x28];
      uVar17 = param_1[0x29];
      uVar15 = (**(code **)(*plVar24 + 0xf8))(plVar24);
      if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar24 + 0x18))(plVar24,puVar19,uVar4,uVar17);
      }
      else {
        FUN_00c48fe8(plVar24,puVar19,uVar4,uVar17);
      }
      lVar12 = FUN_00c4e600();
      iVar11 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar24 = (long *)FUN_00c4e600();
        if (plVar24[600] != 0) {
          local_70 = plVar24 + plVar24[600] * 3;
          plStack_68 = plVar24;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar20 = (long *)*plVar24;
          plVar18 = plVar24;
          if (plVar24[600] != 0) {
            plVar18 = plVar24 + plVar24[600] * 3;
          }
          if (plVar18 == plVar24) {
            local_88 = (long *)0x0;
            uVar15 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar24 + 0xd0))();
            if ((long *)*plVar24 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar24,plVar24);
              plVar20 = (long *)*plVar24;
            }
            plVar3 = plVar24 + 3;
            if (plVar18 == plVar3) {
              local_88 = (long *)0x0;
              uVar15 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              bVar10 = (long *)*plVar3 != plVar20;
              if (bVar10) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar24,plVar24 + 3);
                plVar20 = (long *)plVar24[3];
              }
              local_88 = (long *)(ulong)bVar10;
              plVar3 = plVar24 + 6;
              if (plVar18 == plVar3) {
                uVar15 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar24 + (long)local_88 * 3,plVar24 + 6);
                  plVar20 = (long *)plVar24[6];
                  local_88 = (long *)0x2;
                }
                plVar3 = plVar24 + 9;
                if (plVar18 == plVar3) {
                  uVar15 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))
                              (plVar20,plVar24 + (long)local_88 * 3,plVar24 + 9);
                    plVar20 = (long *)plVar24[9];
                    local_88 = (long *)0x3;
                  }
                  plVar3 = plVar24 + 0xc;
                  if (plVar18 == plVar3) {
                    uVar15 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))
                                (plVar20,plVar24 + (long)local_88 * 3,plVar24 + 0xc);
                      plVar20 = (long *)plVar24[0xc];
                      local_88 = (long *)0x4;
                    }
                    plVar3 = plVar24 + 0xf;
                    if (plVar18 == plVar3) {
                      uVar15 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))
                                  (plVar20,plVar24 + (long)local_88 * 3,plVar24 + 0xf);
                        plVar20 = (long *)plVar24[0xf];
                        local_88 = (long *)0x5;
                      }
                      local_90 = plVar24 + 0x12;
                      uVar15 = 6;
                      if (plVar18 != local_90) {
                        do {
                          (**(code **)(*(long *)*local_90 + 0xd0))();
                          if ((long *)*local_90 != plVar20) {
                            (**(code **)(*plVar20 + 0x100))
                                      (plVar20,plVar24 + (long)local_88 * 3,local_90);
                            plVar20 = (long *)*local_90;
                            local_88 = (long *)uVar15;
                          }
                          local_90 = local_90 + 3;
                          uVar15 = uVar15 + 1;
                        } while (plVar18 != local_90);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar24 + (long)local_88 * 3,plVar24 + uVar15 * 3)
          ;
          plVar24[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    param_1[0x27] = plVar13;
    param_1[0x28] = uVar23;
    param_1[0x29] = uVar22;
  }
  if ((param_4 >> 4 & 1) != 0) {
    plVar13 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x70,0x10);
    if (plVar13 == (long *)0x0) {
      plVar24 = (long *)0x0;
      uVar22 = 0;
      uVar23 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e3705c;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar2 = PTR_DAT_047e3290;
      *(undefined1 *)(plVar13 + 1) = 0;
      lVar7 = _UNK_03caa988;
      lVar14 = _DAT_03caa980;
      plVar13[7] = 0;
      plVar13[6] = 0;
      plVar13[9] = lVar7;
      plVar13[8] = lVar14;
      uVar23 = 0x70;
      uVar22 = 0x10;
      *plVar13 = (long)(puVar2 + 0x10);
      lVar9 = _UNK_03cabe58;
      lVar8 = _DAT_03cabe50;
      *(undefined2 *)((long)plVar13 + 10) = 0xffff;
      plVar13[3] = lVar7;
      plVar13[2] = lVar14;
      plVar13[5] = lVar9;
      plVar13[4] = lVar8;
      plVar13[0xb] = lVar9;
      plVar13[10] = lVar8;
      plVar13[0xd] = 0;
      plVar13[0xc] = 0;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      plVar24 = param_2;
    }
    puVar19 = (undefined8 *)param_1[0x2a];
    param_1[0x2a] = plVar13;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar5 = *(int *)(lVar12 + 0x12c8);
      iVar11 = iVar5 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
        *(int *)(lVar12 + 0x12cc) = iVar11;
      }
      (**(code **)*puVar19)(puVar19);
      plVar13 = (long *)param_1[0x2b];
      uVar4 = param_1[0x2c];
      uVar17 = param_1[0x2d];
      uVar15 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar19,uVar4,uVar17);
      }
      else {
        FUN_00c48fe8(plVar13,puVar19,uVar4,uVar17);
      }
      lVar12 = FUN_00c4e600();
      iVar11 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          plStack_68 = plVar13;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar20 = (long *)*plVar13;
          plVar18 = plVar13;
          if (plVar13[600] != 0) {
            plVar18 = plVar13 + plVar13[600] * 3;
          }
          if (plVar18 == plVar13) {
            local_88 = (long *)0x0;
            uVar15 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13);
              plVar20 = (long *)*plVar13;
            }
            plVar3 = plVar13 + 3;
            if (plVar18 == plVar3) {
              local_88 = (long *)0x0;
              uVar15 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              bVar10 = (long *)*plVar3 != plVar20;
              if (bVar10) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar13,plVar13 + 3);
                plVar20 = (long *)plVar13[3];
              }
              local_88 = (long *)(ulong)bVar10;
              plVar3 = plVar13 + 6;
              if (plVar18 == plVar3) {
                uVar15 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + (long)local_88 * 3,plVar13 + 6);
                  plVar20 = (long *)plVar13[6];
                  local_88 = (long *)0x2;
                }
                plVar3 = plVar13 + 9;
                if (plVar18 == plVar3) {
                  uVar15 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))
                              (plVar20,plVar13 + (long)local_88 * 3,plVar13 + 9);
                    plVar20 = (long *)plVar13[9];
                    local_88 = (long *)0x3;
                  }
                  plVar3 = plVar13 + 0xc;
                  if (plVar18 == plVar3) {
                    uVar15 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))
                                (plVar20,plVar13 + (long)local_88 * 3,plVar13 + 0xc);
                      plVar20 = (long *)plVar13[0xc];
                      local_88 = (long *)0x4;
                    }
                    plVar3 = plVar13 + 0xf;
                    if (plVar18 == plVar3) {
                      uVar15 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))
                                  (plVar20,plVar13 + (long)local_88 * 3,plVar13 + 0xf);
                        plVar20 = (long *)plVar13[0xf];
                        local_88 = (long *)0x5;
                      }
                      local_90 = plVar13 + 0x12;
                      uVar15 = 6;
                      if (plVar18 != local_90) {
                        do {
                          (**(code **)(*(long *)*local_90 + 0xd0))();
                          if ((long *)*local_90 != plVar20) {
                            (**(code **)(*plVar20 + 0x100))
                                      (plVar20,plVar13 + (long)local_88 * 3,local_90);
                            plVar20 = (long *)*local_90;
                            local_88 = (long *)uVar15;
                          }
                          local_90 = local_90 + 3;
                          uVar15 = uVar15 + 1;
                        } while (plVar18 != local_90);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar13 + (long)local_88 * 3,plVar13 + uVar15 * 3)
          ;
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    param_1[0x2b] = plVar24;
    param_1[0x2c] = uVar23;
    param_1[0x2d] = uVar22;
  }
  if ((param_4 >> 5 & 1) != 0) {
    plVar13 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    if (plVar13 == (long *)0x0) {
      uVar22 = 0;
      uVar23 = 0;
      param_2 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00e3705c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      memset(plVar13 + 1,0,0x58);
      puVar2 = PTR_DAT_047e3298;
      plVar13[6] = 0;
      plVar13[2] = 0;
      plVar13[3] = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      *plVar13 = (long)(puVar2 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
          (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
         (lVar14 = *(long *)(lVar16 + 0x30), lVar14 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar14 = DAT_04859430;
        *(long *)(lVar16 + 0x30) = DAT_04859430;
      }
      plVar13[7] = lVar14;
      *(undefined4 *)(plVar13 + 10) = 0;
      plVar13[8] = 0x492492492492492;
      plVar13[9] = 0;
      uVar23 = 0x60;
      uVar22 = 8;
      *(undefined4 *)(plVar13 + 0xb) = 0xbf800000;
      *(undefined1 *)((long)plVar13 + 0x5c) = 0;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    puVar19 = (undefined8 *)param_1[0x2e];
    param_1[0x2e] = plVar13;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar16 = FUN_00c4e600();
      iVar5 = *(int *)(lVar16 + 0x12c8);
      iVar11 = iVar5 + 1;
      *(int *)(lVar16 + 0x12c8) = iVar11;
      if (*(int *)(lVar16 + 0x12cc) <= iVar5) {
        *(int *)(lVar16 + 0x12cc) = iVar11;
      }
      (**(code **)*puVar19)(puVar19);
      plVar13 = (long *)param_1[0x2f];
      uVar4 = param_1[0x30];
      uVar17 = param_1[0x31];
      uVar15 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar15 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar19,uVar4,uVar17);
      }
      else {
        FUN_00c48fe8(plVar13,puVar19,uVar4,uVar17);
      }
      lVar16 = FUN_00c4e600();
      iVar11 = *(int *)(lVar16 + 0x12c8) + -1;
      *(int *)(lVar16 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          plStack_68 = plVar13;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar18 = (long *)*plVar13;
          plVar24 = plVar13;
          if (plVar13[600] != 0) {
            plVar24 = plVar13 + plVar13[600] * 3;
          }
          if (plVar24 == plVar13) {
            uVar21 = 0;
            uVar15 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13);
              plVar18 = (long *)*plVar13;
            }
            plVar20 = plVar13 + 3;
            if (plVar24 == plVar20) {
              uVar21 = 0;
              uVar15 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              bVar10 = (long *)*plVar20 != plVar18;
              if (bVar10) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13 + 3);
                plVar18 = (long *)plVar13[3];
              }
              uVar21 = (ulong)bVar10;
              plVar20 = plVar13 + 6;
              if (plVar24 == plVar20) {
                uVar15 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar21 * 3,plVar13 + 6);
                  plVar18 = (long *)plVar13[6];
                  uVar21 = 2;
                }
                plVar20 = plVar13 + 9;
                if (plVar24 == plVar20) {
                  uVar15 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar21 * 3,plVar13 + 9);
                    plVar18 = (long *)plVar13[9];
                    uVar21 = 3;
                  }
                  plVar20 = plVar13 + 0xc;
                  if (plVar24 == plVar20) {
                    uVar15 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar21 * 3,plVar13 + 0xc);
                      plVar18 = (long *)plVar13[0xc];
                      uVar21 = 4;
                    }
                    plVar20 = plVar13 + 0xf;
                    if (plVar24 == plVar20) {
                      uVar15 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar20 + 0xd0))();
                      if ((long *)*plVar20 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar21 * 3,plVar13 + 0xf);
                        plVar18 = (long *)plVar13[0xf];
                        uVar21 = 5;
                      }
                      uVar15 = 6;
                      for (local_78 = plVar13 + 0x12; plVar24 != local_78; local_78 = local_78 + 3)
                      {
                        (**(code **)(*(long *)*local_78 + 0xd0))();
                        if ((long *)*local_78 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar21 * 3,local_78);
                          plVar18 = (long *)*local_78;
                          uVar21 = uVar15;
                        }
                        uVar15 = uVar15 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar21 * 3,plVar13 + uVar15 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar16 + 0x12cc) = 0;
      }
    }
    param_1[0x2f] = param_2;
    param_1[0x30] = uVar23;
    param_1[0x31] = uVar22;
  }
  return;
}


