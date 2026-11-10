/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f79cd4; name: FUN_01f79cd4
 */


void FUN_01f79cd4(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 local_9b8 [24];
  undefined1 local_9a0;
  undefined1 auStack_99c [2068];
  undefined1 auStack_188 [256];
  byte local_88;
  undefined7 uStack_87;
  long local_80;
  void *local_78;
  long *plStack_70;
  undefined1 auStack_68 [8];
  
  *param_1 = (long)(PTR_DAT_047cfbf8 + 0x10);
  FUN_01cfa5b0(param_1 + 1,param_2 + 8);
  FUN_01cfa5b0(param_1 + 5,param_2 + 0x28);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  FUN_01cfa5b0(param_1 + 10,param_2 + 0x50);
  FUN_01cfa5b0(param_1 + 0xe,param_2 + 0x70);
  FUN_01cfa5b0(param_1 + 0x12,param_2 + 0x90);
  memcpy(param_1 + 0x16,(void *)(param_2 + 0xb0),100);
  plVar13 = param_1 + 0x23;
  param_1[0x45] = 0;
  memset(plVar13,0,0x10a);
  FUN_01cfa5b0(&local_88,param_1 + 0x12);
  if ((local_88 & 1) != 0) {
    if (local_80 == 0x930) {
      memcpy(local_9b8,local_78,0x930);
      puVar5 = PTR_DAT_047d8cc8;
      if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8cc8);
      }
      puVar7 = PTR_DAT_047d8cd8;
      puVar6 = PTR_DAT_047d8cd0;
      lVar12 = *(long *)PTR_DAT_047d8cd0;
      *(long *)PTR_DAT_047d8cd8 = lVar12;
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + 0x50);
      }
      lVar12 = FUN_0167513c(auStack_68,uVar11);
      if (lVar12 != 0) {
        piVar2 = (int *)(lVar12 + 0x28);
        do {
          iVar8 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == -1) goto LAB_01f79f9c;
      }
      plVar9 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 5;
        do {
          lVar10 = *plVar1;
          iVar8 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_01f7a0f0;
      }
      *plVar13 = lVar12;
      if (lVar12 != 0) {
        FUN_018e922c(lVar12,auStack_99c,1);
      }
      memcpy(param_1 + 0x24,auStack_188,0x100);
      *(undefined1 *)(param_1 + 0x44) = local_9a0;
      *(undefined1 *)((long)param_1 + 0x221) = local_9b8[0];
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8cc8);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      if (lVar12 == 0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = *(long **)(lVar12 + 0x50);
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                   ,0x40);
      }
      FUN_015e9954(lVar10,(ulong)local_9b8 | 2);
      *(undefined4 *)(lVar10 + 0x18) = 0x80058;
      *(long **)(lVar10 + 8) = plVar13;
      *(long *)(lVar10 + 0x10) = lVar10;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      piVar2 = (int *)(lVar10 + 0x28);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == -1) {
LAB_01f79f9c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar13 = (long *)param_1[0x45];
      param_1[0x45] = 0;
      if (plVar13 != (long *)0x0) {
        plVar9 = plVar13 + 5;
        do {
          lVar12 = *plVar9;
          iVar8 = (int)lVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
LAB_01f7a0f0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      param_1[0x45] = lVar10;
      if ((local_88 & 1) == 0) {
        return;
      }
    }
    (**(code **)(*plStack_70 + 0x18))
              (plStack_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
  }
  return;
}


