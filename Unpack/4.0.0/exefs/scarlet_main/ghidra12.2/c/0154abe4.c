/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154abe4; name: FUN_0154abe4
 */


void FUN_0154abe4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 local_48;
  
  if (**(char **)(param_1 + 0x120) != '\0') {
    uVar10 = FUN_0154af4c();
    local_68 = *(undefined8 *)(param_1 + 0x118);
    local_60 = *(undefined8 *)(param_1 + 0x120);
    uStack_58 = *(undefined8 *)(param_1 + 0x128);
    plVar4 = *(long **)(param_1 + 0x130);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    local_80 = (long *)0x0;
    local_70 = &local_80;
    local_50 = plVar4;
    if (plVar4 != (long *)0x0) {
      local_70 = &local_80;
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    FUN_015169d8(uVar10,&local_70,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    plVar11 = local_80;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (plVar11 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar11 + 0x18))(&local_70,plVar11);
    local_80 = (long *)0x0;
    uStack_78 = 0;
    if ((long *)local_70[2] == plVar11 + 5) {
      FUN_01516dec(&local_80,&local_70);
    }
    puVar8 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
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
          local_48 = *puVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_0154ad78;
    }
    FUN_01517110(param_1 + 0x108,&local_80);
    plVar4 = local_80;
    if (local_80 != (long *)0x0) {
      plVar11 = local_80 + 3;
      do {
        sVar3 = (short)*plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(short *)plVar11 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
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
          local_70 = (undefined8 *)*plVar4;
          FUN_00c44438(lVar12 + 0x8040,&local_70);
        }
      }
      else if (sVar3 == 0) {
LAB_0154ad78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = PTR_DAT_047d3e30;
    uVar10 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)PTR_DAT_047d3e30;
    *(undefined8 *)(param_1 + 0x120) = uVar10;
    plVar4 = *(long **)(puVar7 + 0x18);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(puVar7 + 0x10);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar11 = *(long **)(param_1 + 0x130);
    *(long **)(param_1 + 0x130) = plVar4;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  return;
}


