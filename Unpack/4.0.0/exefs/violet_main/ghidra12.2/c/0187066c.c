/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0187066c; name: FUN_0187066c
 */


void FUN_0187066c(long param_1,byte param_2,uint param_3,uint param_4,byte param_5)

{
  bool bVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  bVar1 = 3 < *(int *)(param_1 + 0x284) - 1U;
  uVar9 = FUN_01870d18(&local_58,param_1 + 0xd8);
  FUN_01870b64(uVar9,&local_58,param_3 & 1);
  puVar7 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58 + 3);
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
      piVar3 = (int *)((long)local_58 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01870830;
  }
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  uVar9 = FUN_01870d18(&local_68,param_1 + 0xa8);
  FUN_01870b64(uVar9,&local_68,bVar1 & param_2);
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_68 + 3);
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
      piVar3 = (int *)((long)local_68 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01870830;
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uVar9 = FUN_01870d18(&local_78,param_1 + 0xf8);
  FUN_01870b64(uVar9,&local_78,bVar1 & param_5);
  puVar7 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar1) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar1) {
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01870830;
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uVar9 = FUN_01870d18(&local_88,param_1 + 0xb8);
  FUN_01870b64(uVar9,&local_88,param_4 & 1);
  puVar7 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar1) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar1) {
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01870830;
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uVar9 = FUN_01870d18(&local_98,param_1 + 200);
  FUN_01870b64(uVar9,&local_98,param_4 & 1);
  puVar7 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_98 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar1) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar1) {
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
LAB_01870830:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


