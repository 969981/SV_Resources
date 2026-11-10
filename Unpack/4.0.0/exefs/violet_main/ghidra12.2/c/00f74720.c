/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f74720; name: FUN_00f74720
 */


void FUN_00f74720(undefined8 *param_1,byte *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  pcVar9 = (code *)*param_1;
  if ((1 < *param_2) || (puVar8 = *(undefined8 **)(param_2 + 8), puVar8 == (undefined8 *)0x0)) {
    if ((DAT_048316c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_048316c0);
      puVar8 = &DAT_04831690;
      if (iVar6 != 0) {
        DAT_048316b0 = 0;
        DAT_048316b8 = 0;
        DAT_048316a0 = 0;
        DAT_048316a8 = 0;
        DAT_04831690 = 0;
        DAT_04831698 = 0;
        FUN_00100190(&LAB_00a0eef4,&DAT_04831690,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048316c0);
      }
    }
    else {
      puVar8 = &DAT_04831690;
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_00d0a71c(&local_90,puVar8);
  local_68 = puVar8[5];
  local_78 = puVar8[3];
  local_60 = (undefined8 *)0x0;
  local_80 = puVar8[2];
  local_70 = puVar8[4];
  local_58 = 0;
  FUN_00d0a34c(&local_60,&local_90);
  local_50 = local_80;
  uStack_48 = local_78;
  local_40 = local_70;
  uStack_38 = local_68;
  (*pcVar9)(&local_60);
  puVar8 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
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
      piVar2 = (int *)((long)local_60 + 0x1c);
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
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_28 = *puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_00f74804;
  }
  puVar8 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
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
      piVar2 = (int *)((long)local_90 + 0x1c);
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
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_60 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_60);
      }
    }
    else if (sVar3 == 0) {
LAB_00f74804:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


