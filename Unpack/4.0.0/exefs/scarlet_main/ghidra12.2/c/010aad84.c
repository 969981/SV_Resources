/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010aad84; name: FUN_010aad84
 */


void FUN_010aad84(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar13 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  plVar11 = param_1 + 6;
  *param_1 = (long)&PTR_FUN_045ed7c0;
  param_1[1] = lVar13;
  param_1[4] = (long)&PTR_LAB_045ed7f8;
  memset(plVar11,0,0x48);
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xf,0,1);
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 5;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 5;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_010ab500(param_1 + 0x1c);
  FUN_010ab50c(&local_68,param_1[1]);
  FUN_010ab6bc(param_1 + 0xd,&local_68);
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 5;
    do {
      lVar7 = *plVar8;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_010ab034;
  }
  FUN_010ab578(&local_68,param_1[1]);
  FUN_010ab748(param_1 + 10,&local_68);
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 5;
    do {
      lVar7 = *plVar8;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_010ab034;
  }
  FUN_010ab5e4(&local_68,param_1[1]);
  FUN_010ab7d4(param_1 + 0xb,&local_68);
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 5;
    do {
      lVar7 = *plVar8;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_010ab034;
  }
  FUN_010ab650(&local_68,param_1[1]);
  FUN_010ab860(param_1 + 0xc,&local_68);
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 5;
    do {
      lVar7 = *plVar8;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_010ab034:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar14 = (long *)param_1[1];
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x28,8);
  if (plVar8 == (long *)0x0) {
    plVar14 = (long *)0x0;
    lVar13 = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar14;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar8 = (long)(PTR_DAT_047dcd38 + 0x10);
    plVar8[1] = 0xf4b17a579f18960;
    plVar8[2] = -0x7d5d4e8add6295a5;
    plVar8[3] = 0;
    plVar8[4] = 0;
    lVar7 = 8;
    lVar13 = 0x28;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar16 = (long *)*plVar11;
  *plVar11 = (long)plVar8;
  if (plVar16 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar2 = *(int *)(lVar9 + 0x12c8);
    iVar6 = iVar2 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar6;
    if (*(int *)(lVar9 + 0x12cc) <= iVar2) {
      *(int *)(lVar9 + 0x12cc) = iVar6;
    }
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plVar11 = (long *)param_1[7];
    lVar9 = param_1[8];
    lVar15 = param_1[9];
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar16,lVar9,lVar15);
    }
    else {
      FUN_00c48fe8(plVar11,plVar16,lVar9,lVar15);
    }
    lVar9 = FUN_00c4e600();
    iVar6 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_70 = plVar11 + plVar11[600] * 3;
        local_68 = plVar11;
        FUN_00c4ea30(&local_68,&local_70);
        plVar16 = (long *)*plVar11;
        plVar8 = plVar11;
        if (plVar11[600] != 0) {
          plVar8 = plVar11 + plVar11[600] * 3;
        }
        if (plVar8 == plVar11) {
          uVar17 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar11,plVar11);
            plVar16 = (long *)*plVar11;
          }
          plVar1 = plVar11 + 3;
          if (plVar8 == plVar1) {
            uVar17 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar16;
            if (bVar5) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar11,plVar11 + 3);
              plVar16 = (long *)plVar11[3];
            }
            uVar17 = (ulong)bVar5;
            plVar1 = plVar11 + 6;
            if (plVar8 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar17 * 3,plVar11 + 6);
                plVar16 = (long *)plVar11[6];
                uVar17 = 2;
              }
              plVar1 = plVar11 + 9;
              if (plVar8 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar17 * 3,plVar11 + 9);
                  plVar16 = (long *)plVar11[9];
                  uVar17 = 3;
                }
                plVar1 = plVar11 + 0xc;
                if (plVar8 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar17 * 3,plVar11 + 0xc);
                    plVar16 = (long *)plVar11[0xc];
                    uVar17 = 4;
                  }
                  plVar1 = plVar11 + 0xf;
                  if (plVar8 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar17 * 3,plVar11 + 0xf);
                      plVar16 = (long *)plVar11[0xf];
                      uVar17 = 5;
                    }
                    uVar10 = 6;
                    for (local_78 = plVar11 + 0x12; plVar8 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar17 * 3,local_78);
                        plVar16 = (long *)*local_78;
                        uVar17 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar11 + uVar17 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[7] = (long)plVar14;
  param_1[8] = lVar13;
  param_1[9] = lVar7;
  return;
}


