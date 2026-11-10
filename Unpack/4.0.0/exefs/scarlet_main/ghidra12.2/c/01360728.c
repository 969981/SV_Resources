/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01360728; name: FUN_01360728
 */


void FUN_01360728(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  lVar8 = DAT_04836d38;
  if (DAT_04836d38 != 0) {
    plVar10 = (long *)*param_3;
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 5;
      do {
        lVar11 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)lVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar11 == -1) goto LAB_01360a10;
    }
    lVar11 = *(long *)(lVar8 + 0x118);
    *(undefined4 *)(lVar8 + 0xcc) = 0;
    *(undefined2 *)(lVar8 + 0xd0) = 0;
    *(undefined4 *)(lVar8 + 0xd4) = 0;
    *(undefined4 *)(lVar8 + 0xdc) = 0;
    FUN_0109c76c(lVar8,plVar10);
    if (*(char *)(lVar11 + 0x54) != '\0') {
      **(undefined2 **)(lVar11 + 0x30) = 0;
      *(undefined2 *)(lVar11 + 0x52) = 0;
    }
    FUN_0109c334(lVar8,lVar11,plVar10,0,0);
    plVar9 = *(long **)(lVar8 + 0x118);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar8 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar8 == -1) goto LAB_01360a10;
    }
    plVar1 = plVar10 + 5;
    do {
      lVar8 = *plVar1;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar8 == 0) goto LAB_013608ac;
    FUN_01360a3c(local_50,*param_1);
    local_58 = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 5;
      do {
        lVar8 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)lVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar8 == -1) {
LAB_01360a10:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_0111d018(local_50,param_2,&local_58);
    if (local_58 != (long *)0x0) {
      plVar10 = local_58 + 5;
      do {
        lVar8 = *plVar10;
        iVar7 = (int)lVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_013608ac;
    }
    if (local_50[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50[0] + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *local_50[0];
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 5;
      do {
        lVar8 = *plVar10;
        iVar7 = (int)lVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar8 == 0) {
LAB_013608ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


