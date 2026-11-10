/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ffe2c; name: FUN_017ffe2c
 */


void FUN_017ffe2c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = &DAT_0459b3a0;
  param_1[4] = &PTR_LAB_0459b510;
  param_1[5] = &DAT_0459b638;
  param_1[6] = &PTR_LAB_0459b690;
  param_1[7] = &PTR_LAB_0459b6b8;
  param_1[0x24] = &PTR_LAB_0459b6f0;
  if ((long *)param_1[0x66] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x66] + 0x20))();
  }
  if ((long *)param_1[0x62] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x62] + 0x20))();
  }
  if (param_1[0x5b] != 0) {
    FUN_01800104(param_1 + 0x5b);
    lVar8 = param_1[0x5b];
    lVar10 = param_1[0x5d];
    plVar12 = (long *)param_1[0x5e];
    uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,lVar10 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar8,lVar10 - lVar8,8);
    }
  }
  plVar12 = (long *)param_1[0x54];
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)param_1[0x55];
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      do {
        plVar11 = plVar11 + -1;
        plVar6 = (long *)*plVar11;
        if (plVar6 != (long *)0x0) {
          lVar10 = plVar6[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_017ffeec;
        }
      } while (plVar11 != plVar12);
      plVar11 = (long *)param_1[0x54];
    }
    lVar10 = param_1[0x56];
    param_1[0x55] = plVar12;
    plVar12 = (long *)param_1[0x57];
    uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,lVar10 - (long)plVar11,8);
    }
    else {
      FUN_00c48fe8(plVar12,plVar11,lVar10 - (long)plVar11,8);
    }
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x20))();
  }
  if ((long *)param_1[0x33] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x33] + 0x20))();
  }
  plVar12 = (long *)param_1[0x2f];
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 5;
    do {
      lVar10 = *plVar11;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar12 = (long *)param_1[0x2e];
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_017ffeec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00fa65c0(param_1 + 0x26);
  FUN_00e6bfa4(param_1);
  return;
}


