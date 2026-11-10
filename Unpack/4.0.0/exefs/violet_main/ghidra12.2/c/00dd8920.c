/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd8920; name: FUN_00dd8920
 */


void FUN_00dd8920(long param_1,undefined8 *param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  byte bVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long *local_98;
  ulong local_90;
  long *local_88;
  long *local_80;
  long *local_70;
  long *plStack_68;
  
  puVar19 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar19 == (undefined8 *)0x0) {
    plVar9 = *(long **)(param_1 + 8);
    puVar19 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0xd8,8);
    if (puVar19 == (undefined8 *)0x0) {
      plVar9 = (long *)0x0;
      uVar20 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_00dd91dc;
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar9;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      *puVar19 = 0;
      puVar19[1] = 0;
      puVar19[2] = 0;
      puVar19[3] = plVar9;
      puVar19[7] = 0;
      puVar19[8] = 0;
      *(undefined4 *)(puVar19 + 6) = 0;
      puVar19[0xf] = 0;
      *(undefined4 *)(puVar19 + 0x10) = 0;
      puVar19[4] = 0x555555555555555;
      puVar19[5] = 0;
      puVar19[0xb] = 0;
      puVar19[0xc] = 0x400000010;
      puVar19[9] = 0;
      puVar19[10] = 0;
      puVar19[0xd] = 0xbf800000bf800000;
      puVar19[0xe] = 0;
      memset(puVar19 + 0x11,0,0x49);
      uVar17 = 8;
      uVar20 = 0xd8;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    lVar16 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar19;
    if (lVar16 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar4 = *(int *)(lVar12 + 0x12c8);
      iVar8 = iVar4 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar8;
      if (*(int *)(lVar12 + 0x12cc) <= iVar4) {
        *(int *)(lVar12 + 0x12cc) = iVar8;
      }
      FUN_00ee9b24(lVar16);
      plVar14 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar13 = *(undefined8 *)(param_1 + 0x1d8);
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,uVar3,uVar13);
      }
      else {
        FUN_00c48fe8(plVar14,lVar16,uVar3,uVar13);
      }
      lVar16 = FUN_00c4e600();
      iVar8 = *(int *)(lVar16 + 0x12c8) + -1;
      *(int *)(lVar16 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_70 = plVar14 + plVar14[600] * 3;
          plStack_68 = plVar14;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar18 = (long *)*plVar14;
          plVar2 = plVar14;
          if (plVar14[600] != 0) {
            plVar2 = plVar14 + plVar14[600] * 3;
          }
          if (plVar2 == plVar14) {
            local_80 = (long *)0x0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            if ((long *)*plVar14 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar14,plVar14);
              plVar18 = (long *)*plVar14;
            }
            plVar1 = plVar14 + 3;
            if (plVar2 == plVar1) {
              local_80 = (long *)0x0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar7 = (long *)*plVar1 != plVar18;
              if (bVar7) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar14,plVar14 + 3);
                plVar18 = (long *)plVar14[3];
              }
              local_80 = (long *)(ulong)bVar7;
              plVar1 = plVar14 + 6;
              if (plVar2 == plVar1) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar14 + (long)local_80 * 3,plVar14 + 6);
                  plVar18 = (long *)plVar14[6];
                  local_80 = (long *)0x2;
                }
                plVar1 = plVar14 + 9;
                if (plVar2 == plVar1) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))
                              (plVar18,plVar14 + (long)local_80 * 3,plVar14 + 9);
                    plVar18 = (long *)plVar14[9];
                    local_80 = (long *)0x3;
                  }
                  plVar1 = plVar14 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))
                                (plVar18,plVar14 + (long)local_80 * 3,plVar14 + 0xc);
                      plVar18 = (long *)plVar14[0xc];
                      local_80 = (long *)0x4;
                    }
                    plVar1 = plVar14 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))
                                  (plVar18,plVar14 + (long)local_80 * 3,plVar14 + 0xf);
                        plVar18 = (long *)plVar14[0xf];
                        local_80 = (long *)0x5;
                      }
                      uVar11 = 6;
                      for (local_88 = plVar14 + 0x12; plVar2 != local_88; local_88 = local_88 + 3) {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))
                                    (plVar18,plVar14 + (long)local_80 * 3,local_88);
                          plVar18 = (long *)*local_88;
                          local_80 = (long *)uVar11;
                        }
                        uVar11 = uVar11 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar14 + (long)local_80 * 3,plVar14 + uVar11 * 3)
          ;
          plVar14[600] = 0;
        }
        *(undefined4 *)(lVar16 + 0x12cc) = 0;
      }
      puVar19 = *(undefined8 **)(param_1 + 0x1c0);
    }
    bVar6 = 0;
    *(undefined8 *)(param_1 + 0x1d8) = uVar17;
    *(long **)(param_1 + 0x1c8) = plVar9;
    *(undefined8 *)(param_1 + 0x1d0) = uVar20;
  }
  else {
    bVar6 = 1;
  }
  if (puVar19[7] == 0) {
    plVar9 = *(long **)(param_1 + 8);
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,8);
    if (puVar10 == (undefined8 *)0x0) {
      plVar9 = (long *)0x0;
      uVar17 = 0;
      uVar20 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_00dd91dc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar9;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined1 *)((long)puVar10 + 0x29) = 1;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar20 = 8;
      *puVar10 = 0;
      puVar10[1] = 0;
      uVar17 = 0x30;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    lVar16 = puVar19[7];
    puVar19[7] = puVar10;
    if (lVar16 != 0) {
      FUN_00c4e600(puVar19);
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar4 = *(int *)(lVar12 + 0x12c8);
      iVar8 = iVar4 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar8;
      if (*(int *)(lVar12 + 0x12cc) <= iVar4) {
        *(int *)(lVar12 + 0x12cc) = iVar8;
      }
      FUN_00dd9528(lVar16);
      plVar14 = (long *)puVar19[8];
      uVar3 = puVar19[9];
      uVar13 = puVar19[10];
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,uVar3,uVar13);
      }
      else {
        FUN_00c48fe8(plVar14,lVar16,uVar3,uVar13);
      }
      lVar16 = FUN_00c4e600();
      iVar8 = *(int *)(lVar16 + 0x12c8) + -1;
      *(int *)(lVar16 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_70 = plVar14 + plVar14[600] * 3;
          plStack_68 = plVar14;
          FUN_00c4ea30(&plStack_68,&local_70);
          local_80 = (long *)*plVar14;
          plVar2 = plVar14;
          if (plVar14[600] != 0) {
            plVar2 = plVar14 + plVar14[600] * 3;
          }
          if (plVar2 == plVar14) {
            local_90 = 0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            if ((long *)*plVar14 != local_80) {
              (**(code **)(*local_80 + 0x100))(local_80,plVar14,plVar14);
              local_80 = (long *)*plVar14;
            }
            plVar18 = plVar14 + 3;
            if (plVar2 == plVar18) {
              local_90 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              bVar7 = (long *)*plVar18 != local_80;
              if (bVar7) {
                (**(code **)(*local_80 + 0x100))(local_80,plVar14,plVar14 + 3);
                local_80 = (long *)plVar14[3];
              }
              local_90 = (ulong)bVar7;
              plVar18 = plVar14 + 6;
              if (plVar2 == plVar18) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                if ((long *)*plVar18 != local_80) {
                  (**(code **)(*local_80 + 0x100))(local_80,plVar14 + local_90 * 3,plVar14 + 6);
                  local_80 = (long *)plVar14[6];
                  local_90 = 2;
                }
                plVar18 = plVar14 + 9;
                if (plVar2 == plVar18) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != local_80) {
                    (**(code **)(*local_80 + 0x100))(local_80,plVar14 + local_90 * 3,plVar14 + 9);
                    local_80 = (long *)plVar14[9];
                    local_90 = 3;
                  }
                  plVar18 = plVar14 + 0xc;
                  if (plVar2 == plVar18) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != local_80) {
                      (**(code **)(*local_80 + 0x100))
                                (local_80,plVar14 + local_90 * 3,plVar14 + 0xc);
                      local_80 = (long *)plVar14[0xc];
                      local_90 = 4;
                    }
                    plVar18 = plVar14 + 0xf;
                    if (plVar2 == plVar18) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar18 + 0xd0))();
                      if ((long *)*plVar18 != local_80) {
                        (**(code **)(*local_80 + 0x100))
                                  (local_80,plVar14 + local_90 * 3,plVar14 + 0xf);
                        local_80 = (long *)plVar14[0xf];
                        local_90 = 5;
                      }
                      uVar11 = 6;
                      for (local_98 = plVar14 + 0x12; plVar2 != local_98; local_98 = local_98 + 3) {
                        (**(code **)(*(long *)*local_98 + 0xd0))();
                        if ((long *)*local_98 != local_80) {
                          (**(code **)(*local_80 + 0x100))(local_80,plVar14 + local_90 * 3,local_98)
                          ;
                          local_80 = (long *)*local_98;
                          local_90 = uVar11;
                        }
                        uVar11 = uVar11 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_80 + 0x100))(local_80,plVar14 + local_90 * 3,plVar14 + uVar11 * 3);
          plVar14[600] = 0;
        }
        *(undefined4 *)(lVar16 + 0x12cc) = 0;
      }
    }
    puVar19[8] = plVar9;
    puVar19[9] = uVar17;
    bVar15 = 0;
    puVar19[10] = uVar20;
    puVar19 = *(undefined8 **)(param_1 + 0x1c0);
  }
  else {
    bVar15 = 1;
  }
  lVar16 = puVar19[7];
  param_3 = param_3 & 1;
  plVar14 = (long *)*param_2;
  plVar9 = *(long **)(lVar16 + 0x20);
  if (plVar9 == plVar14) {
    if (*(byte *)(lVar16 + 0x29) == param_3) {
      if ((bool)(bVar6 & bVar15)) {
        return;
      }
      goto LAB_00dd8988;
    }
  }
  else {
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 5;
      do {
        lVar12 = *plVar9;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *(int *)plVar9 = (int)lVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar9 = *(long **)(lVar16 + 0x20);
    }
    *(long **)(lVar16 + 0x20) = plVar14;
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 5;
      do {
        lVar12 = *plVar14;
        iVar8 = (int)lVar12 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *(int *)plVar14 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (*(byte *)(lVar16 + 0x29) == param_3) goto LAB_00dd8988;
  }
  *(byte *)(lVar16 + 0x29) = param_3;
LAB_00dd8988:
  lVar16 = *(long *)(param_1 + 0x208);
  lVar12 = *(long *)(param_1 + 0x210);
  if (((lVar16 != lVar12) && (*(undefined1 *)(lVar16 + 0x10) = 1, lVar16 + 0x18 != lVar12)) &&
     (*(undefined1 *)(lVar16 + 0x28) = 1, lVar16 + 0x30 != lVar12)) {
    *(undefined1 *)(lVar16 + 0x40) = 1;
    for (lVar16 = lVar16 + 0x48; lVar16 != lVar12; lVar16 = lVar16 + 0x18) {
      *(undefined1 *)(lVar16 + 0x10) = 1;
    }
  }
  return;
}


