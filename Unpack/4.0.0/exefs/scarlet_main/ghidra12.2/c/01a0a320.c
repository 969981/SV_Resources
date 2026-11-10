/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a0a320; name: FUN_01a0a320
 */


void FUN_01a0a320(long param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined8 local_18;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar10 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar10;
  if (lVar10 != 0) {
    FUN_01793e80(lVar10,param_1 + 0x28);
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar10 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar10;
  if (lVar10 != 0) {
    local_40 = *(undefined1 *)(param_1 + 0x41);
    lVar3 = 0;
    if (param_1 != 0) {
      lVar3 = param_1 + 0x30;
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    local_48 = 1;
    local_3f = 0;
    local_50 = lVar3;
    FUN_0178e4dc(&local_38,lVar10,&local_40,&local_60);
    plVar11 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_01a0a520;
    }
    uVar8 = local_38;
    puVar7 = local_60;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_18 = *puVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_18);
        }
      }
      else if (sVar4 == 0) goto LAB_01a0a4ac;
    }
    local_40 = *(undefined1 *)(param_1 + 0x41);
    local_3f = 1;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    local_68 = 1;
    local_70 = lVar3;
    FUN_01a09764(&local_38,lVar10,&local_40,&local_80);
    plVar11 = *(long **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_01a0a520:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar8 = local_38;
    puVar7 = local_80;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_18 = *puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_18);
        }
      }
      else if (sVar4 == 0) {
LAB_01a0a4ac:
        local_38 = 0;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_01a0a72c(param_1);
  }
  return;
}


