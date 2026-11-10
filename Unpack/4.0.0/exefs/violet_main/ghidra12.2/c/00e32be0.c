/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e32be0; name: FUN_00e32be0
 */


void FUN_00e32be0(undefined8 param_1,undefined8 param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *local_b0 [2];
  long local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    (**(code **)(**(long **)(param_3 + 0x10) + 0xb0))(local_b0);
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    local_a0 = param_3;
    FUN_00c43ef0(&local_98,local_b0);
    puVar7 = (undefined8 *)(**(code **)(**(long **)(param_3 + 0x10) + 0x40))();
    puVar8 = (undefined8 *)(**(code **)(**(long **)(param_3 + 0x10) + 0x48))();
    uVar13 = *puVar8;
    local_88 = local_a0;
    local_80 = (long *)0x0;
    uStack_78 = 0;
    FUN_00c43ef0(&local_80,&local_98);
    local_70 = *puVar7;
    local_68 = puVar7[1];
    local_60 = puVar7[2];
    local_58 = (long *)puVar7[3];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    puVar7 = local_98;
    local_50 = uVar13;
    if (local_98 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_98 + 3);
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
        piVar2 = (int *)((long)local_98 + 0x1c);
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
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_48 = *puVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_00e32e08;
    }
    if (local_b0[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_b0[0] + 3);
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
        piVar2 = (int *)((long)local_b0[0] + 0x1c);
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
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_48 = *local_b0[0];
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_00e32e08;
    }
    pcVar10 = *(code **)(*(long *)(param_3 + 0x18) + 0x80);
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(*(long *)(param_3 + 0x18) + 0xa0,&local_88);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar9 = local_80;
    if (local_80 != (long *)0x0) {
      plVar11 = local_80 + 3;
      do {
        sVar3 = (short)*plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(short *)plVar11 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
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
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_a0 = *plVar9;
          FUN_00c44438(lVar12 + 0x8040,&local_a0);
        }
      }
      else if (sVar3 == 0) {
LAB_00e32e08:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  plVar11 = *(long **)(param_3 + 0x28);
  plVar9 = *(long **)(param_3 + 0x30);
  if (plVar11 == plVar9) {
    if (plVar11 == (long *)0x0) goto LAB_00e32d84;
    (**(code **)(*plVar11 + 0xf0))(param_2,param_1,plVar11);
    plVar9 = *(long **)(param_3 + 0x30);
    uVar13 = 0;
    lVar12 = *plVar9;
  }
  else {
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0xe8))(plVar11);
      plVar9 = *(long **)(param_3 + 0x30);
    }
    if (plVar9 == (long *)0x0) goto LAB_00e32d84;
    if (0.0 <= (float)param_2) {
      (**(code **)(*plVar9 + 0xd8))(param_2,param_1,plVar9,1);
      plVar9 = *(long **)(param_3 + 0x30);
    }
    lVar12 = *plVar9;
    uVar13 = 1;
  }
  (**(code **)(lVar12 + 0xe0))(param_1,plVar9,uVar13);
LAB_00e32d84:
  *(long *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  return;
}


