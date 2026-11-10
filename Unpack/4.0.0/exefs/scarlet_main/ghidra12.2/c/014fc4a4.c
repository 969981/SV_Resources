/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014fc4a4; name: FUN_014fc4a4
 */


void FUN_014fc4a4(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  local_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  FUN_00c43ef0(&local_30,param_2 + 0x30);
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00c96b7c(&local_40,&local_30);
  puVar8 = local_30;
  if (local_30 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_30 + 3);
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
      piVar2 = (int *)((long)local_30 + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar8;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) goto LAB_014fc57c;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_40 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)local_40[1];
    if (puVar8 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)PTR_DAT_047d8640;
      if (((*PTR_DAT_047d8638 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8638), puVar10 = (undefined8 *)PTR_DAT_047d8640,
         iVar6 != 0)) {
        uVar7 = FUN_01dac5b0();
        *(undefined8 *)PTR_DAT_047d8640 = uVar7;
        __cxa_guard_release(PTR_DAT_047d8638);
        puVar10 = (undefined8 *)PTR_DAT_047d8640;
      }
      do {
        if (puVar8 == puVar10) {
          FUN_014fc740(param_1,&local_40);
          break;
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
    }
    puVar8 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
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
        piVar2 = (int *)((long)local_40 + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_30 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar9 + 0x8040,&local_30);
        }
      }
      else if (sVar3 == 0) {
LAB_014fc57c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


