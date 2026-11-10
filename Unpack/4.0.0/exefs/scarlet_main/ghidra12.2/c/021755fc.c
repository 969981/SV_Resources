/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021755fc; name: FUN_021755fc
 */


void FUN_021755fc(undefined8 *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  lVar11 = param_1[0x1d];
  *param_1 = &PTR_FUN_0459d220;
  param_1[4] = &PTR_LAB_0459d258;
  if (lVar11 != 0) {
    lVar9 = param_1[0x1f];
    plVar13 = (long *)param_1[0x20];
    param_1[0x1e] = lVar11;
    uVar8 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if ((uVar8 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar13,lVar11,lVar9 - lVar11,8);
        goto LAB_0217562c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,lVar9 - lVar11,8);
  }
LAB_0217562c:
  plVar13 = (long *)param_1[0x16];
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)param_1[0x17];
    if (plVar12 == plVar13) {
      plVar12 = plVar13;
    }
    else {
      do {
        plVar12 = plVar12 + -1;
        plVar7 = (long *)*plVar12;
        if (plVar7 != (long *)0x0) {
          lVar11 = plVar7[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar7 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      } while (plVar12 != plVar13);
      plVar12 = (long *)param_1[0x16];
    }
    lVar11 = param_1[0x18];
    plVar7 = (long *)param_1[0x19];
    param_1[0x17] = plVar13;
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar7,plVar12,lVar11 - (long)plVar12,8);
        goto LAB_021756e0;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar12,lVar11 - (long)plVar12,8);
  }
LAB_021756e0:
  plVar13 = (long *)param_1[0xe];
  if (plVar13 != (long *)0x0) {
    plVar12 = plVar13 + 5;
    do {
      lVar11 = *plVar12;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_0217574c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar13 = (long *)param_1[6];
  if (plVar13 == (long *)0x0) {
    return;
  }
  plVar7 = (long *)param_1[7];
  plVar12 = plVar13;
  if (plVar7 != plVar13) {
    do {
      plVar7 = plVar7 + -1;
      plVar12 = (long *)*plVar7;
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 5;
        do {
          lVar11 = *plVar2;
          iVar6 = (int)lVar11 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_0217574c;
      }
    } while (plVar7 != plVar13);
    plVar12 = (long *)param_1[6];
  }
  param_1[7] = plVar13;
  lVar11 = param_1[8];
  plVar13 = (long *)param_1[9];
  uVar8 = (**(code **)(*plVar13 + 0xf8))(plVar13);
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00c4e600();
    if (0 < *(int *)(lVar9 + 0x12c8)) {
      FUN_00c48fe8(plVar13,plVar12,lVar11 - (long)plVar12,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x021757bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,lVar11 - (long)plVar12,8);
  return;
}


