/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4d470; name: FUN_00c4d470
 */


void FUN_00c4d470(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *local_88;
  ulong local_80;
  long *local_70;
  long *plStack_68;
  
  puVar16 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar16 == (undefined8 *)0x0) {
    plVar11 = *(long **)(param_1 + 8);
    puVar16 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0xd8,8);
    if (puVar16 == (undefined8 *)0x0) {
      plVar11 = (long *)0x0;
      uVar20 = 0;
      uVar19 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar11;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[3] = plVar11;
      puVar16[7] = 0;
      puVar16[8] = 0;
      *(undefined4 *)(puVar16 + 6) = 0;
      puVar16[0xf] = 0;
      *(undefined4 *)(puVar16 + 0x10) = 0;
      puVar16[4] = 0x555555555555555;
      puVar16[5] = 0;
      puVar16[0xb] = 0;
      puVar16[0xc] = 0x400000010;
      puVar16[9] = 0;
      puVar16[10] = 0;
      puVar16[0xd] = 0xbf800000bf800000;
      puVar16[0xe] = 0;
      memset(puVar16 + 0x11,0,0x49);
      uVar19 = 8;
      uVar20 = 0xd8;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    lVar15 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar16;
    if (lVar15 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar14 = FUN_00c4e600();
      iVar4 = *(int *)(lVar14 + 0x12c8);
      iVar10 = iVar4 + 1;
      *(int *)(lVar14 + 0x12c8) = iVar10;
      if (*(int *)(lVar14 + 0x12cc) <= iVar4) {
        *(int *)(lVar14 + 0x12cc) = iVar10;
      }
      FUN_00ee9b24(lVar15);
      plVar13 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar17 = *(undefined8 *)(param_1 + 0x1d8);
      uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar15,uVar3,uVar17);
      }
      else {
        FUN_00c48fe8(plVar13,lVar15,uVar3,uVar17);
      }
      lVar15 = FUN_00c4e600();
      iVar10 = *(int *)(lVar15 + 0x12c8) + -1;
      *(int *)(lVar15 + 0x12c8) = iVar10;
      if (iVar10 == 0) {
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
            local_80 = 0;
            uVar12 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13);
              plVar18 = (long *)*plVar13;
            }
            plVar1 = plVar13 + 3;
            if (plVar2 == plVar1) {
              local_80 = 0;
              uVar12 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar9 = (long *)*plVar1 != plVar18;
              if (bVar9) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13 + 3);
                plVar18 = (long *)plVar13[3];
              }
              local_80 = (ulong)bVar9;
              plVar1 = plVar13 + 6;
              if (plVar2 == plVar1) {
                uVar12 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + local_80 * 3,plVar13 + 6);
                  plVar18 = (long *)plVar13[6];
                  local_80 = 2;
                }
                plVar1 = plVar13 + 9;
                if (plVar2 == plVar1) {
                  uVar12 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + local_80 * 3,plVar13 + 9);
                    plVar18 = (long *)plVar13[9];
                    local_80 = 3;
                  }
                  plVar1 = plVar13 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar12 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + local_80 * 3,plVar13 + 0xc);
                      plVar18 = (long *)plVar13[0xc];
                      local_80 = 4;
                    }
                    plVar1 = plVar13 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar12 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))
                                  (plVar18,plVar13 + local_80 * 3,plVar13 + 0xf);
                        plVar18 = (long *)plVar13[0xf];
                        local_80 = 5;
                      }
                      uVar12 = 6;
                      for (local_88 = plVar13 + 0x12; plVar2 != local_88; local_88 = local_88 + 3) {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + local_80 * 3,local_88);
                          plVar18 = (long *)*local_88;
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
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + local_80 * 3,plVar13 + uVar12 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar15 + 0x12cc) = 0;
      }
      puVar16 = *(undefined8 **)(param_1 + 0x1c0);
    }
    bVar8 = 0;
    *(undefined8 *)(param_1 + 0x1d8) = uVar19;
    *(long **)(param_1 + 0x1c8) = plVar11;
    *(undefined8 *)(param_1 + 0x1d0) = uVar20;
  }
  else {
    bVar8 = 1;
  }
  plVar11 = (long *)puVar16[0x11];
  param_2 = (long *)*param_2;
  if (plVar11 == param_2) {
    bVar7 = 0;
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar11 = param_2 + 5;
      do {
        lVar15 = *plVar11;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *(int *)plVar11 = (int)lVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar11 = (long *)puVar16[0x11];
    }
    puVar16[0x11] = param_2;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 5;
      do {
        iVar10 = (int)*plVar13;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *(int *)plVar13 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 1) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if (iVar10 == 0) goto LAB_00c4d6c8;
    }
    bVar7 = 1;
  }
  bVar6 = bVar7;
  if (puVar16[0x12] != param_3) {
    bVar6 = 1;
    puVar16[0x12] = param_3;
  }
  plVar11 = (long *)puVar16[0x13];
  if (plVar11 == (long *)0x0) {
    if ((bool)(bVar8 & ((bVar7 | bVar6) ^ 1))) {
      return;
    }
  }
  else {
    plVar13 = plVar11 + 5;
    puVar16[0x13] = 0;
    do {
      lVar15 = *plVar13;
      iVar10 = (int)lVar15 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *(int *)plVar13 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
LAB_00c4d6c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar15 = *(long *)(param_1 + 0x208);
  lVar14 = *(long *)(param_1 + 0x210);
  if (((lVar15 != lVar14) && (*(undefined1 *)(lVar15 + 0x10) = 1, lVar15 + 0x18 != lVar14)) &&
     (*(undefined1 *)(lVar15 + 0x28) = 1, lVar15 + 0x30 != lVar14)) {
    *(undefined1 *)(lVar15 + 0x40) = 1;
    for (lVar15 = lVar15 + 0x48; lVar15 != lVar14; lVar15 = lVar15 + 0x18) {
      *(undefined1 *)(lVar15 + 0x10) = 1;
    }
  }
  return;
}


