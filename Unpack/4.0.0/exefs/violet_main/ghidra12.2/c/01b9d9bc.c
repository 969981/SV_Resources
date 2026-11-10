/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b9d9bc; name: FUN_01b9d9bc
 */


void FUN_01b9d9bc(undefined1 *param_1,undefined8 param_2,double param_3,byte *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_48 [2];
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((((1 < *param_4) ||
       (puVar7 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0))
      && (puVar7 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar7 = (undefined8 *)PTR_DAT_047d5150,
     iVar6 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar7 + 0x38) = 0;
    *(undefined8 *)((long)puVar7 + 0x20) = 0;
    *(undefined8 *)((long)puVar7 + 0x28) = 0;
    *(undefined8 *)((long)puVar7 + 0x10) = 0;
    *(undefined8 *)((long)puVar7 + 0x18) = 0;
    *puVar7 = 0;
    *(undefined8 *)((long)puVar7 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  FUN_01ba043c(local_48,*puVar7,puVar7[2],puVar7[4],puVar7[6],param_2,(float)param_3);
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00ca1a48(&local_38,local_48);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00ca1ea4(param_1 + 8,&local_38);
  puVar7 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38 + 3);
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
      piVar2 = (int *)((long)local_38 + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar7;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_01b9da8c;
  }
  if (local_48[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48[0] + 3);
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
      piVar2 = (int *)((long)local_48[0] + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38 = (undefined8 *)*local_48[0];
        FUN_00c44438(lVar8 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_01b9da8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


