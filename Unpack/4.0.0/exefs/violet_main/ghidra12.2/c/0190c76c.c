/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190c76c; name: FUN_0190c76c
 */


undefined8
FUN_0190c76c(long param_1,int param_2,long *param_3,ulong *param_4,long *param_5,uint param_6)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 *local_58 [3];
  ulong *local_28;
  
  if (param_2 - 0x1bU < 2) {
    return 0;
  }
  uVar8 = *param_4;
  for (plVar12 = *(long **)(param_1 + 0x658); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    if ((ulong)plVar12[4] <= uVar8) {
      if (uVar8 <= (ulong)plVar12[4]) {
        return 0;
      }
      plVar12 = plVar12 + 1;
    }
  }
  for (plVar12 = *(long **)(param_1 + 0x620); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    if ((ulong)plVar12[4] <= uVar8) {
      if (uVar8 <= (ulong)plVar12[4]) {
        return 0;
      }
      plVar12 = plVar12 + 1;
    }
  }
  if (*param_3 == 0) {
    return 0;
  }
  FUN_010b6530(&local_60,*param_3,param_4,param_1 + (long)param_2 * 8 + 0x538,param_6 & 1,1);
  lVar11 = *param_5;
  local_60[0x1d] = param_5[1];
  local_60[0x1c] = lVar11;
  if (*(char *)((long)local_60 + 0xf4) == '\0') {
    *(undefined1 *)((long)local_60 + 0xf4) = 1;
    (**(code **)(*local_60 + 0x78))(local_60);
  }
  plVar6 = local_60;
  plVar14 = local_60 + 5;
  (**(code **)(*local_60 + 0x18))(local_58,local_60);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  plVar12 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar14;
  }
  if ((long *)local_58[0][2] == plVar12) {
    FUN_00cbc6dc(&local_70,local_58);
  }
  puVar13 = local_58[0];
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
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
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = (ulong *)*puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_0190c9d0;
  }
  puVar13 = (undefined8 *)(param_1 + 0x620);
  puVar9 = (undefined8 *)*puVar13;
  if (puVar9 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)(param_1 + 0x620);
    do {
      if (*param_4 < (ulong)puVar9[4]) {
        puVar13 = puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_0190c898;
        puVar10 = (undefined8 *)*puVar9;
      }
      else {
        if (*param_4 <= (ulong)puVar9[4]) goto LAB_0190c984;
        puVar13 = puVar9 + 1;
        puVar10 = (undefined8 *)*puVar13;
        if ((undefined8 *)*puVar13 == (undefined8 *)0x0) goto LAB_0190c984;
      }
      puVar9 = puVar10;
    } while( true );
  }
  puVar9 = puVar13;
LAB_0190c898:
  puVar10 = (undefined8 *)*puVar13;
  local_28 = param_4;
  if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
    plVar12 = (long *)(param_1 + 0x618);
    FUN_015d77b4(local_58,plVar12,&local_28);
    *local_58[0] = 0;
    local_58[0][1] = 0;
    local_58[0][2] = puVar9;
    *puVar13 = local_58[0];
    puVar9 = local_58[0];
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      puVar9 = (undefined8 *)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x620),puVar9);
    *(long *)(param_1 + 0x648) = *(long *)(param_1 + 0x648) + 1;
    puVar10 = local_58[0];
  }
  FUN_00ca1ea4(puVar10 + 8,&local_70);
  puVar13 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
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
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_58[0] = (undefined8 *)*puVar13;
        FUN_00c44438(lVar11 + 0x8040,local_58);
      }
    }
    else if (sVar3 == 0) {
LAB_0190c9d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  (**(code **)(**(long **)(param_1 + 0x610) + 0x70))(*(long **)(param_1 + 0x610),0);
  if (local_60 != (long *)0x0) {
    lVar11 = local_60[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return 1;
LAB_0190c984:
  goto LAB_0190c898;
}


