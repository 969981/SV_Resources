/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf8198; name: FUN_00cf8198
 */


undefined8 FUN_00cf8198(long *param_1)

{
  int *piVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  (**(code **)(*param_1 + 0x18))(local_38);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  plVar2 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar2 = param_1 + 5;
  }
  puVar7 = local_38[0];
  if ((long *)local_38[0][2] == plVar2) {
    FUN_00cf83d0(&local_48,local_38);
    puVar7 = local_38[0];
  }
  if (puVar7 != (undefined8 *)0x0) {
    psVar9 = (short *)(puVar7 + 3);
    do {
      sVar3 = *psVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar5) {
        *psVar9 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar1 = (int *)((long)puVar7 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar7;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_00cf8250;
  }
  puVar7 = local_48;
  if (local_48 == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    psVar9 = (short *)(local_48 + 3);
    uVar10 = *local_48;
    do {
      sVar3 = *psVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar5) {
        *psVar9 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar1 = (int *)((long)local_48 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar8 + 0x8040,local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_00cf8250:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar10;
}


