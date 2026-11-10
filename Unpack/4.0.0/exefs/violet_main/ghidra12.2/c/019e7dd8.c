/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e7dd8; name: FUN_019e7dd8
 */


undefined8 FUN_019e7dd8(long param_1,undefined8 *param_2,ulong param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  plVar7 = (long *)(**(code **)(**(long **)(param_1 + 0x2b8) + 0x48))();
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,param_1 + 0x300);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  local_68 = plVar7;
  FUN_00c43ef0(&local_60,&local_50);
  puVar9 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
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
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38 = *puVar9;
        FUN_00c44438(lVar8 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_019e7fbc;
  }
  if (((local_68 == (long *)0x0) || (local_60 == (undefined8 *)0x0)) ||
     (*(short *)((long)local_60 + 0x1a) == 0)) {
    if ((*PTR_DAT_047d3e28 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28);
      puVar9 = (undefined8 *)PTR_DAT_047d3e30;
      if (iVar6 != 0) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
        goto LAB_019e7e78;
      }
    }
    puVar9 = (undefined8 *)PTR_DAT_047d3e30;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)(*local_68 + 0x10))();
  }
LAB_019e7e78:
  uVar10 = *puVar9;
  if (local_68 == (long *)0x0) {
    lVar8 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if ((local_60 != (undefined8 *)0x0) && (*(short *)((long)local_60 + 0x1a) != 0)) {
      uVar11 = (**(code **)(*local_68 + 0x80))();
    }
    if (((local_68 == (long *)0x0) || (local_60 == (undefined8 *)0x0)) ||
       (*(short *)((long)local_60 + 0x1a) == 0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (long *)(**(code **)(*local_68 + 0x38))();
      lVar8 = 0;
      if (plVar7 != (long *)0x0) {
        do {
          lVar8 = (**(code **)(*plVar7 + 0x60))(plVar7);
          if (lVar8 != 0) goto LAB_019e7f20;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7);
        } while (plVar7 != (long *)0x0);
        lVar8 = 0;
      }
    }
  }
LAB_019e7f20:
  if (((param_3 < 8) || (*param_2 = uVar10, param_3 < 0xc)) ||
     (*(undefined4 *)(param_2 + 1) = uVar11, param_3 == 0xc)) {
LAB_019e8024:
    uVar10 = 0;
  }
  else {
    *(bool *)((long)param_2 + 0xc) = lVar8 != 0;
    if (lVar8 == 0) {
      uVar10 = 0xd;
    }
    else {
      puVar9 = (undefined8 *)FUN_019e8268(&local_68);
      uVar10 = *puVar9;
      uVar11 = FUN_019e81bc(&local_68);
      if ((param_3 < 0x15) || (*(undefined8 *)((long)param_2 + 0xd) = uVar10, param_3 < 0x19))
      goto LAB_019e8024;
      *(undefined4 *)((long)param_2 + 0x15) = uVar11;
      uVar10 = 0x19;
    }
  }
  puVar9 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
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
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_50 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar8 + 0x8040,&local_50);
      }
    }
    else if (sVar3 == 0) {
LAB_019e7fbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar10;
}


