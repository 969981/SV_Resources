/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c97970; name: FUN_00c97970
 */


void FUN_00c97970(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long *local_88;
  long *local_70;
  long *plStack_68;
  
  puVar15 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar15 == (undefined8 *)0x0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar15 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0xd8,8);
    if (puVar15 == (undefined8 *)0x0) {
      plVar8 = (long *)0x0;
      uVar14 = 0;
      uVar12 = 0;
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
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar8;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = plVar8;
      puVar15[7] = 0;
      puVar15[8] = 0;
      *(undefined4 *)(puVar15 + 6) = 0;
      puVar15[0xf] = 0;
      *(undefined4 *)(puVar15 + 0x10) = 0;
      puVar15[4] = 0x555555555555555;
      puVar15[5] = 0;
      puVar15[0xb] = 0;
      puVar15[0xc] = 0x400000010;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xd] = 0xbf800000bf800000;
      puVar15[0xe] = 0;
      memset(puVar15 + 0x11,0,0x49);
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      uVar12 = 8;
      uVar14 = 0xd8;
    }
    lVar13 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar15;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar4 = *(int *)(lVar11 + 0x12c8);
      iVar7 = iVar4 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar7;
      if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
        *(int *)(lVar11 + 0x12cc) = iVar7;
      }
      FUN_00ee9b24(lVar13);
      plVar10 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar16 = *(undefined8 *)(param_1 + 0x1d8);
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,uVar3,uVar16);
      }
      else {
        FUN_00c48fe8(plVar10,lVar13,uVar3,uVar16);
      }
      lVar13 = FUN_00c4e600();
      iVar7 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_70 = plVar10 + plVar10[600] * 3;
          plStack_68 = plVar10;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar17 = (long *)*plVar10;
          plVar2 = plVar10;
          if (plVar10[600] != 0) {
            plVar2 = plVar10 + plVar10[600] * 3;
          }
          if (plVar2 == plVar10) {
            uVar18 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10);
              plVar17 = (long *)*plVar10;
            }
            plVar1 = plVar10 + 3;
            if (plVar2 == plVar1) {
              uVar18 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar6 = (long *)*plVar1 != plVar17;
              if (bVar6) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10 + 3);
                plVar17 = (long *)plVar10[3];
              }
              uVar18 = (ulong)bVar6;
              plVar1 = plVar10 + 6;
              if (plVar2 == plVar1) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 6);
                  plVar17 = (long *)plVar10[6];
                  uVar18 = 2;
                }
                plVar1 = plVar10 + 9;
                if (plVar2 == plVar1) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 9);
                    plVar17 = (long *)plVar10[9];
                    uVar18 = 3;
                  }
                  plVar1 = plVar10 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 0xc);
                      plVar17 = (long *)plVar10[0xc];
                      uVar18 = 4;
                    }
                    plVar1 = plVar10 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + 0xf);
                        plVar17 = (long *)plVar10[0xf];
                        uVar18 = 5;
                      }
                      uVar9 = 6;
                      for (local_88 = plVar10 + 0x12; plVar2 != local_88; local_88 = local_88 + 3) {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,local_88);
                          plVar17 = (long *)*local_88;
                          uVar18 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar18 * 3,plVar10 + uVar9 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
      puVar15 = *(undefined8 **)(param_1 + 0x1c0);
    }
    bVar6 = false;
    *(long **)(param_1 + 0x1c8) = plVar8;
    *(undefined8 *)(param_1 + 0x1d0) = uVar14;
    *(undefined8 *)(param_1 + 0x1d8) = uVar12;
  }
  else {
    bVar6 = true;
  }
  plVar8 = (long *)puVar15[0xb];
  param_2 = (long *)*param_2;
  if (plVar8 == param_2) {
    if (*(int *)(puVar15 + 0xc) == param_3) {
      if (bVar6) {
        return;
      }
      goto LAB_00c97a40;
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 5;
      do {
        lVar13 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)lVar13 + 1;
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
      plVar8 = (long *)puVar15[0xb];
    }
    puVar15[0xb] = param_2;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar13 = *plVar10;
        iVar7 = (int)lVar13 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (*(int *)(puVar15 + 0xc) == param_3) goto LAB_00c97a40;
  }
  *(int *)(puVar15 + 0xc) = param_3;
LAB_00c97a40:
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


