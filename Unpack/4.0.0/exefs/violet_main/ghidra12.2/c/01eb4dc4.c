/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb4dc4; name: FUN_01eb4dc4
 */


void FUN_01eb4dc4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  undefined8 local_28;
  
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00d8e6c4(&local_50);
  FUN_019c79f8(auStack_40,&local_50);
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_68 = (undefined8 *)*puVar5;
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_01eb4e50;
  }
  uVar8 = FUN_019c7a40(auStack_40);
  if (((uVar8 & 1) != 0) && (cVar6 = FUN_019c7a20(auStack_40), cVar6 == '\a')) {
    FUN_01a47280(param_1 + 0x38);
    FUN_015c486c(&local_68);
    FUN_00d8e6c4(param_1 + 0x38,&local_68);
    FUN_01c45238(param_1 + 0x48,local_58);
    FUN_00d8e444(&local_68);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_0178f674(param_1 + 0x50,&local_68);
    puVar5 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *puVar5;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) goto LAB_01eb4e50;
    }
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_0178f674(param_1 + 0x60,&local_68);
    puVar5 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *puVar5;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) {
LAB_01eb4e50:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  FUN_00d8e444(auStack_40);
  return;
}


