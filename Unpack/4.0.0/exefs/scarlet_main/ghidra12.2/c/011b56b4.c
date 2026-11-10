/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b56b4; name: FUN_011b56b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b56b4(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  short *psVar10;
  long *plVar11;
  long *local_50;
  long *local_48;
  
  plVar11 = *(long **)(param_1 + 0x40);
  if (plVar11 == (long *)0x0) {
    FUN_011b5d1c(param_1,param_3,0);
  }
  else {
    plVar1 = plVar11 + 5;
    do {
      lVar8 = *plVar1;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((int)lVar8 == -1) goto LAB_011b5a08;
    FUN_011b5d1c(param_1,param_3,0);
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar8 == 0) goto LAB_011b5858;
  }
  plVar11 = *(long **)(param_1 + 0x40);
  if (plVar11 == (long *)0x0) {
    if (_DAT_00000030 != (short *)0x0) {
      cVar9 = '\0';
      psVar10 = _DAT_00000030;
      while( true ) {
        while (*psVar10 == 0x10) {
          uVar3 = psVar10[2];
          psVar10 = psVar10 + (ulong)(ushort)psVar10[1] + 2;
          if ((((byte)((char)(uVar3 >> 8) - 1U) < 2) && ((uVar3 & 0xff00) == 0x100)) &&
             ((uVar2 = uVar3 & 0xff, uVar2 - 1 < 2 || ((uVar2 == 0xc || (uVar2 == 0xd1)))))) {
            cVar9 = cVar9 + '\x01';
          }
        }
        if (*psVar10 == 0) break;
        psVar10 = psVar10 + 1;
      }
LAB_011b57d4:
      if (cVar9 == '\x02') goto LAB_011b58c0;
    }
LAB_011b57e0:
    param_2 = (long *)*param_2;
    local_50 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_011b5a30(param_1,&local_50,param_3,param_4);
      return;
    }
    plVar11 = param_2 + 5;
    do {
      lVar8 = *plVar11;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)lVar8 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((int)lVar8 == -1) goto LAB_011b5a08;
    FUN_011b5a30(param_1,&local_50,param_3,param_4);
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar11 = param_2 + 5;
    do {
      iVar6 = (int)*plVar11;
      iVar7 = iVar6 + -1;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  else {
    plVar1 = plVar11 + 5;
    do {
      lVar8 = *plVar1;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((int)lVar8 == -1) goto LAB_011b5a08;
    psVar10 = (short *)plVar11[6];
    if (psVar10 == (short *)0x0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\0';
      while( true ) {
        while (*psVar10 == 0x10) {
          uVar3 = psVar10[2];
          psVar10 = psVar10 + (ulong)(ushort)psVar10[1] + 2;
          if ((((byte)((char)(uVar3 >> 8) - 1U) < 2) && ((uVar3 & 0xff00) == 0x100)) &&
             ((uVar2 = uVar3 & 0xff, uVar2 - 1 < 2 || ((uVar2 == 0xc || (uVar2 == 0xd1)))))) {
            cVar9 = cVar9 + '\x01';
          }
        }
        if (*psVar10 == 0) break;
        psVar10 = psVar10 + 1;
      }
    }
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) {
      if ((int)lVar8 == 0) goto LAB_011b5858;
      goto LAB_011b57d4;
    }
    (**(code **)(*plVar11 + 0x10))();
    if (cVar9 != '\x02') goto LAB_011b57e0;
LAB_011b58c0:
    param_2 = (long *)*param_2;
    local_48 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_011b923c(param_1,&local_48,param_3,param_4);
      return;
    }
    plVar11 = param_2 + 5;
    do {
      lVar8 = *plVar11;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)lVar8 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((int)lVar8 == -1) {
LAB_011b5a08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_011b923c(param_1,&local_48,param_3,param_4);
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar11 = param_2 + 5;
    do {
      iVar6 = (int)*plVar11;
      iVar7 = iVar6 + -1;
      cVar9 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011b593c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2);
    return;
  }
  if (iVar6 != 0) {
    return;
  }
LAB_011b5858:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


