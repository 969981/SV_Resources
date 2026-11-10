/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb3b68; name: FUN_01eb3b68
 */


void FUN_01eb3b68(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  *param_1 = &DAT_045544a0;
  param_1[4] = &PTR_LAB_045544e8;
  param_1[5] = &PTR_LAB_04554508;
  param_1[6] = &PTR_LAB_04554520;
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar9 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar9;
  if (lVar9 != 0) {
    local_48 = param_1 + 6;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_40 = 1;
    FUN_01eb3f18(lVar9,&local_58);
    puVar11 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar11;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_01eb3ca4;
    }
  }
  FUN_01eb4044(param_1 + 0x16f);
  lVar9 = param_1[0xf];
  if (lVar9 != 0) {
    lVar4 = param_1[0x11];
    plVar5 = (long *)param_1[0x12];
    param_1[0x10] = lVar9;
    uVar10 = FUN_00c4e564(plVar5);
    if ((uVar10 & 1) == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar4 - lVar9,4);
    }
    else {
      FUN_00c48fe8(plVar5,lVar9,lVar4 - lVar9,4);
    }
  }
  puVar11 = (undefined8 *)param_1[0xc];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) goto LAB_01eb3ca4;
  }
  puVar11 = (undefined8 *)param_1[10];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) {
LAB_01eb3ca4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00d8e444(param_1 + 7);
  return;
}


