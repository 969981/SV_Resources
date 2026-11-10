/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219cdc8; name: FUN_0219cdc8
 */


void FUN_0219cdc8(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_045a0450;
  param_1[4] = &PTR_LAB_045a0488;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x3c));
  FUN_00f030b8(param_1 + 0x34);
  lVar13 = param_1[0x2d];
  if (lVar13 != 0) {
    lVar11 = param_1[0x2e];
    if (lVar11 == lVar13) {
      lVar11 = lVar13;
    }
    else {
      do {
        plVar7 = *(long **)(lVar11 + -8);
        if (plVar7 != (long *)0x0) {
          lVar9 = plVar7[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
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
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != lVar13);
      lVar11 = param_1[0x2d];
    }
    lVar9 = param_1[0x2f];
    plVar7 = (long *)param_1[0x30];
    param_1[0x2e] = lVar13;
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar8 & 1) != 0) {
      lVar13 = FUN_00c4e600();
      if (0 < *(int *)(lVar13 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar11,lVar9 - lVar11,8);
        goto LAB_0219cebc;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,lVar9 - lVar11,8);
  }
LAB_0219cebc:
  lVar13 = param_1[0x26];
  if (lVar13 != 0) {
    lVar11 = param_1[0x28];
    plVar7 = (long *)param_1[0x29];
    param_1[0x27] = lVar13;
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar13,lVar11 - lVar13,8);
        goto LAB_0219cf00;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar13,lVar11 - lVar13,8);
  }
LAB_0219cf00:
  lVar13 = param_1[0x1e];
  if (lVar13 != 0) {
    lVar11 = param_1[0x20];
    plVar7 = (long *)param_1[0x21];
    param_1[0x1f] = lVar13;
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar13,lVar11 - lVar13,8);
        goto LAB_0219cf44;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar13,lVar11 - lVar13,8);
  }
LAB_0219cf44:
  puVar12 = (undefined8 *)param_1[0x1c];
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
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
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_38 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  pcVar10 = (code *)param_1[9];
  if (pcVar10 != (code *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    (*pcVar10)(param_1 + 0xc);
  }
  if ((long *)param_1[7] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0219cfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[7] + 0x20))();
  return;
}


