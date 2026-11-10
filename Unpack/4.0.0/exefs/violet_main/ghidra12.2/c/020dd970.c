/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020dd970; name: FUN_020dd970
 */


void FUN_020dd970(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 local_60 [16];
  undefined8 *local_50;
  long lStack_48;
  long *local_40;
  long *local_38;
  
  if (param_2 == 0) {
    return;
  }
  plVar8 = (long *)FUN_00d1e658(param_2);
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (*plVar8 != 0) {
    plVar3 = (long *)(*plVar8 + 0x30);
  }
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(param_1 + 0x180) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x180) + 0x30);
  }
  if (*plVar3 != *plVar8) {
    return;
  }
  FUN_00e28240(&local_50,param_2);
  if (local_50 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_50 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_50 + 0x1a);
    sVar10 = *(short *)((long)local_50 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_020dda30;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_020dda30:
        bVar6 = false;
      }
      if (bVar6) {
        if (local_50[2] == 0) goto LAB_020ddbb0;
        plVar3 = (long *)*local_40;
        goto joined_r0x020dda60;
      }
      sVar10 = sVar4;
    } while (sVar4 != 0);
    uVar12 = 0;
    bVar6 = false;
    goto LAB_020ddae4;
  }
LAB_020ddbb0:
  uVar12 = 0xffffffff;
  puVar11 = local_50;
  goto LAB_020ddaf4;
joined_r0x020dda60:
  do {
    if (plVar3 == (long *)local_40[1]) goto LAB_020ddaa8;
    lVar9 = *plVar3;
    plVar8 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar9 + 8) != 0) {
      plVar8 = (long *)(*(long *)(lVar9 + 8) + 0x30);
    }
    plVar3 = plVar3 + 1;
  } while (*plVar8 != 0x62cccf6698c24898);
  if ((*(char *)(lVar9 + 0x10) == '\x01') && (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0))
  {
    uVar12 = (uint)**(undefined8 **)(lVar9 + 0x18);
    bVar6 = true;
  }
  else {
LAB_020ddaa8:
    bVar6 = false;
    uVar12 = 0;
  }
  (**(code **)(*(long *)(local_50[2] + -8) + 0x18))();
LAB_020ddae4:
  if (!bVar6) {
    uVar12 = 0xffffffff;
  }
  puVar11 = local_50;
  if (local_50 == (undefined8 *)0x0) goto LAB_020ddb14;
LAB_020ddaf4:
  psVar1 = (short *)(puVar11 + 3);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    piVar2 = (int *)((long)puVar11 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar9 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar9;
      local_60._0_8_ = *puVar11;
      FUN_00c44438(lVar9 + 0x8040,local_60);
    }
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_020ddb14:
  if (-1 < (int)uVar12) {
    if ((ulong)uVar12 < (ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3)) {
      plVar8 = *(long **)(*(long *)(param_1 + 0x188) + (ulong)uVar12 * 8);
      plVar3 = (long *)PTR_DAT_047d8b70;
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 6;
      }
      local_50 = (undefined8 *)*plVar3;
      plVar3 = (long *)PTR_PTR_047d4508;
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 7;
      }
      lStack_48 = *plVar3;
      if (plVar8 == (long *)0x0) {
        local_40 = (long *)0x0;
      }
      else {
        local_40 = (long *)plVar8[8];
      }
      local_38 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      local_38 = plVar8;
      local_60 = FUN_00cbc2e4(param_2,param_2 + 0x90);
      FUN_00f060a8(param_1,&local_50,param_2,local_60);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
  }
  return;
}


