/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd7d48; name: FUN_00dd7d48
 */


void FUN_00dd7d48(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong local_98;
  long *local_88;
  ulong local_80;
  long *local_70;
  long *plStack_68;
  
  puVar17 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar17 == (undefined8 *)0x0) {
    plVar10 = *(long **)(param_1 + 8);
    puVar17 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0xd8,8);
    if (puVar17 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00dd8390;
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar10;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar17[3] = plVar10;
      puVar17[7] = 0;
      puVar17[8] = 0;
      *(undefined4 *)(puVar17 + 6) = 0;
      puVar17[0xf] = 0;
      *(undefined4 *)(puVar17 + 0x10) = 0;
      puVar17[4] = 0x555555555555555;
      puVar17[5] = 0;
      puVar17[0xb] = 0;
      puVar17[0xc] = 0x400000010;
      puVar17[9] = 0;
      puVar17[10] = 0;
      puVar17[0xd] = 0xbf800000bf800000;
      puVar17[0xe] = 0;
      memset(puVar17 + 0x11,0,0x49);
      uVar19 = 8;
      uVar18 = 0xd8;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    lVar13 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar17;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar14 = FUN_00c4e600();
      iVar4 = *(int *)(lVar14 + 0x12c8);
      iVar9 = iVar4 + 1;
      *(int *)(lVar14 + 0x12c8) = iVar9;
      if (*(int *)(lVar14 + 0x12cc) <= iVar4) {
        *(int *)(lVar14 + 0x12cc) = iVar9;
      }
      FUN_00ee9b24(lVar13);
      plVar16 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar15 = *(undefined8 *)(param_1 + 0x1d8);
      uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,uVar3,uVar15);
      }
      else {
        FUN_00c48fe8(plVar16,lVar13,uVar3,uVar15);
      }
      lVar13 = FUN_00c4e600();
      iVar9 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar16 = (long *)FUN_00c4e600();
        if (plVar16[600] != 0) {
          local_70 = plVar16 + plVar16[600] * 3;
          plStack_68 = plVar16;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar20 = (long *)*plVar16;
          plVar2 = plVar16;
          if (plVar16[600] != 0) {
            plVar2 = plVar16 + plVar16[600] * 3;
          }
          if (plVar2 == plVar16) {
            local_80 = 0;
            uVar12 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar16 + 0xd0))();
            if ((long *)*plVar16 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar16,plVar16);
              plVar20 = (long *)*plVar16;
            }
            plVar1 = plVar16 + 3;
            if (plVar2 == plVar1) {
              local_80 = 0;
              uVar12 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar8 = (long *)*plVar1 != plVar20;
              if (bVar8) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar16,plVar16 + 3);
                plVar20 = (long *)plVar16[3];
              }
              local_80 = (ulong)bVar8;
              plVar1 = plVar16 + 6;
              if (plVar2 == plVar1) {
                uVar12 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar16 + local_80 * 3,plVar16 + 6);
                  plVar20 = (long *)plVar16[6];
                  local_80 = 2;
                }
                plVar1 = plVar16 + 9;
                if (plVar2 == plVar1) {
                  uVar12 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar16 + local_80 * 3,plVar16 + 9);
                    plVar20 = (long *)plVar16[9];
                    local_80 = 3;
                  }
                  plVar1 = plVar16 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar12 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar16 + local_80 * 3,plVar16 + 0xc);
                      plVar20 = (long *)plVar16[0xc];
                      local_80 = 4;
                    }
                    plVar1 = plVar16 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar12 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))
                                  (plVar20,plVar16 + local_80 * 3,plVar16 + 0xf);
                        plVar20 = (long *)plVar16[0xf];
                        local_80 = 5;
                      }
                      uVar12 = 6;
                      for (local_88 = plVar16 + 0x12; plVar2 != local_88; local_88 = local_88 + 3) {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar20) {
                          (**(code **)(*plVar20 + 0x100))(plVar20,plVar16 + local_80 * 3,local_88);
                          plVar20 = (long *)*local_88;
                          local_80 = uVar12;
                        }
                        uVar12 = uVar12 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar16 + local_80 * 3,plVar16 + uVar12 * 3);
          plVar16[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
      puVar17 = *(undefined8 **)(param_1 + 0x1c0);
    }
    bVar7 = 0;
    *(long **)(param_1 + 0x1c8) = plVar10;
    *(undefined8 *)(param_1 + 0x1d0) = uVar18;
    *(undefined8 *)(param_1 + 0x1d8) = uVar19;
  }
  else {
    bVar7 = 1;
  }
  if (puVar17[7] == 0) {
    plVar10 = *(long **)(param_1 + 8);
    puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
    if (puVar11 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00dd8390:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar10;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(undefined1 *)((long)puVar11 + 0x29) = 1;
      puVar11[2] = 0;
      puVar11[3] = 0;
      uVar19 = 8;
      *puVar11 = 0;
      puVar11[1] = 0;
      uVar18 = 0x30;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    lVar13 = puVar17[7];
    puVar17[7] = puVar11;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar14 = FUN_00c4e600();
      iVar4 = *(int *)(lVar14 + 0x12c8);
      iVar9 = iVar4 + 1;
      *(int *)(lVar14 + 0x12c8) = iVar9;
      if (*(int *)(lVar14 + 0x12cc) <= iVar4) {
        *(int *)(lVar14 + 0x12cc) = iVar9;
      }
      FUN_00dd9528(lVar13);
      plVar16 = (long *)puVar17[8];
      uVar3 = puVar17[9];
      uVar15 = puVar17[10];
      uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,uVar3,uVar15);
      }
      else {
        FUN_00c48fe8(plVar16,lVar13,uVar3,uVar15);
      }
      lVar13 = FUN_00c4e600();
      iVar9 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar16 = (long *)FUN_00c4e600();
        if (plVar16[600] != 0) {
          local_70 = plVar16 + plVar16[600] * 3;
          plStack_68 = plVar16;
          FUN_00c4ea30(&plStack_68,&local_70);
          local_88 = (long *)*plVar16;
          plVar2 = plVar16;
          if (plVar16[600] != 0) {
            plVar2 = plVar16 + plVar16[600] * 3;
          }
          if (plVar2 == plVar16) {
            local_98 = 0;
            uVar12 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar16 + 0xd0))();
            if ((long *)*plVar16 != local_88) {
              (**(code **)(*local_88 + 0x100))(local_88,plVar16,plVar16);
              local_88 = (long *)*plVar16;
            }
            plVar20 = plVar16 + 3;
            if (plVar2 == plVar20) {
              local_98 = 0;
              uVar12 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              bVar8 = (long *)*plVar20 != local_88;
              if (bVar8) {
                (**(code **)(*local_88 + 0x100))(local_88,plVar16,plVar16 + 3);
                local_88 = (long *)plVar16[3];
              }
              local_98 = (ulong)bVar8;
              plVar20 = plVar16 + 6;
              if (plVar2 == plVar20) {
                uVar12 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != local_88) {
                  (**(code **)(*local_88 + 0x100))(local_88,plVar16 + local_98 * 3,plVar16 + 6);
                  local_88 = (long *)plVar16[6];
                  local_98 = 2;
                }
                plVar20 = plVar16 + 9;
                if (plVar2 == plVar20) {
                  uVar12 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != local_88) {
                    (**(code **)(*local_88 + 0x100))(local_88,plVar16 + local_98 * 3,plVar16 + 9);
                    local_88 = (long *)plVar16[9];
                    local_98 = 3;
                  }
                  plVar20 = plVar16 + 0xc;
                  if (plVar2 == plVar20) {
                    uVar12 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != local_88) {
                      (**(code **)(*local_88 + 0x100))
                                (local_88,plVar16 + local_98 * 3,plVar16 + 0xc);
                      local_88 = (long *)plVar16[0xc];
                      local_98 = 4;
                    }
                    plVar20 = plVar16 + 0xf;
                    if (plVar2 == plVar20) {
                      uVar12 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar20 + 0xd0))();
                      if ((long *)*plVar20 != local_88) {
                        (**(code **)(*local_88 + 0x100))
                                  (local_88,plVar16 + local_98 * 3,plVar16 + 0xf);
                        local_88 = (long *)plVar16[0xf];
                        local_98 = 5;
                      }
                      uVar12 = 6;
                      for (plVar20 = plVar16 + 0x12; plVar2 != plVar20; plVar20 = plVar20 + 3) {
                        (**(code **)(*(long *)*plVar20 + 0xd0))();
                        if ((long *)*plVar20 != local_88) {
                          (**(code **)(*local_88 + 0x100))(local_88,plVar16 + local_98 * 3,plVar20);
                          local_88 = (long *)*plVar20;
                          local_98 = uVar12;
                        }
                        uVar12 = uVar12 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_88 + 0x100))(local_88,plVar16 + local_98 * 3,plVar16 + uVar12 * 3);
          plVar16[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
    }
    puVar17[8] = plVar10;
    puVar17[9] = uVar18;
    bVar6 = 0;
    puVar17[10] = uVar19;
    puVar17 = *(undefined8 **)(param_1 + 0x1c0);
  }
  else {
    bVar6 = 1;
  }
  lVar13 = puVar17[7];
  plVar10 = *(long **)(lVar13 + (ulong)param_2 * 8);
  plVar16 = (long *)*param_3;
  if (plVar10 == plVar16) {
    if ((bool)(bVar7 & bVar6)) {
      return;
    }
  }
  else {
    if (plVar16 != (long *)0x0) {
      plVar10 = plVar16 + 5;
      do {
        lVar14 = *plVar10;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *(int *)plVar10 = (int)lVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar10 = *(long **)(lVar13 + (ulong)param_2 * 8);
    }
    *(long **)(lVar13 + (ulong)param_2 * 8) = plVar16;
    if (plVar10 != (long *)0x0) {
      plVar16 = plVar10 + 5;
      do {
        lVar13 = *plVar16;
        iVar9 = (int)lVar13 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *(int *)plVar16 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x208);
  lVar14 = *(long *)(param_1 + 0x210);
  if (((lVar13 != lVar14) && (*(undefined1 *)(lVar13 + 0x10) = 1, lVar13 + 0x18 != lVar14)) &&
     (*(undefined1 *)(lVar13 + 0x28) = 1, lVar13 + 0x30 != lVar14)) {
    *(undefined1 *)(lVar13 + 0x40) = 1;
    for (lVar13 = lVar13 + 0x48; lVar13 != lVar14; lVar13 = lVar13 + 0x18) {
      *(undefined1 *)(lVar13 + 0x10) = 1;
    }
  }
  return;
}


