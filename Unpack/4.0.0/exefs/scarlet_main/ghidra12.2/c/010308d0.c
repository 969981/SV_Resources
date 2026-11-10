/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010308d0; name: FUN_010308d0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_010308d0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  long *plVar9;
  
  switch(*(undefined4 *)(param_1 + 0x2e8)) {
  case 1:
    plVar9 = *(long **)(param_1 + 200);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) goto LAB_01030e3c;
    }
    if (**(char **)(param_1 + 0x1b0) != '\0') {
      (**(code **)(*plVar9 + 0x88))(plVar9,param_1 + 0x1a8);
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar6 == 0) goto LAB_01030a88;
    }
    *(undefined4 *)(param_1 + 0x2e8) = 2;
    if (((*PTR_DAT_047dd000 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd000);
    }
    *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
  case 2:
    plVar9 = *(long **)(param_1 + 200);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) {
LAB_01030e3c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (**(char **)(param_1 + 0x1b0) == '\0') {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)(*plVar9 + 0x98))(plVar9,param_1 + 0x1a8);
      uVar7 = uVar7 & 0xffffffff;
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar6 == 0) {
LAB_01030a88:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if ((uVar7 & 1) != 0) {
      uVar8 = 3;
LAB_01030bc0:
      *(undefined4 *)(param_1 + 0x2e8) = uVar8;
    }
    break;
  case 3:
    lVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    plVar9 = *(long **)(param_1 + 0x2f0);
    if (*(char *)(param_1 + 0x2da) == '\0') {
      *(undefined4 *)(plVar9 + 0x14) = 2;
      uVar4 = (**(code **)(*plVar9 + 0x38))(0x42c80000,plVar9);
      while ((4 < uVar4 || ((1 << (ulong)(uVar4 & 0x1f) & 0x15U) == 0))) {
        uVar4 = (**(code **)(*plVar9 + 0x38))(0x42c80000,plVar9);
      }
      *(undefined4 *)(plVar9 + 0x14) = 0;
    }
    else {
      uVar4 = FUN_01030e68((float)((double)*(long *)(lVar6 + 8) / 1000000000.0),plVar9);
    }
    if (uVar4 == 0) {
      if ((*(int *)(param_1 + 0x2d0) == 1) || (*(char *)(param_1 + 0x2dc) != '\0')) {
        FUN_01030fac(param_1);
      }
      else if (**(char **)(param_1 + 0x150) != '\0') {
        plVar9 = *(long **)(param_1 + 200);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar1 = plVar9 + 5;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar6 == -1) goto LAB_01030e3c;
        (**(code **)(*plVar9 + 0x70))(plVar9,param_1 + 0x148,0);
        do {
          lVar6 = *plVar1;
          iVar5 = (int)lVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar6 == 0) goto LAB_01030a88;
      }
    }
    else {
      if (uVar4 == 2) {
        FUN_01030fac(param_1);
        break;
      }
      if (**(char **)(param_1 + 0x150) != '\0') {
        plVar9 = *(long **)(param_1 + 200);
        if (plVar9 == (long *)0x0) {
          halt_baddata();
        }
        plVar1 = plVar9 + 5;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar6 == -1) goto LAB_01030e3c;
        (**(code **)(*plVar9 + 0x70))(plVar9,param_1 + 0x148,0);
        do {
          lVar6 = *plVar1;
          iVar5 = (int)lVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar6 == 0) goto LAB_01030a88;
      }
      if (uVar4 != 4) break;
    }
    if (*(uint *)(param_1 + 0x2fc) != uVar4) break;
    if (*(char *)(param_1 + 0x2d9) == '\0') {
      uVar8 = 4;
      *(undefined1 *)(param_1 + 0x81) = 0;
    }
    else {
      uVar8 = 5;
    }
    goto LAB_01030bc0;
  default:
    break;
  case 5:
    plVar9 = *(long **)(param_1 + 200);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) goto LAB_01030e3c;
    }
    if (**(char **)(param_1 + 0x1d0) != '\0') {
      (**(code **)(*plVar9 + 0x88))(plVar9,param_1 + 0x1c8);
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar6 == 0) goto LAB_01030a88;
    }
    *(undefined4 *)(param_1 + 0x2e8) = 6;
    if (((*PTR_DAT_047dd000 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd000);
    }
    *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
  case 6:
    plVar9 = *(long **)(param_1 + 200);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) goto LAB_01030e3c;
    }
    if (**(char **)(param_1 + 0x1d0) == '\0') {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)(*plVar9 + 0x98))(plVar9,param_1 + 0x1c8);
      uVar7 = uVar7 & 0xffffffff;
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar6 == 0) goto LAB_01030a88;
    }
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(undefined1 *)(param_1 + 0x81) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  return;
}


