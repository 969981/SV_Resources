/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a08e2c; name: FUN_01a08e2c
 */


void FUN_01a08e2c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 local_70;
  undefined2 local_68 [4];
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  FUN_01a091a4();
  puVar6 = PTR_DAT_047d6c98;
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  puVar8 = PTR_DAT_047d6ca8;
  puVar7 = PTR_DAT_047d6ca0;
  lVar12 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar12;
  if (lVar12 != 0) {
    local_48 = 0;
    if (param_1 != 0) {
      local_48 = param_1 + 0x30;
    }
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_40 = 1;
    FUN_01667c7c(lVar12,&local_58);
    puVar9 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
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
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *puVar9;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_01a08f60;
    }
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar12 = *(long *)puVar7;
  *(long *)puVar8 = lVar12;
  if (lVar12 != 0) {
    local_68[0] = 0x23;
    local_78 = 0;
    if (param_1 != 0) {
      local_78 = param_1 + 0x28;
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_70 = 1;
    FUN_0178e4dc(&local_60,lVar12,local_68,&local_88);
    plVar13 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[6];
      psVar1 = (short *)(lVar12 + 0x1a);
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
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar10 = local_60;
    puVar9 = local_88;
    local_60 = 0;
    *(undefined8 *)(param_1 + 0x40) = uVar10;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
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
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *puVar9;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
LAB_01a08f60:
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


