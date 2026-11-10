/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d38acc; name: FUN_00d38acc
 */


long FUN_00d38acc(long param_1,long *param_2,long *param_3,long param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *local_50 [2];
  char local_3c [12];
  long *local_18;
  
  *(long **)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_4;
  if (param_4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(param_2);
    param_3 = *(long **)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  uVar8 = (**(code **)(*param_3 + 0x60))(param_3,param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  (**(code **)(**(long **)(param_1 + 8) + 0x68))(local_50,*(long **)(param_1 + 8),param_2);
  if (local_50[0] == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (((*(short *)((long)local_50[0] + 0x1a) == 0) || (local_3c[0] == '\0')) ||
       (FUN_00c90ab8(&local_18,local_50), local_18 == (long *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*local_18 + 0x180))(local_18,local_3c);
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 0x18))();
      }
    }
    puVar6 = local_50[0];
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
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
        piVar2 = (int *)((long)local_50[0] + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = (long *)*puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) goto LAB_00d38c68;
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x70))(local_50,*(long **)(param_1 + 8),param_2);
  if (local_50[0] == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    if (((*(short *)((long)local_50[0] + 0x1a) == 0) || (local_3c[0] == '\0')) ||
       (FUN_00c90ab8(&local_18,local_50), local_18 == (long *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*local_18 + 0x180))(local_18,local_3c);
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 0x18))();
      }
    }
    puVar6 = local_50[0];
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
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
        piVar2 = (int *)((long)local_50[0] + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = (long *)*puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) goto LAB_00d38c68;
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x78))(local_50,*(long **)(param_1 + 8),param_2);
  if (local_50[0] == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    if (((*(short *)((long)local_50[0] + 0x1a) == 0) || (local_3c[0] == '\0')) ||
       (FUN_00c90ab8(&local_18,local_50), local_18 == (long *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*local_18 + 0x180))(local_18,local_3c);
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
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
        piVar2 = (int *)((long)local_50[0] + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = (long *)*local_50[0];
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) {
LAB_00d38c68:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return param_1;
}


