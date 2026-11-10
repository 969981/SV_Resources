/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e657bc; name: FUN_00e657bc
 */


void FUN_00e657bc(long param_1,int param_2,int param_3,long param_4,long *param_5,int param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *local_a0;
  ulong local_98;
  ulong local_90;
  long *local_80;
  long *local_70;
  long *plStack_68;
  
  puVar14 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar14 == (undefined8 *)0x0) {
    plVar10 = *(long **)(param_1 + 8);
    puVar14 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0xd8,8);
    if (puVar14 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      uVar15 = 0;
      uVar16 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar10;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = plVar10;
      puVar14[7] = 0;
      puVar14[8] = 0;
      *(undefined4 *)(puVar14 + 6) = 0;
      puVar14[0xf] = 0;
      *(undefined4 *)(puVar14 + 0x10) = 0;
      puVar14[4] = 0x555555555555555;
      puVar14[5] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0x400000010;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xd] = 0xbf800000bf800000;
      puVar14[0xe] = 0;
      memset(puVar14 + 0x11,0,0x49);
      uVar16 = 8;
      uVar15 = 0xd8;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    lVar13 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar14;
    if (lVar13 != 0) {
      FUN_00c4e600(param_1);
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar4 = *(int *)(lVar11 + 0x12c8);
      iVar7 = iVar4 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar7;
      if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
        *(int *)(lVar11 + 0x12cc) = iVar7;
      }
      FUN_00ee9b24(lVar13);
      plVar9 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar12 = *(undefined8 *)(param_1 + 0x1d8);
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,uVar3,uVar12);
      }
      else {
        FUN_00c48fe8(plVar9,lVar13,uVar3,uVar12);
      }
      lVar13 = FUN_00c4e600();
      iVar7 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          plStack_68 = plVar9;
          FUN_00c4ea30(&plStack_68,&local_70);
          local_80 = (long *)*plVar9;
          plVar2 = plVar9;
          if (plVar9[600] != 0) {
            plVar2 = plVar9 + plVar9[600] * 3;
          }
          if (plVar2 == plVar9) {
            local_98 = 0;
            local_90 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != local_80) {
              (**(code **)(*local_80 + 0x100))(local_80,plVar9,plVar9);
              local_80 = (long *)*plVar9;
            }
            plVar1 = plVar9 + 3;
            if (plVar2 == plVar1) {
              local_90 = 0;
              local_98 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar6 = (long *)*plVar1 != local_80;
              if (bVar6) {
                (**(code **)(*local_80 + 0x100))(local_80,plVar9,plVar9 + 3);
                local_80 = (long *)plVar9[3];
              }
              local_90 = (ulong)bVar6;
              plVar1 = plVar9 + 6;
              if (plVar2 == plVar1) {
                local_98 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != local_80) {
                  (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + 6);
                  local_80 = (long *)plVar9[6];
                  local_90 = 2;
                }
                plVar1 = plVar9 + 9;
                if (plVar2 == plVar1) {
                  local_98 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != local_80) {
                    (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + 9);
                    local_80 = (long *)plVar9[9];
                    local_90 = 3;
                  }
                  plVar1 = plVar9 + 0xc;
                  if (plVar2 == plVar1) {
                    local_98 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != local_80) {
                      (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + 0xc);
                      local_80 = (long *)plVar9[0xc];
                      local_90 = 4;
                    }
                    plVar1 = plVar9 + 0xf;
                    if (plVar2 == plVar1) {
                      local_98 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != local_80) {
                        (**(code **)(*local_80 + 0x100))
                                  (local_80,plVar9 + local_90 * 3,plVar9 + 0xf);
                        local_80 = (long *)plVar9[0xf];
                        local_90 = 5;
                      }
                      local_a0 = plVar9 + 0x12;
                      if (plVar2 == local_a0) {
                        local_98 = 6;
                      }
                      else {
                        local_98 = 6;
                        do {
                          (**(code **)(*(long *)*local_a0 + 0xd0))();
                          if ((long *)*local_a0 != local_80) {
                            (**(code **)(*local_80 + 0x100))
                                      (local_80,plVar9 + local_90 * 3,local_a0);
                            local_80 = (long *)*local_a0;
                            local_90 = local_98;
                          }
                          local_98 = local_98 + 1;
                          local_a0 = local_a0 + 3;
                        } while (plVar2 != local_a0);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_80 + 0x100))(local_80,plVar9 + local_90 * 3,plVar9 + local_98 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
      puVar14 = *(undefined8 **)(param_1 + 0x1c0);
    }
    *(long **)(param_1 + 0x1c8) = plVar10;
    *(undefined8 *)(param_1 + 0x1d0) = uVar15;
    *(undefined8 *)(param_1 + 0x1d8) = uVar16;
  }
  if (*(int *)(puVar14 + 0xe) != param_2) {
    *(int *)(puVar14 + 0xe) = param_2;
  }
  if (*(int *)((long)puVar14 + 0x74) != param_3) {
    *(int *)((long)puVar14 + 0x74) = param_3;
  }
  if (puVar14[0x16] != param_4) {
    puVar14[0x16] = param_4;
  }
  plVar10 = (long *)puVar14[0x17];
  param_5 = (long *)*param_5;
  if (plVar10 != param_5) {
    if (param_5 != (long *)0x0) {
      plVar10 = param_5 + 5;
      do {
        lVar13 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)lVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar10 = (long *)puVar14[0x17];
    }
    puVar14[0x17] = param_5;
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 5;
      do {
        lVar13 = *plVar9;
        iVar7 = (int)lVar13 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
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
  if (*(int *)(puVar14 + 0x18) != *(int *)(&DAT_03d64d00 + (long)param_6 * 4)) {
    *(int *)(puVar14 + 0x18) = *(int *)(&DAT_03d64d00 + (long)param_6 * 4);
  }
  lVar13 = *(long *)(param_1 + 0x208);
  lVar11 = *(long *)(param_1 + 0x210);
  if (((lVar13 != lVar11) && (*(undefined1 *)(lVar13 + 0x10) = 1, lVar13 + 0x18 != lVar11)) &&
     (*(undefined1 *)(lVar13 + 0x28) = 1, lVar13 + 0x30 != lVar11)) {
    *(undefined1 *)(lVar13 + 0x40) = 1;
    for (lVar13 = lVar13 + 0x48; lVar13 != lVar11; lVar13 = lVar13 + 0x18) {
      *(undefined1 *)(lVar13 + 0x10) = 1;
    }
  }
  return;
}


