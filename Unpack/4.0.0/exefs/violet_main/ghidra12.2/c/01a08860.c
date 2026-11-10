/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a08860; name: FUN_01a08860
 */


void FUN_01a08860(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long local_80 [3];
  undefined1 local_68;
  long local_60 [3];
  undefined1 local_48;
  undefined2 local_40 [4];
  undefined8 local_38;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar10 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar10;
  if (lVar10 != 0) {
    FUN_01793e80(lVar10,param_1 + 0x38);
  }
  puVar5 = PTR_DAT_047d6c98;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  puVar7 = PTR_DAT_047d6ca8;
  puVar6 = PTR_DAT_047d6ca0;
  lVar10 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar10;
  if (lVar10 != 0) {
    local_40[0] = 0x29;
    local_60[2] = 0;
    if (param_1 != 0) {
      local_60[2] = param_1 + 0x28;
    }
    local_60[0] = 0;
    local_60[1] = 0;
    local_48 = 1;
    FUN_0178e4dc(&local_38,lVar10,local_40,local_60);
    plVar11 = *(long **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar8 = local_38;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    if (local_60[0] != 0) {
      psVar1 = (short *)(local_60[0] + 0x18);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        FUN_0116e168();
      }
      else if (sVar2 == 0) goto LAB_01a089cc;
    }
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar10 = *(long *)puVar6;
  *(long *)puVar7 = lVar10;
  if (lVar10 != 0) {
    local_80[2] = 0;
    if (param_1 != 0) {
      local_80[2] = param_1 + 0x30;
    }
    local_80[0] = 0;
    local_80[1] = 0;
    local_68 = 1;
    FUN_01667c7c(lVar10,local_80);
    if (local_80[0] != 0) {
      psVar1 = (short *)(local_80[0] + 0x18);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        FUN_0116e168();
      }
      else if (sVar2 == 0) {
LAB_01a089cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
  return;
}


