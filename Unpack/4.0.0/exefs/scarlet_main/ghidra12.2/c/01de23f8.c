/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de23f8; name: FUN_01de23f8
 */


undefined4 FUN_01de23f8(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  int extraout_var;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00f3e8f8(&local_38,param_1 + 0x68);
  puVar6 = local_38;
  if (local_38 == (undefined8 *)0x0) {
    return 1;
  }
  if (*(short *)((long)local_38 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_38 + 0x1a);
    sVar9 = *(short *)((long)local_38 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01de2468;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01de2468:
        bVar5 = false;
      }
      if (bVar5) {
        plVar10 = (long *)0x0;
        if (local_38[2] != 0) {
          plVar10 = (long *)(local_38[2] + -0x28);
        }
        goto LAB_01de2490;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  plVar10 = (long *)0x0;
LAB_01de2490:
  psVar1 = (short *)(local_38 + 3);
  do {
    sVar9 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar9 == 1) {
    piVar2 = (int *)((long)local_38 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_28 = *puVar6;
      FUN_00c44438(lVar8 + 0x8040,&local_28);
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
    return 1;
  }
  iVar7 = FUN_014a24ec();
  FUN_01dcd22c(plVar10);
  if (iVar7 == 0) {
    uVar11 = 0;
    if ((extraout_var == 0) || (extraout_var == 3)) goto LAB_01de24f0;
  }
  else {
    uVar11 = 0;
    if ((extraout_var == 0) || (extraout_var == 5)) goto LAB_01de24f0;
  }
  uVar11 = 1;
LAB_01de24f0:
  lVar8 = plVar10[6];
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
    return uVar11;
  }
  if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return uVar11;
}


