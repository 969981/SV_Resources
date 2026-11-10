/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159cc70; name: FUN_0159cc70
 */


void FUN_0159cc70(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar14 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  plVar7[2] = *param_2;
  lVar14 = *param_3;
  plVar7[3] = lVar14;
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  uVar10 = plVar7[2];
  *plVar7 = 0;
  plVar7[1] = uVar10;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar11 = uVar9 - 1;
    if ((uVar9 & uVar11) == 0) {
      plVar12 = *(long **)(*param_1 + (uVar11 & uVar10) * 8);
      if (plVar12 != (long *)0x0) {
        do {
          plVar12 = (long *)*plVar12;
          if ((plVar12 == (long *)0x0) || ((plVar12[1] & uVar11) != (uVar11 & uVar10)))
          goto LAB_0159cd6c;
        } while (plVar12[2] != uVar10);
        goto LAB_0159cf34;
      }
    }
    else {
      uVar11 = uVar10;
      if (uVar9 <= uVar10) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar10 / uVar9;
        }
        uVar11 = uVar10 - uVar11 * uVar9;
      }
      plVar12 = *(long **)(*param_1 + uVar11 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_0159cd6c;
          uVar13 = plVar12[1];
          if (uVar9 <= uVar13) {
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar5 * uVar9;
          }
          if (uVar13 != uVar11) goto LAB_0159cd6c;
        } while (plVar12[2] != uVar10);
LAB_0159cf34:
        if (plVar7 == (long *)0x0) {
          return;
        }
        plVar12 = (long *)plVar7[3];
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 5;
          do {
            lVar14 = *plVar2;
            iVar6 = (int)lVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
          else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        plVar12 = (long *)param_1[7];
        uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar9 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0159cf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x18))(plVar12,plVar7,0x20,8);
          return;
        }
        FUN_00c48fe8(plVar12,plVar7,0x20,8);
        return;
      }
    }
  }
LAB_0159cd6c:
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar10 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_0159d088(param_1,uVar10);
    uVar9 = param_1[1];
    uVar10 = plVar7[1];
  }
  uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) {
    uVar10 = uVar9 - 1 & uVar10;
  }
  else if (uVar9 <= uVar10) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar10 / uVar9;
    }
    uVar10 = uVar10 - uVar13 * uVar9;
  }
  plVar12 = *(long **)(*param_1 + uVar10 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 6;
    *plVar7 = *plVar12;
    *plVar12 = (long)plVar7;
    *(long **)(*param_1 + uVar10 * 8) = plVar12;
    if (*plVar7 == 0) goto LAB_0159ce2c;
    uVar10 = *(ulong *)(*plVar7 + 8);
    if (uVar11 < 2) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar11 * uVar9;
    }
    plVar12 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar7 = *plVar12;
  }
  *plVar12 = (long)plVar7;
LAB_0159ce2c:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


