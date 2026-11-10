/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d2c970; name: FUN_00d2c970
 */


void FUN_00d2c970(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  
  if (param_1 != param_2) {
    plVar16 = param_1 + 3;
    plVar15 = (long *)*plVar16;
    if (plVar15 == (long *)param_2[3]) {
      lVar13 = param_1[2];
      plVar15 = (long *)*param_1;
    }
    else {
      plVar11 = (long *)*param_1;
      plVar17 = (long *)param_1[1];
      if (plVar17 == plVar11) {
        plVar17 = plVar11;
      }
      else {
        do {
          plVar17 = plVar17 + -1;
          plVar15 = (long *)*plVar17;
          if (plVar15 != (long *)0x0) {
            plVar12 = plVar15 + 5;
            do {
              lVar13 = *plVar12;
              iVar8 = (int)lVar13 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *(int *)plVar12 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*plVar15 + 0x10))();
            }
            else if ((int)lVar13 == 0) goto LAB_00d2ccdc;
          }
        } while (plVar17 != plVar11);
        plVar17 = (long *)*param_1;
        plVar15 = (long *)param_1[3];
      }
      lVar13 = param_1[2];
      param_1[1] = (long)plVar11;
      uVar19 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar19 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,plVar17,lVar13 - (long)plVar17,8);
      }
      else {
        FUN_00c48fe8(plVar15,plVar17,lVar13 - (long)plVar17,8);
      }
      plVar15 = (long *)0x0;
      lVar13 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    lVar10 = param_2[3];
    lVar3 = param_2[4];
    lVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar4;
    *plVar16 = lVar10;
    param_1[4] = lVar3;
    plVar11 = (long *)*param_2;
    plVar17 = (long *)param_2[1];
    uVar19 = (long)plVar17 - (long)plVar11 >> 3;
    if ((ulong)(lVar13 - (long)plVar15 >> 3) < uVar19) {
      if (plVar15 != (long *)0x0) {
        plVar18 = (long *)param_1[1];
        plVar12 = plVar15;
        if (plVar18 != plVar15) {
          do {
            plVar18 = plVar18 + -1;
            plVar12 = (long *)*plVar18;
            if (plVar12 != (long *)0x0) {
              plVar9 = plVar12 + 5;
              do {
                lVar13 = *plVar9;
                iVar8 = (int)lVar13 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar6) {
                  *(int *)plVar9 = iVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar12 + 0x10))();
              }
              else if ((int)lVar13 == 0) goto LAB_00d2ccdc;
            }
          } while (plVar18 != plVar15);
          plVar12 = (long *)*param_1;
          lVar13 = param_1[2];
        }
        plVar18 = (long *)param_1[3];
        param_1[1] = (long)plVar15;
        uVar14 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,plVar12,lVar13 - (long)plVar12,8);
        }
        else {
          FUN_00c48fe8(plVar18,plVar12,lVar13 - (long)plVar12,8);
        }
        lVar13 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      uVar14 = param_1[4];
      if (0x7ffffffffffffffe < uVar14) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar19 <= uVar14) {
        if (uVar19 <= (ulong)(lVar13 >> 2)) {
          uVar19 = lVar13 >> 2;
        }
        if (uVar14 >> 1 <= (ulong)(lVar13 >> 3)) {
          uVar19 = uVar14;
        }
        if (uVar19 <= uVar14) {
          plVar15 = (long *)(**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar19 << 3,8);
          if (plVar15 == (long *)0x0) {
            (**(code **)(*(long *)*plVar16 + 0xe8))();
          }
          param_1[2] = (long)(plVar15 + uVar19);
          *param_1 = (long)plVar15;
          param_1[1] = (long)plVar15;
          puVar7 = PTR_LAB_047d3900;
          do {
            if (plVar11 == plVar17) {
              param_1[1] = (long)plVar15;
              return;
            }
            lVar13 = *plVar16;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar10 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar10 != 0) {
              if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d2ce88;
              *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar13;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            }
            lVar13 = *plVar11;
            *plVar15 = lVar13;
            if (lVar13 != 0) {
              piVar1 = (int *)(lVar13 + 0x28);
              do {
                iVar8 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar8 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 == -1) goto LAB_00d2cdc0;
            }
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            }
            plVar11 = plVar11 + 1;
            plVar15 = plVar15 + 1;
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar12 = (long *)((long)plVar11 + (param_1[1] - (long)plVar15));
    uVar14 = param_1[1] - (long)plVar15 >> 3;
    puVar7 = PTR_LAB_047d3900;
    plVar18 = plVar12;
    if (uVar19 <= uVar14) {
      plVar18 = plVar17;
    }
    for (; PTR_LAB_047d3900 = puVar7, plVar18 != plVar11; plVar11 = plVar11 + 1) {
      lVar13 = *plVar11;
      if (lVar13 != 0) {
        piVar1 = (int *)(lVar13 + 0x28);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == -1) goto LAB_00d2cdc0;
      }
      plVar9 = (long *)*plVar15;
      *plVar15 = lVar13;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 5;
        do {
          lVar13 = *plVar2;
          iVar8 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_00d2ccdc;
      }
      plVar15 = plVar15 + 1;
      puVar7 = PTR_LAB_047d3900;
    }
    if (uVar14 < uVar19) {
      plVar15 = (long *)param_1[1];
      while (plVar18 != plVar17) {
        lVar13 = *plVar16;
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00d2ce88:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar13;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        lVar13 = *plVar12;
        *plVar15 = lVar13;
        if (lVar13 != 0) {
          piVar1 = (int *)(lVar13 + 0x28);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == -1) {
LAB_00d2cdc0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        plVar15 = plVar15 + 1;
        plVar12 = plVar12 + 1;
        plVar18 = plVar12;
      }
      param_1[1] = (long)plVar15;
    }
    else {
      plVar16 = (long *)param_1[1];
      while (plVar16 != plVar15) {
        plVar16 = plVar16 + -1;
        plVar11 = (long *)*plVar16;
        if (plVar11 != (long *)0x0) {
          plVar17 = plVar11 + 5;
          do {
            lVar13 = *plVar17;
            iVar8 = (int)lVar13 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
          else if ((int)lVar13 == 0) {
LAB_00d2ccdc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      param_1[1] = (long)plVar15;
    }
  }
  return;
}


