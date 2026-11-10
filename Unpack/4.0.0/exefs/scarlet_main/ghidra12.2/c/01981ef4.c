/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01981ef4; name: FUN_01981ef4
 */


void FUN_01981ef4(long *param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [5];
  undefined8 local_18;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if ((*param_1 != 0) && (puVar8 = *(undefined8 **)(*param_1 + 8), puVar8 != (undefined8 *)0x0)) {
    puVar10 = (undefined8 *)PTR_DAT_047d6c50;
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c48), puVar10 = (undefined8 *)PTR_DAT_047d6c50,
       iVar6 != 0)) {
      uVar7 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar7;
      __cxa_guard_release(PTR_DAT_047d6c48);
      puVar10 = (undefined8 *)PTR_DAT_047d6c50;
    }
    do {
      if (puVar8 == puVar10) {
        FUN_00d9f120(&local_68,param_1);
        break;
      }
      puVar8 = (undefined8 *)*puVar8;
    } while (puVar8 != (undefined8 *)0x0);
  }
  FUN_0198219c(local_58,&local_68,param_1 + 2);
  FUN_01982230(local_58,param_1[6],param_1[6],param_2,param_3);
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
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
      piVar2 = (int *)((long)local_58[0] + 0x1c);
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
        local_18 = *local_58[0];
        FUN_00c44438(lVar9 + 0x8040,&local_18);
      }
    }
    else if (sVar3 == 0) goto LAB_01981fe4;
  }
  puVar8 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
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
      piVar2 = (int *)((long)local_68 + 0x1c);
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
        local_18 = *puVar8;
        FUN_00c44438(lVar9 + 0x8040,&local_18);
      }
    }
    else if (sVar3 == 0) {
LAB_01981fe4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


