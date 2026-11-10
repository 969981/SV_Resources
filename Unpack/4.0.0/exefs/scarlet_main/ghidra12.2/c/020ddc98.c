/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ddc98; name: FUN_020ddc98
 */


void FUN_020ddc98(long param_1,long param_2)

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
  undefined8 *local_58;
  long lStack_50;
  long *local_48;
  long *local_40;
  undefined8 local_38;
  
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
  FUN_00e28240(&local_58,param_2);
  if (local_58 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_58 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_58 + 0x1a);
    sVar10 = *(short *)((long)local_58 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_020ddd58;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_020ddd58:
        bVar6 = false;
      }
      if (bVar6) {
        if (local_58[2] == 0) goto LAB_020ddeb0;
        plVar3 = (long *)*local_48;
        goto joined_r0x020ddd88;
      }
      sVar10 = sVar4;
    } while (sVar4 != 0);
    uVar12 = 0;
    bVar6 = false;
    goto LAB_020dde0c;
  }
LAB_020ddeb0:
  uVar12 = 0xffffffff;
  puVar11 = local_58;
  goto LAB_020dde1c;
joined_r0x020ddd88:
  do {
    if (plVar3 == (long *)local_48[1]) goto LAB_020dddd0;
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
LAB_020dddd0:
    bVar6 = false;
    uVar12 = 0;
  }
  (**(code **)(*(long *)(local_58[2] + -8) + 0x18))();
LAB_020dde0c:
  if (!bVar6) {
    uVar12 = 0xffffffff;
  }
  puVar11 = local_58;
  if (local_58 == (undefined8 *)0x0) goto LAB_020dde3c;
LAB_020dde1c:
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
      local_38 = *puVar11;
      FUN_00c44438(lVar9 + 0x8040,&local_38);
    }
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_020dde3c:
  if (-1 < (int)uVar12) {
    if ((ulong)uVar12 < (ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3)) {
      plVar8 = *(long **)(*(long *)(param_1 + 0x188) + (ulong)uVar12 * 8);
      plVar3 = (long *)PTR_DAT_047d8b70;
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 6;
      }
      local_58 = (undefined8 *)*plVar3;
      plVar3 = (long *)PTR_PTR_047d4508;
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 7;
      }
      lStack_50 = *plVar3;
      if (plVar8 == (long *)0x0) {
        local_48 = (long *)0x0;
      }
      else {
        local_48 = (long *)plVar8[8];
      }
      local_40 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        local_40 = plVar8;
        FUN_00f0630c(param_1,&local_58,param_2);
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        local_40 = plVar8;
        FUN_00f0630c(param_1,&local_58,param_2);
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
  }
  return;
}


