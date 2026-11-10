/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec5800; name: FUN_00ec5800
 */


void FUN_00ec5800(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  short sVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined8 uVar16;
  ulong uVar17;
  float fVar18;
  
  lVar12 = *param_2;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x28);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar12;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar12 = *plVar2;
      iVar14 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  sVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x10))();
  if (0 < sVar6) {
    iVar14 = 0;
    plVar8 = (long *)(param_1 + 0x38);
    plVar2 = (long *)(param_1 + 0x68);
    do {
      plVar9 = (long *)(*(long *)(param_1 + 0x30) + 0x30);
      puVar10 = (ulong *)(**(code **)(*plVar9 + 0x20))(plVar9,iVar14);
      uVar17 = *puVar10;
      uVar15 = *(ulong *)(param_1 + 0x40);
      if (uVar15 == 0) {
LAB_00ec5950:
        plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x70) + 0x10))
                                   (*(long **)(param_1 + 0x70),0x38,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x70) + 0xe8))();
        }
        uVar16 = *(undefined8 *)(param_1 + 0x70);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar16;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        plVar9[2] = *puVar10;
        plVar9[3] = puVar10[1];
        plVar9[4] = puVar10[2];
        plVar11 = (long *)puVar10[3];
        plVar9[5] = (long)plVar11;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))();
        }
        *(short *)(plVar9 + 6) = (short)iVar14;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *plVar9 = 0;
        plVar9[1] = uVar17;
        fVar18 = (float)(*(long *)(param_1 + 0x90) + 1);
        if ((uVar15 == 0) || (*(float *)(param_1 + 0x98) * (float)uVar15 < fVar18)) {
          uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
          uVar13 = (ulong)(fVar18 / *(float *)(param_1 + 0x98));
          if (uVar13 <= uVar15) {
            uVar13 = uVar15;
          }
          FUN_00ec5c1c(plVar8,uVar13);
          uVar15 = *(ulong *)(param_1 + 0x40);
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x24 = uVar15 - 1 & uVar17;
          }
          else if (uVar17 < uVar15) {
            unaff_x24 = uVar17;
          }
          else {
            uVar13 = 0;
            if (uVar15 != 0) {
              uVar13 = uVar17 / uVar15;
            }
            unaff_x24 = uVar17 - uVar13 * uVar15;
          }
        }
        plVar11 = *(long **)(*plVar8 + unaff_x24 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar9 = *plVar2;
          *plVar2 = (long)plVar9;
          *(long **)(*plVar8 + unaff_x24 * 8) = plVar2;
          if (*plVar9 != 0) {
            uVar17 = *(ulong *)(*plVar9 + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar17 = uVar17 & uVar15 - 1;
            }
            else if (uVar15 <= uVar17) {
              uVar13 = 0;
              if (uVar15 != 0) {
                uVar13 = uVar17 / uVar15;
              }
              uVar17 = uVar17 - uVar13 * uVar15;
            }
            plVar11 = (long *)(*plVar8 + uVar17 * 8);
            goto LAB_00ec5a74;
          }
        }
        else {
          *plVar9 = *plVar11;
LAB_00ec5a74:
          *plVar11 = (long)plVar9;
        }
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
      }
      else {
        uVar13 = uVar15 - 1;
        if ((uVar15 & uVar13) == 0) {
          unaff_x24 = uVar13 & uVar17;
          plVar9 = *(long **)(*plVar8 + unaff_x24 * 8);
          if (plVar9 == (long *)0x0) goto LAB_00ec5950;
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) ||
               (plVar9[1] != uVar17 && (plVar9[1] & uVar13) != unaff_x24)) goto LAB_00ec5950;
          } while (plVar9[2] != uVar17);
        }
        else {
          unaff_x24 = uVar17;
          if (uVar15 <= uVar17) {
            uVar13 = 0;
            if (uVar15 != 0) {
              uVar13 = uVar17 / uVar15;
            }
            unaff_x24 = uVar17 - uVar13 * uVar15;
          }
          plVar9 = *(long **)(*plVar8 + unaff_x24 * 8);
          if (plVar9 == (long *)0x0) goto LAB_00ec5950;
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_00ec5950;
            uVar13 = plVar9[1];
            if (uVar13 != uVar17) {
              if (uVar15 <= uVar13) {
                uVar5 = 0;
                if (uVar15 != 0) {
                  uVar5 = uVar13 / uVar15;
                }
                uVar13 = uVar13 - uVar5 * uVar15;
              }
              if (uVar13 != unaff_x24) goto LAB_00ec5950;
            }
          } while (plVar9[2] != uVar17);
        }
      }
      iVar14 = (int)(short)((short)iVar14 + 1);
    } while (iVar14 < sVar6);
  }
  return;
}


