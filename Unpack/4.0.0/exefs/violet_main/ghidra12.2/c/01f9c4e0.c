/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9c4e0; name: FUN_01f9c4e0
 */


void FUN_01f9c4e0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  undefined1 auStack_98 [24];
  long *local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  plVar1 = (long *)(param_2 + 0x98);
  FUN_015129b4(plVar1,*(undefined1 *)(param_1 + 0x2c));
  local_80 = (long *)&DAT_fbec41851566601b;
  local_78 = "values";
  local_70 = 6;
  local_68 = (long *)0x0;
  piVar5 = (int *)FUN_00efa07c(param_2,&local_80);
  if (piVar5 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *piVar5;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (iVar10 != 0) {
    iVar8 = 0;
    do {
      local_68 = (long *)0x0;
      local_80 = (long *)&DAT_fbec41851566601b;
      local_78 = "values";
      local_70 = 6;
      FUN_00e90ee0(auStack_98,param_2,&local_80,iVar8);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      plVar9 = *(long **)(param_1 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x130,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*plVar9 + 0xe8))(plVar9);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                   ,0x40);
      }
      FUN_0125d1c8(plVar7,auStack_98);
      plVar7[1] = (long)plVar9;
      plVar7[2] = (long)plVar7;
      *(undefined4 *)(plVar7 + 3) = 0x80130;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      plVar9 = plVar7 + 5;
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_80 = plVar7;
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      if ((long)*(short *)((long)plVar7 + 0x36) != 0) {
        FUN_01f9c80c(*plVar1 + (long)*(short *)((long)plVar7 + 0x36) * 0x38,&local_80);
      }
      if ((long)*(short *)((long)plVar7 + 0x3a) != 0) {
        FUN_01f9c80c(*plVar1 + (long)*(short *)((long)plVar7 + 0x3a) * 0x38,&local_80);
      }
      if ((long)*(short *)((long)plVar7 + 0x3e) != 0) {
        FUN_01f9c80c(*plVar1 + (long)*(short *)((long)plVar7 + 0x3e) * 0x38,&local_80);
      }
      if ((long)*(short *)((long)plVar7 + 0x42) != 0) {
        FUN_01f9c80c(*plVar1 + (long)*(short *)((long)plVar7 + 0x42) * 0x38,&local_80);
      }
      plVar9 = plVar7 + 5;
      do {
        lVar6 = *plVar9;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar10);
  }
  return;
}


