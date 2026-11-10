/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcea04; name: FUN_01dcea04
 */


void FUN_01dcea04(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 local_38;
  
  FUN_01dc02fc(&local_40);
  FUN_00feea48(local_40,*param_3);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_01084328(&local_50,param_1 + 0x130);
  FUN_01dcec1c(&local_50,s_F096103E573C2EE62_04541433,param_2,&local_40);
  puVar7 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50 + 3);
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
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
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
  pcVar9 = *(code **)(param_1 + 0x1828);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1830) = 0;
    *(undefined8 *)(param_1 + 0x1838) = 0;
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined8 *)(param_1 + 0x1828) = 0;
    (*pcVar9)(param_1 + 0x1840);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x1840);
    uVar10 = param_4[3];
    *(undefined8 *)(param_1 + 0x1828) = param_4[1];
    *(undefined8 *)(param_1 + 0x1838) = uVar10;
    uVar10 = *param_4;
    *(undefined8 *)(param_1 + 0x1830) = param_4[2];
    *(undefined8 *)(param_1 + 0x1820) = uVar10;
  }
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 5;
    do {
      lVar11 = *plVar1;
      iVar8 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


