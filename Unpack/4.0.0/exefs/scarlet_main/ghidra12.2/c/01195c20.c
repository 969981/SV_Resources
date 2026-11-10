/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01195c20; name: FUN_01195c20
 */


bool FUN_01195c20(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int extraout_var;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  FUN_01195bb4(local_40,param_1,*(undefined4 *)(param_1 + 0x108));
  if (local_40[0] == (undefined8 *)0x0) {
    return false;
  }
  if (*(short *)((long)local_40[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_40[0] + 0x1a);
    sVar9 = *(short *)((long)local_40[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01195ca0;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01195ca0:
        bVar6 = false;
      }
      if (bVar6) {
        plVar10 = (long *)0x0;
        if (local_40[0][2] != 0) {
          plVar10 = (long *)(local_40[0][2] + -0x28);
        }
        goto LAB_01195cc8;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  plVar10 = (long *)0x0;
LAB_01195cc8:
  psVar1 = (short *)(local_40[0] + 3);
  do {
    sVar9 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar9 == 1) {
    piVar2 = (int *)((long)local_40[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
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
      local_18 = *local_40[0];
      FUN_00c44438(lVar8 + 0x8040,&local_18);
    }
  }
  else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar10 == (long *)0x0) {
    return false;
  }
  FUN_01dcd22c(plVar10);
  if (*(int *)(param_1 + 0x108) == 0) {
switchD_01195df0_caseD_2:
    bVar6 = extraout_var != 0;
  }
  else {
    bVar6 = true;
    switch(*(int *)(param_1 + 0x108)) {
    case 1:
      break;
    case 2:
      goto switchD_01195df0_caseD_2;
    default:
      bVar6 = false;
    }
  }
  lVar8 = plVar10[6];
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
    return bVar6;
  }
  if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return bVar6;
}


