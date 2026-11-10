/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a093e0; name: FUN_01a093e0
 */


void FUN_01a093e0(long param_1)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 local_48;
  undefined2 local_40 [4];
  undefined8 local_38;
  undefined8 local_18;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar12 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar12;
  if (lVar12 != 0) {
    local_40[0] = 0x21;
    lVar3 = 0;
    if (param_1 != 0) {
      lVar3 = param_1 + 0x28;
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    local_48 = 1;
    local_50 = lVar3;
    FUN_0178e4dc(&local_38,lVar12,local_40,&local_60);
    plVar10 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[6];
      psVar1 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_01a09594;
    }
    uVar8 = local_38;
    puVar7 = local_60;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0x58) = uVar8;
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
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_18 = *puVar7;
          FUN_00c44438(lVar11 + 0x8040,&local_18);
        }
      }
      else if (sVar4 == 0) goto LAB_01a09520;
    }
    local_40[0] = 0x121;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    local_68 = 1;
    local_70 = lVar3;
    FUN_01a09764(&local_38,lVar12,local_40,&local_80);
    plVar10 = *(long **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[6];
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
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_01a09594:
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
    *(undefined8 *)(param_1 + 0x60) = uVar8;
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
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_18 = *puVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_18);
        }
      }
      else if (sVar4 == 0) {
LAB_01a09520:
        local_38 = 0;
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


